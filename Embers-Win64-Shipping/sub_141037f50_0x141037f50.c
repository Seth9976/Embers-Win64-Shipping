// 函数: sub_141037f50
// 地址: 0x141037f50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 8)
int64_t rsi = *(arg1 + 0x10)

if (rsi u<= *(rdi + 0x68))
    return 

sub_141017270(rdi)

if (rsi u<= *(rdi + 0x68))
    return 

EnterCriticalSection(rdi + 0x90)
int64_t var_38_1
__builtin_memset(&var_38_1, 0, 0x18)

while (**(rdi + 0x88) != 0)
    void* rcx_3 = **(rdi + 0x88)
    var_38_1.o = *(rcx_3 + 8)
    int128_t var_30
    var_30:8.q = *(rcx_3 + 0x18)
    
    if (rsi u<= *(rdi + 0x68))
        break
    
    void* rdx_1 = **(rdi + 0x88)
    
    if (rdx_1 != 0)
        int64_t rcx_4 = *(rdi + 0x88)
        var_38_1.o = *(rdx_1 + 8)
        int64_t var_18_1 = 0
        int64_t zmm1_1 = *(rdx_1 + 0x18)
        *(rdi + 0x88) = rdx_1
        var_30:8.q = zmm1_1
        *(rdx_1 + 8) = 0.o
        *(rdx_1 + 0x18) = 0
        j_sub_140a74f90(rcx_4)
    
    LeaveCriticalSection(rdi + 0x90)
    sub_14106a220(&var_30)
    EnterCriticalSection(rdi + 0x90)
    int64_t rcx_8 = var_38_1
    
    if (*(rdi + 0x68) u>= rcx_8)
        rcx_8 = *(rdi + 0x68)
    
    *(rdi + 0x68) = rcx_8

if (rdi != -0x90)
    LeaveCriticalSection(rdi + 0x90)
