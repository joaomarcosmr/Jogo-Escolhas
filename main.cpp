#include <iostream>
#include <string>
#include <locale.h>
#include <stdlib.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");

    string nome, resposta;
    int respostaNum;

    cout << "Olá aventureiro, como você se chama? " << endl;
    cout << ">> "; cin >> nome;
    cout << endl;

    cout << "---------------------" << endl << endl;

    cout << "   *****   " << endl;
    cout << " *       * " << endl;
    cout << "*   O O   * "<< nome << " parabéns, esse é você!"<< endl;
    cout << "*    ^    *" << endl;
    cout << " * \\___/ *" << endl;
    cout << "   *****   " << endl << endl;

    cout << "---------------------" << endl << endl;

    cout << "----- " << nome << ", a sua aventura vai começar... ------" << endl;
    cout << " ----------  Começar Aventura? (s/n) ----------" << endl;
    cout << ">> "; cin >> resposta;

    if (resposta == "s"){
        system("clear||cls");
    } else {
        system("clear||cls");
        cout << "O Jogo Acabou." << endl;
        return 0;
    }
    cout << "---------------------" << endl << endl;

    cout << nome << ", Uma breve introdução: Você vive em um vilarejo pacífico, cercado por colinas verdes e campos dourados." << endl;
    cout << "e uma mensagem urgente chega, o rei Jordan pedindo ajuda para deter uma praga misteriosa," << endl << "você não tem muitas informações, mas pelo desespero parece que a coisa está feia..." << endl << endl;

    cout << "---------------------" << endl << endl;

    cout << "----- " << nome << ", sua hora chegou! ------" << endl;
    cout << " ----------  Digite 's' para começar a missão (s) ----------" << endl << endl;
    cout << ">> "; cin >> resposta;

    if (resposta == "s") {
        system("clear||cls");
        cout << "---------------------" << endl << endl;

        cout << "Desafio da Floresta: Você parte em direção à floresta sombria, onde lobos famintos espreitam nas sombras." << endl << endl;

        cout << "---------------------" << endl << endl;

        cout << "Em meio ao caminho, você encontra com um Cavaleiro Misterioso, ele te aborda e pergunta o que você está fazendo." << endl << endl;


        cout << "---------------------" << endl << endl;

        cout << "----- " <<  "Você comenta sobre seu desafio e ele se dispõe a ajudar" << " ------" << endl;
        cout << " ----------  Aceita ajuda do Cavaleiro Misterioso? (s/n) ----------" << endl << endl;
        cout << ">> "; cin >> resposta;

            if (resposta == "s") {

            system("clear||cls");
            cout << "---------------------" << endl << endl;
            cout << "Vocês investigam e descobrem que a praga é causada por uma bruxa enfeitiçada que usa magia negra." << "Ela está em busca de vingança pelo rei Jordan e já sabe da sua presença na floresta..." << endl << endl;
            cout << "---------------------" << endl << endl;
            cout << "----- " <<  "Você escuta um barulho estranho vindo a esquerda no meio da mata..." << " ------" << endl;
            cout << " ----------  Deseja checar o que há ali? (s/n) ----------" << endl << endl;
            cout << ">> "; cin >> resposta;

            if (resposta == "s") {

                system("clear||cls");
                cout << "---------------------" << endl << endl;
                cout << "Um lobo feroz vem em sua direção e tenta te atacar, mas você conseguiu esquivar e com ajuda do Caveleiro Misterioso, conseguiram matar esse lobo...";
                cout << "Vocês percebem que esse lobo tinha uma marca na cabeça que parecia que estava sendo controlado pela bruxa..." << endl << endl;
                cout << "---------------------" << endl << endl;
                cout << "Você e o Cavaleiro Misterioso seguem andando floresta a dentro e encontram um castelo com a marca encontrada anteriormente no lobo..." << endl << endl;
                cout << " ----------  Deseja checar o que há ali? (s/n) ----------" << endl << endl;
                cout << ">> "; cin >> resposta;

                    if (resposta == "s"){
                        system("clear||cls");
                        cout << "---------------------" << endl << endl;
                        cout << "Vocês entram pelo castelo e se deparam em um corredor escuro com 2 lados";
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
                                cout << "você entra no corredor a sua esquerda, mas percebe que a parede atrás de você se fecha e começa lentamente a esmagar você e seu companheiro..." << endl << endl;
                                cout << "---------------------" << endl << endl;
                                cout << "Você morreu!" << endl << endl;
                                return 0;
                                break;

                            case 2:
                                system("clear||cls");
                                cout << "---------------------" << endl << endl;
                                cout << "Vocês encontram uma sala com diversos desenhos na parede e começam a vasculhar cada livro, prateleira, gaveta que encontram pela frente..." << endl << endl;
                                cout << "---------------------" << endl << endl;
                                cout << "Vocês encontram um livro falando quem é a Bruxa e sua história com o rei Jordan..." << "Descobre que ela é irmã do rei e foi assassinada por ele para tomar o trono..." << "Porém, ela conseguiu através de uma magia antiga, ressucitar e está vindo ao vilarejo para retomar o poder" << endl << endl;
                                cout << "---------------------" << endl << endl;
                                cout << "Você acha um suco mágico e lê em um dos livros encontrados que ele te dá super-força quando tomado..." << endl << endl;
                                cout << "---------------------" << endl << endl;
                                cout << "PAAHHH... PAAAAHHH... PAAAAAAAAAHH..." << endl << endl;
                                cout << "----- " <<  "Você escuta um barulho muito alto vindo de fora do castelo..." << " ------" << endl;
                                cout << " ----------  Deseja retornar para fora? (s/n) ----------" << endl << endl;
                                cout << ">> "; cin >> resposta;

                                    if (resposta == "s") {
                                        system("clear||cls");
                                        cout << "---------------------" << endl << endl;
                                        cout << "Você volta para o corredor e percebe que o caminho está iluminado, porém a passagem está obstruída com pedras" << endl << endl;
                                        cout << "---------------------" << endl << endl;
                                        cout << "----- " <<  "Você quer utilizar a poção de força para quebrar a passagem? (s/n)" << " ------" << endl;
                                        cout << ">> "; cin >> resposta;

                                            if (resposta == "s"){
                                                system("clear||cls");
                                                cout << "---------------------" << endl << endl;
                                                cout << "Você quebra a passagem e se depara com 2 lobos ferozes e uma estátua com o símbolo da bruxa" << endl << endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "Você e o cavaleiro misterioso começam o combate com os lobos, porém só conseguem abater um..." << endl << endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "Seu amigo cavaleiro está atordoado, e um lobo feroz consegue te abater!" << endl <<"Infelizmente, você morreu." << endl << endl;
                                                return 0;
                                            } else {
                                                system("clear||cls");
                                                cout << "Você começa a procurar uma saída alternativa e descobre uma passagem subterrânea atrás de um quadro..." << endl << endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "Você e seu amigo entram pela passagem subterrânea e acabam caindo em uma armadilha feita pela bruxa." << endl << endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "Você morreu" << endl << endl;
                                                return 0;
                                            }

                                        // terminar enigma
                                    } else {
                                        system("clear||cls");
                                        cout << "---------------------" << endl << endl;
                                        cout << "Você fica sem ter pra onde ir, e começa a ler todos os livros da bruxa..." << "Descobre que a Bruxa possuí uma fraqueza contra água, pois enfraquece seus feitiços." << " Também descobre que a cura da praga misteriosa está no colar da Bruxa..." << endl << endl;
                                        cout << "---------------------" << endl << endl;
                                        cout << "O tempo vai passando e você precisa tomar uma decisão..." << endl << endl;
                                        cout << "---------------------" << endl << endl;
                                        cout << "Você saí pelo corredor e vê a passagem obstruída com pedras..." << endl << "Porém, leu em um livro de feitiços da Bruxa que para quebrar essa magia bastava falar: 'SUCUMBA'" << endl << "Então, prontamente você grita:" << endl << "- SUBUMBA" << endl << "A passagem é aberta e você pode sair..." << endl << endl;
                                        cout << " ----------  Deseja sair? (s/n) ----------" << endl << endl;
                                        cout << ">> "; cin >> resposta;

                                            if (resposta == "s"){
                                                system("clear||cls");
                                                cout << "---------------------" << endl << endl;
                                                cout << "Você sai do castelo e se depara com 2 lobos ferozes e uma estátua com o símbolo da bruxa" << endl << endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "Logo, pronto ao combate toma a poção que viu mais cedo na sala da bruxa e junto ao Cavaleiro Misterioso consegue derrotar os dois lobos." << endl << endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "- Muahuahahuahauhuahaau!!!" << endl << endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "A bruxa aparece e transforma seu companheiro em Pedra." << endl << "Porém, você sabendo da fraqueza da Bruxa, Lembrou da água e molhou sua espada na poça ao sair do castelo." << endl <<  "E foi para cima da bruxa e enfiou a espada em seu coração." << endl << "Você Finalizou a Bruxa e arrancou seu colar com a cura da praga misteriosa..." << endl<< endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "----- " <<  "Você pode escolher entre usar a cura para Salvar seu amigo Cavaleiro Misterioso que foi petrificado ou salvar a floresta da praga." << " ------" << endl;
                                                cout << " ---------- Digite 1 para salvar o seu amigo, ou digite 2 para salvar a floresta ----------" << endl << endl;
                                                cout << ">> "; cin >> respostaNum;

                                                    switch (respostaNum) {
                                                        case 1:
                                                            system("clear||cls");
                                                            cout << "---------------------" << endl << endl;
                                                            cout << "Você utiliza a cura no seu amigo e despetrifica ele." << endl << "Vocês se abraçam e ele agradece por salvar sua vida" << endl <<  "Ele retira o capacete e você descobre que ele é seu pai." << endl <<  "Vocês se abraçam e fogem do vilarejo." << endl << endl;
                                                            cout << "---------------------" << endl << endl;
                                                            cout << "O vilarejo é invadido pela doença e mata todos por lá, incluindo seus amigos e outros familiares..." << endl << endl ;
                                                            cout << "---------------------" << endl << endl;
                                                            cout << "Você e seu pai tentam sobreviver pela floresta, porém acabam ficando sem recursos e morrem famintos..." << endl << endl;
                                                            return 0;
                                                        case 2:
                                                            system("clear||cls");
                                                            cout << "---------------------" << endl << endl;
                                                             cout << "Você utiliza a cura na floresta." << "Em um passe de mágica as folhas começam a ter vida novamente" << endl << "Porém, seu amigo petrificado ainda está ali..." << endl << "Infelizmente, você perdeu seu companheiro sem nunca saber quem ele era..." << endl << endl;
                                                            cout << "---------------------" << endl << endl;
                                                            cout << "Você volta ao vilarejo, e é aplaudido pelo rei e convidado para ser o seu guarda real!" << endl << endl;
                                                            cout << "---------------------" << endl << endl;
                                                            cout << "A história se encerra, e seu legado fica!" << endl << endl;
                                                            cout << "Uma história onde cada escolha pode alterar seu futuro de maneira surpreendente!" << endl << endl;
                                                            return 0;
                                                    }
                                            } else {
                                                system("clear||cls");
                                                cout << "---------------------" << endl << endl;
                                                cout << "A bruxa faz um feitiço para dentro do castelo envenando todo o ar lá dentro!" << endl << endl;
                                                cout << "---------------------" << endl << endl;
                                                cout << "Você morre!" << endl << endl;
                                                return 0;
                                            }
                                    }

                            break;
                        }

                    } else {
                        system("clear||cls");
                        cout << "---------------------" << endl << endl;
                        cout << "Vocês continuam buscando por outro lugar, mas a Bruxa estava observando vocês..." << endl << endl;
                        cout << "---------------------" << endl << endl;
                        cout << "A bruxa manda mais de 50 lobos para cima de vocês e acabam morrendo..." << endl << endl;
                        return 0;
                    }

                } else {
                    system("clear||cls");
                    cout << "---------------------" << endl << endl;
                    cout << "Você acaba ignorando o barulho e segue reto em seu destino..." << endl << endl;
                    cout << "---------------------" << endl << endl;
                    cout << "A bruxa manda mais de 50 lobos para cima de vocês e acabam morrendo..." << endl << endl;
                    return 0;
                }

            } else {

                 system("clear||cls");
                    cout << "---------------------" << endl << endl;
                    cout << "Você recusa a ajuda do Cavaleiro Misterioso e ele segue em direção a floresta..." << endl;
                    cout << "Você investiga e descobre que a praga é causada por uma bruxa enfeitiçada que usa magia negra." << endl;
                    cout << "---------------------" << endl << endl;
                    cout << "----- " <<  "Você escuta um barulho estranho vindo a esquerda no meio da mata..." << " ------" << endl;
                    cout << " ----------  Deseja checar o que há ali? (s/n) ----------" << endl << endl;
                    cout << ">> "; cin >> resposta;

                    if (resposta == "s"){
                    system("clear||cls");
                    cout << "---------------------" << endl << endl;
                    cout << "Um lobo feroz vem em sua direção e tenta te atacar, você não estava preparado e acabou morrendo..." << endl << endl;
                    return 0;
                } else {
                    system("clear||cls");
                    cout << "---------------------" << endl << endl;
                    cout << "Você acaba ignorando o barulho e segue reto em seu destino..."<< endl << endl;
                    cout << "---------------------" << endl << endl;
                    cout << "Alguns minutos depois acaba sendo atacado por trás, por um lobo feroz que estava sendo controlado pela Bruxa." << endl << endl;
                    cout << "---------------------" << endl << endl;
                    return 0;
                }

                }

       } else {
            system("clear||cls");
                    cout << "---------------------" << endl << endl;
                    cout << "Você recusa a ajuda do Cavaleiro Misterioso e ele segue em direção a floresta..." << endl;
                    cout << "Você investiga e descobre que a praga é causada por uma bruxa enfeitiçada que usa magia negra." << endl;
                    cout << "---------------------" << endl << endl;
                    cout << "----- " <<  "Você escuta um barulho estranho vindo a esquerda no meio da mata..." << " ------" << endl;
                    cout << " ----------  Deseja checar o que há ali? (s/n) ----------" << endl << endl;
                    cout << ">> "; cin >> resposta;

                 if (resposta == "s"){
                    system("clear||cls");
                    cout << "---------------------" << endl << endl;
                    cout << "Um lobo feroz vem em sua direção e tenta te atacar, você não estava preparado e acabou morrendo..." << endl << endl;
                    return 0;
                } else {
                    system("clear||cls");
                    cout << "---------------------" << endl << endl;
                    cout << "Você acaba ignorando o barulho e segue reto em seu destino..."<< endl << endl;
                    cout << "---------------------" << endl << endl;
                    cout << "Alguns minutos depois acaba sendo atacado por trás, por um lobo feroz que estava sendo controlado pela Bruxa." << endl << endl;
                    cout << "---------------------" << endl << endl;
                    return 0;
                }
        }

    return 0;
}
