#include "SDL.h"
#include "SDL_image.h"
#include <stdio.h>
#include <Windows.h>


int main(int argc, char* argv[]) {
   
    SDL_Init(SDL_INIT_VIDEO);  //Initialize the SDL library.

    SDL_Window *window = SDL_CreateWindow("Title", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, SDL_WINDOW_SHOWN); // SDL_WINDOW_SHOWN meaning is ignore this flag

    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);  // arka plan� window isimli pencere i�in olu�turuyoruz.

    //SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);  //arka plan� k�rm�z� ayarlad�k. rgb ve alpha de�eri. varsay�lan olan siyaht�r , de�er atansa bile default olan temizlenmeli

    //SDL_RenderClear(renderer);  // default arka plan� temizledik

    //SDL_RenderPresent(renderer);  // ayarlanm�� arka plan verisini �izdirdik

    SDL_Delay(3000);  // 3 saniye boyunca ekranda kals�n

    return 0;
}