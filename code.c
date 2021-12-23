 #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <unistd.h>
    #define BUFFER 64
    
    /* List structure declared to store our data. */
    typedef struct list {
        int *customer_code;
        char name;
        int age;
        int tin;
        char email;
        double phone;
        char country;
        struct list *next;
    } Data;
    
    /* Prototype of data handling functions. */
    int *data_start(int *customer_code, char name, int age, int tin, char email, double phone, char country);
    int *insert_data(Data *data, int *customer_code, char name, int age, int tin, char email, double phone, char country);
    int *edita_dados(Dados *dados, int item, int *customer_code, char name, int age, int tin, char email, double phone, char country);
    void display_data(Data *data);
    void data_search(Data *data, char *key);
    int *delete_data(Data *data);
    int check_empty(Data *data);
    
    /* Prototype of menu functions.*/
    void insert(void);
    void edit(void);
    void displays(void);
    void search(void);
    void delete(void);
    
    /* Initializes the main data structure. */
    int *main = NULL;
    
    /* Cria a nova lista apontando o proximo no para NULL. */
    int *data_start(int *cliente_codigo, char name, int age, int tin, char email, double phone, char country) {
    
        Data *new;
    
        new = (Data *) malloc(sizeof (Data));
        new->customer_code = (int *) malloc(strlen(customer_code) + 1);
        strncpy(new->customer_code, customer_code, strlen(customer_code) + 1);
        new->name = name;
        new->age = age;
        new->tin = tin;
        new->email = email;
        new->phone = phone;
        new->country = country
        new->next = NULL;
    
        return new;
    }
    
    /* As the list is no longer empty, we point the next node to the previous list. */
    int *insert_data(Data *data, int *customer_code, char name, int age, int tin, char email, double phone, char country) {
    
        Data *new;
    
        new = (Data *) malloc(sizeof (Data));
        new->customer_code = (int *) malloc(strlen(customer_code) + 1);
        strncpy(new->customer_code, customer_code, strlen(customer_code) + 1);
        new->name = name;
        new->age = age;
        new->tin = tin;
        new->email = email;
        new->phone = phone;
        new->country = country
        new->next = Data;
    
        return new;
    }
    
    /* Cycles through all fields in the list and prints until the next pointer reaches NULL. */
    int *edita_dados(Data *data, int item, int *customer_code, char name, int age, int tin, char email, double phone, char country) {
    
        int i = 0;
        /*while(data != NULL && i <= item) {
                data = data->next;
        }*/
    
        while (data->next != NULL && i < item) {
            data = data->next;
            ++i;
        }
    
        if (data != NULL && i == item) {
            strcpy(data->customer_code, customer_code);
            new->name = name;
        data->age = age;
        data->tin = tin;
        data->email = email;
        data->phone = phone;
        data->country = country
        }
    
        printf("Successfully edited.\n");
       
    }
    
    /* Cycles through all fields in the list and prints until the next pointer reaches NULL. */
    void display_data(Data *data) {
    
        printf("Registration Report\n\n");
    
        printf("------------------------\n");
    
        for (; data != NULL; data = data->next) {
            printf("Name: %c\n", data->name);
            printf("Age: %d\n", data->age);
            printf("TIN: %d\n", data->tin);
            printf("Email: %c\n", data->email);
            printf("Phone: %lf\n", data->phone);
            printf("Country: %c\n", data->country);
            printf("------------------------\n");
        }
       
    }
    
    /* Cycle through each end comparing the name to the key. */
    void data_search(Data *data, char *key) {
    
        int find = 0;
    
        printf("registration data\n\n");
        for (; data != NULL; data = data->next) {
            if (strcmp(key, data->customer_code) == 0) {
    
                printf("------------------------\n");
               printf("Name: %c\n", data->name);
            printf("Age: %d\n", data->age);
            printf("TIN: %d\n", data->tin);
            printf("Email: %c\n", data->email);
            printf("Phone: %lf\n", data->phone);
            printf("Country: %c\n", data->country);
                printf("------------------------\n");
                find++;
            }
        }
    
        if (find == 0)
            printf("No results found.\n\nPress a key to continue.\n\n");
        else
            printf("%d records were found.\n\nPress a key to continue.\n\n", find);
    
       
    }
    
    /* Deletes the last record entered. */
    int *delete_data(Data *data) {
    
        Data *new;
    
        new = data->next;
    
        free(data->customer_code);
        free(data);
    
        printf("The last record entered was deleted successfully!\n");
        
        return new;
    }
    
    /* it's worth checking whether the list is NULL or not. */
    int check_empty(Data *data) {
    
        if (data == NULL) {
            printf("List empty!\n");
           
            return 1;
        } else
            return 0;
    }
    
    /* Gets the necessary data to call the data handling functions. */
    void insert(void) {
        
        int intend_tin;
        Data d;
    
        d.customer_code = (char *) malloc(BUFFER);
    
        printf("Client Code:  ");
        scanf("%d", d.customer_code);
    
        printf("Type your name: ");
        scanf("%s", &d.name);
    
        printf("\nEnter your age:");
        scanf("%d", &d.age);
    
        printf("\nEnter your email:");
        scanf("%s", &d.email);
    
        printf("\nEnter your mobile number: ");
        scanf("%lf", &d.phone);
    
        printf("TIN present? ");
        scanf("%s", &intend_tin);
        if (intend_tin == 's' || intend_tin == 'S') {
            while (1) {
                printf("\n\tEnter your TIN: ");
                scanf("%d", &d.tin);
    
                if (&d.tin >= 999999999) {
                    printf("\tNumber with more than 9 digits is not allowed. "
                             "Please try again.");
    
                } else if (&d.tin <= 99999999) {
    
                    printf("\tNumber with less than 9 digits is not allowed. "
                             "Please try again.");
                } else
                    break;
            }
            printf("\tValid.\n");
        } else {
            printf("TIN not entered\n");
        }
    
        printf("What is your country? ");
        scanf("%s", &d.country);
    
    
        if (main == NULL)
            main = data_start(d.customer_code, d.name, d.age, d.email, d.phone, d.tin, d.country);
        else
            main = insert_data(main, d.customer_code, d.name, d.age, d.email, d.phone, d.tin, d.country);
    }
    
    /* Gets the necessary data to call the data handling functions. */
    void edit(void) {
    
    
        int item = 0;
        Data d;
        d.customer_code = (char *) malloc(BUFFER);
        printf("Enter the customer code you want to change the data:");
        scanf("%d", d.customer_code);
        printf("Enter the item to edit:\n--> ");
        scanf("%d", &item);
    
        printf("\Enter your email:");
        scanf("%s", &d.email);
    
        printf("\nEnter your mobile number: ");
        scanf("%lf", &d.phone);
    
        if (main == NULL)
            main = data_start(d.customer_code, d.name, d.age, d.email, d.phone, d.tin, d.country);
        else
            edit_data(main, item, d.customer_code, d.name, d.age, d.email, d.phone, d.tin, d.country);
    
    }
    
    
    void displays(void) {
    
        if (!check_empty(main))
            display_data(main);
    
    }
    
    void search(void) {
    
        Data d;
        if (!check_empty(main)) {
    
            d.customer_code = (char *) malloc(BUFFER);
    
            printf("Enter the name to search:\n--> ");
            scanf("%d", d.customer_code);
    
            data_search(main, d.customer_code);
            
        }
    }
    
    void delete(void) {
    
        if (!check_empty(main))
            main = delete_data(main);
    }
