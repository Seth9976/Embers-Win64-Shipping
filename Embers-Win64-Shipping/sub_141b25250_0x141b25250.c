// 函数: sub_141b25250
// 地址: 0x141b25250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg3 != 0)
    if (*(arg1 + 0x90) != 2)
        int64_t rbx_1 = sx.q(arg2[1].d)
        int32_t rax_1 = (rbx_1 + 1).d
        arg2[1].d = rax_1
        
        if (rax_1 s> *(arg2 + 0xc))
            sub_1405a4cf0(arg2)
        
        *(*arg2 + (rbx_1 << 2)) = *(arg1 + 0x94)
    
    if (*(arg1 + 0x98) != 2)
        int64_t rbx_2 = sx.q(arg2[1].d)
        int32_t rax_3 = (rbx_2 + 1).d
        arg2[1].d = rax_3
        
        if (rax_3 s> *(arg2 + 0xc))
            sub_1405a4cf0(arg2)
        
        *(*arg2 + (rbx_2 << 2)) = *(arg1 + 0x9c)

void* rax_6 = sub_140d226f0(arg1, sub_141a6e000())
uint128_t zmm1 = *(arg1 + 0xf4)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm1, data_142d3f770)
int64_t rcx_5 = *(rax_6 + 0x108)
int64_t rax_7 = *(arg1 + 0x90)
uint32_t r12_2 = (rax_7 u>> 0x20).d + 1
int64_t rax_8 = *(arg1 + 0x98)

if (rax_7.b == 1)
    r12_2 = (rax_7 u>> 0x20).d

uint32_t rbx_4 = (rax_8 u>> 0x20).d
void* rax_9 = *(arg1 + 0xe0)

if (rax_8.b == 1)
    rbx_4 = (rax_8 u>> 0x20).d + 1

if (temp0[0] f<= 9.99999994e-09f || rax_9 == 0)
    zmm1 = 0x3f800000
else
    zmm1.d = zmm1.d f* *(rax_9 + 0x94)

uint128_t zmm7 = zx.o(0)
double zmm2[0x2]

if (rax_9 == 0)
    zmm2 = zx.o(0)
else
    zmm2 = *(rax_9 + 0x90)

int64_t r9 = sx.q(*(arg1 + 0xe8))
int32_t r8_4 = *(arg1 + 0xf0) + *(arg1 + 0xec)
uint32_t arg_c = 0
uint128_t zmm6
zmm6.q = 0x3ff0000000000000 f/ _mm_cvtps_pd(zmm1.q)[0].q
int32_t arg_8
arg_8.q = r9.d.q
uint32_t rax_13 = (rcx_5 u>> 0x20).d
int64_t rdx_5 = sx.q(rax_13)
uint128_t zmm4 = _mm_cvtepi32_ps(zx.o(rax_13))
uint32_t zmm0[0x4] = zmm4
zmm0[0] = zmm0[0] f* r8_4.q:4.d
zmm4.d = zmm4.d f* 0f
zmm0 = _mm_cvtps_pd(zmm0[0].q)
zmm1.q = float.d(sx.q(r8_4) * rdx_5)
uint128_t zmm5 = _mm_cvtepi32_pd(zx.q(rcx_5.d))
zmm1.q = zmm1.q f+ zmm0[0].q
double temp0_5[0x2] = _mm_cvtps_pd(zmm2[0])
zmm1.q = zmm1.q f/ zmm5.q
uint64_t result = r9 * rdx_5
zmm1.q = zmm1.q f* zmm6.q
temp0_5[0] = temp0_5[0] f- zmm1.q
zmm1.q = float.d(result)
double temp0_7[0x2] = _mm_cvtps_pd(_mm_cvtpd_ps(temp0_5)[0].q)
zmm1.q = zmm1.q f+ _mm_cvtps_pd(zmm4.q)[0].q
zmm0 = temp0_7
zmm1.q = zmm1.q f/ zmm5.q
zmm1.q = zmm1.q f* zmm6.q
zmm5 = _mm_cvtepi32_pd(zx.q(rcx_5.d))
zmm0[0].q = zmm0[0].q f- zmm1.q
zmm1.q = zmm5.q f* temp0_7[0]
zmm6 = _mm_cvtepi32_pd(zx.q((rcx_5 u>> 0x20).d))
float temp0_11[0x4] = _mm_cvtpd_ps(zmm0)
zmm1.q = zmm1.q f/ zmm6.q
int64_t rcx_7 = int.q(zmm1.q)
zmm0 = zmm1

