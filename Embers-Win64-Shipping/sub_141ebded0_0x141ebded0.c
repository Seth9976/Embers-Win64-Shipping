// 函数: sub_141ebded0
// 地址: 0x141ebded0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_c8
int64_t rax_1 = __security_cookie ^ &var_c8
int64_t* rcx = *(arg2 + 8)
int64_t var_98 = 0
uint32_t zmm6[0x4] = arg1
int32_t var_90 = 0
float var_88 = 0f
void var_78
(*(*rcx + 0x40))(rcx, &var_78)
int32_t result

if (physx::PxGeometryQuery::computePenetration(&var_98, &var_88, arg5, arg4, &var_78, arg6).b == 0)
    result.b = 0
else if ((_fpclass(_mm_cvtps_pd(var_98.d[0].q)[0].q) & 0x207) != 0)
    result.b = 0
else if ((_fpclass(_mm_cvtps_pd(var_98:4.d[0].q)[0].q) & 0x207) != 0)
    result.b = 0
else if ((_fpclass(_mm_cvtps_pd(var_90[0].q)[0].q) & 0x207) != 0)
    result.b = 0
else
    int64_t zmm2 = var_98:4.d
    float zmm1[0x4] = var_98.d
    int32_t var_7c_1 = var_90[0]
    arg1 = __andps_xmmxud_memxud(var_88, data_142d3f770)
    arg1[0] = arg1[0] f- zmm6[0]
    *(arg3 + 0x34) = (_mm_unpacklo_ps(zmm1, zmm2)).q
    *(arg3 + 0x3c) = var_7c_1
    result.b = 1
    arg1 = _mm_max_ss(arg1[0], 0)
    arg1[0] = arg1[0] f+ 9.99999975e-05f
    *(arg3 + 0x58) = arg1[0]

__security_check_cookie(rax_1 ^ &var_c8)
return result
