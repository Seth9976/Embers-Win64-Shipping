// 函数: sub_140ab5640
// 地址: 0x140ab5640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 8)
EnterCriticalSection(rdi + 0x228)
int64_t* rsi = *(rdi + 0x218)

if (rsi == 0)
    void* rax_1 = j_sub_140a82f30(0x10008)
    void* const rdx = rax_1
    
    if (rax_1 == 0)
        rdx = nullptr
    else
        *(rax_1 + 0x10000) = rsi
    
    void* rcx_1 = rdx + 0x28
    int64_t i_1 = 0x400
    int64_t i
    
    do
        *(rcx_1 - 0x20) = *(rdi + 0x218)
        *(rcx_1 - 0x10) = rcx_1 - 0x28
        *rcx_1 = rcx_1 - 0x18
        *(rcx_1 + 0x10) = rcx_1 - 8
        *(rdi + 0x218) = rcx_1 + 8
        rcx_1 += 0x40
        i = i_1
        i_1 -= 1
    while (i != 1)
    *(rdx + 0x10000) = *(rdi + 0x210)
    rsi = *(rdi + 0x218)
    *(rdi + 0x210) = rdx

int64_t rax_8 = rsi[1]
*(rdi + 0x220) += 1
*(rdi + 0x218) = rax_8

if (rdi != -0x228)
    LeaveCriticalSection(rdi + 0x228)

*rsi = 0
*arg2 = *(arg1 + 8)
arg2[1] = rsi
arg2[2] = 0
return arg2
