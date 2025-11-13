// 函数: sub_1426d3ea0
// 地址: 0x1426d3ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426ae270(arg1, arg2, arg3, arg4, arg5)
uint64_t result
int128_t zmm0
zmm0, result = sub_1426b3920(arg2, arg1[0xd])

if (not(zmm0.d f<= 0f))
    result = *(arg2 + 0xa8)
    
    if (result == 0)
        result = sub_141ee69e0(arg2)
    
    int64_t zmm1_1 = arg1[0xe].d
    zmm0.d = (*(result + 0x520)).d f- zmm0.d
    
    if (not(zmm0.d f>= zmm1_1.d))
        zmm1_1.d = zmm1_1.d f- zmm0.d
        int16_t* var_28
        int16_t** rax = sub_140a31300(&var_28, _mm_cvtps_pd(zmm1_1), 1)
        
        if (rax[1].d != 0)
            *rax
        
        wchar16 const* const r8 = u"restart"
        
        if (*(arg1 + 0x64) == 0)
            r8 = u"unlock"
        
        int64_t var_38
        sub_140a2e390(&var_38, u"%s in %ss", r8)
        int64_t rdi_1 = sx.q(arg5[1].d)
        int32_t rax_1 = (rdi_1 + 1).d
        arg5[1].d = rax_1
        
        if (rax_1 s> *(arg5 + 0xc))
            sub_1405a4f90(arg5)
        
        int64_t* rcx_7 = (rdi_1 << 4) + *arg5
        *rcx_7 = 0
        *rcx_7 = var_38
        var_38 = 0
        int32_t var_30
        rcx_7[1].d = var_30
        int32_t result_1
        result = zx.q(result_1)
        *(rcx_7 + 0xc) = result.d
        int64_t rcx_8 = var_38
        var_30.q = 0
        
        if (rcx_8 != 0)
            result = sub_140a74f90(rcx_8)
        
        int16_t* rcx_9 = var_28
        
        if (rcx_9 != 0)
            return sub_140a74f90(rcx_9)

return result
