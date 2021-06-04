#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char const *argv[])
{
     //1
     ofstream file("C:/projects/lesson_6/Anecs.txt");
     ofstream file2("C:/projects/lesson_6/stihi.txt");
     file << "A blonde walks into the police department looking for a job. The officer wants to ask her a few questions.... Officer: What's 2+2?\n";
     file << "Blonde: Ummmmm... 4! Officer: What's the square root of 100? Blonde: Ummmm... 10! Officer: Good! Now, who killed Abraham\n";
     file << "Lincoln? Blonde: Ummmm... I dunno. Officer: Well, you can go home and think about it. Come back tomorrow. The blonde goes\n";
     file << "home and calls up one of her friends, who asks her if she got the job. The blonde says, excitedly, Not only did I get the job, I'm\n";
     file << "already working on a murder case!\n";
     file << "\n";
     file.close();

     file2 << "Two roads diverged in a yellow wood,\n";
     file2 << "And sorry I could not travel both\n";
     file2 << "And be one traveler, long I stood\n";
     file2 << "And looked down one as far as I could\n";
     file2 << "To where it bent in the undergrowth.\n";
     file2 << "\n";
     file2 << "Then took the other, as just as fair,\n";
     file2 << "And having perhaps the better claim,\n";
     file2 << "Because it was grassy and wanted wear;\n";
     file2 << "Though as for that the passing there\n";
     file2 << "Had worn them really about the same.\n";
     file2.close();


    //2
{
    ifstream file("C:/projects/lesson_6/Anecs.txt");
    ifstream file2("C:/projects/lesson_6/stihi.txt");
    ofstream file3("C:/projects/lesson_6/soed.txt");

    char *ch = ((char*) malloc(50 * sizeof(string)));
    file.get(*ch);
    while(!file.eof())
       {
           file3<<ch;
           file.get(*ch);
       }
              file2.get(*ch);
              while(!file2.eof())
          {
               file3<<ch;
               file2.get(*ch);
          }
    }
    return 0;
}
