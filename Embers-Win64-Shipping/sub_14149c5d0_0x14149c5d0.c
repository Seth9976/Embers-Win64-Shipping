// 函数: sub_14149c5d0
// 地址: 0x14149c5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = sx.q(*(arg1 + 0x70))
int32_t r8 = *(arg1 + 0x74)

if (rdx.d u> 5)
    int32_t r9_2 = r8 - rdx.d
    
    if (sx.q(r9_2) * 0x14 u< 0x4000 && (rdx * 3).d s>= r8 * 2)
        rdx = zx.q(r8)
    else if (r9_2 s> 0x40)
        if (rdx.d s> 0)
            int64_t rax_1 = sub_140a846a0(rdx * 0x14, 0)
            r8 = *(arg1 + 0x74)
            rdx = rax_1 u/ 0x14
    else if (rdx.d != 0)
        rdx = zx.q(r8)
else
    rdx = 5

if (rdx.d == r8)
    return 

*(arg1 + 0x74) = rdx.d
return sub_14149bc70(arg1, *(arg1 + 0x70), rdx.d, 0x14) __tailcall
