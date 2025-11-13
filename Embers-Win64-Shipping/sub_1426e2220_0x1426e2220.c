// 函数: sub_1426e2220
// 地址: 0x1426e2220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18
int64_t* rdx = &var_18

if (__andps_xmmxud_memxud(*(arg1 + 0x74), data_142d3f770)[0] f> 9.99999994e-09f)
    int64_t* rax_1 = sub_1426b3750(arg1, rdx)
    int16_t* const r8_1
    
    if (rax_1[1].d == 0)
        r8_1 = &data_142d40450
    else
        r8_1 = *rax_1
    
    float zmm0_1[0x2] = *(arg1 + 0x74)
    _mm_cvtps_pd(*(arg1 + 0x70))
    float var_28_1[0x2] = _mm_cvtps_pd(zmm0_1)
    sub_140a2e390(arg2, u"%s: %.1f+-%.1fs", r8_1)
else
    int64_t* rax = sub_1426b3750(arg1, rdx)
    int16_t* const r8
    
    if (rax[1].d == 0)
        r8 = &data_142d40450
    else
        r8 = *rax
    
    _mm_cvtps_pd(*(arg1 + 0x70))
    sub_140a2e390(arg2, u"%s: %.1fs", r8)

int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

return arg2
