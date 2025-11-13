// 函数: sub_142a21d90
// 地址: 0x142a21d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r11_1 = sx.q(*(arg1 + 0x10) * 0xe) + arg2
int64_t rax_3 = sx.q(*(arg1 + 0x24) * 6)
char* rdx_1 = rax_3 + arg3
char* rcx = rax_3 + arg4
*r11_1 = r11_1[-1]
*rdx_1 = rdx_1[-1]
*rcx = rcx[-1]
r11_1[1] = r11_1[-1]
rdx_1[1] = rdx_1[-1]
rcx[1] = rcx[-1]
r11_1[2] = r11_1[-1]
rdx_1[2] = rdx_1[-1]
rcx[2] = rcx[-1]
r11_1[3] = r11_1[-1]
rdx_1[3] = rdx_1[-1]
rcx[3] = rcx[-1]
int64_t rax_16 = sx.q(*(arg1 + 0x24))
void* rdx_2 = &rdx_1[rax_16]
void* rcx_1 = &rcx[rax_16]
void* r8_1 = &r11_1[sx.q(*(arg1 + 0x10))]
*r8_1 = *(r8_1 - 1)
*rdx_2 = *(rdx_2 - 1)
*rcx_1 = *(rcx_1 - 1)
*(r8_1 + 1) = *(r8_1 - 1)
*(rdx_2 + 1) = *(rdx_2 - 1)
*(rcx_1 + 1) = *(rcx_1 - 1)
*(r8_1 + 2) = *(r8_1 - 1)
*(rdx_2 + 2) = *(rdx_2 - 1)
*(rcx_1 + 2) = *(rcx_1 - 1)
*(r8_1 + 3) = *(r8_1 - 1)
*(rdx_2 + 3) = *(rdx_2 - 1)
char result = *(rcx_1 - 1)
*(rcx_1 + 3) = result
return result
