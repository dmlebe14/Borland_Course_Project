# Borland_Course_Project
The course project made by me during my second semester (SS 2018) at the RUDN University (Moscow, Russia) using Borland C++ Builder.

Analysis of the Task:
24. Find a subset of k numbers in a given sequence of numbers whose sum yields the maximum value from the set {ai = ai-1 + i, a0 = 0; i = 0,1, …};
45. Selection sort in ascending order.

In this task, you are required to find a subset of k (where k is input by the user) elements, the sum of which matches one of the numbers in the known set {ai = ai-1 + i, a0 = 0; i = 0,1, …}. If there are multiple such subsets, the user should be shown the one whose elements sum up to the largest number.

The solution to this task begins with creating a StringGrid table, where the elements of the sequence (elements of a random array, which cannot exceed 30 due to extensive computation time) will be stored, as well as the elements from the known set {ai = ai-1 + i, a0 = 0; i = 0,1, …}, the sought-after subset, and the sum of its elements. Additionally, the Edit control is used to set the range of possible values for sequence members and their count.

The output of all the necessary sequences is facilitated by buttons (Button), which:
1) If they are primary, are conveniently located above the corresponding columns of the StringGrid. "Crear" button - above the 0th column; "Formula" button - above the 1st column; "Secuencia" button - above the 2nd column, and "Suma" button - above the 3rd column.
2) If they are auxiliary, they are placed below the StringGrid. These are the "Sort," "Mix," and "Descargar" buttons.

After clicking "Crear" (Spanish for "Create"), a random array is generated based on the specified range of values and the number of elements. Simultaneously, the array is saved to a text file.

Clicking "Formula" will randomly display the elements from the known set {ai = ai-1 + i, a0 = 0; i = 0,1, …} in the StringGrid. The number of elements displayed in the StringGrid will match the number of elements in the random set.

Clicking "Secuencia" (Spanish for "Sequence") will display, both in the StringGrid and in a text file, the sought-after sequence: the one whose elements sum up to one of the elements in the set {ai = ai-1 + i, a0 = 0; i = 0,1, …}. As mentioned earlier, if there are multiple such sequences, the one whose elements sum up to the largest number from the set will be displayed. If there are multiple sets with the same sum, the one with indices closer to zero will be displayed. The final sum of the elements in the sought-after sequence will also be visible under "Suma" (Spanish for "Sum").

Clicking "Sort" will sort the random array, generated after clicking "Crear," in ascending order using the selection sort method.

Clicking "Mix" will perform a random permutation of the elements in the random array. The elements remain the same but are rearranged.

Clicking "Descargar" (Spanish for "Download") will load the array from the text file. Subsequently, you can work with it in the same way as if it were created by clicking "Crear." Note that when "Descargar" or "Crear" is pressed, the columns under the "Secuencia" and "Suma" panels are cleared if they were previously filled.

If you attempt to press other buttons (except "Descargar") without first creating a random array (by not clicking "Crear"), a message will appear on the screen stating "It is necessary to create an array". It seems illogical to try to perform actions on an array that doesn't exist yet. To make these actions possible, you need to click either "Crear" or "Descargar."

Additionally, it is possible to change the value of any element in the random array and continue working with the new value. There is also an image containing my surname, first name, patronymic, variant, and group.

P.S.
Although the buttons have Spanish captions and the explanation provided here is in English, all the popping messages are in Russian due to me having studied for my Bachelor degree in Moscow.
I was studying Spanish, so decided to play a little and English is for international transparency.
