// 函数: sub_142314690
// 地址: 0x142314690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
int64_t rcx = *(arg1 + 0x20)
*arg2 = 0
arg2[1] = 0
void* rdx = arg2 + 0x21
__builtin_memset(&arg2[6], 0, 0x14)

if (rcx == 0)
    for (int32_t i = 0; i u< 4; )
        i += 4
        *(rdx - 1) = 0
        rdx += 4
    
    arg2[8].d = 0
    return arg2

void* rax = rdx

do
    i_1 += 4
    *(rax - 1) = 0
    rax += 4
while (i_1 u< 4)

arg2[8].d = 2
*arg2 = rcx
arg2[2] = *(arg1 + 0x28)
arg2[3] = *(arg1 + 0x30)
*(arg2 + 0x30) = *(arg1 + 0x40)
arg2[4].b = *(arg1 + 0x38)
*rdx = *(arg1 + 0x39)
*(arg2 + 0x22) = *(arg1 + 0x3a)
*(arg2 + 0x23) = *(arg1 + 0x3b)
return arg2
