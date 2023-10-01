#include <iostream>
using namespace std;
/**
 * \file  velha.cpp
 */

 
#include "velha.hpp"

/** 
 * @brief verifica situacao do jogo da velha  
 * @author Programador 
 * @param  velha descreve o parametro
 * 
 *  Descrever o que a funcao faz
 */ // A função verifica, primeiramente, linha por linha, vendo se o X ou o O aparece 3 vezes. 
 //após isso, o mesmo ocorre nas colunas, e depois nas diagonais, sendo que a função retorna os números corretos
 //do resultado da velha.

int VerificaVelha( int velha[3][3] ){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>velha[i][j];
        }
    //caso impossível(-2)
    int x = 0 ;
    int o = 0;
    for (int line = 0; line < 3;line++){
        for (int column = 0; column < 3; column++){
            if (velha[line][column]==1) {
                x = x+1;
            } else if (velha[line][column]==2) {
                o = o+1;}
    if (o>x || x>(o+1)){
        return -2;}
    }}
    }
//verif linhas
for(int line=0;line<3;line++){
    if (velha[line][0]==velha[line][1] && velha[line][1]==velha[line][2] && velha[line][2]==1){
        return 1;
        break;}
    else if (velha[line][0]==velha[line][1] && velha[line][1]==velha[line][2] && velha[line][2]==2){
        return 2;
        break;}
    //empate
    else{
        return -1;
    }
    }
//verif colunas
for(int column=0;column<3;column++){
    if (velha[0][column]==velha[1][column] && velha[1][column]==velha[2][column] && velha[2][column]==1){
        return 1;
        break;}
    else if (velha[0][column]==velha[1][column] && velha[1][column]==velha[2][column] && velha[2][column]==2){
        return 2;
        break;}
    else{
        //empate
        return -1;
    }
    }
//diagonais
    if (velha[0][0]==velha[1][1] && velha[1][1]==velha[2][2] && velha[2][2]==1){
        return 1;}
    else if (velha[0][2]==velha[1][1] && velha[1][1]==velha[2][0] && velha[2][2]==1){
        return 1;}
    else if (velha[0][0]==velha[1][1] && velha[1][1]==velha[2][2] && velha[2][2]==2){
        return 2;}
    else if (velha[0][2]==velha[1][1] && velha[1][1]==velha[2][0] && velha[2][2]==2){
        return 2;}

//retorno da velha()
return 0;

}
