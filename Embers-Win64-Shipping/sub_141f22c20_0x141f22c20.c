// 函数: sub_141f22c20
// 地址: 0x141f22c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x48))
int32_t r8 = *(arg1 + 0x4c)

if (rdx.d u> 8)
    int32_t r9_2 = r8 - rdx.d
    
    if (sx.q(r9_2) << 3 u< 0x4000 && (rdx * 3).d s>= r8 * 2)
        rdx = zx.q(r8)
    else if (r9_2 s> 0x40)
        if (rdx.d s> 0)
            int64_t rax = sub_140a846a0(rdx << 3, 0)
            r8 = *(arg1 + 0x4c)
            rdx = rax u>> 3
    else if (rdx.d != 0)
        rdx = zx.q(r8)
else
    rdx = 8

if (rdx.d == r8)
    return 

*(arg1 + 0x4c) = rdx.d
return sub_1407748f0(arg1, *(arg1 + 0x48), rdx.d, 8) __tailcall