if (rcx_7 != -0x8000000000000000)
    zmm2 = zx.o(0)
    zmm2[0] = float.d(rcx_7)
    
    if (not(zmm2[0] f== zmm1.q))
        uint32_t temp0_13 = _mm_movemask_pd(_mm_unpacklo_pd(zmm0, zmm0[0].q))
        zmm0 = zx.o(0)
        result = zx.q(temp0_13) & 1
        zmm0[0].q = float.d(rcx_7 - result)

zmm1.q = zmm1.q f- zmm0[0].q
int32_t rdi_1 = int.d(zmm0[0].q)

if (not(zmm1.q f<= 0.0))
    zmm0 = _mm_cvtps_pd(0x3f7fffff)
    
    if (not(zmm1.q f<= zmm0[0].q))
        zmm1 = zmm0

zmm0 = _mm_cvtpd_ps(zmm1)

if (not(zmm0[0] f>= 0f))
    arg_c = 0
else if (zmm0[0] f>= 0.99999994f)
    arg_c = 0x3f7fffff
else
    arg_c = zmm0[0]

zmm0 = _mm_cvtps_pd(temp0_11[0].q)
zmm0[0].q = zmm0[0].q f* zmm5.q
zmm0[0].q = zmm0[0].q f/ zmm6.q
int64_t rcx_9 = int.q(zmm0[0].q)
zmm1 = zmm0

if (rcx_9 != -0x8000000000000000)
    double zmm3[0x2] = zx.o(0)
    zmm3[0] = float.d(rcx_9)
    
    if (not(zmm3[0] f== zmm0[0].q))
        result = zx.q(_mm_movemask_pd(_mm_unpacklo_pd(zmm1, zmm1.q))) & 1
        zmm1.q = float.d(rcx_9 - result)

zmm0[0].q = zmm0[0].q f- zmm1.q
int32_t rsi = int.d(zmm1.q)

if (not(zmm0[0].q f<= 0.0))
    zmm1 = _mm_cvtps_pd(0x3f7fffff)
    
    if (not(zmm0[0].q f<= zmm1.q))
        zmm0 = zmm1

zmm1 = _mm_cvtpd_ps(zmm0)

if (not(zmm1.d f>= 0f))
    int32_t var_84 = 0
else if (zmm1.d f>= 0.99999994f)
    int32_t var_84_2 = 0x3f7fffff
else
    int32_t var_84_1 = zmm1.d

if (rdi_1 s> 1)
    int32_t var_80_1
    var_80_1.q = (rbx_4 - 1).q
    char arg_18 = 1
    uint64_t result_1
    result_1.d = r12_2
    
    while (true)
        result_1:4.d = zmm7.d
        result = result_1
        arg_8.q = result
        
        if (r12_2 s>= rbx_4 - 1)
            if (r12_2 != rbx_4 - 1)
                break
            
            if (arg_c[0] f>= 0f)
                break
        
        int32_t rcx_11 = arg2[1].d
        arg2[1].d = rcx_11 + 1
        
        if (rcx_11 + 1 s> *(arg2 + 0xc))
            sub_1405a4cf0(arg2)
        
        *(*arg2 + (sx.q(rcx_11) << 2)) = r12_2
        
        if (arg_18 == 0)
            arg_8.q = rdi_1.q
            zmm7.d = zmm7.d f+ arg_c
            zmm1.d = zmm7.d f* 2f
            zmm1.d = zmm1.d f- 0.5f
            int32_t rax_27 = int.d(zmm1.d)
            zmm1 = zmm7
            r12_2 += (rax_27 s>> 1) + rdi_1
            int32_t rcx_16 = int.d(zmm1.d)
            result_1.d = r12_2
            
            if (rcx_16 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_16))[0] f== zmm1.d))
                zmm1 = _mm_cvtepi32_ps(zx.o(rcx_16
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))
            
            zmm7.d = zmm7.d f- zmm1.d
        else
            arg_8.q = rsi.q
            zmm7.d = zmm7.d f+ arg_c
            zmm1.d = zmm7.d f* 2f
            zmm1.d = zmm1.d f- 0.5f
            int32_t rax_22 = int.d(zmm1.d)
            zmm1 = zmm7
            r12_2 += (rax_22 s>> 1) + rsi
            int32_t rcx_14 = int.d(zmm1.d)
            result_1.d = r12_2
            
            if (rcx_14 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_14))[0] f== zmm1.d))
                zmm1 = _mm_cvtepi32_ps(zx.o(rcx_14
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1.q)) & 1)))
            
            zmm7.d = zmm7.d f- zmm1.d
            arg_18 = 0

return result
