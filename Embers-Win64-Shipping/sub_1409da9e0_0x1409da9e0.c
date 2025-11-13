// 函数: sub_1409da9e0
// 地址: 0x1409da9e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x18d0))
int32_t r8 = *(arg1 + 0x18d4)

if (rdx.d u> 0x63)
    int32_t r9_2 = r8 - rdx.d
    
    if (sx.q(r9_2) << 6 u< 0x4000 && (rdx * 3).d s>= r8 * 2)
        rdx = zx.q(r8)
    else if (r9_2 s> 0x40)
        if (rdx.d s> 0)
            int64_t rax = sub_140a846a0(rdx << 6, 0)
            r8 = *(arg1 + 0x18d4)
            rdx = rax u>> 6
    else if (rdx.d != 0)
        rdx = zx.q(r8)
else
    rdx = 0x63

if (rdx.d == r8)
    return 

*(arg1 + 0x18d4) = rdx.d
return sub_1409da020(arg1, *(arg1 + 0x18d0), rdx.d, 0x40) __tailcall
