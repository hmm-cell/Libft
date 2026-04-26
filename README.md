*This project has been created as part of the 42 curriculum by side-oli*

# Libft

## Description
The **Libft** project is the first milestone in the 42 curriculum. Its primary goal is to recreate a subset of the standard C library ($libc$) along with additional utility functions that will serve as the foundation for all future C projects. 

By re-implementing these functions from scratch, this project provides a deep understanding of:
* **Memory Management:** Handling `malloc`, `free`, and memory leaks.
* **Pointer Arithmetic:** Navigating and manipulating strings and memory blocks.
* **Buffer Management:** Implementing logic for data flow and storage.

## Instructions

### Compilation
The project includes a `Makefile` that compiles the source files into a static library named `libft.a`.

* **To compile the mandatory functions:**
    ```bash
    make
    ```
* **To compile the bonus (linked list) functions:**
    ```bash
    make bonus
    ```
* **To clean object files:**
    ```bash
    make clean
    ```
* **To perform a full reset (remove objects and the library):**
    ```bash
    make fclean
    ```
##Resources

###Documentation & References

Unix Programmer's Manual: Use of man pages (e.g., man strlen, man strlcpy) to understand the official behavior and expected return values of standard $libc$ functions.

Technical Mentorship: Consulted with a senior programmer (Dad) to grasp low-level C concepts, particularly the nuances of pointer arithmetic and memory allocation strategies.

Online Documentation: Referenced technical sites like cppreference.com and tutorialspoint.com for syntax confirmation and technical specifications.

###AI Usage Disclosure

As this project was completed independently before the start of the 42 curriculum, AI served as a primary tool for troubleshooting and structural guidance:

Task: Logic Verification & DebuggingDescription: AI was utilized to identify subtle logical errors and edge-case failures in functions with complex boundary requirements, specifically ft_strlcat and the some of the linked list bonus functions.

Task: Norm Compliance Description: AI helped verify that the code structure adhered to the Norm (42's coding standard), specifically checking for variable declaration limits and ensuring functions did not exceed the 25-line limit.

Task: Documentation & Structuring Description: Assisted in the organization of this README.md file to ensure all project requirements were clearly presented.
