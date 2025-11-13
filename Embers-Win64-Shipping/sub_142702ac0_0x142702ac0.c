// 函数: sub_142702ac0
// 地址: 0x142702ac0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0xe8)

if (rcx != 0)
    int32_t arg_8 = 0
    int32_t arg_10 = 0
    int64_t* rcx_1 = *(rcx + 0xa0)
    (*(*rcx_1 + 0x560))(rcx_1, &arg_8, &arg_10)
    void* rcx_2 = *(*(arg1 + 0xe8) + 0xb0)
    int64_t var_18
    float var_10_1
    float zmm1[0x4]
    
    if (rcx_2 == 0)
        var_18 = data_143b58088
        var_10_1 = data_143b58090
    else
        zmm1 = *(rcx_2 + 0x1d0)
        var_18.d = zmm1[0]
        float temp0_1[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0x55)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xaa)
        temp0_2[0] = temp0_2[0] f- *(rcx_2 + 0x114)
        var_18:4.d = temp0_1[0]
        var_10_1 = temp0_2[0]
    
    float zmm0[0x4] = zx.o(var_18)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
    zmm1 = zmm0
    temp0_3[0] = temp0_3[0] f- *(arg1 + 0x19c)
    zmm1[0] = zmm1[0] f- *(arg1 + 0x198)
    zmm0 = arg_8
    zmm0[0] = zmm0[0] * zmm0[0]
    temp0_3[0] = temp0_3[0] * temp0_3[0]
    zmm1[0] = zmm1[0] * zmm1[0]
    temp0_3[0] = temp0_3[0] + zmm1[0]
    
    if (not(temp0_3[0] >= zmm0[0]))
        zmm1 = var_10_1
        zmm1[0] = zmm1[0] f- *(arg1 + 0x1a0)
        zmm0 = arg_10
        zmm0[0] = zmm0[0] * 0.5f
        zmm1 = __andps_xmmxud_memxud(zmm1, data_142d3f770)
        
        if (zmm0[0] > zmm1[0])
            return 0

return 1
