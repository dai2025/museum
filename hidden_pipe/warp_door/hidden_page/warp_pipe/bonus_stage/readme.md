## To use OpenCOBOL on GitHub, follow these steps:

1. Clone the OpenCOBOL repository from GitHub. Use the git command in your terminal to clone the repository:

```
git clone https://github.com/open-cobol/open-cobol.git
```

2. Build OpenCOBOL. In your terminal, navigate to the cloned repository and run the following commands:

```
./configure
make
sudo make install
```

3. Compile and execute COBOL code using OpenCOBOL. In your terminal, run the following commands:

```
cobc -x myprogram.cob
./myprogram
```

## To use OpenCOBOL with GitHub Actions, follow these steps:

1. Create a GitHub Actions workflow file (.yml) in the root of your repository. For example, create a file named cobol.yml.

2. Define a job in the workflow file that installs and uses OpenCOBOL. Here's an example:

```yaml
name: COBOL Build and Test
on: [push, pull_request]
jobs:
  build:
    name: Build and Test
    runs-on: ubuntu-latest
    steps:
    - name: Checkout code
      uses: actions/checkout@v2
    - name: Install OpenCOBOL
      run: |
        sudo apt-get update
        sudo apt-get install -y open-cobol
    - name: Compile and Run COBOL
      run: |
        cobc -x myprogram.cob
        ./myprogram
```

This job will execute when a push or pull_request event occurs. The job uses the ubuntu-latest runner and performs the following steps:

- Checks out the code
- Installs OpenCOBOL
- Compiles and runs the COBOL code
Replace myprogram.cob with the name of your COBOL program.

That's it! Follow these steps to use OpenCOBOL on GitHub or with GitHub Actions.
