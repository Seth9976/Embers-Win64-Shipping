// 函数: sub_141781730
// 地址: 0x141781730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r8 = *(*(arg1 + 0x60) + 8)
int32_t* rcx_1 = *(r8 + (sx.q(*(*(arg2 + 0x60) + 0x10)) << 3))
uint64_t result = *(r8 + (sx.q(*(*(arg2 + 0x68) + 0x10)) << 3))
int32_t zmm0

if (rcx_1 == 0)
label_1417817a8:
    
    if (result == 0)
        *(arg2 + 0xa8) = 0
        *(arg2 + 0xa0) = data_143ef7c14
        zmm0 = (zx.o(0)).d
    else
        *(arg2 + 0xa8) = *(result + 8)
        *(arg2 + 0xa0) = *result
        zmm0 = *(result + 4)
else if (result == 0)
    if (rcx_1 == 0)
        goto label_1417817a8
    
    *(arg2 + 0xa8) = rcx_1[2]
    result = zx.q(*rcx_1)
    *(arg2 + 0xa0) = result.d
    zmm0 = rcx_1[1]
else
    *(arg2 + 0xa8) = __minss_xmmss_memss(*(result + 8), rcx_1[2])
    *(arg2 + 0xa0) = __maxss_xmmss_memss(*result, *rcx_1)
    zmm0 = __maxss_xmmss_memss(*(result + 4), rcx_1[1])

*(arg2 + 0xa4) = zmm0
int32_t zmm1 = data_1439b8dc8

if (not(zmm1 f< 0f))
    *(arg2 + 0xa0) = zmm1

zmm0 = data_1439b8dcc

if (not(zmm0 f< 0f))
    *(arg2 + 0xa8) = zmm0

zmm0 = data_1439b8dd0

if (not(zmm0 f< 0f))
    *(arg2 + 0xa4) = zmm0

return result
