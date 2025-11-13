// 函数: sub_1414b6760
// 地址: 0x1414b6760
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
char result = sub_14076f990(data_143f0f1a0)

if (result != 0)
    *(arg1 + 0x20) = 0x400
    int64_t* rcx_2 = data_143f0f180
    int32_t rax_3 = (1 << (data_1439c7a34).b) - 1
    float zmm7[0x4]
    float var_38_1[0x4] = zmm7
    int128_t var_c8 = zx.o(0)
    int32_t var_b8_1 = 1
    int128_t var_b4_1 = data_143dbb1e0
    int32_t var_a4_1 = rax_3
    char var_a0_1 = 0
    int32_t var_90_1 = 0
    int64_t var_98_1 = 0
    int128_t zmm9
    int128_t var_58_1 = zmm9
    void var_d8
    (*(*rcx_2 + 0x498))(rcx_2, &var_d8, &data_143f02b98, 0x400, 0x201, &var_c8)
    sub_1405d1600(arg1 + 0x10, &var_d8)
    sub_1405d1550(&var_d8)
    int64_t* rcx_5 = data_143f0f180
    int128_t* var_e0_1
    var_e0_1.b = 1
    (*(*rcx_5 + 0x4b8))(rcx_5, &var_d8, &data_143f02b98, *(arg1 + 0x10), 0x10, var_e0_1)
    sub_1405d1600(arg1 + 0x18, &var_d8)
    sub_1405ec8a0(&var_d8)
    int64_t* rcx_8 = data_143f0f180
    var_e0_1.d = 1
    int64_t rax_7 = (*(*rcx_8 + 0x130))(rcx_8, &data_143f02b98, *(arg1 + 0x10), 0, 0x400, var_e0_1)
    sub_140a506c0(0xde4dc0de)
    int128_t zmm10 = 0x3e000000
    int32_t i = 0
    float zmm8[0x4] = 0x3f800000
    int128_t zmm11 = 0x3f490fdb
    
    do
        uint64_t rbx_1 = 0
        zmm9.d = float.s(zx.q(i))
        
        do
            float zmm0_1
            int512_t zmm6_1
            zmm0_1, zmm6_1 = sub_140a50670()
            zmm6_1.o = zx.o(0)
            zmm0_1 = (zmm0_1 f+ zmm9.d) f* zmm10.d
            zmm8[0] = zmm8[0] - (zmm0_1 + zmm0_1)
            zmm0_1 = zmm8[0]
            zmm8[0] = zmm8[0] * zmm8[0]
            zmm6_1.o = _mm_sqrt_ss(0, zmm0_1 - zmm8[0])
            float zmm2 = sub_140a50670()[0]
            float zmm1_1[0x4] = zx.o(0)
            zmm1_1[0] = float.s(zx.q(rbx_1.d))
            float zmm0_2[0x4] = zx.o(0)
            zmm0_2[0] = (zmm2 + zmm1_1[0]) f* zmm11.d
            float zmm0_3[0x4]
            int32_t zmm6_2
            zmm0_3, zmm6_2, zmm7, zmm8, zmm9, zmm10, zmm11 = __libm_sse2_sincosf_(zmm0_2)
            uint64_t rcx_11 = zx.q(i + (rbx_1 << 3).d) * 2
            float temp0_2[0x4] = _mm_shuffle_ps(zmm0_3, zmm0_3, 1)
            temp0_2[0] = temp0_2[0] f* zmm6_2
            rbx_1 = zx.q(rbx_1.d + 1)
            zmm0_3[0] = zmm0_3[0] f* zmm6_2
            *(rax_7 + (rcx_11 << 3) + 0xc) = 0
            *(rax_7 + (rcx_11 << 3) + 8) = zmm7[0]
            *(rax_7 + (rcx_11 << 3)) = temp0_2[0]
            *(rax_7 + (rcx_11 << 3) + 4) = zmm0_3[0]
        while (rbx_1.d u< 8)
        
        i += 1
    while (i u< 8)
    
    int64_t* rcx_12 = data_143f0f180
    result = (*(*rcx_12 + 0x138))(rcx_12, &data_143f02b98, *(arg1 + 0x10))

__security_check_cookie(rax_1 ^ &var_108)
return result
