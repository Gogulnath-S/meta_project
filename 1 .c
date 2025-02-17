
#include <stdio.h>
// Function to convert lowercase to uppercase
void convertToUppercase(char str[]) {
int i = 0;
while (str[i] != '\0') {
if (str[i] >= 'a' && str[i] <= 'z') {
str[i] = str[i] - 32;

}
i++;
}
printf("Converted to uppercase: %s\n", str);
}
int main() {
char str[] = "hello world";
convertToUppercase(str);
return 0;
}
