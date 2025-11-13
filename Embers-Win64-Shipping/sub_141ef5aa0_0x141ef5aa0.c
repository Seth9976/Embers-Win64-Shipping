// 函数: sub_141ef5aa0
// 地址: 0x141ef5aa0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_2 = *arg2
int32_t rax

if ((rax_2 & 1) == 0 || (rax_2 & 2) != 0)
    rax = 0
else
    rax = 1

int32_t rcx = *arg1
arg1[1] = arg3
arg1[2] = 0
uint32_t result = zx.d(arg4) * 2
*arg1 = ((((rcx & 0xfffffffe) | rax) & 0xfffffffd) | result) & 0xfffffffb
*(arg1 + 0xc) = *arg2
*(arg1 + 0x1c) = *(arg2 + 0x10)
*(arg1 + 0x2c) = *(arg2 + 0x20)
*(arg1 + 0x3c) = *(arg2 + 0x30)
*(arg1 + 0x4c) = *(arg2 + 0x40)
*(arg1 + 0x5c) = *(arg2 + 0x50)
*(arg1 + 0x6c) = *(arg2 + 0x60)
*(arg1 + 0x7c) = *(arg2 + 0x70)
*(arg1 + 0x8c) = *(arg2 + 0x80)
return result
