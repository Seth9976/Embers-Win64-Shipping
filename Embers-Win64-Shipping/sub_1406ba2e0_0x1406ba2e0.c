// 函数: sub_1406ba2e0
// 地址: 0x1406ba2e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx_1 = *(arg1 + 0x40) + 0x10
int32_t result = (*(*rcx_1 + 0x18))(rcx_1)

if (result == 0)
    return result

*(arg1 + 0x60) = 1
int128_t var_18 = zx.o(0)
var_18.q = 0
var_18:8.q = 0

if (arg1 + 0x20 != &var_18)
    int64_t rcx_2 = *(arg1 + 0x20)
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
    
    *(arg1 + 0x20) = 0
    *(arg1 + 0x28) = 0

__ld12mul(*(arg1 + 0x40))
void* rax_1 = *(arg1 + 0x50)

if (rax_1 != 0)
    *(rax_1 + 0x558) = 0
    *(*(arg1 + 0x50) + 0x560) = 0
    avformat_close_input(arg1 + 0x50)
    *(arg1 + 0x50) = 0

void* rcx_5 = *(arg1 + 0x58)

if (rcx_5 != 0)
    av_free(*(rcx_5 + 8))
    av_free(*(arg1 + 0x58))
    *(arg1 + 0x58) = 0

int64_t* rcx_8 = *(arg1 + 0x18)
(**rcx_8)(rcx_8, 9)
int64_t* rcx_9 = *(arg1 + 0x18)
return (**rcx_9)(rcx_9, 1)
