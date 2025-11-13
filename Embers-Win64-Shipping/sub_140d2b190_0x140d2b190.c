// 函数: sub_140d2b190
// 地址: 0x140d2b190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x88))
int32_t r8 = *(arg1 + 0x8c)

if (rdx.d u> 8)
    int32_t r9_2 = r8 - rdx.d
    
    if (sx.q(r9_2) << 4 u< 0x4000 && (rdx * 3).d s>= r8 * 2)
        rdx = zx.q(r8)
    else if (r9_2 s> 0x40)
        if (rdx.d s> 0)
            int64_t rax = sub_140a846a0(rdx << 4, 0)
            r8 = *(arg1 + 0x8c)
            rdx = rax u>> 4
    else if (rdx.d != 0)
        rdx = zx.q(r8)
else
    rdx = 8

if (rdx.d == r8)
    return 

*(arg1 + 0x8c) = rdx.d
return sub_140d2b050(arg1, *(arg1 + 0x88), rdx.d, 0x10) __tailcall
