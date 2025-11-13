// 函数: sub_1427755d0
// 地址: 0x1427755d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm6 = sub_141dbb100(arg1)
int64_t* result = sub_142230c60(arg1[0x51])

if (result != 0)
    int32_t var_e0_1 = arg1[0x45].d
    char var_d2_1 = arg1[0x49].b
    int32_t var_dc_1 = *(arg1 + 0x22c)
    int128_t var_18_1 = zmm6
    zmm6 = *(arg1 + 0x274)
    char var_d1_1 = *(arg1 + 0x25c)
    char var_d4_1 = *(arg1 + 0x234)
    int128_t zmm7 = arg1[0x4f].d
    int32_t var_e4_1 = *(arg1 + 0x224)
    int128_t var_d0_1 = *(arg1 + 0x238)
    char var_a0_1 = arg1[0x4e].b
    int128_t zmm0_1 = *(arg1 + 0x260)
    char var_d3_1 = *(arg1 + 0x235)
    int128_t zmm8 = arg1[0x46].d
    int128_t zmm9 = arg1[0x44].d
    char var_94_1 = *(arg1 + 0x27c)
    int128_t var_c0_1 = *(arg1 + 0x24c)
    void*** rax_4 = sub_140a82f30(0x60, 8)
    *rax_4 = &data_14306d088
    float var_e8[0x4]
    var_e8[0] = zmm9.d
    *(rax_4 + 8) = var_e8
    int128_t zmm1_1
    zmm1_1.d = zmm8.d
    *(rax_4 + 0x18) = zmm1_1
    *(rax_4 + 0x28) = var_d0_1
    float zmm0_2[0x4] = zmm0_1
    *(rax_4 + 0x38) = var_c0_1
    float temp0_1[0x4] = _mm_shuffle_ps(zmm0_2, zmm0_2, 0x93)
    temp0_1[0] = zmm6.d
    *(rax_4 + 0x48) = _mm_shuffle_ps(temp0_1, temp0_1, 0x39)
    int64_t var_98
    zmm0_2 = zx.o(var_98)
    zmm0_2[0] = zmm7.d
    rax_4[0xb] = zmm0_2.q
    void*** var_78_1 = rax_4
    int64_t (* var_88)(void* arg1, int64_t* arg2)
    int64_t (* rax_5)(void* arg1, int64_t* arg2) = var_88
    
    if (rax_4 != -8)
        rax_5 = sub_1427757e0
    
    int64_t rdx_2 = arg1[0x53]
    var_88 = rax_5
    result = (*(*result + 8))(result, rdx_2, &var_88)

return result
