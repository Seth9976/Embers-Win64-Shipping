// 函数: sub_1421f4330
// 地址: 0x1421f4330
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax

if (*(arg1 + 0x30) == 1 && arg3 != 0)
    void* r10_1 = *(arg3 + 0x430)
    
    if (r10_1 != 0)
        uint32_t r8 = zx.d(*(arg1 + 0x68))
        
        if (r8 != 0)
            if (r8 != 1)
                if (r8 != 2)
                    rax.b = *arg5 != 0
                    return rax
                
                *arg5 = sub_1423162f0(r10_1, arg4)
                *arg6 = *(arg1 + 0x34)
                arg6[1].d = *(arg1 + 0x3c)
                int32_t rax_2
                rax_2.b = *arg5 != 0
                return rax_2
            
            if (arg2 != 0 && arg4 s>= 0 && arg4 s< *(arg2 + 0x38))
                *arg5 = sub_1423162f0(r10_1, *(*(arg2 + 0x40) + (sx.q(arg4) << 2)))
                *arg6 = *(arg1 + 0x34)
                arg6[1].d = *(arg1 + 0x3c)
                int32_t rax_5
                rax_5.b = *arg5 != 0
                return rax_5
        else if (arg4 s>= 0 && arg4 s< *(arg1 + 0x48))
            int64_t rbx_1 = sx.q(arg4) * 5
            *arg5 = sub_142310d00(r10_1, *(*(arg1 + 0x40) + (rbx_1 << 2)))
            int64_t rax_8 = *(arg1 + 0x40)
            float zmm1[0x4] = *(arg1 + 0x34)
            int64_t zmm2 = *(arg1 + 0x38)
            int64_t zmm0 = *(arg1 + 0x3c)
            zmm1[0] = zmm1[0] f+ *(rax_8 + (rbx_1 << 2) + 8)
            zmm2.d = zmm2.d f+ *(rax_8 + (rbx_1 << 2) + 0xc)
            zmm0.d = zmm0.d f+ *(rax_8 + (rbx_1 << 2) + 0x10)
            *arg6 = (_mm_unpacklo_ps(zmm1, zmm2)).q
            arg6[1].d = zmm0.d
            rax.b = *arg5 != 0
            return rax

rax.b = 0
return rax
