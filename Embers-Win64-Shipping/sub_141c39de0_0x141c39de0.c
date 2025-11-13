// 函数: sub_141c39de0
// 地址: 0x141c39de0
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
        int32_t arg_8
        float arg_18
        sub_141c3ee10(arg1, rdx_1, *(arg1 + 4), arg2, &arg_8, &arg_18)
        int128_t zmm0_2 = sub_140a3f4a0(arg_18, arg_8)
        
        if (rdi.b != 0)
            sub_141c472f0(arg1 + 0x70)
        
        return zmm0_2

int512_t zmm0
zmm0.o = zx.o(0)
return zmm0
