// 函数: sub_141bb1650
// 地址: 0x141bb1650
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i = *(arg1 + 0x508)

if (i == 0)
    return 

int64_t* r8_1 = *arg2
int64_t rdx = sx.q(arg2[1].d)
int64_t* rax_1 = r8_1
void* rcx = &r8_1[rdx]

if (r8_1 != rcx)
    while (*rax_1 != i)
        rax_1 = &rax_1[1]
        
        if (rax_1 == rcx)
            goto label_141bb16ac

if (r8_1 != rcx && ((rax_1 - r8_1) s>> 3).d != 0xffffffff)
    return 

label_141bb16ac:
int32_t rax_3 = (rdx + 1).d
arg2[1].d = rax_3

if (rax_3 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*((rdx << 3) + *arg2) = i
