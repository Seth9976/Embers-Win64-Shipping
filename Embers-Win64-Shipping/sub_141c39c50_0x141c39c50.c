// 函数: sub_141c39c50
// 地址: 0x141c39c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0xd) != 0)
    int64_t* rdx_1 = *(arg1 + 0xb0)
    int64_t rdi
    rdi.b = 1
    
    if (rdx_1 == 0)
        rdx_1 = (sx.q(*(arg1 + 0x80)) << 5) + *(arg1 + 0x70)
    else
        rdi.b = 0
    
    if (rdx_1 != 0)
        float arg_8
        float arg_18
        sub_141c3ee10(arg1, rdx_1, *(arg1 + 4), arg2, &arg_8, &arg_18)
        float zmm1 = arg_8
        float zmm0 = arg_18
        float temp0[0x4] = _mm_sqrt_ss(0, zmm1 * zmm1 + zmm0 * zmm0)
        
        if (rdi.b != 0)
            sub_141c472f0(arg1 + 0x70)
        
        return temp0[0]

int512_t result
result.o = zx.o(0)
return result
