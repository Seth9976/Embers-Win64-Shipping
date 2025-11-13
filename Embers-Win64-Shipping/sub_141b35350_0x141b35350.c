// 函数: sub_141b35350
// 地址: 0x141b35350
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_140d3c6e0(&sub_141af0440(arg5)[1])
int64_t result_1 = result

if (result == 0 || *(result + 0x28) == 0)
    result.b = 0
else
    int32_t var_30_1 = data_143dbb210
    int32_t rcx_3 = data_143dbb200
    int64_t var_38 = data_143dbb208
    int32_t var_40_1 = rcx_3
    int64_t var_48 = data_143dbb1f8.q
    sub_141dd6920(arg2, &var_48, &var_38, 0, nullptr, 0)
    int64_t* rax_1 = sub_142486290()
    void* rax_2 = rax_1[0x23]
    
    if (rax_2 == 0)
        int64_t rdx_1 = *rax_1
        (*(rdx_1 + 0x390))(rax_1, rdx_1)
        rax_2 = rax_1[0x23]
    
    if (rax_2 != 0)
        *(*(arg2 + 0x228) + 0x200) = *(*(rax_2 + 0x228) + 0x200)
        sub_1405af800(*(arg2 + 0x228) + 0x270, *(result_1 + 0x28) + 0x60)
        *(*(arg2 + 0x228) + 0x240) = *(*(result_1 + 0x28) + 0x5a0)
    
    int32_t rax_7 = *(arg4 + 0x24)
    int32_t rdx_4 = *(arg1 + 0x40)
    var_38.d = rdx_4
    var_38:4.d = 0
    int64_t rax_8
    
    if (rax_7 == 0x80000000)
        int64_t* rax_9 = 0x10
        
        if (*(arg4 + 0x20) != 0)
            rax_9 = 4
        
        rax_8 = *(rax_9 + arg4)
    else
        var_48.d = rax_7
        var_48:4.d = 0
        rax_8 = var_48
    
    var_48 = var_38
    var_38 = rax_8
    double zmm2_1[0x2] = var_38:4.d
    zmm2_1[0].d = zmm2_1[0].d f- var_48:4.d
    float zmm1_1[0x4] = zmm2_1
    zmm1_1[0] = zmm1_1[0] f+ zmm2_1[0].d
    zmm1_1[0] = zmm1_1[0] - 0.5f
    int32_t rcx_12 = int.d(zmm1_1[0]) s>> 1
    int32_t r8_1 = rax_8.d - rdx_4 + rcx_12
    uint128_t zmm0_2 = _mm_cvtepi32_ps(zx.o(rcx_12))
    var_48.d = r8_1
    zmm2_1[0].d = zmm2_1[0].d f- zmm0_2.d
    
    if (zmm2_1[0].d f>= 0f)
        var_48:4.d = __minss_xmmss_memss(zmm2_1[0].d, 0x3f7fffff)[0].d
    else
        var_48:4.d = 0
    
    int64_t rdx_5 = *(arg4 + 0x18)
    uint32_t rcx_14 = (rdx_5 u>> 0x20).d
    var_38 = var_48
    zmm0_2.d = _mm_cvtepi32_ps(zx.o(rcx_14)).d f* var_38:4.d
    zmm1_1 = _mm_cvtepi32_pd(zx.o(rdx_5.d)[0].q)
    double temp0_5[0x2] = _mm_cvtps_pd(zmm0_2.q)
    zmm0_2.q = float.d(sx.q(rcx_14) * sx.q(r8_1))
    temp0_5[0] = temp0_5[0] f+ zmm0_2.q
    temp0_5[0] = temp0_5[0] f/ zmm1_1[0].q
    float zmm6_1
    result, zmm6_1 = sub_141ead9e0(result_1, _mm_cvtpd_ps(temp0_5))
    
    if (zmm6_1 f>= *(result_1 + 0x5c))
        result.b = 0
    else
        float zmm15[0x4]
        sub_141e94460(result_1, arg3, zmm15)
        result.b = 1

return result
