# <a href="#" style="pointer-events: none;"> <img src="https://img.shields.io/badge/status-finished-success?color=%2312bab9&style=flat-square"/></a> • 42 libft_learn (tester) <a href="https://github.com/AdaoG0n" style="pointer-events: none;"> <img src="https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/Followbutton.png" width="130" align="right"/></a> 

<a href="#" style="pointer-events: none;">
 <img align="right" src="https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/libft_learn.png" width="400"/>
 </a>

### Description

Libft Tester is an interactive testing tool for the Libft project, a fundamental C library implementation commonly used in 42 school curriculum. This tester provides a user-friendly interface to test each function in the Libft library individually, allowing developers to verify the correctness of their implementations.

### Features

- Interactive command-line interface
- Individual testing for each Libft function
- Colored output for better readability
- Detailed explanations of each function's purpose
- Memory leak detection for relevant functions

### Functions Tested

This tester covers all standard Libft functions, including but not limited to:

- Character classification (`ft_isalpha`, `ft_isdigit`, `ft_isalnum`, etc.)
- String manipulation (`ft_strlen`, `ft_strlcpy`, `ft_strlcat`, etc.)
- Memory operations (`ft_memset`, `ft_bzero`, `ft_memcpy`, etc.)
- String conversion (`ft_atoi`, `ft_itoa`)
- String searching (`ft_strchr`, `ft_strrchr`, `ft_strnstr`)
- Memory allocation (`ft_calloc`, `ft_strdup`)
- List operations (if bonus part is included)

### How to Use

1. Clone this repository to your local machine.
2. Ensure your Libft library is in the same directory or update the include path in the tester.
3. Compile the tester with your Libft:
```sh
gcc -o libft_tester main.c -L. -lft
```
4. Run the tester:
```sh
./libft_tester
```

5. Follow the on-screen prompts to test individual functions.

### Requirements

- GCC compiler
- Libft library

>[!Note]
> You can use your own implementation of Libft. To do this, you have two options:<br/>
> Replace the existing libft folder:<br/>
> - [ ] Simply replace the "libft" folder in the project directory with your own implementation of Libft.<br/>
> - [ ] Make sure your version of Libft contains all the necessary functions and that the function names<br/>
> match those used in the test code.
> <br/>
> Use the Libft that's already in the project:<br/>
> There's already had an implementation of Libft in the project, you can use it directly.<br/>
> <br/>
>Regardless of which option you choose, you'll need to:<br/>
> 1. Ensure that the Makefile (if it exists) is correctly configured to compile Libft along with the test code.<br/>
> 2. Make sure all the necessary Libft functions are implemented and working correctly.<br/>
> <br/>
>This flexibility allows you to test your own Libft implementation or use the one provided with the project,<br/>
> depending on your preference and needs.<br/>

### Contributing

Contributions to improve the tester or add support for additional functions are welcome. <br/>
Please feel free to submit pull requests or open issues for any bugs or suggestions.<br/>

### License

This project is open source and available under the [MIT License](LICENSE). <br/>

### Acknowledgments

- 42 School for the Libft project concept
- All contributors to this tester

![](https://github.com/AdaoG0n/AdaoG0n/blob/main/assests/bar.png)
###### Projeto desenvolvido por: [Adão Gonçalves](https://github.com/AdaoG0n)

![Endpoint Badge](https://img.shields.io/endpoint?url=https%3A%2F%2Fhits.dwyl.com%2FAdaoG0n%2Flibft_learn.json&style=flat-square&labelColor=black&color=blue)

