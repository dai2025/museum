using Plots

function julia(z, c, max_iters)
    """
    Function that computes the number of iterations it takes for a point
    in the Julia set to diverge.
    """
    for i in 1:max_iters
        if abs(z) > 2
            return i
        end
        z = z^2 + c
    end
    return max_iters
end

function draw_julia(width, height, c, zoom=1, x_off=0, y_off=0, max_iters=1000)
    """
    Function that draws the Julia set.
    """
    # Generate the coordinates of each pixel.
    x_range = LinRange(-2/zoom - x_off, 2/zoom - x_off, width)
    y_range = LinRange(-2/zoom - y_off, 2/zoom - y_off, height)
    pixels = zeros(height, width)

    # Compute the number of iterations it takes for each pixel to diverge.
    for i in 1:height
        for j in 1:width
            x, y = x_range[j], y_range[i]
            z = complex(x, y)
            pixels[i, j] = julia(z, c, max_iters)
        end
    end

    # Plot the set.
    heatmap(x_range, y_range, pixels', c=:inferno, aspect_ratio=:equal, xlims=(minimum(x_range), maximum(x_range)), ylims=(minimum(y_range), maximum(y_range)), xlabel="Re(z)", ylabel="Im(z)")
end
