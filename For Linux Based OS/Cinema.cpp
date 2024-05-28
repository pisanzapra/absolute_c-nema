#include "Cinema.h"

using namespace std;

Cinema::Cinema() 
{
    movies = 
    {
        {"Tired Straits: Telegraph Road", "2h 15m", "Adventure, Western", 85},
        {"Lobotomy Codesen 0", "1h 45m", "Animation, Comedy", 78},
        {"YaKuze 0.5", "2h 00m", "Action, Romance, Drama", 83},
        {"21st Century Schizoid Man: Crimson King in 55 Years", "2h 00m", "Biography, Documentary, Music", 81},
        {"I'll 'C' You There Tomorrow Part 1", "2h 00m", "Romance, Drama", 80},
        {"???", "?h ??m", "??", 00},
    };

    seats = vector<vector<char>>(5, vector<char>(10, 'X'));
}

void Cinema::displayMovies()
{
    cout << "Available movies:\n";
    for (int i = 0; i < movies.size(); i++)
    {
        cout << i + 1 << ". " << movies[i].title << "\n";
    }
}

void Cinema::displayMovieInfo(int movieIndex)
{
    const Movie& movie = movies[movieIndex];
    cout << "\nTitle: " << movie.title
         << "\nDuration: " << movie.duration
         << "\nGenre: " << movie.genre
         << "\nScore: " << movie.score << " / 100\n\n";
}

void Cinema::displaySeats()
{
    cout << "Current seat arrangement (X = available, O = booked):\n";
    for (int i = 0; i < seats.size(); i++)
    {
        for (int j = 0; j < seats[i].size(); j++)
        {
            cout << seats[i][j] << ' ';
        }
        cout << '\n';
    }
}

bool Cinema::bookSeat(int row, int col)
{
    if (seats[row][col] == 'X')
    {
        seats[row][col] = 'O';
        return true;
    }
    return false;
}


void Cinema::playStraits()
{
    ifstream file("straits.txt");
    if (!file.is_open())
    {
        cerr << "Failed to open the file.\n";
        return;
    }

    string line;
    while (getline(file, line))
    {
        cout << line << endl;
        if (line.find("*-*-*-*-*-*-*-*-*-*-*-* TRAILER") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(2));
        }
        else if (line.find("Tired Straits 2") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
        }
        else if (line.find("There's so many different worlds") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("So many different suns.") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("And we have just one world.") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("But we live in different ones...") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("This is a sequel to") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
        }
        else if (line.find("Coming In") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(7));
        }
        else if (line.find("*-*-*-*-*-*-*-*-*-*-*-*-*-* END OF") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
            system("clear");
        }
        else if (line.find("*-*-*-*-*-*-*-*-*-*-*-*-*-*-* MOVIE") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(2));
        }
        else if (line.find("An old man walking by") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(7));
        }
        else if (line.find("That old man starts to") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        }
        else if (line.find("He stops to take") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
        }
        else if (line.find("He takes a look at") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
        }
        else if (line.find("He gets up. Continues to the") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        }
        else if (line.find("While walking he sees") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
        }
        else if (line.find("Our old man") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
        }
        else if (line.find("Then Knopfler") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("He sees a cemetary") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("♫ He used to like") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        }
        else if (line.find("While he is talking") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("Marc clears his throat") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        }
        else if (line.find("He lies parallel") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }

    }

    file.close();
}


//***********************


void Cinema::playLobotomy()
{
    ifstream file("lobotomy_codesen.txt");
    if (!file.is_open())
    {
        cout << "Failed to open the file.\n";
        return;
    }

    string line;
    while (getline(file, line))
    {
        cout << line << endl;
        if (line.find("The Strongest Compiler") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(4));
        }
        else if (line.find("As the King Of") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
        }
        else if (line.find("'Who Would Win? You Or Online GDB?'") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("Then Terminal replied:") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("'Would you") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
            system("clear");
        }
        else if (line.find("Terminal repiled:") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
	    system("clear");
        }
        else if (line.find("Then Terminal asked the") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(7));
            system("clear");
        }
        else if (line.find("The code then replied:") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
            system("clear");
        }
        else if (line.find("Stand Proud, You Are Strong") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
        }
        else if (line.find("Then Online GDB opened") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
            system("clear");
        }
        else if (line.find("To which the Terminal simply Replied:") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
        }
        else if (line.find("But the Terminal") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
            system("clear");
        }
        else if (line.find("The Second, Always") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
        }
        else if (line.find("The code was the executed one throughout PC and Web.") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
        }
    }

    file.close();
}


