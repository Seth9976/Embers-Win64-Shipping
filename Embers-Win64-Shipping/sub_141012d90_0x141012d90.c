// 函数: sub_141012d90
// 地址: 0x141012d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int32_t rax_1 = arg1[0xa].d + 1

if (rax_1 u< arg1[0xb].d)
    rdi = rax_1

if (*(arg1 + 0x54) != 0)
    if (arg1[4].b == 0)
        sub_141036510(arg1, arg2, 0x100)
    
    if (arg1[3].d u> rdi)
        sub_14101f080(arg1, arg2)
    
    if (arg1[4].b == 0)
        sub_141036510(arg1, arg2, 0x100)

*(arg1 + 0x1c) += 1
arg1[0xa].d = rdi
return zx.q(rdi)
