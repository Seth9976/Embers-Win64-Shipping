// 函数: sub_141b2c0f0
// 地址: 0x141b2c0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg1[0x37]

if (rax != 0)
    arg1[0x1c] = rax

int64_t rax_1 = arg1[0x38]

if (rax_1 != 0)
    arg1[0x1c] = rax_1

int32_t zmm0 = arg1[0x39].d

if (not(zmm0 f== 0f))
    *(arg1 + 0x1ac) = zmm0

zmm0 = *(arg1 + 0x1cc)

if (not(zmm0 f== 0f))
    arg1[0x36].d = zmm0

zmm0 = arg1[0x3a].d

if (not(zmm0 f== 1f))
    *(arg1 + 0xf4) = zmm0

int32_t rax_3 = *(arg1 + 0x1d4) & 1

if (rax_3 != 0)
    arg1[0x1f].d &= 0xfffffffe
    arg1[0x1f].d |= rax_3

int64_t rax_4 = arg1[0x3b]

if (rax_4 != data_143f2c5a8)
    *(arg1 + 0xfc) = rax_4

void* rax_6 = sub_140d226f0(arg1, sub_141a6e000())

if (rax_6 != 0)
    int64_t rbx_1 = *(rax_6 + 0x110)
    uint128_t zmm2 = *(arg1 + 0x1ac)
    uint128_t zmm0_1 = data_1439e58a0
    int64_t rdi_1 = *(rax_6 + 0x108)
    uint32_t r14_2 = (rbx_1 u>> 0x20).d
    uint32_t rax_8 = (rbx_1 u>> 0x20).d
    uint32_t rdx_2 = (rbx_1 u>> 0x20).d
    int32_t arg_8
    int32_t arg_c
    
    if (not(zmm2.d f== zmm0_1.d))
        int64_t temp0_1 = _mm_cvtepi32_pd(zx.q(rbx_1.d))
        zmm0_1 = _mm_cvtepi32_pd(zx.q((rbx_1 u>> 0x20).d))
        zmm2.q = _mm_cvtps_pd(zmm2.q).q f* temp0_1 f/ zmm0_1.q
        int64_t rcx_1 = int.q(zmm2.q)
        zmm0_1 = zmm2
        
        if (rcx_1 != -0x8000000000000000 && not(float.d(rcx_1) f== zmm2.q))
            zmm0_1.q =
                float.d(rcx_1 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1.q))) & 1))
        
        zmm2.q = zmm2.q f- zmm0_1.q
        int32_t rax_13 = int.d(zmm0_1.q)
        float temp0_6 = _mm_cvtpd_ps(zmm2)
        temp0_6 - 0f
        
        if (temp0_6 >= 0f)
            zmm0_1 = _mm_min_ss(0x3f7fffff, temp0_6)
        else
            zmm0_1 = zx.o(0)
        
        if (temp0_6 >= 0f)
            rdx_2 = (rbx_1 u>> 0x20).d
        
        arg_8 = rax_13
        
        if (temp0_6 >= 0f)
            r14_2 = (rbx_1 u>> 0x20).d
        
        if (zmm0_1.d f>= 0f)
            r14_2 = rdx_2
            arg_c = _mm_min_ss(0x3f7fffff, zmm0_1.d).d
        else
            arg_c = 0
        
        rax_8 = r14_2
        *(arg1 + 0xec) = *sub_1408ec700(&arg_8, arg_8.q, rbx_1, rdi_1)
        *(arg1 + 0x1ac) = data_1439e58a0.d
        zmm0_1 = data_1439e58a0
    
    zmm2 = arg1[0x36].d
    
    if (not(zmm2.d f== zmm0_1.d))
        int64_t temp0_9 = _mm_cvtepi32_pd(zx.q(rbx_1.d))
        zmm0_1 = _mm_cvtepi32_pd(zx.q(rax_8))
        zmm2.q = _mm_cvtps_pd(zmm2.q).q f* temp0_9 f/ zmm0_1.q
        int64_t rcx_5 = int.q(zmm2.q)
        zmm0_1 = zmm2
        
        if (rcx_5 != -0x8000000000000000 && not(float.d(rcx_5) f== zmm2.q))
            zmm0_1.q =
                float.d(rcx_5 - (zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm0_1, zmm0_1.q))) & 1))
        
        zmm2.q = zmm2.q f- zmm0_1.q
        int32_t rax_17 = int.d(zmm0_1.q)
        zmm0_1 = _mm_cvtpd_ps(zmm2)
        
        if (zmm0_1.d f>= 0f)
            zmm0_1 = _mm_min_ss(zmm0_1.d, 0x3f7fffff)
        else
            zmm0_1 = zx.o(0)
        
        arg_8 = rax_17
        
        if (zmm0_1.d f>= 0f)
            arg_c = _mm_min_ss(zmm0_1.d, 0x3f7fffff).d
        else
            arg_c = 0
        
        arg1[0x1e].d = *sub_1408ec700(&arg_8, arg_8.q, rbx_1, rdi_1)
        arg1[0x36].d = data_1439e58a0.d

uint128_t var_38 = data_1439a9488

if (sub_140cdd5d0(arg1, &var_38) s< 2)
    void* rbx_2 = arg1[0x1c]
    
    if (rbx_2 != 0)
        void* rax_20 = sub_1424696d0()
        void* rcx_10 = *(rbx_2 + 0x10)
        int64_t rax_21 = sx.q(*(rax_20 + 0x38))
        
        if (rax_21.d s<= *(rcx_10 + 0x38) && *(*(rcx_10 + 0x30) + (rax_21 << 3)) == rax_20 + 0x30
                && *(rbx_2 + 0x16d) != 0 && *(rbx_2 + 0x16f) == 0)
            *(rbx_2 + 0x16f) = 1
            sub_140d25500(rbx_2)

return j_sub_140ce3290(arg1) __tailcall
