// 函数: sub_142a5a430
// 地址: 0x142a5a430
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
*arg1 = arg1 + 0xe
arg1[1].d = 4
*(arg1 + 0xc) = 0

if (rdi.d s< 5)
    return arg1

int64_t rax_1 = sub_142a7dd00(rdi * 2)

if (rax_1 != 0)
    if (*(arg1 + 0xc) != 0)
        sub_142a7dcd0(*arg1)
    
    *arg1 = rax_1
    arg1[1].d = rdi.d
    *(arg1 + 0xc) = 1

return arg1
