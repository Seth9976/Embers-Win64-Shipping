// 函数: sub_14083ab70
// 地址: 0x14083ab70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x108))
int32_t r8 = *(arg1 + 0x10c)

if (rdx.d u> 0x10)
    int32_t r9_2 = r8 - rdx.d
    
    if (sx.q(r9_2) << 4 u< 0x4000 && (rdx * 3).d s>= r8 * 2)
        rdx = zx.q(r8)
    else if (r9_2 s> 0x40)
        if (rdx.d s> 0)
            int64_t rax = sub_140a846a0(rdx << 4, 0)
            r8 = *(arg1 + 0x10c)
            rdx = rax u>> 4
    else if (rdx.d != 0)
        rdx = zx.q(r8)
else
    rdx = 0x10

if (rdx.d == r8)
    return 

*(arg1 + 0x10c) = rdx.d
return sub_1408393a0(arg1, *(arg1 + 0x108), rdx.d, 0x10) __tailcall
