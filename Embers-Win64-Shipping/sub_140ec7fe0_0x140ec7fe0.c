// 函数: sub_140ec7fe0
// 地址: 0x140ec7fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = *(arg2 + 0x70)
char rax

if (rsi != 0)
    int64_t rbx_1 = *rsi
    sub_140ec00f0()
    rax = (*(rbx_1 + 0x58))(rsi, &data_143e29fe0)

void* const rcx_1
int64_t* rbx_2

if (rsi == 0 || rax == 0)
    rcx_1 = nullptr
    rbx_2 = nullptr
else
    rbx_2 = *(arg2 + 0x78)
    rcx_1 = *(arg2 + 0x70)
    
    if (rbx_2 != 0)
        rbx_2[1].d += 1

if (rcx_1 != 0)
    int128_t var_28
    __builtin_memset(&var_28, 0, 0x14)
    sub_140ed9f90(rcx_1, &var_28, arg2)
    int64_t* rcx_2 = var_28:8.q
    
    if (rcx_2 != 0)
        int32_t temp1_1 = *(rcx_2 + 0xc)
        *(rcx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rcx_2 + 8))(rcx_2, 1)

if (rbx_2 == 0)
    return 

rbx_2[1].d -= 1

if (rbx_2[1].d != 1)
    return 

(**rbx_2)(rbx_2)
int32_t temp2_1 = *(rbx_2 + 0xc)
*(rbx_2 + 0xc) -= 1

if (temp2_1 == 1)
    (*(*rbx_2 + 8))(rbx_2, 1)
