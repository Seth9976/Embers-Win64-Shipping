// 函数: sub_141ea7020
// 地址: 0x141ea7020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x288)

if (rcx == 0)
    return 

char rax_1 = *(rcx + 0x388)
int64_t rdx
rdx.b = 1

if ((*(arg1 + 0x330) & 1) == 0)
    *(rcx + 0x388) = rax_1 & 0xef
    int64_t* rcx_2 = *(arg1 + 0x288)
    (*(*rcx_2 + 0x798))(rcx_2, rdx)
else
    *(rcx + 0x388) = rax_1 | 0x10
    int64_t* rcx_1 = *(arg1 + 0x288)
    (*(*rcx_1 + 0x790))(rcx_1, rdx)

void* rax = *(arg1 + 0x288)
*(rax + 0x387) |= 0x40
