#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
void clearscrean(){
    system("cls");
}
void Employee_data();
void menu();
void Trainee_data();
void gym_equipment_store();
void Finance_data();
void print_padded_name(int i, const char *name);
void print_name_without_trailing_spaces(const char *name);
typedef struct
{
    int house_number;
    char street[80];
    char city[80];
    char state[80];
}Address;
typedef struct
{
    char name[100];
    int age,tool_usage,number_of_month;
    char blood_group[5];
    char gender;
    char ID[30];
    Address address;
    char Phone_number[20];
    char trainer_name[40];
    char history[200];
    char date[10];
    char Medicine_Prescribed[40];
    float full_amount;
}Trainee;
typedef struct
{
    char name[100];
    int age;
    char blood_group[5];
    char gender;
    char ID[30];
    Address address;
    char Phone_number[10];
    double salary;
    int number_of_trainees;

}Trainers;
typedef struct
{
    char name[100];
    char Date_of_purchase[20];
    int Quantity_of_the_Item;
    float price;
    float full_amount_of_tools;
}Gym_equipment_store;
void menu()
{
    Menu:
    clearscrean();
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    char choice;
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|****************************************************************");
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf("FITNESS MANAGEMENT SYSTEM");
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("*****************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                1.Trainees Database                                                                     ||\n");
    printf("||                                                                2.Trainers Database                                                                     ||\n");
    printf("||                                                                3.Finance Database                                                                      ||\n");
    printf("||                                                                4.Gym_equipment_store Database                                                          ||\n");
    printf("||                                                                5.Rest The Password                                                                     ||\n");
    printf("||                                                                0.Exit                                                                                  ||\n");
    printf("||                                                                Enter your choice:                                                                      ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||********************************************************************************************************************************************************||\n");
    printf("||*****************************************************************************************************************************");
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf("ABDELAZIZ BARHOUMI");
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("*********||\n");
    printf("||********************************************************************************************************************************************************||\n");
    printf("||********************************************************************************************************************************************************||\n");

    choice=getche();
    switch(choice)
        {
            case '1':
            if (verify_password("password.txt")) {
            Trainee_data();
            } else {
            printf("Invalid password.\n");
            Sleep(1000);
            system("close_terminal.bat");
        }
                break;
            case '2':
            if (verify_password("password.txt")) {
            Employee_data();
            } else {
            printf("Invalid password.\n");
            Sleep(1000);
            system("close_terminal.bat");
        }

                break;
            case '3':
            if (verify_password("password.txt")) {
            Finance_data();
            } else {
            printf("Invalid password.\n");
            Sleep(1000);
            system("close_terminal.bat");
        }

                break;
            case '4':
            if (verify_password("password.txt")) {
            gym_equipment_store();
            } else {
            printf("Invalid password.\n");
            Sleep(1000);
            system("close_terminal.bat");
        }

                break;
                case '5':
            if (verify_password("password.txt")) {
            remove("password.txt");
            set_password("password.txt");
            clearscrean();
            menu();
            } else {
            printf("Invalid password.\n");
            Sleep(1000);
            system("close_terminal.bat");
        }

                break;
            case '0':
            clearscrean();
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|****************************************************************");
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf("FITNESS MANAGEMENT SYSTEM");
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("*****************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
printf("\n\n                                                                   BAY BAY :)");
                Sleep(1000);
                system("close_terminal.bat");
            default:
                goto Menu;
        }
}
void kill_terminal(){
    FILE *file = fopen("close_terminal.txt", "w+");
    fprintf(file, "taskkill /F /IM WindowsTerminal.exe\n");
    fprintf(file, "taskkill /F /IM OpenConsole.exe\n");
    fclose(file);
    rename("close_terminal.txt", "close_terminal.bat");
    remove("close_terminal.txt");
}

int is_file_empty(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 1; // Assume file does not exist is treated as empty
    }
    fseek(file, 0, SEEK_END);
    int size = ftell(file);
    fclose(file);
    return size == 0;
}

void set_password( char *filename) {
    char password[30];
    FILE *file;
    file = fopen(filename, "w");
    char pass[20], pass2[20];
    k:
    clearscrean();
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|****************************************************************");
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf("FITNESS MANAGEMENT SYSTEM");
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("*****************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    do {
    fflush(stdin);
    printf("||                                                                Please enter a password (at least 3 characters):                                        ||\n");
    printf("||                                                                ");
        gets(pass);
        // Remove newline character from the input
    } while (strlen(pass) < 3);
    printf("||                                                                Enter the password again:                                                               ||\n");
    printf("||                                                                ");

            scanf("%s", pass2);
            if (strcmp(pass, pass2) == 0) {
                fputs(pass, file);
                fclose(file);
    printf("||                                                                Password set successfully.                                                              ||\n");
                Sleep(1000);
            }else{
                printf("||                                                                Passwords do not match.                                                              ||\n");
                Sleep(1000);
                goto k;
            }

}

