// 函数: sub_141f68190
// 地址: 0x141f68190
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t temp0[0x4] = __andps_xmmxud_memxud(*(arg1 + 0x1e0), data_143f3b860)
float temp0_4[0x4] = _mm_max_ps(_mm_max_ps(temp0, _mm_shuffle_ps(temp0, temp0, 0xc9)), 
    _mm_shuffle_ps(temp0, temp0, 0xd2))
temp0_4[0] = temp0_4[0] f* arg1[0xac].d
uint128_t zmm6 = sub_141f1b870(arg1, arg2, nullptr, temp0_4, arg3)
uint32_t result = sub_1423b27f0(arg1[0x86])

if (result.b != 0)
    int32_t rcx_1 = arg1[0xaa].d
    uint128_t var_18_1 = zmm6
    
    if (rcx_1 s<= 0)
        zmm6 = arg1[0x23].d
        zmm6.d = zmm6.d f+ zmm6.d
    else
        zmm6 = _mm_cvtepi32_ps(zx.o(rcx_1 - *(arg1[0x86] + 0xe0) - 1))
    
    int64_t rsi_1 = sx.q(arg3[1].d)
    result = (rsi_1 + 1).d
    arg3[1].d = result
    
    if (result s> *(arg3 + 0xc))
        result = sub_1405c4f50(arg3)
    
    int64_t rcx_6 = rsi_1 * 0x30
    int64_t* rcx_7 = rcx_6 + *arg3
    
    if (rcx_6 != neg.q(*arg3))
        *rcx_7 = arg1[0x86]
        *(rcx_7 + 8) = *(arg1 + 0x100)
        rcx_7[3] = arg1[0x22]
        result = arg1[0x23].d
        *(rcx_7 + 0x2c) &= 0xfffffffe
        *(rcx_7 + 0x24) = zmm6.d
        rcx_7[4].d = result
        rcx_7[5].d = 0xffff0000

return result
