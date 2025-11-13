// 函数: sub_140b00ce0
// 地址: 0x140b00ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm2[0x2] = *arg4
float zmm0[0x2] = arg4[1].d
_mm_cvtps_pd(*(arg4 + 4))
zmm2 = _mm_cvtps_pd(zmm2)
float var_28[0x2] = _mm_cvtps_pd(zmm0)
int16_t* var_18
sub_140a2e390(&var_18, u"P=%f Y=%f R=%f", zmm2)
int16_t* const r9_1 = &data_142d40450
int32_t var_10

if (var_10 != 0)
    r9_1 = var_18

int64_t* result = sub_140b00d80(arg1, arg2, arg3, r9_1, arg5)
int16_t* rcx_2 = var_18

if (rcx_2 == 0)
    return result

return sub_140a74f90(rcx_2)
