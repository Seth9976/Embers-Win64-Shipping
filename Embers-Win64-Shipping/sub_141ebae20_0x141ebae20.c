// 函数: sub_141ebae20
// 地址: 0x141ebae20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = *(arg3 + 8)
int128_t zmm7 = *(arg3 + 4)
int128_t zmm8 = *arg3
int128_t zmm9 = *(arg2 + 8)
int128_t zmm10 = *(arg2 + 4)
int128_t zmm11 = _mm_cvtps_pd((*arg2).q)
zmm6 = _mm_cvtps_pd(zmm6.q)
int64_t var_a0 = zmm6.q
_mm_cvtps_pd(zmm10.q)
int64_t var_a8 = (_mm_cvtps_pd(zmm7.q)).q
zmm8 = _mm_cvtps_pd(zmm8.q)
zmm9 = _mm_cvtps_pd(zmm9.q)
int64_t var_b0 = zmm8.q
int64_t var_b8 = zmm9.q
int64_t var_98
sub_140a2e390(&var_98, u"BugItGo %f %f %f %f %f %f", zmm11.q)
int32_t var_90
int32_t result_1

if (arg4 == &var_98)
    int64_t rcx_2 = var_98
    
    if (rcx_2 != 0)
        sub_140a74f90(rcx_2)
else
    int64_t rcx_1 = *arg4
    
    if (rcx_1 != 0)
        sub_140a74f90(rcx_1)
    
    *arg4 = var_98
    arg4[1].d = var_90
    *(arg4 + 0xc) = result_1

int64_t var_b8_1 = zmm6.q
int16_t* var_78
sub_140a2e390(&var_78, u"P=%f Y=%f R=%f", zmm8.q)
int16_t* const rdi = &data_142d40450
int64_t var_b8_2 = zmm9.q
int16_t* var_88
sub_140a2e390(&var_88, u"X=%3.3f Y=%3.3f Z=%3.3f", zmm11.q)
int32_t var_80

if (var_80 != 0)
    rdi = var_88

sub_140a2e390(&var_98, u"?BugLoc=%s?BugRot=%s", rdi)
int32_t result = &var_98

if (arg5 == &var_98)
    int64_t rcx_7 = var_98
    
    if (rcx_7 != 0)
        result = sub_140a74f90(rcx_7)
else
    int64_t rcx_6 = *arg5
    
    if (rcx_6 != 0)
        sub_140a74f90(rcx_6)
    
    *arg5 = var_98
    arg5[1].d = var_90
    result = result_1
    *(arg5 + 0xc) = result
    var_90.q = 0
    var_98 = 0

int16_t* rcx_8 = var_88

if (rcx_8 != 0)
    result = sub_140a74f90(rcx_8)

int16_t* rcx_9 = var_78

if (rcx_9 == 0)
    return result

return sub_140a74f90(rcx_9)
