// 函数: sub_1426f9ae0
// 地址: 0x1426f9ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_48 = *arg3
uint128_t zmm0
uint128_t zmm1
float zmm2
float zmm3
float zmm4

if (((*(arg2 + 0x98) u>> 2).b & 1) == 0)
    zmm4 = *(arg1 + 0x114)
else
    int64_t* rcx_2
    
    if (*(arg2 + 0x30) s<= 0)
        rcx_2 = &data_143b58088
    else
        rcx_2 = (sx.q(*(arg2 + 0x30) - 1) << 5) + *(arg2 + 0x28)
    
    zmm1 = zx.o(*rcx_2)
    zmm0 = zmm1
    zmm2 = var_48.d f- zmm1.d
    int32_t rax_5 = rcx_2[1].d
    zmm1 = arg3[1].d
    zmm4 = *(arg1 + 0x114)
    zmm3 = var_48:4.d f- _mm_shuffle_ps(zmm0, zmm0, 0x55).d
    zmm1.d = zmm1.d f- rax_5
    zmm1.d = zmm1.d f* zmm1.d
    zmm4 = __maxss_xmmss_memss(zmm4 f- _mm_sqrt_ss(0, zmm3 * zmm3 + zmm2 * zmm2 f+ zmm1.d).d, 
        *(arg1 + 0x110))

int32_t rcx_3 = *(arg2 + 0x30)

if (rcx_3 s> 1)
    int64_t r8 = *(arg2 + 0x28)
    zmm3 = (zx.o(0)).d
    int64_t rax_7 = sx.q(rcx_3 - 1) << 5
    int32_t result_1 = rcx_3 - 2
    uint64_t var_48_1 = *(rax_7 + r8)
    
    if (rcx_3 - 2 s>= 0)
        uint128_t zmm5 = *(rax_7 + r8 + 8)
        uint128_t zmm6 = var_48_1:4.d
        int64_t* rdx_2 = (sx.q(result_1) << 5) + r8
        uint128_t zmm7 = var_48_1.d
        uint64_t result
        int32_t result_2
        
        do
            zmm0 = zx.o(*rdx_2)
            zmm1 = zmm6
            zmm2 = zmm7.d f- zmm0.d
            zmm6 = zmm0.q:4.d
            zmm7 = zmm0
            zmm1.d = zmm1.d f- zmm6.d
            zmm0 = zmm5
            result = zx.q(result_1)
            zmm5 = rdx_2[1].d
            zmm0.d = zmm0.d f- zmm5.d
            zmm1.d = zmm1.d f* zmm1.d
            zmm0.d = zmm0.d f* zmm0.d
            zmm1.d = zmm1.d f+ zmm2 * zmm2
            zmm1.d = zmm1.d f+ zmm0.d
            zmm3 = zmm3 f+ _mm_sqrt_ss(0, zmm1.d).d
            
            if (zmm3 > zmm4)
                break
            
            rdx_2 -= 0x20
            result_2 = result_1
            result_1 -= 1
        while (result_2 - 1 s>= 0)
        return result

return 0x7fffffff
