//***************************************************************************
// Sorting Program
// Programer: Darien Salazar
// Completed: 12/8/24
// Status: Complete.
//
// Purpose: The program will allow the user to input up to 10 songs and the program
//          will sort them in order. After sorting, it will display them to the user.
//*************************************************************************

#include <iostream>     // input/output declarations
#include <iomanip>      // i/o manupulator declarations
#include <string>       // Allows for the use of string in program.

using namespace std;

struct newSong {
    string title;       //Creates a title for each song.
    string artist;      //Creates an artist holder for each song.
};

//Function prototypes declared.
void inputInfo(newSong[], int);
void selectionSort(newSong[], int);
void displayPlaylist(newSong[], int);

int main () {

    newSong playlist[10];                                   //Initializes an array of 10 elements.
    int arrSize = sizeof(playlist)/sizeof(playlist[0]);     //Gets the size of the array.

    inputInfo(playlist, arrSize);
    selectionSort(playlist, arrSize);
    displayPlaylist(playlist, arrSize);

    return 0;
}

//This function has a loop that will prompt the user to enter the name of the artist as well as the title of the song.
void inputInfo(newSong arr[], int size) {

    // The loop will ask the user for the tile and artist of the song. It will loop as many time as the size of the array.
    for (int i = 0; i < size; i++) {

        cout << "Enter title: ";                    //Prompt user to enter title of song.
        getline(cin, arr[i].title);            //Assignes the input to the title newSong member.    

        cout << "Enter artist: ";                   //Prompt user to enter artist of song.
        getline(cin, arr[i].artist);           //Assignes the input to the title newSong member.   

        cout << "\n";
    }
}

//This function will take the playist array and go through each element and sort it based on the artist name.
void selectionSort(newSong arr[], int size) {

    //This for loop iterates through each element on the playlist array.
    for (int i = 0; i < (size - 1); i++) {
        int min = i;        //Set the "lowest" value to the first element in the array.

        //This inner loop does the comparason of elements.
        for (int j = (i + 1); j < size; j++) {                  //We set the statring point j = to the secont element in playlist instead of the first element.

            //Here the comparason happens. We compare the current artist name in the j array to the artist name stored in min. if the value is lower, a swap occurs
            //and the new value replaces the vprevious value stored in min. 
            if (arr[j].artist < arr[min].artist) {      
                min = j;
            }
        }

        //The if statement actually does the swap action. If the int value in min is not the same as the int value in i, we swap the artist name and title with 
        //the mew 
        if(min != i) {
            string tempArtist = arr[i].artist;      //Temporary holder for the artist name.
            string tempTitle = arr[i].title;        //Temporary holder for the title name.

            arr[i].artist = arr[min].artist;        //Swapping action occurs
            arr[i].title = arr[min].title;

            arr[min].artist = tempArtist;           //Assigning action occurs here.
            arr[min].title = tempTitle;
        }
    }
}

//This function will just display the sorted list to the user.
void displayPlaylist(newSong arr[], int size) {
    cout << "Artisit:\t\t\t\tTitle:" <<  endl;
    cout << "==========================================" << endl;

    //The for loop goes through each struct element and takes the artist and title name.
    for (int i = 0; i < size; i++) {
        cout << arr[i].artist << " \t\t\t\t" << arr[i].title << endl;       //Displays the artist and title of i song.
    }
}