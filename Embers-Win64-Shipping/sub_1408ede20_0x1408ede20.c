// 函数: sub_1408ede20
// 地址: 0x1408ede20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

j_sub_140ce3290(arg1)
int64_t rbx = *(sub_140d226f0(arg1, sub_141a6e000()) + 0x110)
uint64_t arg_8 = rbx u>> 0x20
uint32_t r15_1 = (rbx u>> 0x20).d
uint32_t r14_1 = (rbx u>> 0x20).d
void* rax_5 = sub_140d226f0(arg1, sub_141a6e000())
uint128_t zmm2 = *(arg1 + 0xfc)
uint128_t zmm0 = data_143986160
int64_t rdi = *(rax_5 + 0x108)
uint32_t rax_7 = (rbx u>> 0x20).d

if (not(zmm2.d f== zmm0.d))
    int64_t temp0_1 = _mm_cvtepi32_pd(zx.q(rbx.d))
    zmm0 = _mm_cvtepi32_pd(zx.q((rbx u>> 0x20).d))
    zmm2.q = _mm_cvtps_pd(zmm2.q).q f* temp0_1 f/ zmm0.q
    int64_t rcx_2 = int.q(zmm2.q)
    zmm0 = zmm2
    
    if (rcx_2 != -0x8000000000000000 && not(float.d(rcx_2) f== zmm2.q))
        zmm0.q = float.d(rcx_2 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))
    
    zmm2.q = zmm2.q f- zmm0.q
    int32_t rax_10 = int.d(zmm0.q)
    float temp0_6 = _mm_cvtpd_ps(zmm2)
    temp0_6 - 0f
    
    if (temp0_6 >= 0f)
        zmm0 = _mm_min_ss(0x3f7fffff, temp0_6)
    else
        zmm0 = zx.o(0)
    
    if (temp0_6 >= 0f)
        r14_1 = arg_8.d
    
    if (temp0_6 >= 0f)
        r15_1 = (rbx u>> 0x20).d
    
    arg_8.d = rax_10
    
    if (zmm0.d f>= 0f)
        r14_1 = r15_1
        arg_8:4.d = _mm_min_ss(0x3f7fffff, zmm0.d).d
    else
        arg_8:4.d = 0
    
    rax_7 = r14_1
    *(arg1 + 0xec) = *sub_1408ec700(&arg_8, arg_8, rbx, rdi)
    *(arg1 + 0xfc) = data_143986160.d
    zmm0 = data_143986160

zmm2 = arg1[0x20].d

if (not(zmm2.d f== zmm0.d))
    int64_t temp0_9 = _mm_cvtepi32_pd(zx.q(rbx.d))
    zmm0 = _mm_cvtepi32_pd(zx.q(rax_7))
    zmm2.q = _mm_cvtps_pd(zmm2.q).q f* temp0_9 f/ zmm0.q
    int64_t rcx_6 = int.q(zmm2.q)
    zmm0 = zmm2
    
    if (rcx_6 != -0x8000000000000000 && not(float.d(rcx_6) f== zmm2.q))
        zmm0.q = float.d(rcx_6 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0.q))) & 1))
    
    zmm2.q = zmm2.q f- zmm0.q
    int32_t rax_14 = int.d(zmm0.q)
    float temp0_14 = _mm_cvtpd_ps(zmm2)
    
    if (temp0_14 >= 0f)
        zmm0 = _mm_min_ss(0x3f7fffff, temp0_14)
    else
        zmm0 = zx.o(0)
    
    arg_8.d = rax_14
    
    if (zmm0.d f>= 0f)
        arg_8:4.d = _mm_min_ss(zmm0.d, 0x3f7fffff).d
    else
        arg_8:4.d = 0
    
    arg1[0x1e].d = *sub_1408ec700(&arg_8, arg_8, rbx, rdi)
    arg1[0x20].d = data_143986160

void* result = sub_140d2bce0(&arg1[0x21])

if (result != 0 && arg1[0x1c] == 0)
    result = sub_140d2bce0(&arg1[0x21])
    void* result_1 = result
    
    if (result != 0)
        void* rax_16 = sub_1408ea240()
        void* rcx_12 = *(result_1 + 0x10)
        result = rax_16 + 0x30
        int64_t rdx_4 = sx.q(*(result + 8))
        
        if (rdx_4.d s<= *(rcx_12 + 0x38) && *(*(rcx_12 + 0x30) + (rdx_4 << 3)) == result)
            result = sub_1408e50d0(result_1)
            arg1[0x1c] = result

return result