int verify_password(const char *filename) {
    clearscrean();
    char entered_password[30];
    char stored_password[30];
    FILE *file;
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        exit(1);
    }
     int attempts = 3;

    if (fgets(stored_password, sizeof(stored_password), file) != NULL) {
        // Remove newline character if present
        stored_password[strcspn(stored_password, "\n")] = '\0';
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|****************************************************************");
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf("FITNESS MANAGEMENT SYSTEM");
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("*****************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                Password verification required:                                                         ||\n");
        while (attempts > 0) {
        char inputPassword[20];
    printf("||                                                                Enter password:                                                                         ||\n");
    printf("||                                                                ");
        scanf("%s", inputPassword);
        if (strcmp(inputPassword, stored_password) == 0) {
            fclose(file);
    printf("||                                                                Password verified                                                                       ||\n");
            return 1;
        } else {

            attempts--;
            if (attempts > 0) {
                printf("||                                                                Wrong password                                                                          ||\n");
                printf("||                                                                Remaining attempts: %d                                                                   ||\n", attempts);
            }}}
            return 0;
    } else {

        printf("||                                                                No password set yet                                                                     ||\n");
        fclose(file);
        return 0; // No password set yet
    }
}
int main() {
    system("mode con cols=9999 lines=9999");
    system("COLOR F1");
    kill_terminal();

    if (is_file_empty("password.txt")) {
        set_password("password.txt");
    }
    if(!is_file_empty("password.txt")){
        clearscrean();

        if (verify_password("password.txt")) {
            Sleep(1000);
            menu();
        } else {
            printf("Invalid password.\n");
            Sleep(1000);
            system("close_terminal.bat");
        }
    }
}
void Trainee_data(){
FILE *trainee_file,*trainee_temp_file;
Trainee trainee;
    char choice,Y_N;

    trainee_file=fopen("trainees.DAT","rb+");
    if(trainee_file==NULL)
        {
            trainee_file=fopen("trainees.DAT","wb+");
            if(trainee_file==NULL)
                {
                    puts("\nSorry!! Cannot open file");
                    exit(1);
                }
        }
   int trainee_file_size=sizeof(trainee);
   FILE *trainer_file,*Temp_file;
    char id[20],trainer_id_s[40];
    int flag=0;
    long int size_of_trainer_file;
    Trainers trainer;
    trainer_file=fopen("trainers.DAT","rb+");
    if(trainer_file==NULL)
        {
            trainer_file=fopen("trainers.DAT","wb+");
            if(trainer_file==NULL)
                {
                    puts("\nSorry!! Cannot open file");
                    exit(1);
                }
        }
    size_of_trainer_file=sizeof(trainer);
    while(1)
        {
    clearscrean();
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|****************************************************************");
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf("FITNESS MANAGEMENT SYSTEM");
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("*****************************************************************|\n");
    printf("|*************************************************************************");
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf("TRAINEES");
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("*************************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                1.Add new Trainee's Information                                                         ||\n");
    printf("||                                                                2.Edit Trainee's Information                                                            ||\n");
    printf("||                                                                3.Display Trainee's Information                                                         ||\n");
    printf("||                                                                4.Delete Trainee's Information                                                          ||\n");
    printf("||                                                                5.Display Entire Trainee Database                                                       ||\n");
    printf("||                                                                6.Total Number of Trainees                                                              ||\n");
    printf("||                                                                0.Main menu                                                                             ||\n");
    printf("||                                                                Enter your choice:                                                                      ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||********************************************************************************************************************************************************||\n");
    printf("||*****************************************************************************************************************************");
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf("ABDELAZIZ BARHOUMI");
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("*********||\n");
    printf("||********************************************************************************************************************************************************||\n");
    printf("||********************************************************************************************************************************************************||\n");
            choice=getche();
            switch(choice)
                {
                    case '1':
                    clearscrean();
                    Y_N='Y';
                    char id[30];

                    while(Y_N=='Y'||Y_N=='y')
                        {
                            fflush(stdin);
                            clearscrean();
                            start:
                            printf("\nEnter the ID of the Trainee: ");
                            scanf("%s", id);
                            rewind(trainee_file);
                            rewind(trainer_file);
                            while(fread( &trainee, trainee_file_size, 1, trainee_file)==1)
                                {
                                    if(strcmp(trainee.ID,id)==0)
                                        {

                                            printf("\n\tTHIS REGISTRATION NUMBER ALREADY EXISTS. ENTER ANOTHER ONE");
                                            goto start;
                                        }
                                }
                            if(fread( &trainee, trainee_file_size,1,  trainee_file)==0)
                                {
                                    strcpy(trainee.ID,id);
                                    fflush(stdin);

                                    printf("\nEnter the name of the Trainee: ");
                                    gets(trainee.name);
                                    size_t name_length = strlen(trainee.name);

                                    if (name_length < 18) {
                                        char spaces[18 - name_length + 1];
                                        memset(spaces, ' ', 18 - name_length);
                                        spaces[18 - name_length] = '\0';

                                        strcat(trainee.name, spaces);
                                    }


                                    printf("\nEnter the gender of the Trainee(M.male or F.female): ");
                                    scanf("%c", &trainee.gender);
                                    printf("\nEnter the Blood group of the Trainee: ");
                                    scanf("%s", trainee.blood_group);

                                    printf("\nEnter the age of the Trainee: ");
                                    scanf("%d",&trainee.age);
                                    printf("\nEnter the address of the Trainee:\n");
                                    printf("\tEnter the house number: ");
                                    scanf("%d",&trainee.address.house_number);
                                    printf("\tEnter the street: ");
                                    scanf("%s", trainee.address.street);

                                    printf("\tEnter the city: ");
                                    scanf("%s", trainee.address.city);

                                    printf("\tEnter the state: ");
                                    scanf("%s", trainee.address.state);

                                    printf("\nEnter the phone number of the Trainee: ");
                                    scanf("%s", trainee.Phone_number);
                                    fflush(stdin);
                                    printf("\nThe available Trainers:");
                                    int i = 0;
                                    while(fread( &trainer, size_of_trainer_file, 1, trainer_file)==1)
                                {
                                         if(trainer.number_of_trainees <10){
                                            i++;
                                           printf("(%i.", i);
                                        print_name_without_trailing_spaces(trainer.name);
                                        printf("-Price: %.2f).",trainer.salary / 10);

                                }}
                                    char nametemp[100];
                                    flag = 0;

                                    while(flag > i || flag < 1)
                                    {
                                        printf("\nEnter the number of the Trainer to which he/she being referred:");
                                        scanf("%i", &flag);

                                    }
                                        rewind(trainer_file);
                                        i = 0;
                                        while(i<flag){
                                            if(trainer.number_of_trainees <10){
                                        fread( &trainer, size_of_trainer_file, 1, trainer_file);
                                        i++;}

                                    }
                                    fseek(trainer_file, -size_of_trainer_file, SEEK_CUR);
                                    strcpy(trainee.trainer_name,trainer.name);
                                    trainer.number_of_trainees = trainer.number_of_trainees + 1 ;
                                    // Write the updated trainer record back to the file
                                    fwrite(&trainer, size_of_trainer_file, 1, trainer_file);
                                    // Flush the changes to disk
                                    fflush(trainer_file);
                                    printf("\nEnter the number of tools will be used: ");
                                    scanf("%d", &trainee.tool_usage);
                                    printf("\nEnter the number of months: ");
                                    scanf("%i", &trainee.number_of_month);
                                    trainee.full_amount = trainee.tool_usage * trainee.number_of_month * 10 + trainer.salary/10;
                                    printf("\nEnter the history, if any, related to treatment of the Trainee(If yes then write 'Y' if NO then write 'N'): ");
                                    scanf(" %c", &Y_N);
                                    if(Y_N == 'N'|| Y_N == 'n')
                                        {
                                            strcpy(trainee.history,"");
                                            strcpy(trainee.date,"");
                                            strcpy(trainee.Medicine_Prescribed,"");
                                            int total_size = strlen(trainee.history) + strlen(trainee.date) + strlen(trainee.Medicine_Prescribed);
                                            if (total_size < 20) {
                                                int padding_size = 20 - total_size;
                                                strncat(trainee.Medicine_Prescribed, " ", padding_size);
                                            }
                                            goto end;
                                        }
                                    else
                                        {
                                            printf("\nHistory:");
                                            scanf("%s", trainee.history);
                                            printf("\nEnter the date of treatment:");
                                            scanf("%s", trainee.date);
                                            printf("\nMedicine Prescribed:");
                                            scanf("%s", trainee.Medicine_Prescribed);
                                            int total_size = strlen(trainee.history) + strlen(trainee.date) + strlen(trainee.Medicine_Prescribed);
                                            if (total_size < 20) {
                                                int padding_size = 20 - total_size;
                                                strncat(trainee.Medicine_Prescribed, " ", padding_size);
                                            }
                                        }

                                 end:
                                    fwrite(&trainee, trainee_file_size, 1, trainee_file);

                                    printf("\nFile created successfully. ");
                                printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------");
                                    printf("\nWant to add entry of the another Trainee(Y/N): ");
                                    Y_N=getche();
                                    }
                                }
                            break;
                    case '2':
                            clearscrean();
                            trainee_file_size = sizeof(trainee);
                            char editChoice;
                                do {
                                    fflush(stdin);
                                    clearscrean();
                                    printf("\nEnter the ID of the Trainee to Edit: ");
                                    scanf("%s", id);

                                    // Search for the trainee with the given ID
                                    rewind(trainee_file);
                                    flag = false;
                                    while (fread(&trainee, trainee_file_size, 1, trainee_file) == 1) {
                                        if (strcmp(trainee.ID, id) == 0) {
                                            flag = true;
                                            printf("\nTrainee found. Editing details:\n");
                                            fflush(stdin); // Clear input buffer

                                            printf("Enter the new name of the Trainee: ");
                                            scanf("%s", trainee.name);
                                                 size_t name_length = strlen(trainee.name);

                                                if (name_length < 18) {
                                                    char spaces[18 - name_length + 1];
                                                    memset(spaces, ' ', 18 - name_length);
                                                    spaces[18 - name_length] = '\0';

                                                    strcat(trainee.name, spaces);
                                                }
                                            printf("Enter the new gender of the Trainee (M for male, F for female): ");
                                            scanf(" %c", &trainee.gender);

                                            printf("Enter the new Blood group of the Trainee: ");
                                            scanf("%s", trainee.blood_group);

                                            printf("Enter the new age of the Trainee: ");
                                            scanf("%d", &trainee.age);

                                            printf("Enter the new address of the Trainee:\n");
                                            printf("\tEnter the house number: ");
                                            scanf("%d", &trainee.address.house_number);
                                            printf("\tEnter the street/colony: ");
                                            scanf("%s", trainee.address.street);
                                            printf("\tEnter the city: ");
                                            scanf("%s", trainee.address.city);
                                            printf("\tEnter the state: ");
                                            scanf("%s", trainee.address.state);

                                            printf("Enter the new phone number of the Trainee: ");
                                            scanf("%s", trainee.Phone_number);

                                            printf("\nEnter the number of tools will be used: ");
                                            scanf("%d", &trainee.tool_usage);

                                            printf("Enter the number of months: ");
                                            scanf("%i", &trainee.number_of_month);

                                            // Calculate full amount
                                            trainee.full_amount = trainee.tool_usage * trainee.number_of_month * 10;

                                            // Modify trainer's number of trainees
                                            printf("\nAvaila+ble Trainers:");
                                            int trainerIndex = 0;
                                            rewind(trainer_file);
                                            while (fread(&trainer, size_of_trainer_file, 1, trainer_file) == 1) {
                                                if (strcmp(trainer.name, trainee.trainer_name) == 0) {
                                                    trainer.number_of_trainees--;
                                                    fseek(trainer_file, -size_of_trainer_file, SEEK_CUR);
                                                    fwrite(&trainer, size_of_trainer_file, 1, trainer_file);
                                                    fflush(trainer_file);
                                                }
                                                if (trainer.number_of_trainees < 10) {
                                                    trainerIndex++;
                                                    printf("(%i", trainerIndex);
                                                    print_name_without_trailing_spaces(trainer.name);
                                                    printf("-Price: %.2f).",trainer.salary / 10);


                                                }
                                            }

                                            // Select new trainer
                                            int selectedTrainer;
                                            do {
                                                printf("\nEnter the number of the Trainer to which he/she is being referred: ");
                                                scanf("%d", &selectedTrainer);
                                            } while (selectedTrainer < 1 || selectedTrainer > trainerIndex);

                                            // Move file pointer to the selected trainer
                                            rewind(trainer_file);
                                            while (selectedTrainer > 0) {
                                                fread(&trainer, size_of_trainer_file, 1, trainer_file);
                                                if (trainer.number_of_trainees < 10) {
                                                    selectedTrainer--;
                                                }
                                            }

                                            // Update trainee's trainer name and increment trainer's number of trainees
                                            strcpy(trainee.trainer_name, trainer.name);
                                            trainer.number_of_trainees++;
                                            fseek(trainer_file, -size_of_trainer_file, SEEK_CUR);
                                            fwrite(&trainer, size_of_trainer_file, 1, trainer_file);
                                            fflush(trainer_file);

                                            // Write the edited trainee record
                                            fseek(trainee_file, -trainee_file_size, SEEK_CUR);
                                            fwrite(&trainee, trainee_file_size, 1, trainee_file);
                                            fflush(trainee_file);

                                            printf("\nTrainee details updated successfully.\n");
                                            break;
                                        }
                                    }

                                    if (!flag) {
                                        printf("\nNo Trainee found with the given ID.\n");
                                    }

                                    printf("\nDo you want to edit another record (Y/N)? ");
                                    editChoice = getche();
                                } while (editChoice == 'Y' || editChoice == 'y');
                                break;
                        case '3':
                                    trainee_file_size=sizeof(trainee);
                                    clearscrean();
                                    Y_N='Y';
                                    while(Y_N=='Y'||Y_N=='y')
                                        {
                                            fflush(stdin);
                                            clearscrean();
                                            printf("\nEnter ID to search: ");
                                            scanf("%s", id);
                                            rewind(trainee_file);
                                            flag=false;
                                            while(fread( &trainee, trainee_file_size, 1, trainee_file)==1)
                                                    {
                                                        if(strcmp(trainee.ID,id)==0)
                                                            {
                                                                flag = true;
                                                               printf(" ID.\t   Name                Age      Gender      Blood \t   P.N:\t                     Trainer              Tools          months     Total\n");
                                                                printf("------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                                                                 printf("\t %s", trainee.name);
                                                                printf("     %d", trainee.age);
                                                                printf("        %c", trainee.gender);
                                                                printf("           %s", trainee.blood_group);
                                                                printf("      +216-%s", trainee.Phone_number);
                                                                printf("                 %s", trainee.trainer_name);
                                                                printf("           %d", trainee.tool_usage);
                                                                printf("             %d",trainee.number_of_month);
                                                                printf("         %.2f",trainee.full_amount);
                                                                printf("\nHistory     :%s-%s-%s", trainee.history, trainee.Medicine_Prescribed, trainee.date);
                                                                printf("\nAddress  :%d, %s, %s, %s", trainee.address.house_number, trainee.address.street, trainee.address.city, trainee.address.state);
                                                                printf("\nAddress  :%d, %s, %s, %s", trainee.address.house_number, trainee.address.street, trainee.address.city, trainee.address.state);

                                                            }}

                                                        if(!flag) {
                                                                printf("\nNo Trainee found with the given name.\n");
                                                                    }
                                            printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------");
                                            printf("\nSearch another Entry(Y/N): ");
                                            Y_N=getche();}
                                    break;


                        case '4':
                                clearscrean();
                                trainee_file_size = sizeof(trainee);
                                Y_N = 'Y';
                                while (Y_N == 'Y' || Y_N == 'y') {
                                    fflush(stdin);
                                    clearscrean();
                                    printf("\nEnter the Registration number of the Trainee to be deleted: ");
                                    scanf("%s", id);

                                    // Open a temporary file for writing
                                    FILE *temp_file = fopen("temp.DAT", "wb+");
                                    if (temp_file == NULL) {
                                        printf("Error creating temporary file.\n");
                                        exit(EXIT_FAILURE);
                                    }

                                    rewind(trainee_file);
                                    bool found = false;
                                    while (fread(&trainee, trainee_file_size, 1, trainee_file) == 1) {
                                        if (strcmp(trainee.ID, id) == 0) {
                                            found = true;
                                                              printf(" ID.\t   Name                Age      Gender      Blood \t   P.N:\t                     Trainer              Tools          months     Total\n");
                                                                printf("------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                                                             printf("\t %s", trainee.name);
                                                                printf("     %d", trainee.age);
                                                                printf("        %c", trainee.gender);
                                                                printf("           %s", trainee.blood_group);
                                                                printf("      +216-%s", trainee.Phone_number);
                                                                printf("                 %s", trainee.trainer_name);
                                                                printf("           %d", trainee.tool_usage);
                                                                printf("             %d",trainee.number_of_month);
                                                                printf("         %.2f",trainee.full_amount);
                                                                printf("\nHistory     :%s-%s-%s", trainee.history, trainee.Medicine_Prescribed, trainee.date);
                                                                printf("\nAddress  :%d, %s, %s, %s", trainee.address.house_number, trainee.address.street, trainee.address.city, trainee.address.state);
                                                                printf("\nAddress  :%d, %s, %s, %s", trainee.address.house_number, trainee.address.street, trainee.address.city, trainee.address.state);
                               printf("\n\nARE YOU SURE? (Y/N): ");

                                                                    // Clear input buffer
                                                                    while (getchar() != '\n');

                                                                    scanf(" %c", &Y_N);
                                                                    if (Y_N == 'y' || Y_N == 'Y') {
                                                                        printf("\nThe Record has been Deleted Successfully.\n");
                                                                        int trainerIndex = 0;
                                            rewind(trainer_file);
                                            while (fread(&trainer, size_of_trainer_file, 1, trainer_file) == 1) {
                                                if (strcmp(trainer.name, trainee.trainer_name) == 0) {
                                                    trainer.number_of_trainees--;
                                                    fseek(trainer_file, -size_of_trainer_file, SEEK_CUR);
                                                    fwrite(&trainer, size_of_trainer_file, 1, trainer_file);
                                                    fflush(trainer_file);
                                                }}
                                                                    }
                                                                } else {
                                                                    // Write non-matching trainee records to the temporary file
                                                                    fwrite(&trainee, trainee_file_size, 1, temp_file);
                                                                }
                                                            }


                                                                fclose(temp_file);
                                                            if (found) {

                                                                if( (Y_N == 'y' || Y_N == 'Y')){
                                                                fclose(trainee_file);

                                                                // Delete the original file and rename the temporary file
                                                                remove("trainees.DAT");
                                                                rename("temp.DAT", "trainees.DAT");
                                                                trainee_file = fopen("trainees.DAT", "rb+");
                                                                if (trainee_file == NULL) {
                                                                    printf("Error opening trainee file.\n");
                                                                    exit(EXIT_FAILURE);
                                                                }}
                                                            } else {
                                                                printf("\nNo Trainee found with the given Registration number.\n");
                                                            }

                                                            printf("\nDelete another record? (Y/N): ");
                                                            scanf(" %c", &Y_N);
                                                        }
                                                        break;

                         case '5':
                                clearscrean();
                                trainee_file_size=sizeof(trainee);
                                rewind(trainee_file); // Reset file pointer to the beginning of the file
                                printf("\n M: For male, F: For female A: For All\nEnter your choice: ");
                                choice=getche();
                                    clearscrean();
                                                                printf(" ID.\t   Name                Age      Gender      Blood \t   P.N:\t                     Trainer              Tools          months     Total\n");
                                    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                                // Read and display details of each trainee in the file
                                while (fread(&trainee, trainee_file_size, 1, trainee_file) == 1) {
                                    // Print trainee details
                                    if((choice=='M'||choice=='m') && (trainee.gender == 'm' || trainee.gender == 'M'))
                                                        {
                                                             printf("\t %s", trainee.name);
                                                                printf("     %d", trainee.age);
                                                                printf("        %c", trainee.gender);
                                                                printf("           %s", trainee.blood_group);
                                                                printf("      +216-%s", trainee.Phone_number);
                                                                printf("                 %s", trainee.trainer_name);
                                                                printf("           %d", trainee.tool_usage);
                                                                printf("             %d",trainee.number_of_month);
                                                                printf("         %.2f",trainee.full_amount);
                                                                printf("\nHistory     :%s-%s-%s", trainee.history, trainee.Medicine_Prescribed, trainee.date);
                                                                printf("\nAddress  :%d, %s, %s, %s", trainee.address.house_number, trainee.address.street, trainee.address.city, trainee.address.state);
                                                                  printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                                }
                                else if((choice=='F'||choice=='f') && (trainee.gender == 'f' || trainee.gender == 'F')){
                                                          printf(" %s", trainee.ID);
                                                                 printf("\t %s", trainee.name);
                                                                printf("     %d", trainee.age);
                                                                printf("        %c", trainee.gender);
                                                                printf("           %s", trainee.blood_group);
                                                                printf("      +216-%s", trainee.Phone_number);
                                                                printf("                 %s", trainee.trainer_name);
                                                                printf("           %d", trainee.tool_usage);
                                                                printf("             %d",trainee.number_of_month);
                                                                printf("         %.2f",trainee.full_amount);
                                                                printf("\nHistory     :%s-%s-%s", trainee.history, trainee.Medicine_Prescribed, trainee.date);
                                                                printf("\nAddress  :%d, %s, %s, %s", trainee.address.house_number, trainee.address.street, trainee.address.city, trainee.address.state);
                                                                  printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                                }else if (choice!='M'&& choice!='m' && choice!='f'&& choice!='F'){
                                    printf(" %s", trainee.ID);
                                                                 printf("\t %s", trainee.name);
                                                                printf("     %d", trainee.age);
                                                                printf("        %c", trainee.gender);
                                                                printf("           %s", trainee.blood_group);
                                                                printf("      +216-%s", trainee.Phone_number);
                                                                printf("                 %s", trainee.trainer_name);
                                                                printf("           %d", trainee.tool_usage);
                                                                printf("             %d",trainee.number_of_month);
                                                                printf("         %.2f",trainee.full_amount);
                                                                printf("\nHistory     :%s-%s-%s", trainee.history, trainee.Medicine_Prescribed, trainee.date);
                                                                printf("\nAddress  :%d, %s, %s, %s", trainee.address.house_number, trainee.address.street, trainee.address.city, trainee.address.state);
                                                                printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

                                }
                                }
                                getch(); // Wait for a key press before exiting
                        break;
                       case '6':{
                            int count = 0;
                            clearscrean();

                                    trainee_file_size=sizeof(trainee);
                                    rewind(trainee_file); // Reset file pointer to the beginning of the file

                                    // Read and display details of each trainee in the file
                                    while (fread(&trainee, trainee_file_size, 1, trainee_file) == 1) {
                                        count ++;
                                    }
                                    printf("\nNumber of Trainees: %d", count);
                                    getch(); // Wait for a key press before exiting
                                    break;

                        }


                        case '0':
                            {
                                fclose(trainee_file);
                                fclose(trainer_file);
                                clearscrean();
                                menu();
                            }
                        break;
                  }
                }
}
void Employee_data()
{
    FILE *trainer_file,*Temp_file;
    char Y_N,choice;
    char id[20],trainer_id_s[40];
    int flag=0;
    long int size_of_trainer_file;
    Trainers trainer;
    trainer_file=fopen("trainers.DAT","rb+");
    if(trainer_file==NULL)
        {
            trainer_file=fopen("trainers.DAT","wb+");
            if(trainer_file==NULL)
                {
                    puts("\nSorry!! Cannot open file");
                    exit(1);
                }
        }
    size_of_trainer_file=sizeof(trainer);
    while(1)
        {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    clearscrean();
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|****************************************************************");
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf("FITNESS MANAGEMENT SYSTEM");
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("*****************************************************************|\n");
    printf("|*************************************************************************");
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf("TRAINERS");
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("*************************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                1.Add new Trainer's Information                                                         ||\n");
    printf("||                                                                2.Edit Trainer's Information                                                            ||\n");
    printf("||                                                                3.Display Trainer's Information                                                         ||\n");
    printf("||                                                                4.Delete Trainer's Information                                                          ||\n");
    printf("||                                                                5.Display Entire Trainers Database                                                      ||\n");
    printf("||                                                                6.Total Number of Trainers                                                              ||\n");
    printf("||                                                                0.Main menu                                                                             ||\n");
    printf("||                                                                Enter your choice:                                                                      ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||********************************************************************************************************************************************************||\n");
    printf("||*****************************************************************************************************************************");
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf("ABDELAZIZ BARHOUMI");
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("*********||\n");
    printf("||********************************************************************************************************************************************************||\n");
    printf("||********************************************************************************************************************************************************||\n");
            choice=getche();
            switch(choice)
                {
                    case '1':
                    clearscrean();
                    fseek(trainer_file,0,SEEK_END);
                    Y_N='Y';
                    while(Y_N=='Y'||Y_N=='y')
                        {
                            fflush(stdin);
                            clearscrean();
                            u:
                            printf("\n\n\nEnter the ID of the Trainer: ");
                            scanf("%s",id);
                            rewind(trainer_file);
                            while(fread(&trainer,size_of_trainer_file,1,trainer_file)==1)
                                {
                                    if(strcmp(trainer.ID,id)==0)
                                        {
                                            flag=1;
                                            printf("\n\t\tTHIS ID ALREADY EXISTS. ENTER ANOTHER ONE");
                                            goto u;
                                        }
                                }
                                fflush(stdin);
                            if(flag==0||fread(&trainer,size_of_trainer_file,1,trainer_file)==0)
                                {

                                    strcpy(trainer.ID,id);

                                    printf("\nEnter the name of the Trainer: ");
                                    gets(trainer.name);

                                    fflush(stdin);
                                    printf("\nEnter the gender of the Trainee(M.male or F.female): ");
                                    scanf("%c", &trainer.gender);
                                    printf("\nEnter the Blood group of the Trainer: ");
                                    scanf("%s", trainer.blood_group);
                                    printf("\nEnter the age of the Trainer: ");
                                    scanf("%d", &trainer.age);
                                    printf("\nEnter the Salary of the Trainer: ");
                                    scanf("%lf", &trainer.salary);
                                    printf("\nEnter the address of the Trainer:\n");
                                    printf("\n\tEnter the house number: ");
                                    scanf("%d", &trainer.address.house_number);
                                    printf("\n\tEnter the street/colony: ");
                                    scanf("%s",trainer.address.street);
                                    fflush(stdin);
                                    printf("\n\tEnter the city: ");
                                    gets(trainer.address.city);
                                    fflush(stdin);

                                    printf("\n\tEnter the state: ");
                                    gets(trainer.address.state);
                                    fflush(stdin);

                                    printf("\nEnter the phone number of the Trainer: ");
                                    scanf("%s", trainer.Phone_number);
                                    trainer.number_of_trainees = 0;
                                    fwrite( &trainer, size_of_trainer_file, 1, trainer_file);
                                    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------");
                                    printf("\nWant to add entry of the another Trainer(Y/N): ");

                                    Y_N=getche();
                                }
                            }
                        break;
                    case '2':
                        clearscrean();
                        Y_N='Y';
                        while(Y_N=='Y'||Y_N=='y')
                            {
                                fflush(stdin);
        clearscrean();
                                printf("\nEnter the ID of the Trainee to modify: ");
                                scanf("%s",id);
                                rewind(trainer_file);
                                while(fread(&trainer,size_of_trainer_file,1,trainer_file)==1)
                                    {
                                        if(strcmp(trainer.ID,id)==0)
                                            {

                                                printf("\nEnter the new name of the Trainer: ");
                                                gets(trainer.name);
                                                size_t name_length = strlen(trainer.name);

                                                if (name_length < 18) {
                                                    char spaces[18 - name_length + 1];
                                                    memset(spaces, ' ', 18 - name_length);
                                                    spaces[18 - name_length] = '\0';

                                                    strcat(trainer.name, spaces);
                                                }
                                                fflush(stdout);
                                                printf("\nEnter the new Blood group of the Trainer: ");
                                                scanf("%s",trainer.blood_group);
                                                printf("\nEnter the new age of the Trainer: ");
                                                scanf("%d",&trainer.age);
                                                printf("\nEnter the new Salary of the Trainer: ");
                                                scanf("%lf",&trainer.salary);
                                                printf("\nEnter the new address of the Trainer:\n");
                                                printf("\n\tEnter the house number: ");
                                                scanf("%d",&trainer.address.house_number);
                                    fflush(stdin);

                                                printf("\n\tEnter the street/colony: ");
                                                scanf("%s",trainer.address.street);
                                    fflush(stdin);

                                                printf("\n\tEnter the city: ");
                                                gets(trainer.address.city);
                                    fflush(stdin);

                                                printf("\n\tEnter the state: ");
                                                gets(trainer.address.state);
                                    fflush(stdin);

                                                printf("\nEnter the new phone number of the Trainer: ");
                                                gets(trainer.Phone_number);
                                    fflush(stdin);

                                                fseek(trainer_file,-size_of_trainer_file,SEEK_CUR);
                                                fwrite( &trainer, size_of_trainer_file , 1, trainer_file);
                                                break;
                                            }
                                        }
                                    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------");
                                    printf("\nModify another Record(Y/N): ");

                                    Y_N=getche();
                                }
                            break;
                        case '3':
                            clearscrean();
                            Y_N='Y';
                            while(Y_N=='Y'||Y_N=='y')
                                {
                                    fflush(stdin);
        clearscrean();
                                    printf("\nEnter ID to search: ");
                                    scanf("%s", trainer_id_s);
                                    rewind(trainer_file);

                                    while(fread(&trainer,size_of_trainer_file,1,trainer_file)==1)
                                        {
                                            if(strcmp(trainer.ID,trainer_id_s)==0)
                                                {
                                                  printf("    ID.             Name                     Age                 Gender                Blood                       Salary                 P.N:            \n");

                                                    printf("%s       ",trainer.ID);
                                                    print_padded_name(18,trainer.name);
                                                    printf("          %d",trainer.age);
                                                    printf("                    %c",trainer.gender);

                                                    printf("                     %s",trainer.blood_group);
                                                    printf("                       %.2f",trainer.salary);
                                                    printf("               +216-%s",trainer.Phone_number);
                                                    printf("\nAddress  :%d, %s, %s, %s",trainer.address.house_number,trainer.address.street,trainer.address.city,trainer.address.state);
                                                    printf("\nNumber of trainee assigned: %d",trainer.number_of_trainees);
                                                }
                                        }
                                    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------");
                                    printf("\nSearch another Entry(Y/N): ");

                                    Y_N=getche();
                                }
                            break;//check
                        case '5':
                            clearscrean();
                            rewind(trainer_file);
                            printf("    ID.             Name                     Age                 Gender                Blood                       Salary                     P.N:            \n");


                            while(fread(&trainer,size_of_trainer_file,1,trainer_file)==1)
                                {
                                    printf("%s       ",trainer.ID);
                                                    print_padded_name(18,trainer.name);
                                                    printf("          %d",trainer.age);
                                                    printf("                    %c",trainer.gender);

                                                    printf("                     %s",trainer.blood_group);
                                                    printf("                       %.2f",trainer.salary);
                                                    printf("               +216-%s",trainer.Phone_number);
                                                    printf("\nAddress  :%d, %s, %s, %s",trainer.address.house_number,trainer.address.street,trainer.address.city,trainer.address.state);
                                                    printf("\nNumber of trainee assigned: %d",trainer.number_of_trainees);
                                    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                                }
                            getch();
                            break;
                        case '4':
                            clearscrean();
                            Y_N='Y';
                            while(Y_N=='Y'||Y_N=='y')
                                {
                                    fflush(stdin);
        clearscrean();
                                    printf("\nEnter the ID of the Trainer to be deleted: ");
                                    scanf("%s",id);
                                    Temp_file=fopen("tem.DAT","wb+");
                                    rewind(trainer_file);
                                    while(fread(&trainer,size_of_trainer_file,1,trainer_file)==1)
                                        {
                                            if(strcmp(trainer.ID,id)!=0)
                                            fwrite( &trainer, size_of_trainer_file, 1, Temp_file);
                                            else
                                            printf("\nThe Record has been Deleted Successfully.");
                                        }
                                    fclose(trainer_file);
                                    fclose(Temp_file);
                                    remove("trainers.DAT");
                                    rename("tem.DAT","trainers.DAT");
                                    trainer_file=fopen("trainers.DAT","rb+");
                                    printf("\nDelete another record?(Y/N): ");

                                    Y_N=getche();

                                }//check
                             break;
                             case '6':{
                                int count = 0;
                                        clearscrean();

                                                size_of_trainer_file=sizeof(trainer);
                                                rewind(trainer_file); // Reset file pointer to the beginning of the file

                                                // Read and display details of each trainee in the file
                                                while (fread(&trainer, size_of_trainer_file, 1, trainer_file) == 1) {
                                                count ++;
                                                }
                                                printf("\nNumber of Trainees: %d", count);
                                                getch(); // Wait for a key press before exiting


                                break;
                                }
                            case '0':
                                {
                                    fclose(trainer_file);
                                    clearscrean();
                                    menu();
                                }
                            break;
                        }
                    }
}//check
void Finance_data(){
FILE *trainee_file,*equipment_file,*trainer_file;
Trainee trainee;
Trainers trainer;
Gym_equipment_store equipment_store;

    char choice,Y_N;
    int trainee_file_size = sizeof(trainee);
    int equipment_store_file_size = sizeof(equipment_store);
    int trainer_file_size = sizeof(trainer_file);
    trainee_file=fopen("trainees.DAT","rb+");
    equipment_file=fopen("Gym_equipment_store.DAT","rb+");
            if(trainee_file==NULL)
                {
                    puts("\nSorry!! There is no file");
                    exit(1);
                }

            equipment_file=fopen("Gym_equipment_store.DAT","rb+");
            if(equipment_file==NULL)
                {
                    puts("\nSorry!! There is no file");
                    exit(1);
                }

        trainer_file=fopen("trainers.DAT","rb+");
        if(trainer_file==NULL)
        {
                puts("\nSorry!! There is no file");
                exit(1);
        }

    while(1)
        {
    clearscrean();
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|****************************************************************");
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf("FITNESS MANAGEMENT SYSTEM");
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("*****************************************************************|\n");
    printf("|**********************************************************************");
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf("Finance_Databe");
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("**********************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                1.Total Revenue                                                                         ||\n");
    printf("||                                                                2.Total Expenses                                                                        ||\n");
    printf("||                                                                3.Net Income                                                                            ||\n");
    printf("||                                                                0.Main menu                                                                             ||\n");
    printf("||                                                                Enter your choice:                                                                      ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||                                                                                                                                                        ||\n");
    printf("||********************************************************************************************************************************************************||\n");
    printf("||*****************************************************************************************************************************");
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf("ABDELAZIZ BARHOUMI");
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("*********||\n");
    printf("||********************************************************************************************************************************************************||\n");
    printf("||********************************************************************************************************************************************************||\n");
            choice=getche();
            switch(choice)
                {
                             case '1': {
                                float count = 0;
                                clearscrean();
                                rewind(trainee_file);
                                while (fread(&trainee, sizeof(trainee), 1, trainee_file) == 1) {
                                    count += trainee.full_amount;
                                }
                                printf("\nTotal Amount of Revenue: %.2f", count);
                                getch(); // Wait for a key press before exiting
                                break;
                            }
                            case '2': {
                                float count1 = 0, count2 = 0;
                                clearscrean();
                                rewind(equipment_file);
                                while (fread(&equipment_store, sizeof(equipment_store), 1, equipment_file) == 1) {
                                    count1 += equipment_store.full_amount_of_tools;
                                }
                                rewind(trainer_file);
                                while (fread(&trainer, sizeof(trainer), 1, trainer_file) == 1) {
                                    count2 += trainer.salary;
                                }
                                printf("\nTotal Expenses from tools: %.2f", (count1));
                                printf("\nTotal Expenses from Salaries: %.2f", (count2));
                                printf("\nTotal Expenses: %.2f + %0.2f = %0.2f ", count1,count2,(count1 + count2));
                                getch(); // Wait for a key press before exiting
                                break;
                            }
                            case '3': {
                                float count1 = 0, count2 = 0, count = 0;
                                clearscrean();
                                rewind(trainee_file);
                                while (fread(&trainee, sizeof(trainee), 1, trainee_file) == 1) {
                                    count += trainee.full_amount;
                                }
                                printf("\nTotal Amount of Revenue: %.2f", count);
                                rewind(equipment_file);
                                while (fread(&equipment_store, sizeof(equipment_store), 1, equipment_file) == 1) {
                                    count1 += equipment_store.full_amount_of_tools;
                                }
                                printf("\nTotal Expenses from tools: %.2f", count1);
                                rewind(trainer_file);
                                while (fread(&trainer, sizeof(trainer), 1, trainer_file) == 1) {
                                    count2 += trainer.salary;
                                }
                                printf("\nTotal Expenses from Salaries: %.2f", count2);
                                printf("\nNet Income: %.2f - %0.2f - %0.2f = %0.2f", count,count1,count2,count - count1 - count2);
                                getch(); // Wait for a key press before exiting
                                break;

                            }


                            case '0':
                                {
                                    fclose(trainee_file);
                                    clearscrean();
                                    menu();
                                }
                            break;
                  }
                }
}
void gym_equipment_store()
{
    FILE *   gym_equipment_store_data,*temporary_file;
    char a,m;
    char i_name[40];
    int flag=0,j;
    long int recsize2;
    Gym_equipment_store  gym_equipment_store;
       gym_equipment_store_data=fopen("Gym_equipment_store.DAT","rb+");
    if(gym_equipment_store_data==NULL)
        {
            gym_equipment_store_data=fopen("Gym_equipment_store.DAT","wb+");
            if(gym_equipment_store_data==NULL)
                {
                    puts("\nSorry!! Cannot open file");
                    exit(1);
                }
        }
    recsize2=sizeof(gym_equipment_store);
    while(1)
        {
             HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            clearscrean();
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|**********************************************************************************************************************************************************|\n");
    printf("|****************************************************************");
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf("FITNESS MANAGEMENT SYSTEM");
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("*****************************************************************|\n");
    printf("|*******************************************************************");
    SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
    printf("Gym_equipment_store");
    SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
    printf("********************************************************************|\n");
            printf("|**********************************************************************************************************************************************************|\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                   1.Enter a New Entry                                                                  ||\n");
            printf("||                                                                   2.Modify Existing                                                                    ||\n");
            printf("||                                                                   3.Search an Entry                                                                    ||\n");
            printf("||                                                                   4.Listing of records                                                                 ||\n");
            printf("||                                                                   5.Delete an Entry                                                                    ||\n");
            printf("||                                                                   0.Main Menu                                                                          ||\n");
            printf("||                                                                   Enter your choice:                                                                   ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||                                                                                                                                                        ||\n");
            printf("||********************************************************************************************************************************************************||\n");
            printf("||*****************************************************************************************************************************");
            SetConsoleTextAttribute(hConsole, BACKGROUND_BLUE | BACKGROUND_INTENSITY);
            printf("ABDELAZIZ BARHOUMI");
            SetConsoleTextAttribute(hConsole, BACKGROUND_RED | BACKGROUND_GREEN | BACKGROUND_BLUE | BACKGROUND_INTENSITY | FOREGROUND_BLUE);
            printf("*********||\n");
            printf("||********************************************************************************************************************************************************||\n");
            printf("||********************************************************************************************************************************************************||\n");
            m=getche();
            switch(m)
                {
                    case '1':
                    clearscrean();
                    fseek(gym_equipment_store_data,0,SEEK_END);
                    a='Y';
                    while(a=='Y'||a=='y')
                        {
                            fflush(stdin);
        clearscrean();
                            x:
                            printf("\n\n\nEnter the Name of the Item: ");
                            gets(i_name);
                            rewind(gym_equipment_store_data);
                            while(fread(&gym_equipment_store,recsize2,1,gym_equipment_store_data)==1)
                                {
                                    if(strcmp(gym_equipment_store.name,i_name)==0)
                                        {
                                            flag=1;
                                            printf("\n\t\tTHIS ITEM ALREADY EXISTS. ENTER ANOTHER ONE");
                                            goto x;
                                        }
                                }
                            if(flag==0||fread(&gym_equipment_store,recsize2,1,gym_equipment_store_data)==0)
                                {
                                    fseek (gym_equipment_store_data,0,SEEK_END);
                                    strcpy(gym_equipment_store.name,i_name);

                                    printf("\nEnter the Date of purchase: ");
                                    scanf("%s",gym_equipment_store.Date_of_purchase);

                                    printf("\nEnter the Quantity of the Item: ");
                                    scanf("%d",&gym_equipment_store.Quantity_of_the_Item);
                                    printf("\nEnter the price of One Item: ");
                                    scanf("%f",&gym_equipment_store.price);
                                    gym_equipment_store.full_amount_of_tools=gym_equipment_store.Quantity_of_the_Item*gym_equipment_store.price;
                                    printf("\nThe amount of %d %s is = %0.2f",gym_equipment_store.Quantity_of_the_Item,gym_equipment_store.name,gym_equipment_store.full_amount_of_tools);
                                    fwrite( &gym_equipment_store, recsize2, 1, gym_equipment_store_data);
                                    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------");
                                    printf("\nWant to add entry of the another Item(Y/N): ");

                                    a=getche();
                                }
                            }
                        break;
                    case '2':
                        clearscrean();
                        a='Y';
                        while(a=='Y'||a=='y')
                            {
                                fflush(stdin);
        clearscrean();
                                printf("\nEnter the name of the item to modify: ");
                                gets(i_name);
                                rewind(gym_equipment_store_data);
                                while(fread(&gym_equipment_store,recsize2,1,gym_equipment_store_data)==1)
                                    {
                                        if(strcmp(gym_equipment_store.name,i_name)==0)
                                            {

                                                printf("\nEnter the new name of the Item: ");
                                                scanf("%s", gym_equipment_store.name);
                                                printf("\nEnter the new Date of purchase: ");
                                                scanf("%s",gym_equipment_store.Date_of_purchase);
                                                printf("\nEnter the new Quantity of the Item: ");
                                                scanf("%d",&gym_equipment_store.Quantity_of_the_Item);
                                                printf("\nEnter the new price of One Item: ");
                                                scanf("%f",&gym_equipment_store.price);
                                                gym_equipment_store.full_amount_of_tools=gym_equipment_store.Quantity_of_the_Item*gym_equipment_store.price;
                                                printf("\nThe new amount of %d %s is = %0.2f",gym_equipment_store.Quantity_of_the_Item,gym_equipment_store.name,gym_equipment_store.full_amount_of_tools);
                                                fseek(gym_equipment_store_data,-recsize2,SEEK_CUR);
                                                fwrite( &gym_equipment_store, recsize2, 1, gym_equipment_store_data);
                                                break;
                                            }
                                    }
                                printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------");
                                printf("\nModify another Record(Y/N): ");

                                a=getche();
                            }
                        break;
                    case '3':
                        clearscrean();
                        a='Y';
                        while(a=='Y'||a=='y')
                            {
                                fflush(stdin);
        clearscrean();
                                printf("\nEnter name of item to search: ");
                                gets(i_name);
                                rewind(gym_equipment_store_data);
                                while(fread(&gym_equipment_store,recsize2,1,gym_equipment_store_data)==1)
                                    {
                                        if(strcmp(gym_equipment_store.name,i_name)==0)
                                            {
                                                printf("\nThe Name of the Item: ");
                                                puts(gym_equipment_store.name);
                                                printf("\nEnter the Date of purchase: %s",gym_equipment_store.Date_of_purchase);
                                                printf("\nQuantity of the Item: %d",gym_equipment_store.Quantity_of_the_Item);
                                                printf("\nPrice of One Item: %0.2f",gym_equipment_store.price);
                                                gym_equipment_store.full_amount_of_tools=gym_equipment_store.Quantity_of_the_Item*gym_equipment_store.price;
                                                printf("\nThe amount of %d %s is = %0.2f",gym_equipment_store.Quantity_of_the_Item,gym_equipment_store.name,gym_equipment_store.full_amount_of_tools);
                                            }
                                    }
                                printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------");
                                printf("\nSearch another Entry(Y/N): ");

                                a=getche();
                            }
                        break;//check
                            case '4':
                            clearscrean();
                            printf(" S.No.\t\t\tITEM\t\t\t     DOP\t\t\tQUANTITY\t\t\tPRICE\t\t\tAMOUNT\n");
                    printf("------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                            rewind(gym_equipment_store_data);
                            j = 1;
                            while(fread(&gym_equipment_store,recsize2,1,gym_equipment_store_data)==1)
                                {
                                    printf("  %d\t\t\t%s\t\t %s\t\t\t   %d\t\t\t\t%0.2f\t\t        %0.2f\n",j,gym_equipment_store.name,gym_equipment_store.Date_of_purchase,gym_equipment_store.Quantity_of_the_Item,gym_equipment_store.price,gym_equipment_store.full_amount_of_tools);
                                    j++;
                                }float count1;
                                rewind(gym_equipment_store_data);
                                while (fread(&gym_equipment_store, sizeof(gym_equipment_store), 1, gym_equipment_store_data) == 1) {
                                    count1 += gym_equipment_store.full_amount_of_tools;
                                }
                                printf("------------------------------------------------------------------------------------------------------------------------------------------------------------\n");
                            printf(" THE TOTAL  \t\t\t \t\t\t     \t\t\t      \t\t\t     \t\t\t        %0.2f",count1);
                            getch();
                            break;
                        case '5':
                            clearscrean();
                            a='Y';
                            while(a=='Y'||a=='y')
                                {
                                    fflush(stdin);
        clearscrean();
                                    printf("\nEnter the name of the Item to be deleted: ");
                                    gets(i_name);
                                    temporary_file=fopen("temporary.DAT","wb+");
                                    rewind(gym_equipment_store_data);
                                    while(fread(&gym_equipment_store,recsize2,1,gym_equipment_store_data)==1)
                                        {
                                            if(strcmp(gym_equipment_store.name,i_name)!=0)
                                            fwrite( &gym_equipment_store, recsize2, 1, temporary_file);
                                            else
                                            printf("\nThe Record has been Deleted Successfully.");
                                        }
                                        fclose(gym_equipment_store_data);
                                        fclose(temporary_file);
                                        remove("Gym_equipment_store.DAT");
                                        rename("temporary.DAT","Gym_equipment_store.DAT");
                                        gym_equipment_store_data=fopen("Gym_equipment_store.DAT","rb+");
                                        printf("\nDelete another record?(Y/N): ");

                                        a=getche();
                                    }
                            case '0':
                                    fclose(gym_equipment_store_data);
                                    clearscrean();
                                    menu();
                            break;
                        }
                    }
}
void print_padded_name(int numchar, const char *name) {
    char padded_name[numchar + 1]; // Allocate enough space for numchar characters + null terminator
    size_t len = strlen(name);

    // Copy the name to the padded_name buffer, limiting to numchar characters
    strncpy(padded_name, name, numchar);

    // If the name is shorter than numchar, pad with spaces
    if (len < numchar) {
        memset(padded_name + len, ' ', numchar - len);
    }

    // Null-terminate the padded_name buffer
    padded_name[numchar] = '\0';

    // Print the padded name
    printf("%s", padded_name);
}
void print_name_without_trailing_spaces(const char *name) {
    // Create a temporary buffer to store the modified name
    char modified_name[strlen(name) + 1]; // Add 1 for the null terminator

    // Copy the original name into the temporary buffer
    strcpy(modified_name, name);

    // Remove trailing spaces from the temporary buffer
    int len = strlen(modified_name);
    while (len > 0 && modified_name[len - 1] == ' ') {
        modified_name[--len] = '\0';
    }

    // Print the modified name
    printf("%s", modified_name);
}