//**************


void Cinema::playYakuza()
{
    ifstream file("yakuze.txt");
    if (!file.is_open())
    {
        cerr << "Failed to open the file.\n";
        return;
    }

    string line;
    while (getline(file, line))
    {
        cout << line << endl;
        if (line.find("*-*-*-*-*-*-*-*-*-*-*-* TRAILER") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(2));
        }
        else if (line.find("YaKuze: Kageki") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("(a hyping") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(2));
            system("clear");
        }
        else if (line.find("The harsh faith of") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(2));
        }
        else if (line.find("Kiryu removes and throws his shirt. There is Nishikiyama in front him") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
        }
        else if (line.find("Then there's another scene,") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        //*****
        else if (line.find("Scene changes, Kiryu") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }        
        else if (line.find("In another scene; Reina crying,") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        }       
        else if (line.find("Kiryu punches a yakuza.") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(7));
        } 
        else if (line.find("(song gets dramatic again)") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("Weather is stormy,") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("(song gets faster)") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } 
        else if (line.find("Every Tojo Clan and family") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("Kiryu jumps out of the window.") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("Coming In 2025...") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("*-*-*-*-*-*-*-*-*-*-*-*-*-* END OF THE TRAILER ") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } 
        else if (line.find("********************** MOVIE") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("Aftermath the events") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("************** KAZUMA") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("The serene landscape stretches") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("******** YUMI") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("(nodding) Yes,") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } 
        else if (line.find("*BZZZZ BZZZZZ BZZZZZ*") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("Kiryu looks at the ") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("Mysterious Girl is talking so") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } 
        else if (line.find("Kiryu frowns") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("Oh yeah, but I'VE") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } 
        else if (line.find("Mysterious Girl: Stop teasin'") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } 
        else if (line.find("************** GORO") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } 
        else if (line.find("Kiryu quickly") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("Mirei? No, Majima and she") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("Makiko?, Makita?") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("Kiryu: What happened to Makoto, that blind girl?") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } 
        else if (line.find("****** MAKOTO") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("Majima: (his happy") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("Majima defends himself") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("Kiryu calls Nishida") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } 
        else if (line.find("Kiryu and Yumi turns") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("And it's Akira") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } 
        else if (line.find("************** AKIRA") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } 
        else if (line.find("Nishikiyama: Kiryu, where the hell") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("Nishikiyama: (looks angry)") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } 
        else if (line.find("*BWAKK! BWAAKKK!") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("Nishikiyama looks at Kiryu") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("'Later'") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } 
        else if (line.find("Nishida arrives.") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("(crying) 'Kiryu-san tell") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } 
        else if (line.find("'Ya quitin' ") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("'Is that so,") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        } 
        else if (line.find("Majima throws the") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("Kiryu shocked, he is") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 
        else if (line.find("----------------------------------- THE") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        } 



    }

}
//******************


void Cinema::playCrimson()
{
    ifstream file("crimson_king.txt");
    if (!file.is_open())
    {
        cerr << "Failed to open the file.\n";
        return;
    }

    string line;
    while (getline(file, line))
    {
        cout << line << endl;
        if (line.find("*Theatres showing*") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(2));
            system("clear");
        }
        else if (line.find("Crimson King was formed") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(10));
            system("clear");
        }
        else if (line.find("**** 21st Century") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(10));
        }
        else if (line.find("*Fripp practising inside") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(10));
            system("clear");
        }
        else if (line.find("*People - Crimson") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(8));
        }
        else if (line.find("*Facts of Life - Crimson King playing*") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(15));
            system("clear");
        }
        else if (line.find("*Facts of Life - Crimson King continues*") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(10));
            system("clear");
        }        
        else if (line.find("*Inside the theatre, on the ") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(10));
            system("clear");
        }
        else if (line.find("*On the theatre stage, Tony Lovin") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        }
        else if (line.find("*A Footage of Crimson King") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        }
        else if (line.find("*A crowd is seen on a") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("*Mel is taking a rest") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("*Pat Muscletto practising") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("*smirks* It's") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        }
        else if (line.find("******** We'll Be Right Back ********") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(5));
            system("clear");
        }
        else if (line.find("*drummers practising with the") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("*fast part of") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        }
        else if (line.find("Bruford showing his") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("Fripp: 'What's the") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        }
        else if (line.find("You might get f*cked.") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("*21st Century Schizoid Man playing in the") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("**** 21st Century Schizoid Man: Crimson King") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("		~FIN") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
       
       
 


    }

    file.close();
}


//**************************


