// 函数: sub_142bfcb90
// 地址: 0x142bfcb90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r14 = zx.q(*arg1)
uint64_t r15 = zx.q(arg1[1])

if (arg3 u>= (r14.d << 8) + r15.d)
    *(arg2 + 8) = 0
    *(arg2 + 0x10) = 0
    return arg2

int32_t rbx = 0
uint64_t rbp = zx.q(arg1[2])
int32_t i_1 = rbp.d
void* rcx_1 = &arg1[3 + zx.q(rbp.d * arg3)]

if (rbp.d != 0)
    int32_t i
    
    do
        uint32_t rax_5 = zx.d(*rcx_1)
        rcx_1 += 1
        rbx = (rbx << 8) + rax_5
        i = i_1
        i_1 -= 1
    while (i != 1)

*(arg2 + 0x10) = sub_142c02b70(arg1, arg3)
*(arg2 + 8) = zx.q(rbx) + rbp * (r15 + 1 + (r14 << 8)) + 2 + arg1
return arg2
