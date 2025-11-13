// 函数: sub_14085a720
// 地址: 0x14085a720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(*(arg1 + 0x1c8))
int32_t rdx = *(arg1 + 0x1cc)

if (r8.d u> 4)
    int32_t r9_2 = rdx - r8.d
    
    if (sx.q(r9_2) * 0x70 u< 0x4000 && (r8 * 3).d s>= rdx * 2)
        r8 = zx.q(rdx)
    else if (r9_2 s> 0x40)
        if (r8.d s> 0)
            int64_t rax_1 = sub_140a846a0(r8 * 0x70, 0)
            rdx = *(arg1 + 0x1cc)
            r8 = rax_1 u/ 0x70
    else if (r8.d != 0)
        r8 = zx.q(rdx)
else
    r8 = 4

if (r8.d == rdx)
    return 

int32_t rdx_2 = *(arg1 + 0x1c8)
*(arg1 + 0x1cc) = r8.d
return sub_140859e20(arg1, rdx_2, r8.d, 0x70) __tailcall
