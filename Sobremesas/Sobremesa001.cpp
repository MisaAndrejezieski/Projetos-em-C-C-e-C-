#include <iostream>
#include "Benco.h"
#include "PrimePack.h"
#include "EltonFlan.h"
#include "FormsealR.h"

using namespace std;

enum Produtos { BENCO = 1, PRIMEPACK, ELTONFLAN, FORMSEALR };

int main() {
    int escolha;
    char resposta;
    
    do {
        cout << "-----------------------------------\n";
        cout << "            SOBREMESA\n";
        cout << "-----------------------------------\n";
    
        cout << "\nEscolha a linha de producao:\n1 - Benco\n2 - Prime Pack\n3 - Elton Flan\n4 - Formseal R\n";
        cin >> escolha;

        switch(escolha) {
            case BENCO:
                Benco b;
	            printf("Escolha o produto desejado: \n001-morango Batavo \n002-tradicional Batavo \n003-morango itambe \n004-tradicional itambe \n005-light morango Batava \n006-light tradicional Batavo \n007-pessego Batavo");
	           
			   /* for para verificação de vetor:
			   
			   for(int i = 0; i < 7; i++) {
	       			for(int j = 0; j < 50; j++) {
	            		printf("%c ", b.nomes_produtos[i][j]);
	        		}
	       			 printf("\n");
	    		} */
	
	            cout << "\n\nInsira o codigo do produto: ";
	                  
	            cin >> b.codigo_produto;
	
	            if (b.codigo_produto == 1 || b.codigo_produto == 2 || b.codigo_produto == 3 || b.codigo_produto == 4 || b.codigo_produto == 7) {
	                strcpy(b.tipo_chapa1, "chapa azul");
	                strcpy(b.tipo_chapa2, "chapa azul");
	            } else if (b.codigo_produto == 6 || b.codigo_produto == 5){
	                strcpy(b.tipo_chapa1, "chapa verde");
	                strcpy(b.tipo_chapa2, "chapa verde");
	            } else {
	            	cout << "Codigo invalido!\n";
	            	system("pause");
	            	system("cls");
					return main();
	            	
					}
	
	            cout << "Insira o numero de caixas por producao: ";
	            cin >> b.caixas_por_producao;
	
	            b.total_chapa = b.caixas_por_producao * b.chapa_por_caixa;
	            b.total_mixpaper = b.caixas_por_producao * b.mixpaper_por_caixa;
	            b.total_production_time = (float) b.caixas_por_producao / 7.6 /60;
	
	            cout << "\nSerao necessarios " << b.total_chapa << " kg de " << b.tipo_chapa1 << endl;
	            cout << b.total_mixpaper << " kg de " << b.nomes_mixpaper[b.codigo_produto - 1] << " para produzir " << b.caixas_por_producao << " caixas de " << b.nomes_produtos[b.codigo_produto - 1] << endl;
	            cout << "O tempo necessario para produzir " << b.caixas_por_producao << " caixas de " << b.nomes_produtos[b.codigo_produto -1] << " e de " << b.total_production_time << " horas." << endl;
                break;
            case PRIMEPACK:
                // Código para PrimePack
                break;
            case ELTONFLAN:
                // Código para EltonFlan
                break;
            case FORMSEALR:
                // Código para FormsealR
                break;
            default:
                cout << "Opção inválida!\n";
                break;
        }
    } while (escolha != 0);

    return 0;
}

