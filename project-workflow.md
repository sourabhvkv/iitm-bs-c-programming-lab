#  Project Workflow

Follow the below workflow instructions to complete each project.

1. Move to the project folder in the terminal using the cd command as described below. For example to move to the `p1-matmul` directory use,
   ```
   cd p1-matmul
   ```
2. Check the `README.md` file from the project folder for the instructions on how to do the project.

3. After completing each exercise, do the following:

   1. Stage the changes from the source files that you have modified from the source control in the sidebar or using the below command.
   ```
   git add matmul.c
   ```
   2. Commit the changes with a meaningful commit message like "completed p1-matmul"
   ```
   git commit -m 'completed p1-matmul'
   ```

4. Optionally you can remove the generated files and the compiled executable to keep your repo clean using the `git clean` command from the particular project directory.
    ```
    git clean -f
    ```

    You can run with the `-n` option to see what would would be changed without actually changing the contents.

    ```
    git clean -n
    ```
