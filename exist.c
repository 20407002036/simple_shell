#include "shell.h"

/**
* is_command_exist - cheaks if command exist
* @command: command to run
* Return: 1 SUCCESS 0 OTHERWISE
*/
int is_command_exist(char *command)
{
    char *path, *path_copy, *dir;
    char full_path[256];

    if (strchr(command, '/') != NULL)
    {
        if (access(command, X_OK) == 0)
            return 1;
    } 
    else 
    {
        path = getenv("PATH");
        if (path == NULL) 
        {
            perror("Unable to get PATH env var--");
            exit(EXIT_FAILURE);
        }

        path_copy = strdup(path);
        dir = strtok(path_copy, ":");

        while (dir != NULL) 
        {
            snprintf(full_path, sizeof(full_path), "%s/%s", dir, command);

            if (access(full_path, X_OK) == 0) 
            {
                free(path_copy);
                return 1;
            }

            dir = strtok(NULL, ":");
        }

	//   free(path_copy);
    }

    return 0;
}
