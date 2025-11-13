// 函数: sub_1408ed520
// 地址: 0x1408ed520
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
uint32_t zmm6[0x4] = *(arg1 + 0xf4)
uint32_t temp0[0x4] = __andps_xmmxud_memxud(zmm6, data_142d3f770)
int32_t* result_3 = *(rax_6 + 0x108)
int64_t rax_7 = *(arg1 + 0x90)
int32_t* result_1 = result_3
uint32_t r15_2 = (rax_7 u>> 0x20).d + 1
int64_t rax_8 = *(arg1 + 0x98)

if (rax_7.b == 1)
    r15_2 = (rax_7 u>> 0x20).d

uint32_t rbx_4 = (rax_8 u>> 0x20).d

if (rax_8.b == 1)
    rbx_4 = (rax_8 u>> 0x20).d + 1

if (not(temp0[0] f> 9.99999994e-09f))
    zmm6 = 0x3f800000

void* rcx_7 = *(arg1 + 0xe0)
float zmm10[0x4] = zx.o(0)
uint32_t zmm0[0x4]
uint32_t zmm1[0x4]

if (rcx_7 == 0)
    zmm1 = zx.o(0)
else
    zmm0, zmm6 = sub_1408df1b0(rcx_7, temp0)
    zmm1 = zmm0

double zmm2[0x2] = zx.o(0)
uint32_t rcx_9 = *(arg1 + 0xf0) + *(arg1 + 0xec)
int64_t rsi_1 = sx.q(*(arg1 + 0xe8))
zmm2[0] = fconvert.d(zmm1[0])
uint32_t arg_8
arg_8.q = rcx_9.q
int64_t rax_10 = sx.q(result_1:4.d)
zmm1 = zx.o(0)
uint128_t zmm9
zmm9.q = 0x3ff0000000000000 f/ _mm_cvtps_pd(zmm6[0].q)[0].q
uint128_t zmm7 = _mm_cvtepi32_ps(zx.o(rax_10.d))
uint128_t zmm8 = _mm_cvtepi32_pd(zx.q(result_3.d))
zmm1[0].q = float.d(sx.q(rcx_9) * rax_10)
zmm0 = zmm7
zmm0[0] = zmm0[0] f* 0f
arg_8.q = rsi_1.d.q
zmm0 = _mm_cvtps_pd(zmm0[0].q)
zmm1[0].q = zmm1[0].q f+ zmm0[0].q
zmm1[0].q = zmm1[0].q f/ zmm8.q
zmm1[0].q = zmm1[0].q f* zmm9.q
zmm2[0] = zmm2[0] f- zmm1[0].q
zmm6 = _mm_cvtpd_ps(zmm2)
sub_1408ec3b0(&result_1, zmm6, result_3)
zmm7.d = zmm7.d f* 0f
int64_t temp0_6 = _mm_cvtps_pd(zmm7.q)
double temp0_7[0x2] = _mm_cvtps_pd(zmm6[0].q)
uint128_t zmm1_1
zmm1_1.q = float.d(rsi_1 * rax_10)
zmm1_1.q = zmm1_1.q f+ temp0_6
zmm1_1.q = zmm1_1.q f/ zmm8.q
zmm1_1.q = zmm1_1.q f* zmm9.q
temp0_7[0] = temp0_7[0] f- zmm1_1.q
int32_t* result_5
int32_t* result = sub_1408ec3b0(&result_5, _mm_cvtpd_ps(temp0_7), result_3)
int32_t* result_2 = result_1

if (result_2.d s> 1)
    int32_t* result_4 = result_5
    result_1.d = rbx_4 - 1
    result_1:4.d = 0
    result_1 = result_1
    zmm8 = result_1:4.d
    int64_t r13
    r13.b = 1
    arg_8 = r15_2
    
    while (true)
        float arg_c = zmm10[0]
        result = arg_8.q
        result_1 = result
        
        if (r15_2 s>= rbx_4 - 1)
            if (r15_2 != rbx_4 - 1)
                break
            
            if (result_1:4.d.d f>= zmm8.d)
                break
        
        int64_t r14_1 = sx.q(arg2[1].d)
        int32_t rax_17 = (r14_1 + 1).d
        arg2[1].d = rax_17
        
        if (rax_17 s> *(arg2 + 0xc))
            sub_1405a4cf0(arg2)
        
        *(*arg2 + (r14_1 << 2)) = r15_2
        float zmm1_2[0x4]
        
        if (r13.b == 0)
            result_1 = result_2
            zmm10[0] = zmm10[0] f+ result_1:4.d
            zmm10[0] = zmm10[0] * 2f
            zmm10[0] = zmm10[0] - 0.5f
            zmm1_2 = zmm10
            r15_2 += (int.d(zmm10[0]) s>> 1) + result_2.d
            int32_t rcx_15 = int.d(zmm1_2[0])
            arg_8 = r15_2
            
            if (rcx_15 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_15)).d f== zmm1_2[0]))
                zmm1_2 = _mm_cvtepi32_ps(zx.o(rcx_15
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_2, zmm1_2[0].q)) & 1)))
            
            zmm10[0] = zmm10[0] - zmm1_2[0]
        else
            result_1 = result_4
            zmm10[0] = zmm10[0] f+ result_1:4.d
            zmm10[0] = zmm10[0] * 2f
            zmm10[0] = zmm10[0] - 0.5f
            zmm1_2 = zmm10
            r15_2 += (int.d(zmm10[0]) s>> 1) + result_4.d
            int32_t rcx_13 = int.d(zmm1_2[0])
            arg_8 = r15_2
            
            if (rcx_13 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_13)).d f== zmm1_2[0]))
                zmm1_2 = _mm_cvtepi32_ps(zx.o(rcx_13
                    - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1_2, zmm1_2[0].q)) & 1)))
            
            zmm10[0] = zmm10[0] - zmm1_2[0]
            r13.b = 0

return result
