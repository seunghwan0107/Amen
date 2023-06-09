#include <iostrem>
#include<conio.h>
#include<Window.h>

int print_title_screen()
{
	std::cout << " ****************************************** "<<std::endl;
	   std::cout << " * * " << std::endl;
    std::cout << " * * " << std::endl;
    std::cout << " * 지렁이 게임 * " << std::endl;
    std::cout << " * (뱀에게 물림) * " << std::endl;

# ifdef debug
    std::cout << " * - 애니메이션 모드 - * " << std::endl;
# if
    std::cout << " * * " << std::endl;
# endif
    std::cout << " * 1. 게임 시작 * " << std::endl;
    std::cout << " * 2. 게임 설명 * " << std::endl;
    std::cout << " * 3. 게임 이름 보기 * " << std::endl;
    std::cout << " * 4. 게임 종료 (esc) * " << std::endl;
    std::cout << " ****************************************** " << std::endl;

    return  0 ;
}

void  gotoxy ( int x, int y) {
    
    COORD pos = { x,y };
   
    SetConsoleCursorPosition ( GetStdHandle (STD_OUTPUT_HANDLE), pos);
}

int  print_game_screen ( int stage_width, int stage_height)
{
    gotoxy ( 5,5 ) ;

    std::cout << " ^^ " ;



   return  0 ;
}


int  print_introduction_screen ()
{
    std::cout << " ****************************************** " << std::endl;
    std::cout << " 타이틀화면으로 찾으시겠습니까? (Y/N) " << std::endl;
    return  0 ;
}

int main ()
{

    int game_state = 0 ;
    int is_game_running = 1 ;

    while (is_game_running)
    {
        char key_input = ' 0 ' ;
        switch (game_state)
        {
         case 0 :
            print_title_screen ();
            key_input = _getch ();
            switch (key_input)
            {
            case  ' 1 ' :
                game_running = 1 ;
                break ;
            case  ' 2 ' :
                game_running = 2 ;
                break ;
            case  ' 3 ' :
                break ;
            case  ' 4 ' :
                is_game_running = 0 ;
                break ;
            case  27 :
                is_game_running = 0 ;
                break ;
            default :
                break ;
            }
            break ;
        case  1 :
            print_game_screen ( 10 , 10 );
            key_input = _getch ();
        case  2 :
            print_introduction_screen ();
            key_input = _getch ();
            switch (key_input)
            {
            case  ' y ' :
                game_running = 0 ;
                break ;
            case ' n ' :
                break ;
            default :
                break ;
            }
            break ;

            default :
            break ;
        }


    }

           return:  0 ;
}

