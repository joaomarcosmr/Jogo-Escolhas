#include <iostream>
#include <string>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    string nome, resposta;
    int respostaNum;

    cout << "Ol� aventureiro, como voc� se chama? " << endl;
    cout << ">> "; cin >> nome;
    cout << endl;

    cout << "---------------------" << endl << endl;

    cout << "   *****   " << endl;
    cout << " *       * " << endl;
    cout << "*   O O   * "<< nome << " parab�ns, esse � voc�!"<< endl;
    cout << "*    ^    *" << endl;
    cout << " * \\___/ *" << endl;
    cout << "   *****   " << endl << endl;

    cout << "---------------------" << endl << endl;

    cout << "----- " << nome << ", a sua aventura vai come�ar... ------" << endl;
    cout << " ----------  Come�ar Aventura? (s/n) ----------" << endl;
    cout << ">> "; cin >> resposta;

    if (resposta == "s"){
        system("clear||cls");
    } else {
        system("clear||cls");
        cout << "O Jogo Acabou." << endl;
        return 0;
    }
    cout << "---------------------" << endl << endl;

    cout << nome << ", Uma breve introdu��o: Voc� vive em um vilarejo pac�fico, cercado por colinas verdes e campos dourados." << endl;
    cout << "e uma mensagem urgente chega, o rei Jordan pedindo ajuda para deter uma praga misteriosa," << endl << "voc� n�o tem muitas informa��es, mas pelo desespero parece que a coisa est� feia..." << endl << endl;

    cout << "---------------------" << endl << endl;

    cout << "----- " << nome << ", sua hora chegou! ------" << endl;
    cout << " ----------  Digite 's' para come�ar a miss�o (s) ----------" << endl << endl;
    cout << ">> "; cin >> resposta;

    if (resposta == "s") {
        system("clear||cls");
        cout << "---------------------" << endl << endl;

        cout << "Desafio da Floresta: Voc� parte em dire��o � floresta sombria, onde lobos famintos espreitam nas sombras." << endl << endl;

        cout << "---------------------" << endl << endl;

        cout << "Em meio ao caminho, voc� encontra com um Cavaleiro Misterioso, ele te aborda e pergunta o que voc� est� fazendo." << endl << endl;


        cout << "---------------------" << endl << endl;

        cout << "----- " <<  "Voc� comenta sobre seu desafio e ele se disp�e a ajudar" << " ------" << endl;
        cout << " ----------  Aceita ajuda do Cavaleiro Misterioso? (s/n) ----------" << endl << endl;
        cout << ">> "; cin >> resposta;

            if (resposta == "s") {

            system("clear||cls");
            cout << "---------------------" << endl << endl;
            cout << "Voc�s investigam e descobrem que a praga � causada por uma bruxa enfeiti�ada que usa magia negra." << "Ela est� em busca de vingan�a pelo rei Jordan e j� sabe da sua presen�a na floresta..." << endl << endl;
            cout << "---------------------" << endl << endl;
            cout << "----- " <<  "Voc� escuta um barulho estranho vindo a esquerda no meio da mata..." << " ------" << endl;
            cout << " ----------  Deseja checar o que h� ali? (s/n) ----------" << endl << endl;
            cout << ">> "; cin >> resposta;

            if (resposta == "s") {

                system("clear||cls");
                cout << "---------------------" << endl << endl;
                cout << "Um lobo feroz vem em sua dire��o e tenta te atacar, mas voc� conseguiu esquivar e com ajuda do Caveleiro Misterioso, conseguiram matar esse lobo...";
                cout << "Voc�s percebem que esse lobo tinha uma marca na cabe�a que parecia que estava sendo controlado pela bruxa..." << endl << endl;
                cout << "---------------------" << endl << endl;
                cout << "Voc� e o Cavaleiro Misterioso seguem andando floresta a dentro e encontram um castelo com a marca encontrada anteriormente no lobo..." << endl << endl;
                cout << " ----------  Deseja checar o que h� ali? (s/n) ----------" << endl << endl;
                cout << ">> "; cin >> resposta;

                    if (resposta == "s"){
                        system("clear||cls");
                        cout << "---------------------" << endl << endl;
                        cout << "Voc�s entram pelo castelo e se deparam em um corredor escuro com 2 lados";
                        cout << "---------------------" << endl << endl;
                        std::cout << "     |" << std::endl;
                        std::cout << "     |" << std::endl;
                        std::cout << "     |" << std::endl;
                        std::cout << "     |" << std::endl;
                        std::cout << "-----+-----" << std::endl;
                        std::cout << "     |" << std::endl;
                        std::cout << "     |" << std::endl;
                        std::cout << "     |" << std::endl << endl;
                        cout << "----- " <<  "qual caminho deseja seguir?" << " ------" << endl;
                        cout << " ----------  Esquerda digite 1, ou Direita para 2 ----------" << endl << endl;
                        cout << ">> "; cin >> respostaNum;

                        switch (respostaNum) {
                            case 1:
                                system("clear||cls");
                                cout << "---------------------" << endl << endl;
                                cout << "voc� entra no corredor a sua esquerda, mas percebe que a parede atr�s de voc� se fecha e come�a lentamente a esmagar voc� e seu companheiro..." << endl << endl;
                                cout << "---------------------" << endl << endl;
                                cout << "Voc� morreu!" << endl << endl;
                                return 0;
                                break;

                            case 2:
                                system("clear||cls");
                                cout << "---------------------" << endl << endl;
                                cout << "Voc�s encontram uma sala com diversos desenhos na parede e come�am a vasculhar cada livro, prateleira, gaveta que encontram pela frente..." << endl << endl;
                                cout << "---------------------" << endl << endl;
                                cout << "Voc�s encontram um livro falando quem � a Bruxa e sua hist�ria com o rei Jordan..." << "Descobre que ela � irm� do rei e foi assassinada por ele para tomar o trono..." << "Por�m, ela conseguiu atrav�s de uma magia antiga, ressucitar e est� vindo ao vilarejo para retomar o poder" << endl << endl;
                                cout << "---------------------" << endl << endl;
                                cout << "Voc� acha um suco m�gico e l� em um dos livros encontrados que ele te d� super-for�a quando tomado..." << endl << endl;
                                cout << "---------------------" << endl << endl;
                                cout << "PAAHHH... PAAAAHHH... PAAAAAAAAAHH..." << endl << endl;
                                cout << "----- " <<  "Voc� escuta um barulho muito alto vindo de fora do castelo..." << " ------" << endl;
                                cout << " ----------  Deseja retornar para fora? (s/n) ----------" << endl << endl;
                                cout << ">> "; cin >> resposta;

                                    if (resposta == "s") {
                                        system("clear||cls");
                                        cout << "---------------------" << endl << endl;
                                        cout << "Voc� volta para o corredor e percebe que o caminho est� iluminado, por�m a passagem est� obstru�da com pedras" << endl << endl;
                                        cout << "---------------------" << endl << endl;
                                        cout << "----- " <<  "Voc� quer utilizar a po��o de for�a para quebrar a passagem? (s/n)" << " ------" << endl;
                                        cout << ">> "; cin >> resposta;

                                            if (resposta == "s"){
                                                system("clear||cls");
                                                cout << "---------------------" << endl << endl;
                                                cout << "Voc� quebra a passagem e se depara com 2 lobos ferozes e uma est�tua com o s�mbolo da bruxa" << endl << endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "Voc� e o cavaleiro misterioso come�am o combate com os lobos, por�m s� conseguem abater um..." << endl << endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "Seu amigo cavaleiro est� atordoado, e um lobo feroz consegue te abater!" << endl <<"Infelizmente, voc� morreu." << endl << endl;
                                                return 0;
                                            } else {
                                                system("clear||cls");
                                                cout << "Voc� come�a a procurar uma sa�da alternativa e descobre uma passagem subterr�nea atr�s de um quadro..." << endl << endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "Voc� e seu amigo entram pela passagem subterr�nea e acabam caindo em uma armadilha feita pela bruxa." << endl << endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "Voc� morreu" << endl << endl;
                                                return 0;
                                            }

                                        // terminar enigma
                                    } else {
                                        system("clear||cls");
                                        cout << "---------------------" << endl << endl;
                                        cout << "Voc� fica sem ter pra onde ir, e come�a a ler todos os livros da bruxa..." << "Descobre que a Bruxa possu� uma fraqueza contra �gua, pois enfraquece seus feiti�os." << " Tamb�m descobre que a cura da praga misteriosa est� no colar da Bruxa..." << endl << endl;
                                        cout << "---------------------" << endl << endl;
                                        cout << "O tempo vai passando e voc� precisa tomar uma decis�o..." << endl << endl;
                                        cout << "---------------------" << endl << endl;
                                        cout << "Voc� sa� pelo corredor e v� a passagem obstru�da com pedras..." << endl << "Por�m, leu em um livro de feiti�os da Bruxa que para quebrar essa magia bastava falar: 'SUCUMBA'" << endl << "Ent�o, prontamente voc� grita:" << endl << "- SUBUMBA" << endl << "A passagem � aberta e voc� pode sair..." << endl << endl;
                                        cout << " ----------  Deseja sair? (s/n) ----------" << endl << endl;
                                        cout << ">> "; cin >> resposta;

                                            if (resposta == "s"){
                                                system("clear||cls");
                                                cout << "---------------------" << endl << endl;
                                                cout << "Voc� sai do castelo e se depara com 2 lobos ferozes e uma est�tua com o s�mbolo da bruxa" << endl << endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "Logo, pronto ao combate toma a po��o que viu mais cedo na sala da bruxa e junto ao Cavaleiro Misterioso consegue derrotar os dois lobos." << endl << endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "- Muahuahahuahauhuahaau!!!" << endl << endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "A bruxa aparece e transforma seu companheiro em Pedra." << endl << "Por�m, voc� sabendo da fraqueza da Bruxa, Lembrou da �gua e molhou sua espada na po�a ao sair do castelo." << endl <<  "E foi para cima da bruxa e enfiou a espada em seu cora��o." << endl << "Voc� Finalizou a Bruxa e arrancou seu colar com a cura da praga misteriosa..." << endl<< endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "----- " <<  "Voc� pode escolher entre usar a cura para Salvar seu amigo Cavaleiro Misterioso que foi petrificado ou salvar a floresta da praga." << " ------" << endl;
                                                cout << " ---------- Digite 1 para salvar o seu amigo, ou digite 2 para salvar a floresta ----------" << endl << endl;
                                                cout << ">> "; cin >> respostaNum;

                                                    switch (respostaNum) {
                                                        case 1:
                                                            system("clear||cls");
                                                            cout << "---------------------" << endl << endl;
                                                            cout << "Voc� utiliza a cura no seu amigo e despetrifica ele." << endl << "Voc�s se abra�am e ele agradece por salvar sua vida" << endl <<  "Ele retira o capacete e voc� descobre que ele � seu pai." << endl <<  "Voc�s se abra�am e fogem do vilarejo." << endl << endl;
                                                            cout << "---------------------" << endl << endl;
                                                            cout << "O vilarejo � invadido pela doen�a e mata todos por l�, incluindo seus amigos e outros familiares..." << endl << endl ;
                                                            cout << "---------------------" << endl << endl;
                                                            cout << "Voc� e seu pai tentam sobreviver pela floresta, por�m acabam ficando sem recursos e morrem famintos..." << endl << endl;
                                                            return 0;
                                                        case 2:
                                                            system("clear||cls");
                                                            cout << "---------------------" << endl << endl;
                                                             cout << "Voc� utiliza a cura na floresta." << "Em um passe de m�gica as folhas come�am a ter vida novamente" << endl << "Por�m, seu amigo petrificado ainda est� ali..." << endl << "Infelizmente, voc� perdeu seu companheiro sem nunca saber quem ele era..." << endl << endl;
                                                            cout << "---------------------" << endl << endl;
                                                            cout << "Voc� volta ao vilarejo, e � aplaudido pelo rei e convidado para ser o seu guarda real!" << endl << endl;
                                                            cout << "---------------------" << endl << endl;
                                                            cout << "A hist�ria se encerra, e seu legado fica!" << endl << endl;
                                                            cout << "Uma hist�ria onde cada escolha pode alterar seu futuro de maneira surpreendente!" << endl << endl;
                                                            return 0;
                                                    }
                                            } else {
                                                system("clear||cls");
                                                cout << "---------------------" << endl << endl;
                                                cout << "A bruxa faz um feiti�o para dentro do castelo envenando todo o ar l� dentro!" << endl << endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "Voc� morre!" << endl << endl;
                                                return 0;
                                            }
                                    }

                            break;
                        }

                    } else {
                        system("clear||cls");
                        cout << "---------------------" << endl << endl;
                        cout << "Voc�s continuam buscando por outro lugar, mas a Bruxa estava observando voc�s..." << endl << endl;
                        cout << "---------------------" << endl << endl;
                        cout << "A bruxa manda mais de 50 lobos para cima de voc�s e acabam morrendo..." << endl << endl;
                        return 0;
                    }

                } else {
                    system("clear||cls");
                    cout << "---------------------" << endl << endl;
                    cout << "Voc� acaba ignorando o barulho e segue reto em seu destino..." << endl << endl;
                    cout << "---------------------" << endl << endl;
                    cout << "A bruxa manda mais de 50 lobos para cima de voc�s e acabam morrendo..." << endl << endl;
                    return 0;
                }

            } else {

                 system("clear||cls");
                    cout << "---------------------" << endl << endl;
                    cout << "Voc� recusa a ajuda do Cavaleiro Misterioso e ele segue em dire��o a floresta..." << endl;
                    cout << "Voc� investiga e descobre que a praga � causada por uma bruxa enfeiti�ada que usa magia negra." << endl;
                    cout << "---------------------" << endl << endl;
                    cout << "----- " <<  "Voc� escuta um barulho estranho vindo a esquerda no meio da mata..." << " ------" << endl;
                    cout << " ----------  Deseja checar o que h� ali? (s/n) ----------" << endl << endl;
                    cout << ">> "; cin >> resposta;

                    if (resposta == "s"){
                    system("clear||cls");
                    cout << "---------------------" << endl << endl;
                    cout << "Um lobo feroz vem em sua dire��o e tenta te atacar, voc� n�o estava preparado e acabou morrendo..." << endl << endl;
                    return 0;
                } else {
                    system("clear||cls");
                    cout << "---------------------" << endl << endl;
                    cout << "Voc� acaba ignorando o barulho e segue reto em seu destino..."<< endl << endl;
                    cout << "---------------------" << endl << endl;
                    cout << "Alguns minutos depois acaba sendo atacado por tr�s, por um lobo feroz que estava sendo controlado pela Bruxa." << endl << endl;
                    cout << "---------------------" << endl << endl;
                    return 0;
                }

                }

       } else {
            system("clear||cls");
                    cout << "---------------------" << endl << endl;
                    cout << "Voc� recusa a ajuda do Cavaleiro Misterioso e ele segue em dire��o a floresta..." << endl;
                    cout << "Voc� investiga e descobre que a praga � causada por uma bruxa enfeiti�ada que usa magia negra." << endl;
                    cout << "---------------------" << endl << endl;
                    cout << "----- " <<  "Voc� escuta um barulho estranho vindo a esquerda no meio da mata..." << " ------" << endl;
                    cout << " ----------  Deseja checar o que h� ali? (s/n) ----------" << endl << endl;
                    cout << ">> "; cin >> resposta;

                 if (resposta == "s"){
                    system("clear||cls");
                    cout << "---------------------" << endl << endl;
                    cout << "Um lobo feroz vem em sua dire��o e tenta te atacar, voc� n�o estava preparado e acabou morrendo..." << endl << endl;
                    return 0;
                } else {
                    system("clear||cls");
                    cout << "---------------------" << endl << endl;
                    cout << "Voc� acaba ignorando o barulho e segue reto em seu destino..."<< endl << endl;
                    cout << "---------------------" << endl << endl;
                    cout << "Alguns minutos depois acaba sendo atacado por tr�s, por um lobo feroz que estava sendo controlado pela Bruxa." << endl << endl;
                    cout << "---------------------" << endl << endl;
                    return 0;
                }
        }

    return 0;
}
