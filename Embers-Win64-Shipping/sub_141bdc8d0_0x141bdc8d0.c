// 函数: sub_141bdc8d0
// 地址: 0x141bdc8d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x28))
int32_t r8 = *(arg1 + 0x2c)

if (rdx.d u> 4)
    int32_t r9_2 = r8 - rdx.d
    
    if (sx.q(r9_2) << 3 u< 0x4000 && (rdx * 3).d s>= r8 * 2)
        rdx = zx.q(r8)
    else if (r9_2 s> 0x40)
        if (rdx.d s> 0)
            int64_t rax = sub_140a846a0(rdx << 3, 0)
            r8 = *(arg1 + 0x2c)
            rdx = rax u>> 3
    else if (rdx.d != 0)
        rdx = zx.q(r8)
else
    rdx = 4

if (rdx.d == r8)
    return 

*(arg1 + 0x2c) = rdx.d
return sub_140839270(arg1, *(arg1 + 0x28), rdx.d, 8) __tailcall
