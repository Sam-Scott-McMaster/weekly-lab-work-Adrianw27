/* A simple program that prints the my student info as well
 * my answers to a short reflection using sleep to make pauses
 * between outputs.
 * 
 * Adrian Winter, September 12, 2024
 */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Full ");
    fflush(stdout);
    sleep(1);
    printf("Name: ");
    fflush(stdout);
    sleep(1);
    printf("Adrian ");
    fflush(stdout);
    sleep(1);
    printf("Winter \n");
    sleep(1);
    printf("Student ");
    fflush(stdout);
    sleep(1);
    printf("Number: ");
    fflush(stdout);
    sleep(1);
    printf("400495595 \n");
    sleep(1);
    printf("Course ");
    fflush(stdout);
    sleep(1);
    printf("Name: ");
    fflush(stdout);
    sleep(1);
    printf("Development ");
    fflush(stdout);
    sleep(1);
    printf("Basics ");
    fflush(stdout);
    sleep(1);
    printf("2XC3 \n\n");
    sleep(1);

    printf("What is the most useful thing you've learned so far in this course?\n");
    sleep(2);
    printf("So far, the most useful thing I have learned is how to connect WSL to VS Code. I find programming to be a much smoother process in VS Code rather than vim and I find it very beneficial that I am able to not only code files in VS Code, but also code in the WSL terminal directly.  \n\n");
    sleep(3);

    printf("Is there anything you've learned so far that you do not think is useful? If so, explain why.\n");
    sleep(2);
    printf("I do not think it is super useful to learn how to use vim. I much prefer VS Code for the GUI and I find it hard to imagine a scenario where I would be forced to use vim. \n\n");
    sleep(3);

    printf("What are the advantages and disadvantages of using vim for coding?\n");
    sleep(2);
    printf("Advantages: ");
    fflush(stdout);
    sleep(1);
    printf("One advantage of vim is that it comes with Ubuntu and there is no installation needed to access it. Another advantage to vim is that it can open and process large files very quickly. One last advantage is that the variety of commands of vim allow for fast text editing and manipulation.\n");
    sleep(2);
    printf("Disadvantages: ");
    fflush(stdout);
    sleep(1);
    printf("The first disadvantage of vim is that the commands of vim require a lot of learning and practice to actually use efficiently. This learning process is difficult because vim uses different keybinds than other text editors. Another big disadvantage of vim is its lack of GUI. The interface is minimalistic and lacks user tools.\n\n");
    sleep(2);

    printf("What are the advantages and disadvantages of using VS Code for coding?\n");
    sleep(2);
    printf("Advantages: ");
    fflush(stdout);
    sleep(1);
    printf("One major advantage of VS Code is the large amount of extensions that can be used to add functionality for languages, frameworks, and tools. Another advantage is that the VS Code workplace is customizable through themes and settings to best suit your personal needs. One last advantage of VS Code is the integrated terminal, which allows you to run commands and scripts without leaving VS Code.\n");
    sleep(2);
    printf("Disadvantages: ");
    fflush(stdout);
    sleep(1);
    printf("One disadvantage of VS Code is that it can have a more difficult setup compared to text editors such as vim. One last disadvantage of VS Code is that the vast amount of features and extensions can be confusing to use and understand for beginners\n\n");

    return EXIT_SUCCESS;
}