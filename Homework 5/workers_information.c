#include <stdio.h>
#include <string.h>
#define MAXNAME 20
void input10Name(char name[][MAXNAME], int jobnum[]);
void insertion_sort(int arr[], char name[][MAXNAME]);
void findName(int key, int arr[], char name[][MAXNAME], int len);
int main()
{
    int times;
    char name[10][MAXNAME];
    int jobnum[10];
    input10Name(name, jobnum);
    insertion_sort(jobnum, name);
    scanf("%d", &times);
    for (int i = 0; i < times; i++)
    {
        int key;
        scanf("%d", &key);
        findName(key, jobnum, name, 10);
    }
}
void input10Name(char name[][MAXNAME], int jobnum[])
{

    for (int i = 0; i < 10; i++)
    {
        scanf("%s %d", name[i], &jobnum[i]);
    }
}
void insertion_sort(int arr[], char name[][MAXNAME])
{
    int temp, j;
    char tempname[MAXNAME];
    for (int i = 1; i < 10; i++)
    {
        temp = arr[i];
        strcpy(tempname, name[i]);

        for (j = i - 1; (j >= 0) && arr[j] > temp; j--)
        {
            arr[j + 1] = arr[j];
            strcpy(name[j + 1], name[j]);
        }
        arr[j + 1] = temp;
        strcpy(name[j + 1], tempname);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%s-%d\n", name[i], arr[i]);
    }
}
void findName(int key, int arr[], char name[][MAXNAME], int len)
{
    int top = 0, end = len - 1, mid;
    int find = -1;
    while (top <= end)
    {
        mid = (top + end) / 2;
        if (arr[mid] == key)
        {
            find = mid;
            break;
        }
        else if (arr[mid] < key)
            top = mid + 1;
        else
            end = mid - 1;
    }
    if (find >= 0)
        printf("%s\n", name[find]);
    else
        printf("NOFOUND\n");
}