void Cinema::playTomorrow()
{
    ifstream file("tomorrow.txt");
    if (!file.is_open())
    {
        cerr << "Failed to open the file.\n";
        return;
    }

    string line;
    while (getline(file, line))
    {
        cout << line << endl;
        if (line.find("*-*-*-*-*-*-*-*-*-*-*-* 다가오는") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(2));
        }
        else if (line.find("나는 내일 너를 'C'할 것이다: 부분 2") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("마침내, 유재상과 은주는 게임뿐만 아니라 자신들의 운명도") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
        }
        else if (line.find("*-*-*-*-*-*-*-*-*-*-*-*-*-* 트레일러 끝") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(3));
            system("clear");
        }
        else if (line.find("그라나다의 돌로 된 골목길을 걷는") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(8));
        }
        else if (line.find("세주, 어디 있어? 라고 물었지만,") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(8));
        }
        else if (line.find("그러나 사건은 복잡해지며") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(8));
        }
        else if (line.find("그러나 유재상과 은주 사이의 관계는") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(8));
            system("clear");
        }
        else if (line.find("한밤중, 유재상은 갑자기 깨어났다.") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(8));
        }
        else if (line.find("마침내, 유재상과 은주는 게임뿐만") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(8));
            system("clear");
        }
        else if (line.find("한 평화로운 봄 날, 서울의 한 동네에서") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(8));
        }
        else if (line.find("'별빛' 카페의 주인인 이지수는 여느") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(8));
        }
        else if (line.find("일이 이렇게 시작되었고, '별빛'") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(8));
            system("clear");
        }
        else if (line.find("밴드의 리더인 성준은 기타를 연주하고,") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(8));
        }
        else if (line.find("밴드의 리더인 성준은 기타를 연주하고, 그의") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(8));
        }
        else if (line.find("이제 그들은 성공의 길을 향해 나아가고 있었다.") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(8));
            system("clear");
        }
        else if (line.find("하지만 그들의 길은 항상 원활하지 않았다. 돈 문제") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(8));
        }
        else if (line.find("--------------------- FIN") != string::npos)
        {
            this_thread::sleep_for(chrono::seconds(8));
        }

    }

    file.close();
}


void Cinema::playStarWars()
{

	system("telnet towel.blinkenlights.nl");

}


void Cinema::start()
{
    displayMovies();
    int choice;
    int a;
    for(a = 0; a < 1; a++)
    { 
        cout << "Choose a movie by number: ";
        cin >> choice;
        
        if (choice < 1 || choice > movies.size())
        {
            cout << "Invalid choice. Please choose a valid option.\n";
            a--;
            continue;
        }
        
        int movieIndex = choice - 1;
        displayMovieInfo(movieIndex);

        int confirm;
        cout << "Do you want to book this movie? (1=yes / 2=no): ";
        cin >> confirm;
        if (confirm != 1)
        {
            cout << "Booking cancelled.\n";
            a--;
            continue;
        }
    }

    system("clear");
    int numPeople;
    cout << "How many people are booking?: ";
    cin >> numPeople;

    for (int i = 0; i < numPeople; ++i)
    {
        displaySeats();
        int row, col;
        cout << "Choose a row (1-5): ";
        cin >> row;
        cout << "Choose a seat in that row (1-10): ";
        cin >> col;

        if (row < 1 || row > 5 || col < 1 || col > 10)
        {
            cout << "Invalid seat choice, choose again.\n";
            --i;
            continue;
        }

        if (bookSeat(row - 1, col - 1))
        {
            cout << "Seat successfully booked.\n\n";
        }
        else
        {
            cout << "Seat is already booked, choose again.\n\n";
            --i;
        }
        system("clear");
    }

    cout << "Final seat arrangement:\n";
    displaySeats();
    cout << "Press 1 to continue: ";
    cin >> a;
    system("clear");
    cout << "3..." << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "2..." << endl;
    this_thread::sleep_for(chrono::seconds(1));
    cout << "1..." << endl;
    this_thread::sleep_for(chrono::seconds(1));
    system("clear");

    cout << "Get Ready. The Movie is Starting!!!\n";
    this_thread::sleep_for(chrono::seconds(2));
    system("clear");

    if (choice == 1)
    {
        playStraits();
    }	

    if (choice == 2)
    {
        playLobotomy();
    }

    if (choice == 3)
    {
        playYakuza();
    }

    if (choice == 4)
    {
        playCrimson();
    }

    if (choice == 5)
    {
        playTomorrow();
    }
    if (choice == 6)
    {
    	playStarWars();
    }
    
}

