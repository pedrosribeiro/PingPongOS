#include "ppos.h"
#include "ppos-core-globals.h"
#include "ppos_data.h"
#include "ppos_disk.h"


int disk_mgr_init (int* num_blocks, int* block_size) {

    /* 
        Ao retornar da chamada, a variável num_blocks contém o número de blocos do disco
    inicializado, enquanto a variável block_size contém o tamanho de cada bloco do disco, em bytes.
    Essa chamada retorna 0 em caso de sucesso ou -1 em caso de erro.
    */

}

int disk_block_read(int block, void* buffer) {
    /* 
        block: posição (número do bloco) a ler ou escrever no disco 
    (deve estar entre 0 e numblocks-1); 
        buffer: endereço dos dados a escrever no disco, ou onde devem ser colocados
    os dados lidos do disco; esse buffer deve ter capacidade para block_size bytes.
        retorno: 0 em caso de sucesso ou -1 em caso de erro.
    */
    
}

int disk_block_write(int block, void* buffer) {

    /* 
        block: posição (número do bloco) a ler ou escrever no disco 
    (deve estar entre 0 e numblocks-1); 
        buffer: endereço dos dados a escrever no disco, ou onde devem ser colocados
    os dados lidos do disco; esse buffer deve ter capacidade para block_size bytes.
        retorno: 0 em caso de sucesso ou -1 em caso de erro.
    */
}

