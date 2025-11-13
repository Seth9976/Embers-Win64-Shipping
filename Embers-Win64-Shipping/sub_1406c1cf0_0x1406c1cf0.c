// 函数: sub_1406c1cf0
// 地址: 0x1406c1cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t zmm0[0x4] = sub_1406bc060(arg1)
int64_t result
int128_t zmm0_1
zmm0_1, result = sub_1406bc060(arg2)
result.b = is_unordered.q(zmm0_1.q, zmm0_1.q)

if (result.b != 1)
    result.b = is_unordered.q(zmm0[0].q, zmm0[0].q)
    uint32_t temp0_1[0x4]
    
    if (result.b != 1)
        zmm0[0].q = zmm0[0].q f- zmm0_1.q
        temp0_1 = __andps_xmmxud_memxud(zmm0, data_142d57d00)
    
    if (result.b == 1 || not(temp0_1[0].q f<= 10.0))
        int32_t rbx_1 = arg2[4].d
        result = av_gettime_relative()
        *arg1 = zmm0_1.q
        arg1[4].d = rbx_1
        int64_t zmm0_2 = float.d(result) f* 9.9999999999999995e-07
        int128_t zmm7
        zmm7.q = zmm0_1.q f- zmm0_2
        arg1[2] = zmm0_2
        arg1[1] = zmm7.q

return result
