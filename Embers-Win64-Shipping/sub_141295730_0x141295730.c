// 函数: sub_141295730
// 地址: 0x141295730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = sx.q(*(arg1 + 0xa28))
int32_t rdx = *(arg1 + 0xa2c)

if (r8.d u> 4)
    int32_t r9_2 = rdx - r8.d
    
    if (sx.q(r9_2) * 0x288 u< 0x4000 && (r8 * 3).d s>= rdx * 2)
        r8 = zx.q(rdx)
    else if (r9_2 s> 0x40)
        if (r8.d s> 0)
            int64_t rax_1 = sub_140a846a0(r8 * 0x288, 0)
            rdx = *(arg1 + 0xa2c)
            r8 = rax_1 u/ 0x288
    else if (r8.d != 0)
        r8 = zx.q(rdx)
else
    r8 = 4

if (r8.d == rdx)
    return 

int32_t rdx_2 = *(arg1 + 0xa28)
*(arg1 + 0xa2c) = r8.d
return sub_1412952d0(arg1, rdx_2, r8.d, 0x288) __tailcall
