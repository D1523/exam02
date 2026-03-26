#include <unistd.h>
int main(int argc, char **argv)
{
int used[256]={0};
int i,j;
if(argc==3)
{
for (i=0; argv[1][i]; i++)

{
    for (j=0; argv[2][j]; j++)
    {
        if (argv[1][i]==argv[2][j])
        {
            unsigned char c =argv[1][i];
            
            if(used[c]==0)
    {
        write(1,&c,1);
        used[c]=1;
    }
    break;
}
}
}
}
write(1, "\n",1);
return 0;

}