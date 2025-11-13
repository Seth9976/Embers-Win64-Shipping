// 函数: sub_14062f380
// 地址: 0x14062f380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float* rax_8
int64_t var_38

if (arg2 == 0 || arg3 == 0)
    int32_t var_30_1 = data_143dbb210
    rax_8 = &var_38
    var_38 = data_143dbb208
else
    float zmm1[0x4] = *(arg3 + 0x1c0)
    uint32_t temp0_2 = _mm_movemask_ps(_mm_cmpeq_ps(*(arg3 + 0x180), zmm1, 4))
    float var_48[0x4] = zmm1
    
    if (temp0_2 != 0)
        *(arg3 + 0x180) = zmm1
        int32_t* rax_1 = sub_140adf5d0(&var_48, &var_38)
        *(arg3 + 0x190) = *rax_1
        *(arg3 + 0x198) = rax_1[2]
    
    zmm1 = *(arg2 + 0x1c0)
    int32_t rax_3 = *(arg3 + 0x198)
    var_48[0].q = *(arg3 + 0x190)
    float temp0_3[0x4] = _mm_cmpeq_ps(*(arg2 + 0x180), zmm1, 4)
    var_48[2] = rax_3
    uint32_t temp0_4 = _mm_movemask_ps(temp0_3)
    float var_18[0x4] = zmm1
    
    if (temp0_4 != 0)
        *(arg2 + 0x180) = zmm1
        int32_t* rax_5 = sub_140adf5d0(&var_18, &var_38)
        *(arg2 + 0x190) = *rax_5
        *(arg2 + 0x198) = rax_5[2]
    
    int32_t rax_7 = *(arg2 + 0x198)
    var_38 = *(arg2 + 0x190)
    int32_t var_30 = rax_7
    float var_28[0x4]
    rax_8 = sub_1406305d0(&var_28, &var_38, &var_48)
int32_t rax_10 = rax_8[2]
*arg1 = *rax_8
arg1[1].d = rax_10
return arg1
