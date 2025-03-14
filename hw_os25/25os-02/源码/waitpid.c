#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
//#include <sys/wait.h>
int main()
{
    pid_t child_pid;
    child_pid = fork();
    if (child_pid < 0)
    {
        // Fork filed
        perror("Fork failed");
        return 1;
    }
    else if (child_pid == 0)
    {
        printf("Child process: My PID is %d\n", getpid());
    }
    else
    {
        // Code executed by parent process
        printf("Parent process: Child process id is %d\n", child_pid);
        // Wait for child process to complete
        int status;
        waitpid(child_pid, &status, 0);
        if (WIFEXITED(status))
        {
            printf("Child process exited with status: %d\n", WEXITSTATUS(status));
        }
    }
    return 0;
}