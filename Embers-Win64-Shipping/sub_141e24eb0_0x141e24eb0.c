// 函数: sub_141e24eb0
// 地址: 0x141e24eb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_128
int64_t rax_1 = __security_cookie ^ &var_128
int64_t result
float zmm6_1
int128_t zmm7
float zmm8_1
result, zmm6_1, zmm7, zmm8_1 = sub_141e43520(arg1, arg2, arg3.d, arg4.d, arg5, arg6)

if (*(arg1 + 0x16d) != 0)
    uint32_t zmm1_1[0x4] = data_143f395f0
    int128_t zmm3 = zx.o(0)
    float zmm0_1[0x4] = zmm1_1
    zmm1_1 = __andps_xmmxud_memxud(zmm1_1, data_143f39600)
    char i = *(arg5 + 0x1c)
    zmm0_1[0].q = zx.o(0) u>> 0x40
    char var_e8 = 0
    int32_t var_e4_1 = 0
    float zmm2[0x4] = _mm_shuffle_ps(zx.o(0), zmm0_1, 0xc4)
    int128_t var_c8_1 = zx.o(0)
    uint32_t var_b8_1[0x4] = zmm1_1
    
    if (not(zmm8_1 == 0f))
        zmm8_1 - 0f
        char var_f8 = 0
        float var_f4 = zmm6_1
        uint32_t var_f0 = zmm8_1
        int64_t r14
        r14.b = zmm8_1 < 0f
        int32_t rax_3
        int512_t zmm2_1
        int128_t zmm6_2
        rax_3, zmm2_1, zmm6_2 = sub_141de1490(&var_f8, &var_f0, &var_f4, &arg1[0x12])
        zmm2_1.o = zmm6_2
        float var_a8[0x3][0x4]
        float zmm6_3
        float zmm7_1
        zmm6_3, zmm7_1 = sub_141de06c0(&var_e8, sub_141e1f340(arg1, &var_a8))
        
        if (rax_3 == 1)
            while (i != 0)
                zmm1_1 = var_f0
                zmm1_1[0] = zmm1_1[0] f- (var_f4 - zmm6_3)
                var_f0 = zmm1_1[0]
                
                if (r14.b == 0)
                    zmm6_3 = zmm7_1
                else
                    zmm6_3 = arg1[0x12].d
                
                var_f4 = zmm6_3
                var_f8 = 0
                int32_t rax_5
                int512_t zmm2_2
                int128_t zmm6_4
                rax_5, zmm2_2, zmm6_4 = sub_141de1490(&var_f8, &var_f0, &var_f4, &arg1[0x12])
                zmm2_2.o = zmm6_4
                zmm6_3, zmm7_1 = sub_141de06c0(&var_e8, sub_141e1f340(arg1, &var_a8))
                
                if (rax_5 != 1)
                    break
        
        zmm1_1 = var_b8_1
        zmm3 = var_c8_1
    
    var_e8.o = zmm2
    int128_t var_d8_2 = zmm3
    uint32_t var_c8_2[0x4] = zmm1_1
    int512_t zmm7_2
    result, zmm7_2 = sub_141de06c0(arg2, &var_e8)
    zmm7_2.o = zmm7

__security_check_cookie(rax_1 ^ &var_128)
return result
