// 函数: sub_14119ad10
// 地址: 0x14119ad10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x58))
int32_t r8 = *(arg1 + 0x5c)

if (rdx.d u> 0xa)
    int32_t r9_2 = r8 - rdx.d
    
    if (sx.q(r9_2) << 3 u< 0x4000 && (rdx * 3).d s>= r8 * 2)
        rdx = zx.q(r8)
    else if (r9_2 s> 0x40)
        if (rdx.d s> 0)
            int64_t rax = sub_140a846a0(rdx << 3, 0)
            r8 = *(arg1 + 0x5c)
            rdx = rax u>> 3
    else if (rdx.d != 0)
        rdx = zx.q(r8)
else
    rdx = 0xa

if (rdx.d == r8)
    return 

*(arg1 + 0x5c) = rdx.d
return sub_14119a3a0(arg1, *(arg1 + 0x58), rdx.d, 8) __tailcall
