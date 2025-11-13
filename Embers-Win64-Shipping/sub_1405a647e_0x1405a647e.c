// 函数: sub_1405a647e
// 地址: 0x1405a647e
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HANDLE hMutex_1 = data_143cd5a20

if (hMutex_1 != 0)
    ReleaseMutex(hMutex_1)
    data_143cd5a20 = 0

int32_t arg_20 = 1
int64_t* rcx = data_143de5de8

if (rcx != 0)
    (*(*rcx + 0x48))(rcx)

sub_14227d920()
sub_140a46430(0)
sub_140b721f0(1)
sub_140d89600()
void* rcx_2 = data_143ddb400

if (rcx_2 != 0)
    sub_140aef720(rcx_2)
    int64_t* rcx_3 = data_143ddb400
    
    if (rcx_3 != 0)
        (**rcx_3)(rcx_3, 1)
    
    data_143ddb400 = 0

sub_140b19e60()
sub_140b19e60()
void* rdx_1 = data_1439a8bd0
(*(rdx_1 + 0x20))(&data_1439a8bd0, rdx_1)
sub_140a8dcd0()
HANDLE hMutex = data_143cd5a20

if (hMutex != 0)
    ReleaseMutex(hMutex)
    data_143cd5a20 = 0

if (data_143cd5a28 != 0)
    Sleep(0xffffffff)

__security_check_cookie(arg1 ^ &__return_addr)
return 1
