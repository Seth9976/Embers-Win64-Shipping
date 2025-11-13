// 函数: sub_142409af0
// 地址: 0x142409af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = arg1[0x38]

if (result != 0)
    uint128_t zmm0
    zmm0.d = _mm_cvtepi32_ps(zx.o(*(result + 0x40))).d f* 0.00052083336f
    uint128_t zmm6 = 0x3f800000
    zmm0 = _mm_max_ss(zmm0.d, 0x3f800000)
    arg1[0x14].d = zmm0.d
    *(arg1 + 0xa4) = zmm0.d
    void var_38
    int64_t* rax = sub_140aae420(&var_38, arg2)
    int64_t rdx = arg1[0x26]
    arg1[0x26] = *rax
    *rax = rdx
    int64_t rdx_1 = arg1[0x27]
    arg1[0x27] = rax[1]
    rax[1] = rdx_1
    arg1[0x28].d = rax[2].d
    int64_t* var_30
    
    if (var_30 != 0)
        var_30[1].d -= 1
        
        if (var_30[1].d == 1)
            (**var_30)(var_30)
            int32_t rsi_1 = *(var_30 + 0xc)
            *(var_30 + 0xc) -= 1
            
            if (rsi_1 == 1)
                (*(*var_30 + 8))(var_30, zx.q(rsi_1))
    
    uint128_t zmm0_1
    zmm0_1.d = arg1[0x35].d.d f+ *arg3
    void* rax_5 = arg1[0x38]
    int32_t arg_8 = zmm0_1.d
    int32_t arg_c = (*(arg1 + 0x1ac)).d
    void* rdi_2 = *(rax_5 + 0x260)
    (*(*arg1 + 0x10))(arg1, rdi_2, &arg_8)
    
    if (*(rdi_2 + 0xa0) == 1)
        zmm6 = sub_14240e030(rdi_2, 0)
    
    result = arg1[0x38]
    float temp0_5 = __maxss_xmmss_memss(arg1[0x35].d f+ *arg3 f+ arg1[0x10].d, arg1[0x36].d)
    arg1[0x36].d = temp0_5
    
    if (result == 0)
        zmm0_1 = zmm6
    else
        zmm0_1.d = _mm_cvtepi32_ps(zx.o(*(result + 0x40))).d f* 0.00052083336f
        zmm0_1 = _mm_max_ss(zmm0_1.d, zmm6.d)
    
    float zmm1_1 = *(arg1 + 0x1b4) * 1.14999998f
    float zmm4_1 = __maxss_xmmss_memss(zmm1_1 f* zmm0_1.d, *(arg1 + 0x84)) f+ *(arg1 + 0x1ac)
    *(arg1 + 0x1ac) = zmm4_1
    
    if (result != 0)
        zmm0_1 = zx.o(*(result + 0x44))
        uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(*(result + 0x40)))
        zmm0_1 = _mm_cvtepi32_ps(zmm0_1)
        zmm2.d = zmm2.d f* 0.00052083336f
        zmm2.d = _mm_max_ss(zmm2.d, zmm6.d).d f* zmm1_1
        
        if (not(zmm2.d + zmm4_1 f<= zmm0_1.d))
            result = zx.q(*(arg1 + 0x1bc))
            zmm2.d = zmm2.d f+ zmm2.d
            *(arg1 + 0x1ac) = result.d
            zmm2.d = zmm2.d f+ temp0_5
            arg1[0x35].d = zmm2.d

return result
