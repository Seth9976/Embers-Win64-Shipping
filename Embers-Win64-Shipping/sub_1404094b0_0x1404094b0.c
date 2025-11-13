// 函数: sub_1404094b0
// 地址: 0x1404094b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 s>= arg3)
    return 

int64_t rsi_1 = sx.q(arg2)
uint64_t i_1 = zx.q(arg3 - arg2)
uint128_t zmm6
uint128_t var_38_1 = zmm6
uint64_t i_2 = i_1
int32_t* rdi_1 = arg6 + (rsi_1 << 2)
uint64_t i

do
    int32_t rcx = *rdi_1
    int64_t rax
    rax.w = 1 << rcx.b
    
    if (rcx s> 0)
        int32_t rax_2 = sx.d(rax.w)
        int64_t j = 0
        zmm6 = _mm_cvtepi32_ps(zx.o(rax_2))
        
        do
            uint128_t zmm0
            zmm0.d = (*(arg5 + ((sx.q(*(arg1 + 8)) * j + rsi_1) << 2))).d f+ 0.5f
            zmm0.d = zmm0.d f* zmm6.d
            int32_t rbx_1 = int.d(floor(_mm_cvtps_pd(zmm0.q).q).q)
            
            if (rbx_1 s> rax_2 - 1)
                rbx_1 = rax_2 - 1
            
            if (rbx_1 s< 0)
                rbx_1 = 0
            
            sub_1403fe100(arg7, rbx_1, *rdi_1)
            char rcx_2 = 0xe - (*rdi_1).b
            int64_t rax_8 = sx.q(*(arg1 + 8)) * j + rsi_1
            zmm0.d = _mm_cvtepi32_ps(zx.o(rbx_1)).d f+ 0.5f
            uint128_t zmm1
            zmm1.d = _mm_cvtepi32_ps(zx.o(1 << rcx_2)).d f* zmm0.d
            zmm1.d = zmm1.d f* 6.10351562e-05f
            zmm1.d = zmm1.d f- 0.5f
            zmm0.d = zmm1.d f+ *(arg4 + (rax_8 << 2))
            *(arg4 + (rax_8 << 2)) = zmm0.d
            int64_t rax_10 = sx.q(*(arg1 + 8)) * j
            j += 1
            int64_t rax_11 = rax_10 + rsi_1
            zmm0.d = (*(arg5 + (rax_11 << 2))).d f- zmm1.d
            *(arg5 + (rax_11 << 2)) = zmm0.d
        while (j s< sx.q(arg8))
        
        i_1 = i_2
    
    rsi_1 += 1
    rdi_1 = &rdi_1[1]
    i = i_1
    i_1 -= 1
    i_2 = i_1
while (i != 1)
