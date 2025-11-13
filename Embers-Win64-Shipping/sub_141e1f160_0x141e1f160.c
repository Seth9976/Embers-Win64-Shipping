// 函数: sub_141e1f160
// 地址: 0x141e1f160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_108
int64_t rax_1 = __security_cookie ^ &var_108
uint32_t zmm1[0x4] = data_143f395f0
float zmm4 = arg4.d
float zmm0[0x4] = zmm1
char var_d8 = 0
zmm1 = __andps_xmmxud_memxud(zmm1, data_143f39600)
arg4 = zx.o(0)
float zmm6[0x4] = arg3
zmm0[0].q = zx.o(0) u>> 0x40
int32_t var_d4 = 0
arg3 = _mm_shuffle_ps(zx.o(0), zmm0, 0xc4)
int128_t var_b8 = zx.o(0)
uint32_t var_a8[0x4] = zmm1

if (not(zmm4 == 0f))
    zmm4 - 0f
    char var_e8 = 0
    float var_e4 = zmm6[0]
    uint32_t var_e0 = zmm4
    int64_t r14
    r14.b = zmm4 < 0f
    int32_t rax_2
    int512_t zmm2
    int128_t zmm6_1
    rax_2, zmm2, zmm6_1 = sub_141de1490(&var_e8, &var_e0, &var_e4, &arg1[0x12])
    zmm2.o = zmm6_1
    float var_98[0x3][0x4]
    float zmm6_2
    float zmm7_1
    zmm6_2, zmm7_1 = sub_141de06c0(&var_d8, sub_141e1f340(arg1, &var_98))
    
    if (rax_2 == 1)
        while (arg5 != 0)
            zmm1 = var_e0
            zmm1[0] = zmm1[0] f- (var_e4 - zmm6_2)
            var_e0 = zmm1[0]
            
            if (r14.b == 0)
                zmm6_2 = zmm7_1
            else
                zmm6_2 = arg1[0x12].d
            
            var_e4 = zmm6_2
            var_e8 = 0
            int32_t rax_4
            int512_t zmm2_1
            int128_t zmm6_3
            rax_4, zmm2_1, zmm6_3 = sub_141de1490(&var_e8, &var_e0, &var_e4, &arg1[0x12])
            zmm2_1.o = zmm6_3
            zmm6_2, zmm7_1 = sub_141de06c0(&var_d8, sub_141e1f340(arg1, &var_98))
            
            if (rax_4 != 1)
                break
    
    zmm1 = var_a8
    arg4 = var_b8

*arg2 = arg3
arg2[1] = arg4
arg2[2] = zmm1
__security_check_cookie(rax_1 ^ &var_108)
return arg2
