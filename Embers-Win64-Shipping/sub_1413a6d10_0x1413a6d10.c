// 函数: sub_1413a6d10
// 地址: 0x1413a6d10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
uint64_t var_30 = __security_cookie ^ &var_c8
uint64_t result

if (*(arg4 + 0x15a8) != 0)
    result = zx.q(data_1439b69d8)
    
    if (result.d s<= 0xffffffff)
        result = zx.q(*(arg4 + 0x123c))

if (*(arg4 + 0x15a8) == 0 || result.d s<= 0)
    result.b = 0
else
    uint128_t zmm1 = 0x3f800000
    double zmm2 = 1.0
    *arg5 = 0x3f800000
    
    if (data_1439b69ec != 0)
        zmm1 = 0x3fd0000000000000
        uint128_t zmm0
        zmm0.q = _mm_cvtps_pd(data_1439b69f0.q).q f* 0.01
        
        if (not(zmm0.q f< zmm1.q))
            zmm1 = _mm_min_sd(zmm0.q, zmm2)
        
        zmm1 = _mm_cvtpd_ps(zmm1)
        *arg5 = zmm1.d
    
    void* rax_1 = *(arg3 + 8)
    zmm1 = _mm_cvtps_pd(zmm1.q)
    int16_t var_50_1 = 0
    int32_t var_64_1 = 0x10000
    int64_t var_5c_1 = 0xa
    int32_t var_54_1 = 0x10009
    int16_t var_40_1 = 1
    arg5[1] = _mm_cvtepi32_ps(zx.o(result.d)).d
    int64_t rcx = *(rax_1 + 0x44)
    int32_t r12_1 = int.d(zmm2 f/ zmm1.q)
    int32_t var_78_1 = data_143f02318
    int32_t var_6c_1 = 0
    char var_3e_1 = 0
    uint128_t var_88 = data_143f02308
    int32_t var_74_1 = divs.dp.d(sx.q(rcx.d), r12_1)
    int32_t var_70_1 = divs.dp.d(sx.q(rcx:4.d), r12_1)
    int32_t var_68_1 = 1
    int16_t var_60_1 = 1
    wchar16 const* const var_48_1 = u"UnknownTexture2D"
    var_5c_1.d = 0xe
    *arg6 = sub_141188e50(arg2, &var_88, u"RayTracingDiffuseIndirect", 0)
    arg6[2] = sub_141188e50(arg2, &var_88, u"RayTracingDiffuseIndirectHitDistance", 0)
    int32_t rcx_4 = *(data_143ec5548 + 4)
    bool cond:1_1
    
    if (rcx_4 s< 0)
        cond:1_1 = *(arg4 + 0x1234) == 2
    else
        cond:1_1 = rcx_4 == 2
    
    int64_t* var_98_1 = arg6
    void* rax_10
    rax_10.b = cond:1_1
    int32_t var_a8_1 = arg5.d
    
    if (rax_10.b == 0)
        sub_1413a6f30(arg1, arg2, arg3, arg4, var_a8_1, r12_1)
    else
        sub_1413a79f0(arg1, arg2, arg3, arg4, var_a8_1, r12_1)
    
    result.b = 1

__security_check_cookie(var_30 ^ &var_c8)
return result
