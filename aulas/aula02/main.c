#include <stdio.h>
#include <string.h>
#include "agenda.h"

int main (void)
{
    Agenda agenda = criar_agenda(10);
    Contato contato;
    strcpy(contato.nome, "Jose");
    strcpy(contato.telefone, "9090-9090");
    adicionar_contato(&agenda, contato);
    listar_contato(&agenda);

    Contato outro;
    strcpy(outro.nome, "cuzinho");
    strcpy(outro.telefone, "0000-0000");
    adicionar_contato(&agenda, outro);
    listar_contato(&agenda);


    return 0;
}


