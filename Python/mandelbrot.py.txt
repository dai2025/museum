def mandelbrot(x, y, max_iters):
    """
    Function that computes the number of iterations it takes for a point
    in the Julia set to diverge.
    """
    c = x + y*1j
    z = 0 + 0j
    for i in range(max_iters):
        if abs(z) > 2:
            return i
        z = z**2 + c
    return max_iters

def draw_mandelbrot(width, height, zoom=1, x_off=0, y_off=0, max_iters=1000):
    """
    Function that draws the Mandelbrot set.
    """
    # Generate the coordinates of each pixel.
    x_range = np.linspace(-2.5/zoom - x_off, 1/zoom - x_off, width)
    y_range = np.linspace(-1/zoom - y_off, 1/zoom - y_off, height)
    pixels = np.zeros((height, width))

    # Compute the number of iterations it takes for each pixel to diverge.
    for i in range(height):
        for j in range(width):
            x, y = x_range[j], y_range[i]
            pixels[i, j] = mandelbrot(x, y, max_iters)

    # Plot the set.
    plt.imshow(pixels, cmap='hot', extent=(x_range.min(), x_range.max(), y_range.min(), y_range.max()))
    plt.xlabel('Re(z)')
    plt.ylabel('Im(z)')
    plt.show()
    
