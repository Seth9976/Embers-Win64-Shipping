// 函数: sub_141d8e540
// 地址: 0x141d8e540
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 == 0)
    return 

int32_t rcx = *(arg3 + 0xc)
int32_t rsi_1 = 0
int32_t rdi_3 = (arg2[3] - arg2[1]) * (arg2[2] - *arg2)
arg3[1].d = 0

if (rcx != rdi_3)
    sub_140679c00(arg3, rdi_3)
    rcx = *(arg3 + 0xc)
    rsi_1 = arg3[1].d

int32_t rax_3 = rsi_1 + rdi_3
arg3[1].d = rax_3

if (rax_3 s> rcx)
    sub_1406105e0(arg3)

memset(*arg3 + (sx.q(rsi_1) << 2), 0, sx.q(rdi_3) << 2)
