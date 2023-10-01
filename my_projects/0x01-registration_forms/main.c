#include "main.h"

int main(void)
{
  char firstName[50];
  char otherNames[50];
  char year[5];
  char month[3];
  char day[3];
  char gender[20];
  char *phone;
  char *mail;

  while (1) 
  {
    /* Display Infos for the mode */
    mode_msg();

    /* Wait for 2 seconds */
    sleep(2.3);

    /* Display Infos for the title */
    title_msg();

    /* Ask for details*/
    userName(firstName, otherNames);
    
    /* Birth Date*/
    birthDate(year, month, day);

    /* Ask for gender */
    genderChoice(gender);

    /*Ask for address*/
    askAddress();

    /* Ask for COntact*/
  askContact(phone, mail);


    /* Saultion*/
    if (strcmp(gender, "Male") == 0) 
    {
    printf("Well done Sir, %s!\n", otherNames);
    } 
    else if (strcmp(gender, "Female") == 0) 
    {
    printf("Well done Miss, %s!\n", otherNames);
    } 
    else 
    {
    printf("Well done %s, %s!\n", gender, otherNames);
    }

    break;
  }

  /* Contact*/
  printf("Your forms have been submitted.\n");
  printf("We will keep you updated via.\n");
  printf("SMS :%s", phone);
  printf("Email :%s", mail);

    return (0);
}

