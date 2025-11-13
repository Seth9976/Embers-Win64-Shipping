// 函数: sub_14062f250
// 地址: 0x14062f250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rax_4
int64_t var_38

if (arg2 == 0 || arg3 == 0)
    int32_t var_30_1 = data_143dbb200
    rax_4 = &var_38
    var_38 = data_143dbb1f8.q
else
    float zmm1[0x4] = *(arg2 + 0x1c0)
    int96_t var_18_1 = (*(arg3 + 0x1d0))[0].12
    uint32_t temp0_2 = _mm_movemask_ps(__cmpps_xmmps_memps_immb(zmm1, *(arg2 + 0x180), 4))
    float var_48[0x4] = zmm1
    
    if (temp0_2 != 0)
        *(arg2 + 0x180) = zmm1
        int32_t* rax_1 = sub_140adf5d0(&var_48, &var_38)
        *(arg2 + 0x190) = *rax_1
        *(arg2 + 0x198) = rax_1[2]
    
    float zmm3[0x4] = *(arg2 + 0x1d0)
    zmm1 = var_18_1:4.d
    int32_t rax_3 = *(arg2 + 0x198)
    var_38 = *(arg2 + 0x190)
    float zmm0[0x4] = var_18_1.d
    zmm0[0] = zmm0[0] - zmm3[0]
    int32_t var_30 = rax_3
    var_48[0] = zmm0[0]
    float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    float temp0_4[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    zmm1[0] = zmm1[0] - temp0_3[0]
    float zmm2 = var_18_1:8.d - temp0_4[0]
    var_48[1] = zmm1[0]
    var_48[2] = zmm2
    float var_28[0x4]
    sub_140ae3100(&var_38, &var_28, &var_48)
    rax_4 = &var_28
int32_t rax_6 = rax_4[1].d
*arg1 = *rax_4
arg1[1].d = rax_6
return arg1
