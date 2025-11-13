// 函数: sub_1426d3910
// 地址: 0x1426d3910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1426ae270(arg1, arg2, arg3, arg4, arg5)
uint64_t result = *(arg2 + 0xa8)

if (result == 0)
    result = sub_141ee69e0(arg2)

float zmm0 = *(result + 0x520) - *arg3
double zmm1 = arg1[0xd].d

if (not(zmm0 f>= zmm1.d))
    zmm1.d = zmm1.d f- zmm0
    int16_t* var_18
    int16_t** rax = sub_140a31300(&var_18, _mm_cvtps_pd(zmm1), 1)
    
    if (rax[1].d != 0)
        *rax
    
    wchar16 const* const r8 = u"restart"
    
    if (*(arg1 + 0x64) == 0)
        r8 = u"unlock"
    
    int64_t var_28
    sub_140a2e390(&var_28, u"%s in %ss", r8)
    int64_t rdi_1 = sx.q(arg5[1].d)
    int32_t rax_1 = (rdi_1 + 1).d
    arg5[1].d = rax_1
    
    if (rax_1 s> *(arg5 + 0xc))
        sub_1405a4f90(arg5)
    
    int64_t* rcx_6 = (rdi_1 << 4) + *arg5
    *rcx_6 = 0
    *rcx_6 = var_28
    var_28 = 0
    int32_t var_20
    rcx_6[1].d = var_20
    int32_t result_1
    result = zx.q(result_1)
    *(rcx_6 + 0xc) = result.d
    int64_t rcx_7 = var_28
    var_20.q = 0
    
    if (rcx_7 != 0)
        result = sub_140a74f90(rcx_7)
    
    int16_t* rcx_8 = var_18
    
    if (rcx_8 != 0)
        return sub_140a74f90(rcx_8)

return result
