// 函数: sub_14113b800
// 地址: 0x14113b800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x90))
int32_t r8 = *(arg1 + 0x94)

if (rdx.d u> 3)
    int32_t r9_2 = r8 - rdx.d
    
    if (sx.q(r9_2) * 0x2c u< 0x4000 && (rdx * 3).d s>= r8 * 2)
        rdx = zx.q(r8)
    else if (r9_2 s> 0x40)
        if (rdx.d s> 0)
            int64_t rax_1 = sub_140a846a0(rdx * 0x2c, 0)
            r8 = *(arg1 + 0x94)
            rdx = rax_1 u/ 0x2c
    else if (rdx.d != 0)
        rdx = zx.q(r8)
else
    rdx = 3

if (rdx.d == r8)
    return 

*(arg1 + 0x94) = rdx.d
return sub_14113b670(arg1, *(arg1 + 0x90), rdx.d, 0x2c) __tailcall
