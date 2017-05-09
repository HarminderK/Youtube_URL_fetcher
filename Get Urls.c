#include <stdio.h>

int main() {
FILE *URL;
FILE *OUT;
char garbage[255];
char url[255];
char g[255];
int count;
int number = 0;
int songs = 1618; // NUMBER OF SONGS IN THE PLAYLIST

URL =fopen("FILE_NAME_HERE.txt", "r");
OUT = fopen("URLS.txt" ,"w");

fscanf(URL,"%s%s", garbage,url);
fprintf(OUT,"%s\n", url);

fgets(g ,255, URL);
while(number < songs){
for( count = 0; count < 255; count++) {
    if (g[count] == '\n' || g[count] == '\0')
    {
        number++;
        break;
    }
}
if(g[count] == '\n') {
fscanf(URL,"%s%s", garbage,url);
fprintf(OUT,"%s\n", url);
fgets(g ,255, URL);
}

}
printf("%d", number);

return 0;
}
