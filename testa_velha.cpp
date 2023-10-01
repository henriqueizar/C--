

/**
 * \file testa_velha.cpp
 */

#include "velha.cpp"
#include "catch_amalgamated.hpp"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("teste","[single-file]"){
    int teste_1[3][3]={ {2,2,1},
                        {2,1,0},
                        {2,1,1}};

    int teste_2[3][3]={ {1,2,1},
                        {2,1,2},
                        {2,1,1}};
    
    int teste_3[3][3]={ {1,2,2},
                        {1,2,0},
                        {2,1,1}};
    
    int teste_4[3][3]={ {1,1,1},
                        {2,1,2},
                        {2,2,0}};

    int teste_5[3][3]={ {1,2,1},
                        {2,1,2},
                        {2,1,1}};
                
    int teste_6[3][3]={ {1,1,1},
                        {1,1,1},
                        {1,1,1}};
    
    int teste_7[3][3]={ {1,0,0},
                        {0,0,0},
                        {0,0,0}};
    
    
    REQUIRE(VerificaVelha(teste_1)==2);
    REQUIRE(VerificaVelha(teste_2)==1);
    REQUIRE(VerificaVelha(teste_3)==2);
    REQUIRE(VerificaVelha(teste_4)==1);
    REQUIRE(VerificaVelha(teste_5)==0);
    REQUIRE(VerificaVelha(teste_6)==-1);
    REQUIRE(VerificaVelha(teste_7)==-1);
}