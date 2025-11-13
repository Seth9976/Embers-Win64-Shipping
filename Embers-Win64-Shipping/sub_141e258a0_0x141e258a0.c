// 函数: sub_141e258a0
// 地址: 0x141e258a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_9c8
int64_t rax_1 = __security_cookie ^ &var_9c8
float zmm2[0x4] = *arg4
void* r13 = arg2[2]
float zmm6[0x4]
float var_58[0x4] = zmm6
float zmm7[0x4]
float var_68[0x4] = zmm7
float zmm8[0x4]
float var_78[0x4] = zmm8
float zmm9[0x4] = zmm2 ^ 0x80000000
float temp0[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
float temp0_1[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xe1)
temp0_1[0] = (temp0 ^ 0x80000000)[0]
float temp0_2[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
float temp0_3[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc6)
temp0_3[0] = (temp0_2 ^ 0x80000000)[0]
arg1[4].b = 0
int64_t rbx = *arg5
float temp0_4[0x4] = _mm_shuffle_ps(temp0_3, temp0_3, 0x27)
float zmm10[0x4]
float var_98[0x4] = zmm10
temp0_4[0] = _mm_shuffle_ps(zmm2, zmm2, 0xff)[0]
float zmm11[0x4]
float var_a8[0x4] = zmm11
zmm9 = _mm_shuffle_ps(temp0_4, temp0_4, 0x39)
float var_608[0x4] = zmm9
int96_t var_968 = zmm9[0].12
float zmm12[0x4]
float var_b8[0x4] = zmm12
float zmm3[0x4]

if (rbx != arg6[8][0].q || rbx != arg7[8][0].q)
    arg1[4].b = 1
else
    int32_t rcx
    rcx.b = (rbx u>> 0x20).d == 0
    
    if ((rcx.b & sub_140b5b8a0(rbx.d, 0)) != 0)
        zmm3 = *arg6
        zmm7 = data_143f39670
        zmm8 = data_143f39660
        zmm10 = data_143f39650
        float temp0_7[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
        float temp0_8[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        float temp0_9[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        float temp0_10[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        float temp0_11[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x1b)
        float temp0_12[0x4] = _mm_mul_ps(temp0_7, temp0_11)
        float temp0_13[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x4e)
        float temp0_14[0x4] = _mm_mul_ps(temp0_9, zmm9)
        float temp0_15[0x4] = _mm_mul_ps(temp0_12, zmm7)
        float temp0_16[0x4] = _mm_mul_ps(temp0_8, temp0_13)
        float temp0_17[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xb1)
        float temp0_18[0x4] = _mm_add_ps(temp0_15, temp0_14)
        float temp0_19[0x4] = _mm_mul_ps(temp0_10, temp0_17)
        float temp0_20[0x4] = _mm_mul_ps(temp0_16, zmm8)
        float temp0_21[0x4] = _mm_mul_ps(temp0_19, zmm10)
        float temp0_23[0x4] = _mm_add_ps(_mm_add_ps(temp0_18, temp0_20), temp0_21)
        
        if (_mm_and_ps(_mm_shuffle_ps(temp0_23, temp0_23, 0xff), 0x7fffffff)[0] < 0.999000013f)
            arg1[4].b = 2
        else
            zmm2 = *arg7
            float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), temp0_11)
            float temp0_28[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x55)
            float temp0_29[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xff)
            float temp0_30[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xaa)
            float temp0_31[0x4] = _mm_mul_ps(temp0_27, zmm7)
            float temp0_32[0x4] = _mm_mul_ps(temp0_29, zmm9)
            float temp0_33[0x4] = _mm_mul_ps(temp0_28, temp0_13)
            float temp0_34[0x4] = _mm_mul_ps(temp0_30, temp0_17)
            float temp0_35[0x4] = _mm_add_ps(temp0_31, temp0_32)
            float temp0_36[0x4] = _mm_mul_ps(temp0_33, zmm8)
            float temp0_37[0x4] = _mm_mul_ps(temp0_34, zmm10)
            float temp0_39[0x4] = _mm_add_ps(_mm_add_ps(temp0_35, temp0_36), temp0_37)
            
            if (not(_mm_and_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0xff), 0x7fffffff)[0]
                    >= 0.999000013f))
                arg1[4].b = 2

int64_t* rcx_2 = arg1
int32_t result_1 = 0
int32_t rbx_2 = 0
int64_t rdi_1 = sx.q(*(sub_140d3c6e0(r13 + 0x40) + 0x80))
rcx_2[1].d = 0

if (*(rcx_2 + 0xc) != rdi_1.d)
    sub_141750500(rcx_2, rdi_1.d)
    rcx_2 = arg1
    rbx_2 = rcx_2[1].d

int32_t rax_5 = rbx_2 + rdi_1.d
rcx_2[1].d = rax_5

if (rax_5 s> *(rcx_2 + 0xc))
    sub_141750030(rcx_2)

memset(sx.q(rbx_2) * 0x3c + *arg1, 0, rdi_1 * 0x3c)
int64_t* var_648 = arg2
int32_t rbx_3 = 0
int32_t rdi_2 = arg2[1].d

if (rdi_2 != 0)
    zmm12 = data_143f39670
    float zmm13[0x4] = data_143f39660
    float zmm14[0x4]
    float var_d8_1[0x4] = zmm14
    float zmm15[0x4] = data_143f39650
    
    do
        int32_t var_8d8 = rbx_3
        int64_t rcx_5 = sx.q(rbx_3)
        int64_t rdx_2 = sx.q(*(*(r13 + 0x70) + (rcx_5 << 2)))
        
        if (rdx_2.d != 0xffffffff)
            int64_t rsi_1 = rdx_2
            
            if (*(rdx_2 i+ arg6[4][0].q) == 1)
                int64_t rax_10 = *arg2
                int64_t rcx_7 = rcx_5 * 6
                zmm14 = *(rax_10 + (rcx_7 << 3))
                int64_t rax_11 = arg6[3][0].q
                int64_t rcx_9 = rdx_2 * 0x30
                float var_638_1[0x4] = *(rax_10 + (rcx_7 << 3) + 0x10)
                float var_618_1[0x4] = *(rax_10 + (rcx_7 << 3) + 0x20)
                float var_738_1[0x4] = zmm14
                zmm10 = *(rcx_9 + rax_11)
                float var_908_1[0x4] = zmm10
                float var_8f8_1[0x4] = *(rcx_9 + rax_11 + 0x10)
                float var_8e8_1[0x4] = *(rcx_9 + rax_11 + 0x20)
                int128_t* rax_12 = arg7[3][0].q
                zmm11 = rax_12[rdx_2 * 3]
                float var_958_1[0x4] = zmm11
                zmm8 = rax_12[rdx_2 * 3 + 1]
                float var_948_1[0x4] = zmm8
                float var_938_1[0x4] = rax_12[rdx_2 * 3 + 2]
                char rcx_10 = *(rdx_2 i+ arg7[4][0].q)
                char var_9a8_1 = rcx_10
                int64_t var_988_1
                float zmm0_1[0x4]
                float zmm4_1[0x4]
                float zmm5_1[0x4]
                float zmm1[0x4]
                
                if (rbx_3 != 0)
                    int32_t var_998
                    sub_141ea4020(r13, &var_998, &var_8d8)
                    int64_t rax_18 = sx.q(var_998)
                    int32_t r8_4
                    
                    if (rax_18.d == 0xffffffff)
                        r8_4 = -1
                    else
                        r8_4 = *(*(r13 + 0x70) + (rax_18 << 2))
                    
                    int64_t rdx_8
                    
                    if (rax_18.d != 0xffffffff && r8_4 != 0xffffffff)
                        rdx_8 = sx.q(r8_4)
                    
                    if (rax_18.d != 0xffffffff && r8_4 != 0xffffffff
                            && (*(rdx_8 i+ arg6[4][0].q) == 2 || *(rdx_8 i+ arg7[4][0].q) == 2))
                        int64_t rcx_23 = arg6[3][0].q
                        int64_t rdx_10 = rdx_8 * 6
                        float var_218[0x4] = *(rcx_23 + (rdx_10 << 3))
                        float var_208_1[0x4] = *(rcx_23 + (rdx_10 << 3) + 0x10)
                        float var_1f8_1[0x4] = *(rcx_23 + (rdx_10 << 3) + 0x20)
                        int64_t rcx_24 = arg7[3][0].q
                        float var_1e8[0x4] = *(rcx_24 + (rdx_10 << 3))
                        float var_1d8_1[0x4] = *(rcx_24 + (rdx_10 << 3) + 0x10)
                        float var_1c8_1[0x4] = *(rcx_24 + (rdx_10 << 3) + 0x20)
                        int64_t rdx_12 = rax_18 * 6
                        int64_t rax_19 = *arg2
                        float var_248[0x4] = *(rax_19 + (rdx_12 << 3))
                        float var_238_1[0x4] = *(rax_19 + (rdx_12 << 3) + 0x10)
                        float var_228_1[0x4] = *(rax_19 + (rdx_12 << 3) + 0x20)
                        void var_6c8
                        int64_t rax_21 = sx.q(*sub_141ea4020(r13, &var_6c8, &var_998))
                        var_998 = rax_21.d
                        int32_t i
                        
                        if (rax_21.d == 0xffffffff)
                            i = -1
                        else
                            i = *(*(r13 + 0x70) + (rax_21 << 2))
                        
                        if (rax_21.d != 0xffffffff)
                            while (i != 0xffffffff)
                                int64_t i_1 = sx.q(i)
                                
                                if (*(i_1 i+ arg6[4][0].q) != 2 && *(i_1 i+ arg7[4][0].q) != 2)
                                    break
                                
                                int64_t rdx_14 = arg6[3][0].q
                                int64_t rsi_3 = i_1 * 6
                                zmm13 = data_143f396b0
                                zmm15 = data_143f39670
                                zmm9 = data_143f39660
                                zmm8 = *(rdx_14 + (rsi_3 << 3) + 0x20)
                                zmm10 = data_143f39650
                                
                                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_1f8_1, zmm8), 
                                        zmm13, 1)) == 0)
                                    zmm5_1 = *(rdx_14 + (rsi_3 << 3))
                                    zmm2 = var_218
                                    zmm7 = *(rdx_14 + (rsi_3 << 3) + 0x10)
                                    float temp0_574[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
                                    float temp0_575[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                                    float temp0_577[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), temp0_574)
                                    float temp0_578[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                                    float temp0_579[0x4] = _mm_mul_ps(zmm2, temp0_578)
                                    float temp0_580[0x4] = _mm_mul_ps(temp0_577, zmm15)
                                    float temp0_581[0x4] = _mm_mul_ps(var_208_1, zmm8)
                                    float temp0_582[0x4] = _mm_mul_ps(var_1f8_1, zmm8)
                                    float temp0_583[0x4] = _mm_add_ps(temp0_580, temp0_579)
                                    float temp0_585[0x4] =
                                        _mm_mul_ps(temp0_575, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                                    float temp0_588[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), 
                                        _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                                    float temp0_589[0x4] = _mm_mul_ps(temp0_585, zmm9)
                                    float temp0_590[0x4] =
                                        _mm_shuffle_ps(temp0_581, temp0_581, 0xd2)
                                    float temp0_591[0x4] = _mm_mul_ps(temp0_588, zmm10)
                                    var_1f8_1 = temp0_582
                                    float temp0_593[0x4] =
                                        _mm_add_ps(_mm_add_ps(temp0_583, temp0_589), temp0_591)
                                    float temp0_594[0x4] =
                                        _mm_shuffle_ps(temp0_581, temp0_581, 0xc9)
                                    var_218 = temp0_593
                                    float temp0_595[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                                    float temp0_596[0x4] = _mm_mul_ps(temp0_594, temp0_595)
                                    float temp0_597[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                                    float temp0_599[0x4] =
                                        _mm_sub_ps(_mm_mul_ps(temp0_590, temp0_597), temp0_596)
                                    float temp0_600[0x4] = _mm_add_ps(temp0_599, temp0_599)
                                    float temp0_601[0x4] = _mm_mul_ps(temp0_578, temp0_600)
                                    float temp0_603[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_600, temp0_600, 0xd2), temp0_597)
                                    float temp0_604[0x4] =
                                        _mm_shuffle_ps(temp0_600, temp0_600, 0xc9)
                                    float temp0_605[0x4] = _mm_add_ps(temp0_601, temp0_581)
                                    var_208_1 = _mm_add_ps(
                                        _mm_add_ps(
                                            _mm_sub_ps(temp0_603, 
                                                _mm_mul_ps(temp0_604, temp0_595)), 
                                            temp0_605), 
                                        zmm7)
                                else
                                    zmm3 = *(rdx_14 + (rsi_3 << 3))
                                    zmm10 = data_143f395f0
                                    float temp0_445[0x4] = _mm_add_ps(zmm3, zmm3)
                                    float temp0_446[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                                    float temp0_447[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                                    _mm_mul_ps(var_1f8_1, zmm8)
                                    float temp0_450[0x4] = _mm_mul_ps(temp0_447, 
                                        _mm_shuffle_ps(temp0_445, temp0_445, 0x29))
                                    float temp0_451[0x4] = _mm_mul_ps(temp0_445, zmm3)
                                    float temp0_452[0x4] =
                                        _mm_shuffle_ps(temp0_445, temp0_445, 0x12)
                                    float temp0_454[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), temp0_452)
                                    float temp0_457[0x4] = _mm_add_ps(
                                        _mm_shuffle_ps(temp0_451, temp0_451, 0x1a), 
                                        _mm_shuffle_ps(temp0_451, temp0_451, 1))
                                    float temp0_458[0x4] = _mm_add_ps(temp0_454, temp0_450)
                                    float temp0_459[0x4] = _mm_sub_ps(temp0_450, temp0_454)
                                    float temp0_460[0x4] = _mm_sub_ps(zmm10, temp0_457)
                                    float temp0_461[0x4] = _mm_mul_ps(temp0_458, zmm8)
                                    float temp0_462[0x4] = _mm_mul_ps(temp0_446, temp0_459)
                                    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_460, zmm8), 
                                        data_143f39600)
                                    float temp0_465[0x4] = _mm_shuffle_ps(temp0_462, zmm1, 0x32)
                                    float temp0_467[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_461, zmm1, 0), temp0_465, 0x82)
                                    float temp0_468[0x4] = _mm_shuffle_ps(temp0_461, zmm1, 0x31)
                                    float temp0_470[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_462, zmm1, 0x10), temp0_468, 0x88)
                                    float temp0_472[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_461, temp0_462, 0x12), zmm1, 0xe8)
                                    zmm1 = var_218
                                    float var_4c8_1[0x4] = temp0_467
                                    float temp0_473[0x4] = _mm_add_ps(zmm1, zmm1)
                                    float var_4b8_1[0x4] = temp0_470
                                    float var_4a8_1[0x4] = temp0_472
                                    zmm8 = *(rdx_14 + (rsi_3 << 3) + 0x10)
                                    zmm10[0].q = zmm8 u>> 0x40
                                    float temp0_474[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
                                    float temp0_475[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                                    float temp0_476[0x4] = _mm_mul_ps(temp0_473, zmm1)
                                    float temp0_478[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_473, temp0_473, 0x29), temp0_475)
                                    float temp0_479[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                                    float temp0_481[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_473, temp0_473, 0x12), temp0_479)
                                    float temp0_484[0x4] = _mm_add_ps(
                                        _mm_shuffle_ps(temp0_476, temp0_476, 0x1a), 
                                        _mm_shuffle_ps(temp0_476, temp0_476, 1))
                                    float temp0_485[0x4] =
                                        _mm_shuffle_ps(var_1f8_1, var_1f8_1, 0xc9)
                                    float var_498_1[0x4] = temp0_474
                                    float temp0_486[0x4] = _mm_add_ps(temp0_481, temp0_478)
                                    float temp0_487[0x4] = _mm_sub_ps(temp0_478, temp0_481)
                                    float temp0_488[0x4] = _mm_sub_ps(zmm10, temp0_484)
                                    float temp0_489[0x4] = _mm_mul_ps(temp0_486, var_1f8_1)
                                    float temp0_490[0x4] = _mm_mul_ps(temp0_485, temp0_487)
                                    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_488, var_1f8_1), 
                                        data_143f39600)
                                    float temp0_495[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_489, zmm1, 0), 
                                        _mm_shuffle_ps(temp0_490, zmm1, 0x32), 0x82)
                                    float temp0_496[0x4] = _mm_shuffle_ps(temp0_489, zmm1, 0x31)
                                    float temp0_497[0x4] =
                                        _mm_shuffle_ps(temp0_495, temp0_495, 0x55)
                                    float temp0_499[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_490, zmm1, 0x10), temp0_496, 0x88)
                                    float var_488_1[0x4] = temp0_495
                                    float temp0_500[0x4] = _mm_mul_ps(temp0_497, temp0_470)
                                    float temp0_502[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_489, temp0_490, 0x12), zmm1, 0xe8)
                                    float temp0_504[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_495, temp0_495, 0xaa), temp0_472)
                                    zmm10[0].q = var_208_1 u>> 0x40
                                    float temp0_505[0x4] = _mm_shuffle_ps(var_208_1, zmm10, 0xc4)
                                    float temp0_506[0x4] = _mm_shuffle_ps(temp0_495, temp0_495, 0)
                                    float temp0_508[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_495, temp0_495, 0xff), temp0_474)
                                    float var_478_1[0x4] = temp0_499
                                    float var_458_1[0x4] = temp0_505
                                    float var_468_1[0x4] = temp0_502
                                    float temp0_510[0x4] =
                                        _mm_add_ps(temp0_500, _mm_mul_ps(temp0_506, temp0_467))
                                    float temp0_512[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_499, temp0_499, 0), temp0_467)
                                    float temp0_513[0x4] = _mm_add_ps(temp0_510, temp0_504)
                                    float temp0_515[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_499, temp0_499, 0xaa), temp0_472)
                                    float temp0_516[0x4] = _mm_add_ps(temp0_513, temp0_508)
                                    float temp0_518[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_499, temp0_499, 0x55), temp0_470)
                                    float temp0_519[0x4] =
                                        _mm_shuffle_ps(temp0_499, temp0_499, 0xff)
                                    float var_848[0x4] = temp0_516
                                    float temp0_520[0x4] =
                                        _mm_shuffle_ps(temp0_502, temp0_502, 0x55)
                                    float temp0_521[0x4] = _mm_add_ps(temp0_518, temp0_512)
                                    float temp0_522[0x4] = _mm_mul_ps(temp0_520, temp0_470)
                                    float temp0_523[0x4] = _mm_mul_ps(temp0_519, temp0_474)
                                    float temp0_524[0x4] = _mm_shuffle_ps(temp0_502, temp0_502, 0)
                                    float temp0_525[0x4] = _mm_add_ps(temp0_521, temp0_515)
                                    float temp0_526[0x4] = _mm_mul_ps(temp0_524, temp0_467)
                                    float temp0_528[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_502, temp0_502, 0xaa), temp0_472)
                                    float temp0_529[0x4] = _mm_add_ps(temp0_525, temp0_523)
                                    float temp0_530[0x4] =
                                        _mm_shuffle_ps(temp0_502, temp0_502, 0xff)
                                    float temp0_531[0x4] = _mm_add_ps(temp0_522, temp0_526)
                                    float temp0_532[0x4] = _mm_mul_ps(temp0_530, temp0_474)
                                    float temp0_533[0x4] = _mm_shuffle_ps(temp0_505, temp0_505, 0)
                                    int96_t var_838_1 = temp0_529[0].12
                                    float temp0_534[0x4] =
                                        _mm_shuffle_ps(temp0_505, temp0_505, 0x55)
                                    float temp0_535[0x4] = _mm_add_ps(temp0_531, temp0_528)
                                    float temp0_536[0x4] = _mm_mul_ps(temp0_534, temp0_470)
                                    float temp0_538[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_505, temp0_505, 0xaa), temp0_472)
                                    float temp0_539[0x4] = _mm_mul_ps(temp0_533, temp0_467)
                                    float temp0_540[0x4] = _mm_add_ps(temp0_535, temp0_532)
                                    float temp0_542[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_505, temp0_505, 0xff), temp0_474)
                                    float temp0_543[0x4] = _mm_add_ps(temp0_536, temp0_539)
                                    int96_t var_828_1 = temp0_540[0].12
                                    int96_t var_818_1 = _mm_add_ps(
                                        _mm_add_ps(temp0_543, temp0_538), temp0_542)[0].12
                                    zmm10, zmm12, zmm13, zmm15 = sub_1407740e0(&var_848, 0x322bcc77)
                                    float zmm2_5[0x4] = var_848[0]
                                    float zmm1_5 = var_848[1]
                                    zmm13 = _mm_and_ps(_mm_cmpeq_ps(zmm13, zmm12, 2), 
                                        data_143f396a0 ^ zmm10)
                                    uint32_t zmm0_6[0x4] = var_848[2]
                                    zmm13 ^= data_143f396a0
                                    zmm2_5[0] = zmm2_5[0] * zmm13[0]
                                    zmm1_5 = zmm1_5 * zmm13[0]
                                    zmm0_6[0] = zmm0_6[0] f* zmm13[0]
                                    var_848[0] = zmm2_5[0]
                                    float temp0_548[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
                                    var_848[1] = zmm1_5
                                    zmm1_5 = var_838_1:4.d * temp0_548[0]
                                    var_848[2] = zmm0_6[0]
                                    zmm0_6 = var_838_1:8.d
                                    zmm0_6[0] = zmm0_6[0] f* temp0_548[0]
                                    float zmm3_5 = var_838_1.d * temp0_548[0]
                                    zmm2_5 = var_828_1.d
                                    var_838_1:4.d = zmm1_5
                                    var_838_1:8.d = zmm0_6[0]
                                    zmm0_6 = var_828_1:8.d
                                    float temp0_549[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
                                    zmm1_5 = var_828_1:4.d * temp0_549[0]
                                    zmm0_6[0] = zmm0_6[0] f* temp0_549[0]
                                    zmm2_5[0] = zmm2_5[0] * temp0_549[0]
                                    var_828_1:4.d = zmm1_5
                                    var_828_1:8.d = zmm0_6[0]
                                    var_838_1.d = zmm3_5
                                    var_828_1.d = zmm2_5[0]
                                    uint32_t var_698[0x4]
                                    sub_14077e4a0(&var_698, &var_848)
                                    zmm5_1 = var_698
                                    zmm6 = data_143f39690
                                    float temp0_550[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                                    var_1f8_1 = zmm12
                                    float temp0_552[0x4] = _mm_add_ps(temp0_550, 
                                        _mm_shuffle_ps(temp0_550, temp0_550, 0x4e))
                                    float temp0_554[0x4] = _mm_add_ps(
                                        _mm_shuffle_ps(temp0_552, temp0_552, 0x39), temp0_552)
                                    float temp0_555[0x4] = _mm_rsqrt_ps(temp0_554)
                                    float temp0_556[0x4] = _mm_mul_ps(temp0_554, zmm6)
                                    float temp0_561[0x4] = _mm_add_ps(
                                        _mm_mul_ps(
                                            _mm_sub_ps(zmm6, 
                                                _mm_mul_ps(_mm_mul_ps(temp0_555, temp0_555), 
                                                    temp0_556)), 
                                            temp0_555), 
                                        temp0_555)
                                    float temp0_564[0x4] = _mm_sub_ps(zmm6, 
                                        _mm_mul_ps(_mm_mul_ps(temp0_561, temp0_561), temp0_556))
                                    float temp0_566[0x4] = _mm_cmpeq_ps(
                                        _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_554, 2)
                                    float temp0_568[0x4] =
                                        _mm_add_ps(_mm_mul_ps(temp0_564, temp0_561), temp0_561)
                                    float temp0_569[0x4] = _mm_unpacklo_ps(var_818_1:4.d, 0)
                                    zmm6 = _mm_and_ps(
                                        _mm_mul_ps(temp0_568, zmm5_1) ^ data_143f39680, temp0_566)
                                        ^ data_143f39680
                                    var_698 = zmm6
                                    var_218 = zmm6
                                    float temp0_572[0x4] =
                                        _mm_unpacklo_ps(var_818_1.d, var_818_1:8.d[0].q)
                                    zmm13 = data_143f396b0
                                    rax_21 = zx.q(var_998)
                                    zmm9 = data_143f39660
                                    zmm10 = data_143f39650
                                    var_208_1 = _mm_unpacklo_ps(temp0_572, temp0_569[0].q)
                                
                                int64_t rdx_16 = arg7[3][0].q
                                zmm8 = *(rdx_16 + (rsi_3 << 3) + 0x20)
                                
                                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_1c8_1, zmm8), 
                                        zmm13, 1)) == 0)
                                    zmm5_1 = *(rdx_16 + (rsi_3 << 3))
                                    zmm2 = var_1e8
                                    zmm7 = *(rdx_16 + (rsi_3 << 3) + 0x10)
                                    float temp0_744[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(zmm2, zmm2, 0x1b), 
                                        _mm_shuffle_ps(zmm5_1, zmm5_1, 0))
                                    float temp0_745[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
                                    float temp0_746[0x4] = _mm_mul_ps(var_1d8_1, zmm8)
                                    float temp0_747[0x4] = _mm_mul_ps(temp0_744, zmm15)
                                    float temp0_748[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                                    float temp0_749[0x4] = _mm_mul_ps(var_1c8_1, zmm8)
                                    float temp0_750[0x4] = _mm_mul_ps(temp0_748, zmm2)
                                    float temp0_751[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
                                    var_1c8_1 = temp0_749
                                    float temp0_752[0x4] = _mm_add_ps(temp0_747, temp0_750)
                                    float temp0_754[0x4] =
                                        _mm_mul_ps(temp0_745, _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55))
                                    float temp0_756[0x4] =
                                        _mm_mul_ps(temp0_751, _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa))
                                    float temp0_757[0x4] = _mm_mul_ps(temp0_754, zmm9)
                                    float temp0_758[0x4] =
                                        _mm_shuffle_ps(temp0_746, temp0_746, 0xc9)
                                    float temp0_759[0x4] = _mm_mul_ps(temp0_756, zmm10)
                                    float temp0_761[0x4] =
                                        _mm_add_ps(_mm_add_ps(temp0_752, temp0_757), temp0_759)
                                    float temp0_762[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                                    float temp0_763[0x4] = _mm_mul_ps(temp0_758, temp0_762)
                                    float temp0_764[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                                    var_1e8 = temp0_761
                                    float temp0_767[0x4] = _mm_sub_ps(
                                        _mm_mul_ps(_mm_shuffle_ps(temp0_746, temp0_746, 0xd2), 
                                            temp0_764), 
                                        temp0_763)
                                    float temp0_768[0x4] = _mm_add_ps(temp0_767, temp0_767)
                                    float temp0_769[0x4] =
                                        _mm_shuffle_ps(temp0_768, temp0_768, 0xd2)
                                    float temp0_770[0x4] =
                                        _mm_shuffle_ps(temp0_768, temp0_768, 0xc9)
                                    float temp0_771[0x4] = _mm_mul_ps(temp0_769, temp0_764)
                                    float temp0_772[0x4] = _mm_mul_ps(temp0_770, temp0_762)
                                    float temp0_773[0x4] = _mm_mul_ps(temp0_768, temp0_748)
                                    var_1d8_1 = _mm_add_ps(
                                        _mm_add_ps(_mm_sub_ps(temp0_771, temp0_772), 
                                            _mm_add_ps(temp0_773, temp0_746)), 
                                        zmm7)
                                else
                                    zmm1 = *(rdx_16 + (rsi_3 << 3))
                                    zmm10 = data_143f395f0
                                    float temp0_613[0x4] = _mm_add_ps(zmm1, zmm1)
                                    float temp0_614[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                                    float temp0_615[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                                    float temp0_616[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                                    _mm_mul_ps(var_1c8_1, zmm8)
                                    float temp0_618[0x4] = _mm_mul_ps(zmm1, temp0_613)
                                    float temp0_620[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_613, temp0_613, 0x29), temp0_615)
                                    float temp0_622[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_613, temp0_613, 0x12), temp0_616)
                                    float temp0_625[0x4] = _mm_add_ps(
                                        _mm_shuffle_ps(temp0_618, temp0_618, 0x1a), 
                                        _mm_shuffle_ps(temp0_618, temp0_618, 1))
                                    float temp0_626[0x4] = _mm_add_ps(temp0_622, temp0_620)
                                    float temp0_627[0x4] = _mm_sub_ps(temp0_620, temp0_622)
                                    float temp0_628[0x4] = _mm_sub_ps(zmm10, temp0_625)
                                    float temp0_629[0x4] = _mm_mul_ps(temp0_626, zmm8)
                                    float temp0_630[0x4] = _mm_mul_ps(temp0_614, temp0_627)
                                    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_628, zmm8), 
                                        data_143f39600)
                                    float temp0_633[0x4] = _mm_shuffle_ps(temp0_630, zmm1, 0x32)
                                    float temp0_635[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_629, zmm1, 0), temp0_633, 0x82)
                                    float temp0_636[0x4] = _mm_shuffle_ps(temp0_629, zmm1, 0x31)
                                    float temp0_638[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_630, zmm1, 0x10), temp0_636, 0x88)
                                    float temp0_640[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_629, temp0_630, 0x12), zmm1, 0xe8)
                                    zmm1 = var_1e8
                                    float var_448_1[0x4] = temp0_635
                                    float temp0_641[0x4] = _mm_add_ps(zmm1, zmm1)
                                    float var_438_1[0x4] = temp0_638
                                    float var_428_1[0x4] = temp0_640
                                    zmm8 = *(rdx_16 + (rsi_3 << 3) + 0x10)
                                    zmm10[0].q = zmm8 u>> 0x40
                                    float temp0_642[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
                                    float temp0_643[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                                    float temp0_644[0x4] = _mm_mul_ps(zmm1, temp0_641)
                                    float temp0_646[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_641, temp0_641, 0x29), temp0_643)
                                    float temp0_647[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                                    float temp0_649[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_641, temp0_641, 0x12), temp0_647)
                                    float temp0_652[0x4] = _mm_add_ps(
                                        _mm_shuffle_ps(temp0_644, temp0_644, 0x1a), 
                                        _mm_shuffle_ps(temp0_644, temp0_644, 1))
                                    float temp0_653[0x4] =
                                        _mm_shuffle_ps(var_1c8_1, var_1c8_1, 0xc9)
                                    float var_418_1[0x4] = temp0_642
                                    float temp0_654[0x4] = _mm_add_ps(temp0_649, temp0_646)
                                    float temp0_655[0x4] = _mm_sub_ps(temp0_646, temp0_649)
                                    float temp0_656[0x4] = _mm_sub_ps(zmm10, temp0_652)
                                    float temp0_657[0x4] = _mm_mul_ps(temp0_654, var_1c8_1)
                                    float temp0_658[0x4] = _mm_mul_ps(temp0_653, temp0_655)
                                    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_656, var_1c8_1), 
                                        data_143f39600)
                                    float temp0_663[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_657, zmm1, 0), 
                                        _mm_shuffle_ps(temp0_658, zmm1, 0x32), 0x82)
                                    float temp0_664[0x4] = _mm_shuffle_ps(temp0_657, zmm1, 0x31)
                                    float temp0_665[0x4] =
                                        _mm_shuffle_ps(temp0_663, temp0_663, 0x55)
                                    float temp0_667[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_658, zmm1, 0x10), temp0_664, 0x88)
                                    float var_408_1[0x4] = temp0_663
                                    float temp0_668[0x4] = _mm_mul_ps(temp0_665, temp0_638)
                                    float temp0_670[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_657, temp0_658, 0x12), zmm1, 0xe8)
                                    float temp0_672[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_663, temp0_663, 0xaa), temp0_640)
                                    zmm10[0].q = var_1d8_1 u>> 0x40
                                    float temp0_673[0x4] = _mm_shuffle_ps(var_1d8_1, zmm10, 0xc4)
                                    float temp0_674[0x4] = _mm_shuffle_ps(temp0_663, temp0_663, 0)
                                    float temp0_676[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_663, temp0_663, 0xff), temp0_642)
                                    float var_3f8_1[0x4] = temp0_667
                                    float var_3d8_1[0x4] = temp0_673
                                    float var_3e8_1[0x4] = temp0_670
                                    float temp0_678[0x4] =
                                        _mm_add_ps(temp0_668, _mm_mul_ps(temp0_674, temp0_635))
                                    float temp0_680[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_667, temp0_667, 0), temp0_635)
                                    float temp0_681[0x4] = _mm_add_ps(temp0_678, temp0_672)
                                    float temp0_683[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_667, temp0_667, 0xaa), temp0_640)
                                    float temp0_684[0x4] = _mm_add_ps(temp0_681, temp0_676)
                                    float temp0_686[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_667, temp0_667, 0x55), temp0_638)
                                    float temp0_687[0x4] =
                                        _mm_shuffle_ps(temp0_667, temp0_667, 0xff)
                                    float var_808[0x4] = temp0_684
                                    float temp0_688[0x4] =
                                        _mm_shuffle_ps(temp0_670, temp0_670, 0x55)
                                    float temp0_689[0x4] = _mm_add_ps(temp0_686, temp0_680)
                                    float temp0_690[0x4] = _mm_mul_ps(temp0_688, temp0_638)
                                    float temp0_691[0x4] = _mm_mul_ps(temp0_687, temp0_642)
                                    float temp0_692[0x4] = _mm_shuffle_ps(temp0_670, temp0_670, 0)
                                    float temp0_693[0x4] = _mm_add_ps(temp0_689, temp0_683)
                                    float temp0_694[0x4] = _mm_mul_ps(temp0_692, temp0_635)
                                    float temp0_696[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_670, temp0_670, 0xaa), temp0_640)
                                    float temp0_697[0x4] = _mm_add_ps(temp0_693, temp0_691)
                                    float temp0_698[0x4] =
                                        _mm_shuffle_ps(temp0_670, temp0_670, 0xff)
                                    float temp0_699[0x4] = _mm_add_ps(temp0_690, temp0_694)
                                    float temp0_700[0x4] = _mm_mul_ps(temp0_698, temp0_642)
                                    float temp0_701[0x4] = _mm_shuffle_ps(temp0_673, temp0_673, 0)
                                    int96_t var_7f8_1 = temp0_697[0].12
                                    float temp0_702[0x4] =
                                        _mm_shuffle_ps(temp0_673, temp0_673, 0x55)
                                    float temp0_703[0x4] = _mm_add_ps(temp0_699, temp0_696)
                                    float temp0_704[0x4] = _mm_mul_ps(temp0_702, temp0_638)
                                    float temp0_706[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_673, temp0_673, 0xaa), temp0_640)
                                    float temp0_707[0x4] = _mm_mul_ps(temp0_701, temp0_635)
                                    float temp0_708[0x4] = _mm_add_ps(temp0_703, temp0_700)
                                    float temp0_710[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_673, temp0_673, 0xff), temp0_642)
                                    float temp0_711[0x4] = _mm_add_ps(temp0_704, temp0_707)
                                    int96_t var_7e8_1 = temp0_708[0].12
                                    int96_t var_7d8_1 = _mm_add_ps(
                                        _mm_add_ps(temp0_711, temp0_706), temp0_710)[0].12
                                    zmm10, zmm12, zmm13, zmm15 = sub_1407740e0(&var_808, 0x322bcc77)
                                    float zmm2_6[0x4] = var_808[0]
                                    float zmm1_6 = var_808[1]
                                    zmm13 = _mm_and_ps(_mm_cmpeq_ps(zmm13, zmm12, 2), 
                                        data_143f396a0 ^ zmm10)
                                    uint32_t zmm0_7[0x4] = var_808[2]
                                    zmm13 ^= data_143f396a0
                                    zmm2_6[0] = zmm2_6[0] * zmm13[0]
                                    zmm1_6 = zmm1_6 * zmm13[0]
                                    zmm0_7[0] = zmm0_7[0] f* zmm13[0]
                                    var_808[0] = zmm2_6[0]
                                    float temp0_716[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
                                    var_808[1] = zmm1_6
                                    zmm1_6 = var_7f8_1:4.d * temp0_716[0]
                                    var_808[2] = zmm0_7[0]
                                    zmm0_7 = var_7f8_1:8.d
                                    zmm0_7[0] = zmm0_7[0] f* temp0_716[0]
                                    float zmm3_6 = var_7f8_1.d * temp0_716[0]
                                    zmm2_6 = var_7e8_1.d
                                    var_7f8_1:4.d = zmm1_6
                                    var_7f8_1:8.d = zmm0_7[0]
                                    zmm0_7 = var_7e8_1:8.d
                                    float temp0_717[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
                                    zmm1_6 = var_7e8_1:4.d * temp0_717[0]
                                    zmm0_7[0] = zmm0_7[0] f* temp0_717[0]
                                    zmm2_6[0] = zmm2_6[0] * temp0_717[0]
                                    var_7e8_1:4.d = zmm1_6
                                    var_7e8_1:8.d = zmm0_7[0]
                                    var_7f8_1.d = zmm3_6
                                    var_7e8_1.d = zmm2_6[0]
                                    uint32_t var_688[0x4]
                                    sub_14077e4a0(&var_688, &var_808)
                                    zmm5_1 = var_688
                                    zmm6 = data_143f39690
                                    float temp0_718[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                                    var_1c8_1 = zmm12
                                    float temp0_720[0x4] = _mm_add_ps(temp0_718, 
                                        _mm_shuffle_ps(temp0_718, temp0_718, 0x4e))
                                    float temp0_722[0x4] = _mm_add_ps(
                                        _mm_shuffle_ps(temp0_720, temp0_720, 0x39), temp0_720)
                                    float temp0_723[0x4] = _mm_rsqrt_ps(temp0_722)
                                    float temp0_724[0x4] = _mm_mul_ps(temp0_722, zmm6)
                                    float temp0_729[0x4] = _mm_add_ps(
                                        _mm_mul_ps(
                                            _mm_sub_ps(zmm6, 
                                                _mm_mul_ps(_mm_mul_ps(temp0_723, temp0_723), 
                                                    temp0_724)), 
                                            temp0_723), 
                                        temp0_723)
                                    float temp0_732[0x4] = _mm_sub_ps(zmm6, 
                                        _mm_mul_ps(_mm_mul_ps(temp0_729, temp0_729), temp0_724))
                                    float temp0_734[0x4] = _mm_cmpeq_ps(
                                        _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_722, 2)
                                    float temp0_736[0x4] =
                                        _mm_add_ps(_mm_mul_ps(temp0_732, temp0_729), temp0_729)
                                    float temp0_737[0x4] = _mm_unpacklo_ps(var_7d8_1:4.d, 0)
                                    zmm6 = _mm_and_ps(
                                        _mm_mul_ps(temp0_736, zmm5_1) ^ data_143f39680, temp0_734)
                                        ^ data_143f39680
                                    var_688 = zmm6
                                    var_1e8 = zmm6
                                    float temp0_740[0x4] =
                                        _mm_unpacklo_ps(var_7d8_1.d, var_7d8_1:8.d[0].q)
                                    zmm13 = data_143f396b0
                                    rax_21 = zx.q(var_998)
                                    zmm9 = data_143f39660
                                    zmm10 = data_143f39650
                                    var_1d8_1 = _mm_unpacklo_ps(temp0_740, temp0_737[0].q)
                                
                                float (* rdx_20)[0x4] = sx.q(rax_21.d) * 0x30 + *arg2
                                zmm8 = rdx_20[2]
                                
                                if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_228_1, zmm8), 
                                        zmm13, 1)) == 0)
                                    zmm5_1 = *rdx_20
                                    zmm2 = var_248
                                    float temp0_910[0x4] = __mulps_xmmps_memps(zmm8, var_238_1)
                                    zmm7 = rdx_20[1]
                                    float temp0_911[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
                                    float temp0_912[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
                                    float temp0_914[0x4] =
                                        _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0), temp0_911)
                                    float temp0_915[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                                    float temp0_916[0x4] = _mm_mul_ps(var_228_1, zmm8)
                                    float temp0_917[0x4] = _mm_mul_ps(temp0_915, zmm2)
                                    var_228_1 = temp0_916
                                    float temp0_919[0x4] =
                                        _mm_add_ps(_mm_mul_ps(temp0_914, zmm15), temp0_917)
                                    float temp0_921[0x4] =
                                        _mm_mul_ps(temp0_912, _mm_shuffle_ps(zmm2, zmm2, 0x4e))
                                    float temp0_924[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), 
                                        _mm_shuffle_ps(zmm2, zmm2, 0xb1))
                                    float temp0_925[0x4] = _mm_mul_ps(temp0_921, zmm9)
                                    float temp0_926[0x4] =
                                        _mm_shuffle_ps(temp0_910, temp0_910, 0xd2)
                                    float temp0_927[0x4] = _mm_mul_ps(temp0_924, zmm10)
                                    float temp0_929[0x4] =
                                        _mm_add_ps(_mm_add_ps(temp0_919, temp0_925), temp0_927)
                                    float temp0_930[0x4] =
                                        _mm_shuffle_ps(temp0_910, temp0_910, 0xc9)
                                    var_248 = temp0_929
                                    float temp0_931[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                                    float temp0_932[0x4] = _mm_mul_ps(temp0_930, temp0_931)
                                    float temp0_933[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                                    float temp0_935[0x4] =
                                        _mm_sub_ps(_mm_mul_ps(temp0_926, temp0_933), temp0_932)
                                    float temp0_936[0x4] = _mm_add_ps(temp0_935, temp0_935)
                                    float temp0_937[0x4] = _mm_mul_ps(temp0_915, temp0_936)
                                    float temp0_939[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_936, temp0_936, 0xd2), temp0_933)
                                    float temp0_940[0x4] =
                                        _mm_shuffle_ps(temp0_936, temp0_936, 0xc9)
                                    float temp0_941[0x4] = _mm_add_ps(temp0_937, temp0_910)
                                    var_238_1 = _mm_add_ps(
                                        _mm_add_ps(
                                            _mm_sub_ps(temp0_939, 
                                                _mm_mul_ps(temp0_940, temp0_931)), 
                                            temp0_941), 
                                        zmm7)
                                else
                                    zmm1 = *rdx_20
                                    zmm10 = data_143f395f0
                                    float temp0_781[0x4] = _mm_add_ps(zmm1, zmm1)
                                    float temp0_782[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                                    float temp0_783[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                                    _mm_mul_ps(zmm8, var_228_1)
                                    float temp0_785[0x4] = _mm_mul_ps(temp0_781, zmm1)
                                    float temp0_787[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_781, temp0_781, 0x29), temp0_783)
                                    float temp0_788[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                                    float temp0_789[0x4] =
                                        _mm_shuffle_ps(temp0_785, temp0_785, 0x1a)
                                    float temp0_791[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_781, temp0_781, 0x12), temp0_788)
                                    float temp0_793[0x4] = _mm_add_ps(temp0_789, 
                                        _mm_shuffle_ps(temp0_785, temp0_785, 1))
                                    float temp0_794[0x4] = _mm_sub_ps(temp0_787, temp0_791)
                                    float temp0_795[0x4] = _mm_add_ps(temp0_787, temp0_791)
                                    zmm3 = var_248
                                    float temp0_796[0x4] = _mm_sub_ps(zmm10, temp0_793)
                                    float temp0_797[0x4] = _mm_mul_ps(temp0_782, temp0_794)
                                    float temp0_798[0x4] = _mm_mul_ps(temp0_795, zmm8)
                                    float temp0_799[0x4] = _mm_mul_ps(temp0_796, zmm8)
                                    float temp0_800[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                                    zmm1 = __andps_xmmxud_memxud(temp0_799, data_143f39600)
                                    float temp0_802[0x4] = _mm_shuffle_ps(temp0_797, zmm1, 0x32)
                                    float temp0_804[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_798, zmm1, 0), temp0_802, 0x82)
                                    float temp0_805[0x4] = _mm_shuffle_ps(temp0_798, zmm1, 0x31)
                                    float temp0_807[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_797, zmm1, 0x10), temp0_805, 0x88)
                                    float temp0_809[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_798, temp0_797, 0x12), zmm1, 0xe8)
                                    float temp0_810[0x4] = _mm_add_ps(zmm3, zmm3)
                                    float var_3c8_1[0x4] = temp0_804
                                    float temp0_811[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                                    float var_3b8_1[0x4] = temp0_807
                                    float var_3a8_1[0x4] = temp0_809
                                    zmm8 = rdx_20[1]
                                    float temp0_812[0x4] = _mm_mul_ps(zmm3, temp0_810)
                                    zmm10[0].q = zmm8 u>> 0x40
                                    float temp0_813[0x4] = _mm_shuffle_ps(zmm8, zmm10, 0xc4)
                                    float temp0_815[0x4] = _mm_mul_ps(temp0_800, 
                                        _mm_shuffle_ps(temp0_810, temp0_810, 0x29))
                                    float temp0_817[0x4] = _mm_mul_ps(temp0_811, 
                                        _mm_shuffle_ps(temp0_810, temp0_810, 0x12))
                                    float temp0_820[0x4] = _mm_add_ps(
                                        _mm_shuffle_ps(temp0_812, temp0_812, 0x1a), 
                                        _mm_shuffle_ps(temp0_812, temp0_812, 1))
                                    float temp0_821[0x4] =
                                        _mm_shuffle_ps(var_228_1, var_228_1, 0xc9)
                                    float var_398_1[0x4] = temp0_813
                                    float temp0_822[0x4] = _mm_add_ps(temp0_817, temp0_815)
                                    float temp0_823[0x4] = _mm_sub_ps(temp0_815, temp0_817)
                                    float temp0_824[0x4] = _mm_sub_ps(zmm10, temp0_820)
                                    float temp0_825[0x4] = _mm_mul_ps(temp0_822, var_228_1)
                                    float temp0_826[0x4] = _mm_mul_ps(temp0_821, temp0_823)
                                    zmm1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_824, var_228_1), 
                                        data_143f39600)
                                    float temp0_831[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_825, zmm1, 0), 
                                        _mm_shuffle_ps(temp0_826, zmm1, 0x32), 0x82)
                                    float temp0_832[0x4] = _mm_shuffle_ps(temp0_825, zmm1, 0x31)
                                    float temp0_833[0x4] =
                                        _mm_shuffle_ps(temp0_831, temp0_831, 0x55)
                                    float temp0_835[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_826, zmm1, 0x10), temp0_832, 0x88)
                                    float var_388_1[0x4] = temp0_831
                                    float temp0_836[0x4] = _mm_mul_ps(temp0_833, temp0_807)
                                    float temp0_838[0x4] = _mm_shuffle_ps(
                                        _mm_shuffle_ps(temp0_825, temp0_826, 0x12), zmm1, 0xe8)
                                    float temp0_840[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_831, temp0_831, 0xaa), temp0_809)
                                    zmm10[0].q = var_238_1 u>> 0x40
                                    float temp0_841[0x4] = _mm_shuffle_ps(var_238_1, zmm10, 0xc4)
                                    float temp0_842[0x4] = _mm_shuffle_ps(temp0_831, temp0_831, 0)
                                    float temp0_844[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_831, temp0_831, 0xff), temp0_813)
                                    float var_378_1[0x4] = temp0_835
                                    float var_358_1[0x4] = temp0_841
                                    float var_368_1[0x4] = temp0_838
                                    float temp0_846[0x4] =
                                        _mm_add_ps(temp0_836, _mm_mul_ps(temp0_842, temp0_804))
                                    float temp0_848[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_835, temp0_835, 0), temp0_804)
                                    float temp0_849[0x4] = _mm_add_ps(temp0_846, temp0_840)
                                    float temp0_851[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_835, temp0_835, 0xaa), temp0_809)
                                    float temp0_852[0x4] = _mm_add_ps(temp0_849, temp0_844)
                                    float temp0_854[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_835, temp0_835, 0x55), temp0_807)
                                    float temp0_855[0x4] =
                                        _mm_shuffle_ps(temp0_835, temp0_835, 0xff)
                                    float var_7c8[0x4] = temp0_852
                                    float temp0_856[0x4] =
                                        _mm_shuffle_ps(temp0_838, temp0_838, 0x55)
                                    float temp0_857[0x4] = _mm_add_ps(temp0_854, temp0_848)
                                    float temp0_858[0x4] = _mm_mul_ps(temp0_856, temp0_807)
                                    float temp0_859[0x4] = _mm_mul_ps(temp0_855, temp0_813)
                                    float temp0_860[0x4] = _mm_shuffle_ps(temp0_838, temp0_838, 0)
                                    float temp0_861[0x4] = _mm_add_ps(temp0_857, temp0_851)
                                    float temp0_862[0x4] = _mm_mul_ps(temp0_860, temp0_804)
                                    float temp0_864[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_838, temp0_838, 0xaa), temp0_809)
                                    float temp0_865[0x4] = _mm_add_ps(temp0_861, temp0_859)
                                    float temp0_866[0x4] =
                                        _mm_shuffle_ps(temp0_838, temp0_838, 0xff)
                                    float temp0_867[0x4] = _mm_add_ps(temp0_858, temp0_862)
                                    float temp0_868[0x4] = _mm_mul_ps(temp0_866, temp0_813)
                                    float temp0_869[0x4] = _mm_shuffle_ps(temp0_841, temp0_841, 0)
                                    int96_t var_7b8_1 = temp0_865[0].12
                                    float temp0_870[0x4] =
                                        _mm_shuffle_ps(temp0_841, temp0_841, 0x55)
                                    float temp0_871[0x4] = _mm_add_ps(temp0_867, temp0_864)
                                    float temp0_872[0x4] = _mm_mul_ps(temp0_870, temp0_807)
                                    float temp0_874[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_841, temp0_841, 0xaa), temp0_809)
                                    float temp0_875[0x4] = _mm_mul_ps(temp0_869, temp0_804)
                                    float temp0_876[0x4] = _mm_add_ps(temp0_871, temp0_868)
                                    float temp0_878[0x4] = _mm_mul_ps(
                                        _mm_shuffle_ps(temp0_841, temp0_841, 0xff), temp0_813)
                                    float temp0_879[0x4] = _mm_add_ps(temp0_872, temp0_875)
                                    int96_t var_7a8_1 = temp0_876[0].12
                                    int96_t var_798_1 = _mm_add_ps(
                                        _mm_add_ps(temp0_879, temp0_874), temp0_878)[0].12
                                    zmm10, zmm12, zmm13 = sub_1407740e0(&var_7c8, 0x322bcc77)
                                    float zmm2_7[0x4] = var_7c8[0]
                                    float zmm1_7 = var_7c8[1]
                                    zmm13 = _mm_and_ps(_mm_cmpeq_ps(zmm13, zmm12, 2), 
                                        data_143f396a0 ^ zmm10)
                                    uint32_t zmm0_8[0x4] = var_7c8[2]
                                    zmm13 ^= data_143f396a0
                                    zmm2_7[0] = zmm2_7[0] * zmm13[0]
                                    zmm1_7 = zmm1_7 * zmm13[0]
                                    zmm0_8[0] = zmm0_8[0] f* zmm13[0]
                                    var_7c8[0] = zmm2_7[0]
                                    float temp0_884[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x55)
                                    var_7c8[1] = zmm1_7
                                    zmm1_7 = var_7b8_1:4.d * temp0_884[0]
                                    var_7c8[2] = zmm0_8[0]
                                    zmm0_8 = var_7b8_1:8.d
                                    zmm0_8[0] = zmm0_8[0] f* temp0_884[0]
                                    float zmm3_7 = var_7b8_1.d * temp0_884[0]
                                    zmm2_7 = var_7a8_1.d
                                    var_7b8_1:4.d = zmm1_7
                                    var_7b8_1:8.d = zmm0_8[0]
                                    zmm0_8 = var_7a8_1:8.d
                                    float temp0_885[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xaa)
                                    zmm1_7 = var_7a8_1:4.d * temp0_885[0]
                                    zmm0_8[0] = zmm0_8[0] f* temp0_885[0]
                                    zmm2_7[0] = zmm2_7[0] * temp0_885[0]
                                    var_7a8_1:4.d = zmm1_7
                                    var_7a8_1:8.d = zmm0_8[0]
                                    var_7b8_1.d = zmm3_7
                                    var_7a8_1.d = zmm2_7[0]
                                    uint32_t var_678[0x4]
                                    sub_14077e4a0(&var_678, &var_7c8)
                                    zmm5_1 = var_678
                                    zmm6 = data_143f39690
                                    float temp0_886[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                                    var_228_1 = zmm12
                                    float temp0_888[0x4] = _mm_add_ps(temp0_886, 
                                        _mm_shuffle_ps(temp0_886, temp0_886, 0x4e))
                                    float temp0_890[0x4] = _mm_add_ps(
                                        _mm_shuffle_ps(temp0_888, temp0_888, 0x39), temp0_888)
                                    float temp0_891[0x4] = _mm_rsqrt_ps(temp0_890)
                                    float temp0_892[0x4] = _mm_mul_ps(temp0_890, zmm6)
                                    float temp0_897[0x4] = _mm_add_ps(
                                        _mm_mul_ps(
                                            _mm_sub_ps(zmm6, 
                                                _mm_mul_ps(_mm_mul_ps(temp0_891, temp0_891), 
                                                    temp0_892)), 
                                            temp0_891), 
                                        temp0_891)
                                    float temp0_900[0x4] = _mm_sub_ps(zmm6, 
                                        _mm_mul_ps(_mm_mul_ps(temp0_897, temp0_897), temp0_892))
                                    float temp0_902[0x4] = _mm_cmpeq_ps(
                                        _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_890, 2)
                                    float temp0_904[0x4] =
                                        _mm_add_ps(_mm_mul_ps(temp0_900, temp0_897), temp0_897)
                                    float temp0_905[0x4] = _mm_unpacklo_ps(var_798_1:4.d, 0)
                                    zmm6 = _mm_and_ps(
                                        _mm_mul_ps(temp0_904, zmm5_1) ^ data_143f39680, temp0_902)
                                        ^ data_143f39680
                                    var_678 = zmm6
                                    var_248 = zmm6
                                    var_238_1 = _mm_unpacklo_ps(
                                        _mm_unpacklo_ps(var_798_1.d, var_798_1:8.d[0].q), 
                                        temp0_905[0].q)
                                
                                void var_6c4
                                rax_21 = sx.q(*sub_141ea4020(r13, &var_6c4, &var_998))
                                var_998 = rax_21.d
                                
                                if (rax_21.d == 0xffffffff)
                                    i = -1
                                else
                                    i = *(*(r13 + 0x70) + (rax_21 << 2))
                                
                                if (rax_21.d == 0xffffffff)
                                    break
                            
                            rsi_1 = rdx_2
                        
                        float var_158[0x3][0x4]
                        float (* rax_24)[0x4] = sub_140ad7d70(&var_218, &var_158, &var_248)
                        float zmm1_8[0x4] = data_143f396b0
                        float var_738_2[0x4] = zmm1_8
                        float zmm8_2[0x4] = rax_24[2]
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_8e8_1, zmm8_2), zmm1_8, 1))
                                == 0)
                            float zmm5_4[0x4] = *rax_24
                            float temp0_1078[0x4] = __mulps_xmmps_memps(zmm8_2, var_8f8_1)
                            float zmm7_2[0x4] = rax_24[1]
                            float temp0_1079[0x4] = _mm_shuffle_ps(var_908_1, var_908_1, 0x1b)
                            float temp0_1080[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0x55)
                            float temp0_1082[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(zmm5_4, zmm5_4, 0), temp0_1079)
                            float temp0_1083[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0xff)
                            var_8e8_1 = _mm_mul_ps(var_8e8_1, zmm8_2)
                            float temp0_1087[0x4] = _mm_add_ps(
                                __mulps_xmmps_memps(temp0_1082, data_143f39670), 
                                _mm_mul_ps(temp0_1083, var_908_1))
                            float temp0_1089[0x4] =
                                _mm_mul_ps(temp0_1080, _mm_shuffle_ps(var_908_1, var_908_1, 0x4e))
                            float temp0_1092[0x4] = _mm_mul_ps(
                                _mm_shuffle_ps(zmm5_4, zmm5_4, 0xaa), 
                                _mm_shuffle_ps(var_908_1, var_908_1, 0xb1))
                            float temp0_1093[0x4] = __mulps_xmmps_memps(temp0_1089, data_143f39660)
                            float temp0_1094[0x4] = _mm_shuffle_ps(temp0_1078, temp0_1078, 0xd2)
                            float temp0_1095[0x4] = __mulps_xmmps_memps(temp0_1092, data_143f39650)
                            float temp0_1097[0x4] =
                                _mm_add_ps(_mm_add_ps(temp0_1087, temp0_1093), temp0_1095)
                            float temp0_1098[0x4] = _mm_shuffle_ps(temp0_1078, temp0_1078, 0xc9)
                            var_908_1 = temp0_1097
                            float temp0_1099[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0xc9)
                            float temp0_1100[0x4] = _mm_shuffle_ps(zmm5_4, zmm5_4, 0xd2)
                            float temp0_1101[0x4] = _mm_mul_ps(temp0_1098, temp0_1100)
                            float temp0_1103[0x4] =
                                _mm_sub_ps(_mm_mul_ps(temp0_1094, temp0_1099), temp0_1101)
                            float temp0_1104[0x4] = _mm_add_ps(temp0_1103, temp0_1103)
                            float temp0_1105[0x4] = _mm_mul_ps(temp0_1083, temp0_1104)
                            float temp0_1106[0x4] = _mm_shuffle_ps(temp0_1104, temp0_1104, 0xc9)
                            float temp0_1108[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1104, temp0_1104, 0xd2), temp0_1099)
                            float temp0_1109[0x4] = _mm_mul_ps(temp0_1106, temp0_1100)
                            float temp0_1110[0x4] = _mm_add_ps(temp0_1105, temp0_1078)
                            var_8f8_1 = _mm_add_ps(
                                _mm_add_ps(_mm_sub_ps(temp0_1108, temp0_1109), temp0_1110), zmm7_2)
                        else
                            float zmm3_8[0x4] = *rax_24
                            float zmm11_3[0x4] = data_143f395f0
                            float temp0_949[0x4] = _mm_add_ps(zmm3_8, zmm3_8)
                            float temp0_950[0x4] = _mm_shuffle_ps(zmm8_2, zmm8_2, 0xc9)
                            float temp0_951[0x4] = _mm_shuffle_ps(zmm3_8, zmm3_8, 4)
                            float temp0_952[0x4] = _mm_shuffle_ps(zmm3_8, zmm3_8, 0xff)
                            _mm_mul_ps(zmm8_2, var_8e8_1)
                            float temp0_954[0x4] = _mm_mul_ps(zmm3_8, temp0_949)
                            float temp0_956[0x4] =
                                _mm_mul_ps(temp0_951, _mm_shuffle_ps(temp0_949, temp0_949, 0x29))
                            float temp0_958[0x4] =
                                _mm_mul_ps(temp0_952, _mm_shuffle_ps(temp0_949, temp0_949, 0x12))
                            float temp0_961[0x4] = _mm_add_ps(
                                _mm_shuffle_ps(temp0_954, temp0_954, 0x1a), 
                                _mm_shuffle_ps(temp0_954, temp0_954, 1))
                            float temp0_962[0x4] = _mm_add_ps(temp0_958, temp0_956)
                            float temp0_963[0x4] = _mm_sub_ps(temp0_956, temp0_958)
                            float temp0_964[0x4] = _mm_sub_ps(zmm11_3, temp0_961)
                            float temp0_965[0x4] = _mm_mul_ps(temp0_962, zmm8_2)
                            float temp0_966[0x4] = _mm_mul_ps(temp0_950, temp0_963)
                            zmm1_8 =
                                __andps_xmmxud_memxud(_mm_mul_ps(temp0_964, zmm8_2), data_143f39600)
                            float temp0_969[0x4] = _mm_shuffle_ps(temp0_966, zmm1_8, 0x32)
                            float temp0_971[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_965, zmm1_8, 0), temp0_969, 0x82)
                            float temp0_972[0x4] = _mm_shuffle_ps(temp0_965, zmm1_8, 0x31)
                            float temp0_974[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_966, zmm1_8, 0x10), temp0_972, 0x88)
                            float temp0_976[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_965, temp0_966, 0x12), zmm1_8, 0xe8)
                            float var_348_1[0x4] = temp0_971
                            float temp0_977[0x4] = _mm_add_ps(var_908_1, var_908_1)
                            float var_338_1[0x4] = temp0_974
                            float var_328_1[0x4] = temp0_976
                            float zmm9_2[0x4] = rax_24[1]
                            zmm11_3[0].q = zmm9_2 u>> 0x40
                            float temp0_978[0x4] = _mm_shuffle_ps(zmm9_2, zmm11_3, 0xc4)
                            float temp0_979[0x4] = _mm_shuffle_ps(var_908_1, var_908_1, 4)
                            float temp0_980[0x4] = _mm_mul_ps(temp0_977, var_908_1)
                            float temp0_982[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_977, temp0_977, 0x29), temp0_979)
                            float temp0_983[0x4] = _mm_shuffle_ps(var_908_1, var_908_1, 0xff)
                            float temp0_985[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_977, temp0_977, 0x12), temp0_983)
                            float temp0_988[0x4] = _mm_add_ps(
                                _mm_shuffle_ps(temp0_980, temp0_980, 0x1a), 
                                _mm_shuffle_ps(temp0_980, temp0_980, 1))
                            float temp0_989[0x4] = _mm_shuffle_ps(var_8e8_1, var_8e8_1, 0xc9)
                            float var_318_1[0x4] = temp0_978
                            float temp0_990[0x4] = _mm_add_ps(temp0_985, temp0_982)
                            float temp0_991[0x4] = _mm_sub_ps(temp0_982, temp0_985)
                            float temp0_992[0x4] = _mm_sub_ps(zmm11_3, temp0_988)
                            float temp0_993[0x4] = _mm_mul_ps(temp0_990, var_8e8_1)
                            float temp0_994[0x4] = _mm_mul_ps(temp0_989, temp0_991)
                            zmm1_8 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_992, var_8e8_1), 
                                data_143f39600)
                            float temp0_999[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_993, zmm1_8, 0), 
                                _mm_shuffle_ps(temp0_994, zmm1_8, 0x32), 0x82)
                            float temp0_1000[0x4] = _mm_shuffle_ps(temp0_993, zmm1_8, 0x31)
                            float temp0_1001[0x4] = _mm_shuffle_ps(temp0_999, temp0_999, 0x55)
                            float temp0_1003[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_994, zmm1_8, 0x10), temp0_1000, 0x88)
                            float var_308_1[0x4] = temp0_999
                            float temp0_1004[0x4] = _mm_mul_ps(temp0_1001, temp0_974)
                            float temp0_1006[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_993, temp0_994, 0x12), zmm1_8, 0xe8)
                            float temp0_1008[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_999, temp0_999, 0xaa), temp0_976)
                            zmm11_3[0].q = var_8f8_1 u>> 0x40
                            float temp0_1009[0x4] = _mm_shuffle_ps(var_8f8_1, zmm11_3, 0xc4)
                            float temp0_1010[0x4] = _mm_shuffle_ps(temp0_999, temp0_999, 0)
                            float temp0_1012[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_999, temp0_999, 0xff), temp0_978)
                            float var_2f8_1[0x4] = temp0_1003
                            float var_2d8_1[0x4] = temp0_1009
                            float var_2e8_1[0x4] = temp0_1006
                            float temp0_1014[0x4] =
                                _mm_add_ps(temp0_1004, _mm_mul_ps(temp0_1010, temp0_971))
                            float temp0_1016[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1003, temp0_1003, 0), temp0_971)
                            float temp0_1017[0x4] = _mm_add_ps(temp0_1014, temp0_1008)
                            float temp0_1019[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1003, temp0_1003, 0xaa), temp0_976)
                            float temp0_1020[0x4] = _mm_add_ps(temp0_1017, temp0_1012)
                            float temp0_1022[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1003, temp0_1003, 0x55), temp0_974)
                            float temp0_1023[0x4] = _mm_shuffle_ps(temp0_1003, temp0_1003, 0xff)
                            float var_788[0x4] = temp0_1020
                            float temp0_1024[0x4] = _mm_shuffle_ps(temp0_1006, temp0_1006, 0x55)
                            float temp0_1025[0x4] = _mm_add_ps(temp0_1022, temp0_1016)
                            float temp0_1026[0x4] = _mm_mul_ps(temp0_1024, temp0_974)
                            float temp0_1027[0x4] = _mm_mul_ps(temp0_1023, temp0_978)
                            float temp0_1028[0x4] = _mm_shuffle_ps(temp0_1006, temp0_1006, 0)
                            float temp0_1029[0x4] = _mm_add_ps(temp0_1025, temp0_1019)
                            float temp0_1030[0x4] = _mm_mul_ps(temp0_1028, temp0_971)
                            float temp0_1032[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1006, temp0_1006, 0xaa), temp0_976)
                            float temp0_1033[0x4] = _mm_add_ps(temp0_1029, temp0_1027)
                            float temp0_1034[0x4] = _mm_shuffle_ps(temp0_1006, temp0_1006, 0xff)
                            float temp0_1035[0x4] = _mm_add_ps(temp0_1026, temp0_1030)
                            float temp0_1036[0x4] = _mm_mul_ps(temp0_1034, temp0_978)
                            float temp0_1037[0x4] = _mm_shuffle_ps(temp0_1009, temp0_1009, 0)
                            int96_t var_778_1 = temp0_1033[0].12
                            float temp0_1038[0x4] = _mm_shuffle_ps(temp0_1009, temp0_1009, 0x55)
                            float temp0_1039[0x4] = _mm_add_ps(temp0_1035, temp0_1032)
                            float temp0_1040[0x4] = _mm_mul_ps(temp0_1038, temp0_974)
                            float temp0_1042[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1009, temp0_1009, 0xaa), temp0_976)
                            float temp0_1043[0x4] = _mm_mul_ps(temp0_1037, temp0_971)
                            float temp0_1044[0x4] = _mm_add_ps(temp0_1039, temp0_1036)
                            float temp0_1046[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1009, temp0_1009, 0xff), temp0_978)
                            float temp0_1047[0x4] = _mm_add_ps(temp0_1040, temp0_1043)
                            int96_t var_768_1 = temp0_1044[0].12
                            int96_t var_758_1 =
                                _mm_add_ps(_mm_add_ps(temp0_1047, temp0_1042), temp0_1046)[0].12
                            int128_t zmm11_4
                            float zmm13_4[0x4]
                            zmm11_4, zmm13_4 = sub_1407740e0(&var_788, 0x322bcc77)
                            float zmm6_4[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_738_2, zmm13_4, 2), 
                                data_143f396a0 ^ zmm11_4) ^ data_143f396a0
                            void var_5ec
                            int64_t* rax_25 = sub_14173efa0(&var_788, &var_5ec, 1)
                            float zmm1_9 = zmm6_4[0]
                            float zmm0_11 = zmm6_4[0]
                            zmm6_4[0] = zmm6_4[0] f* *rax_25
                            zmm1_9 = zmm1_9 f* *(rax_25 + 4)
                            zmm0_11 = zmm0_11 f* rax_25[1].d
                            var_788[0] = zmm6_4[0]
                            float temp0_1052[0x4] = _mm_shuffle_ps(zmm6_4, zmm6_4, 0x55)
                            var_788[1] = zmm1_9
                            zmm1_9 = var_778_1:4.d * temp0_1052[0]
                            var_788[2] = zmm0_11
                            zmm0_11 = var_778_1:8.d * temp0_1052[0]
                            float zmm3_9 = var_778_1.d * temp0_1052[0]
                            float zmm2_9[0x4] = var_768_1.d
                            var_778_1:4.d = zmm1_9
                            var_778_1:8.d = zmm0_11
                            float temp0_1053[0x4] = _mm_shuffle_ps(zmm6_4, zmm6_4, 0xaa)
                            zmm1_9 = var_768_1:4.d * temp0_1053[0]
                            zmm0_11 = var_768_1:8.d * temp0_1053[0]
                            zmm2_9[0] = zmm2_9[0] * temp0_1053[0]
                            var_768_1:4.d = zmm1_9
                            var_768_1:8.d = zmm0_11
                            var_778_1.d = zmm3_9
                            var_768_1.d = zmm2_9[0]
                            uint32_t var_668[0x4]
                            sub_14077e4a0(&var_668, &var_788)
                            uint32_t zmm5_5[0x4] = var_668
                            float zmm6_5[0x4] = data_143f39690
                            uint32_t zmm1_10[0x4] = _mm_mul_ps(zmm5_5, zmm5_5)
                            var_8e8_1 = zmm13_4
                            zmm1_10 = _mm_add_ps(zmm1_10, _mm_shuffle_ps(zmm1_10, zmm1_10, 0x4e))
                            uint32_t zmm4_7[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(zmm1_10, zmm1_10, 0x39), zmm1_10)
                            zmm1_10 = _mm_rsqrt_ps(zmm4_7)
                            float temp0_1060[0x4] = _mm_mul_ps(zmm4_7, zmm6_5)
                            float temp0_1065[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6_5, 
                                        _mm_mul_ps(_mm_mul_ps(zmm1_10, zmm1_10), temp0_1060)), 
                                    zmm1_10), 
                                zmm1_10)
                            float temp0_1068[0x4] = _mm_sub_ps(zmm6_5, 
                                _mm_mul_ps(_mm_mul_ps(temp0_1065, temp0_1065), temp0_1060))
                            uint32_t zmm0_12[0x4] =
                                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_7, 2)
                            zmm6_5 = _mm_and_ps(
                                _mm_mul_ps(
                                    _mm_add_ps(_mm_mul_ps(temp0_1068, temp0_1065), temp0_1065), 
                                    zmm5_5) ^ data_143f39680, 
                                zmm0_12) ^ data_143f39680
                            var_668 = zmm6_5
                            var_908_1 = zmm6_5
                            var_8f8_1 = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_758_1.d, var_758_1:8.d[0].q), 
                                _mm_unpacklo_ps(var_758_1:4.d, 0)[0].q)
                        
                        float var_128[0x3][0x4]
                        float (* rax_26)[0x4]
                        rax_26, zmm14 = sub_140ad7d70(&var_1e8, &var_128, &var_248)
                        zmm1 = data_143f396b0
                        float var_738_3[0x4] = zmm1
                        zmm10 = rax_26[2]
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_938_1, zmm10), zmm1, 1))
                                != 0)
                            zmm3 = *rax_26
                            zmm11 = data_143f395f0
                            float temp0_1117[0x4] = _mm_add_ps(zmm3, zmm3)
                            float temp0_1118[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xc9)
                            float temp0_1119[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                            float temp0_1120[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                            _mm_mul_ps(zmm10, var_938_1)
                            float temp0_1122[0x4] = _mm_mul_ps(zmm3, temp0_1117)
                            float temp0_1124[0x4] =
                                _mm_mul_ps(temp0_1119, _mm_shuffle_ps(temp0_1117, temp0_1117, 0x29))
                            float temp0_1125[0x4] = _mm_shuffle_ps(temp0_1117, temp0_1117, 0x12)
                            float temp0_1126[0x4] = _mm_shuffle_ps(temp0_1122, temp0_1122, 0x1a)
                            float temp0_1127[0x4] = _mm_mul_ps(temp0_1120, temp0_1125)
                            float temp0_1129[0x4] =
                                _mm_add_ps(temp0_1126, _mm_shuffle_ps(temp0_1122, temp0_1122, 1))
                            float temp0_1130[0x4] = _mm_add_ps(temp0_1127, temp0_1124)
                            float temp0_1131[0x4] = _mm_sub_ps(temp0_1124, temp0_1127)
                            float temp0_1132[0x4] = _mm_sub_ps(zmm11, temp0_1129)
                            float temp0_1133[0x4] = _mm_mul_ps(temp0_1130, zmm10)
                            float temp0_1134[0x4] = _mm_mul_ps(temp0_1132, zmm10)
                            float temp0_1135[0x4] = _mm_mul_ps(temp0_1118, temp0_1131)
                            zmm1 = __andps_xmmxud_memxud(temp0_1134, data_143f39600)
                            float temp0_1139[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_1133, zmm1, 0), 
                                _mm_shuffle_ps(temp0_1135, zmm1, 0x32), 0x82)
                            float temp0_1140[0x4] = _mm_shuffle_ps(temp0_1133, zmm1, 0x31)
                            float temp0_1142[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_1135, zmm1, 0x10), temp0_1140, 0x88)
                            float temp0_1144[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_1133, temp0_1135, 0x12), zmm1, 0xe8)
                            float var_2c8_1[0x4] = temp0_1139
                            float temp0_1145[0x4] = _mm_add_ps(var_958_1, var_958_1)
                            float var_2b8_1[0x4] = temp0_1142
                            float var_2a8_1[0x4] = temp0_1144
                            zmm9 = rax_26[1]
                            zmm11[0].q = zmm9 u>> 0x40
                            float temp0_1146[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
                            float temp0_1147[0x4] = _mm_shuffle_ps(var_958_1, var_958_1, 4)
                            float temp0_1148[0x4] = _mm_mul_ps(temp0_1145, var_958_1)
                            float temp0_1150[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1145, temp0_1145, 0x29), temp0_1147)
                            float temp0_1151[0x4] = _mm_shuffle_ps(var_958_1, var_958_1, 0xff)
                            float temp0_1152[0x4] = _mm_shuffle_ps(var_938_1, var_938_1, 0xc9)
                            float temp0_1154[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1145, temp0_1145, 0x12), temp0_1151)
                            float var_298_1[0x4] = temp0_1146
                            float temp0_1155[0x4] = _mm_add_ps(temp0_1154, temp0_1150)
                            float temp0_1156[0x4] = _mm_sub_ps(temp0_1150, temp0_1154)
                            float temp0_1157[0x4] = _mm_mul_ps(temp0_1155, var_938_1)
                            float temp0_1160[0x4] = _mm_add_ps(
                                _mm_shuffle_ps(temp0_1148, temp0_1148, 0x1a), 
                                _mm_shuffle_ps(temp0_1148, temp0_1148, 1))
                            float temp0_1161[0x4] = _mm_mul_ps(temp0_1152, temp0_1156)
                            zmm1 = __andps_xmmxud_memxud(
                                __mulps_xmmps_memps(_mm_sub_ps(zmm11, temp0_1160), var_938_1), 
                                data_143f39600)
                            float temp0_1167[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_1157, zmm1, 0), 
                                _mm_shuffle_ps(temp0_1161, zmm1, 0x32), 0x82)
                            float temp0_1168[0x4] = _mm_shuffle_ps(temp0_1157, zmm1, 0x31)
                            float temp0_1169[0x4] = _mm_shuffle_ps(temp0_1167, temp0_1167, 0x55)
                            float temp0_1171[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_1161, zmm1, 0x10), temp0_1168, 0x88)
                            float var_288_1[0x4] = temp0_1167
                            float temp0_1172[0x4] = _mm_mul_ps(temp0_1169, temp0_1142)
                            float temp0_1174[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_1157, temp0_1161, 0x12), zmm1, 0xe8)
                            float temp0_1176[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1167, temp0_1167, 0xaa), temp0_1144)
                            zmm11[0].q = var_948_1 u>> 0x40
                            float temp0_1177[0x4] = _mm_shuffle_ps(var_948_1, zmm11, 0xc4)
                            float temp0_1178[0x4] = _mm_shuffle_ps(temp0_1167, temp0_1167, 0)
                            float temp0_1180[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1167, temp0_1167, 0xff), temp0_1146)
                            float var_278_1[0x4] = temp0_1171
                            float var_268_1[0x4] = temp0_1174
                            float var_258_1[0x4] = temp0_1177
                            float temp0_1182[0x4] =
                                _mm_add_ps(temp0_1172, _mm_mul_ps(temp0_1178, temp0_1139))
                            float temp0_1184[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1171, temp0_1171, 0), temp0_1139)
                            float temp0_1185[0x4] = _mm_add_ps(temp0_1182, temp0_1176)
                            float temp0_1187[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1171, temp0_1171, 0xaa), temp0_1144)
                            float temp0_1188[0x4] = _mm_add_ps(temp0_1185, temp0_1180)
                            float temp0_1190[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1171, temp0_1171, 0x55), temp0_1142)
                            float temp0_1191[0x4] = _mm_shuffle_ps(temp0_1171, temp0_1171, 0xff)
                            float var_708[0x4] = temp0_1188
                            float temp0_1192[0x4] = _mm_shuffle_ps(temp0_1174, temp0_1174, 0x55)
                            float temp0_1193[0x4] = _mm_add_ps(temp0_1190, temp0_1184)
                            float temp0_1194[0x4] = _mm_mul_ps(temp0_1192, temp0_1142)
                            float temp0_1195[0x4] = _mm_mul_ps(temp0_1191, temp0_1146)
                            float temp0_1196[0x4] = _mm_shuffle_ps(temp0_1174, temp0_1174, 0)
                            float temp0_1197[0x4] = _mm_add_ps(temp0_1193, temp0_1187)
                            float temp0_1198[0x4] = _mm_mul_ps(temp0_1196, temp0_1139)
                            float temp0_1200[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1174, temp0_1174, 0xaa), temp0_1144)
                            float temp0_1201[0x4] = _mm_add_ps(temp0_1197, temp0_1195)
                            float temp0_1202[0x4] = _mm_shuffle_ps(temp0_1174, temp0_1174, 0xff)
                            float temp0_1203[0x4] = _mm_add_ps(temp0_1194, temp0_1198)
                            float temp0_1204[0x4] = _mm_mul_ps(temp0_1202, temp0_1146)
                            float temp0_1205[0x4] = _mm_shuffle_ps(temp0_1177, temp0_1177, 0)
                            float temp0_1206[0x4] = _mm_shuffle_ps(temp0_1177, temp0_1177, 0x55)
                            float temp0_1207[0x4] = _mm_add_ps(temp0_1203, temp0_1200)
                            float temp0_1208[0x4] = _mm_mul_ps(temp0_1206, temp0_1142)
                            float temp0_1210[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1177, temp0_1177, 0xaa), temp0_1144)
                            float temp0_1211[0x4] = _mm_mul_ps(temp0_1205, temp0_1139)
                            float temp0_1212[0x4] = _mm_add_ps(temp0_1207, temp0_1204)
                            float temp0_1214[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_1177, temp0_1177, 0xff), temp0_1146)
                            int96_t var_6d8_1 = _mm_add_ps(
                                _mm_add_ps(_mm_add_ps(temp0_1208, temp0_1211), temp0_1210), 
                                temp0_1214)[0].12
                            zmm11, zmm13, zmm14 = sub_1407740e0(&var_708, 0x322bcc77)
                            float zmm6_6[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_738_3, zmm13, 2), 
                                data_143f396a0 ^ zmm11) ^ data_143f396a0
                            void var_5f8
                            int64_t* rax_27 = sub_14173efa0(&var_708, &var_5f8, 1)
                            float zmm1_11 = zmm6_6[0]
                            float zmm0_14 = zmm6_6[0]
                            zmm6_6[0] = zmm6_6[0] f* *rax_27
                            zmm1_11 = zmm1_11 f* *(rax_27 + 4)
                            zmm0_14 = zmm0_14 f* rax_27[1].d
                            var_708[0] = zmm6_6[0]
                            var_708[1] = zmm1_11
                            var_708[2] = zmm0_14
                            void var_5d4
                            float* rax_28 = sub_14173efa0(&var_708, &var_5d4, 2)
                            float temp0_1220[0x4] = _mm_shuffle_ps(zmm6_6, zmm6_6, 0x55)
                            zmm1_11 = temp0_1220[0] * *rax_28
                            float zmm0_15 = temp0_1220[0] * rax_28[1]
                            temp0_1220[0] = temp0_1220[0] * rax_28[2]
                            temp0_1201[0] = zmm1_11
                            temp0_1201[1] = zmm0_15
                            temp0_1201[2] = temp0_1220[0]
                            void var_5e0
                            int64_t* rax_29 = sub_14173efa0(&var_708, &var_5e0, 3)
                            float temp0_1221[0x4] = _mm_shuffle_ps(zmm6_6, zmm6_6, 0xaa)
                            zmm1_11 = temp0_1221[0] f* *rax_29
                            float zmm0_16 = temp0_1221[0] f* *(rax_29 + 4)
                            temp0_1221[0] = temp0_1221[0] f* rax_29[1].d
                            temp0_1212[0] = zmm1_11
                            temp0_1212[1] = zmm0_16
                            temp0_1212[2] = temp0_1221[0]
                            uint32_t var_658[0x4]
                            sub_14077e4a0(&var_658, &var_708)
                            zmm5_1 = var_658
                            zmm6 = data_143f39690
                            float temp0_1222[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                            float temp0_1224[0x4] =
                                _mm_add_ps(temp0_1222, _mm_shuffle_ps(temp0_1222, temp0_1222, 0x4e))
                            float temp0_1226[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(temp0_1224, temp0_1224, 0x39), temp0_1224)
                            float temp0_1227[0x4] = _mm_rsqrt_ps(temp0_1226)
                            float temp0_1228[0x4] = _mm_mul_ps(temp0_1226, zmm6)
                            float temp0_1233[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6, 
                                        _mm_mul_ps(_mm_mul_ps(temp0_1227, temp0_1227), 
                                            temp0_1228)), 
                                    temp0_1227), 
                                temp0_1227)
                            float temp0_1236[0x4] = _mm_sub_ps(zmm6, 
                                _mm_mul_ps(_mm_mul_ps(temp0_1233, temp0_1233), temp0_1228))
                            float temp0_1237[0x4] = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)
                            zmm2 = var_6d8_1:4.d
                            zmm8 = var_6d8_1.d
                            zmm0_1 = var_6d8_1:8.d
                            zmm6 = _mm_and_ps(
                                _mm_mul_ps(
                                    _mm_add_ps(_mm_mul_ps(temp0_1236, temp0_1233), temp0_1233), 
                                    zmm5_1) ^ data_143f39680, 
                                _mm_cmpeq_ps(temp0_1237, temp0_1226, 2)) ^ data_143f39680
                            var_658 = zmm6
                            goto label_141e26547
                        
                        zmm5_1 = *rax_26
                        zmm7 = rax_26[1]
                        zmm12 = data_143f39670
                        zmm13 = data_143f39660
                        zmm15 = data_143f39650
                        float temp0_1245[0x4] = _mm_mul_ps(
                            _mm_shuffle_ps(var_958_1, var_958_1, 0x1b), 
                            _mm_shuffle_ps(zmm5_1, zmm5_1, 0))
                        float temp0_1246[0x4] = _mm_shuffle_ps(var_958_1, var_958_1, 0x4e)
                        float temp0_1247[0x4] = _mm_shuffle_ps(var_958_1, var_958_1, 0xb1)
                        float temp0_1248[0x4] = _mm_mul_ps(var_948_1, zmm10)
                        float temp0_1249[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
                        float temp0_1250[0x4] = _mm_mul_ps(var_958_1, temp0_1249)
                        float temp0_1251[0x4] = _mm_mul_ps(temp0_1245, zmm12)
                        float temp0_1252[0x4] = _mm_mul_ps(var_938_1, zmm10)
                        float temp0_1253[0x4] = _mm_add_ps(temp0_1251, temp0_1250)
                        float temp0_1255[0x4] =
                            _mm_mul_ps(temp0_1246, _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55))
                        float temp0_1257[0x4] =
                            _mm_mul_ps(temp0_1247, _mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa))
                        float temp0_1258[0x4] = _mm_shuffle_ps(temp0_1248, temp0_1248, 0xc9)
                        float temp0_1259[0x4] = _mm_mul_ps(temp0_1255, zmm13)
                        float temp0_1260[0x4] = _mm_mul_ps(temp0_1257, zmm15)
                        var_938_1 = temp0_1252
                        float temp0_1261[0x4] = _mm_add_ps(temp0_1253, temp0_1259)
                        float temp0_1262[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
                        float temp0_1263[0x4] = _mm_mul_ps(temp0_1258, temp0_1262)
                        float temp0_1264[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
                        var_958_1 = _mm_add_ps(temp0_1261, temp0_1260)
                        float temp0_1268[0x4] = _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(temp0_1248, temp0_1248, 0xd2), temp0_1264), 
                            temp0_1263)
                        float temp0_1269[0x4] = _mm_add_ps(temp0_1268, temp0_1268)
                        float temp0_1270[0x4] = _mm_shuffle_ps(temp0_1269, temp0_1269, 0xd2)
                        float temp0_1271[0x4] = _mm_shuffle_ps(temp0_1269, temp0_1269, 0xc9)
                        float temp0_1272[0x4] = _mm_mul_ps(temp0_1270, temp0_1264)
                        float temp0_1273[0x4] = _mm_mul_ps(temp0_1271, temp0_1262)
                        float temp0_1274[0x4] = _mm_mul_ps(temp0_1269, temp0_1249)
                        zmm8 = _mm_add_ps(
                            _mm_add_ps(_mm_sub_ps(temp0_1272, temp0_1273), 
                                _mm_add_ps(temp0_1274, temp0_1248)), 
                            zmm7)
                        float var_948_4[0x4] = zmm8
                        rcx_10 = var_9a8_1
                    else
                        zmm8 = var_948_1
                    label_141e28431:
                        zmm12 = data_143f39670
                        zmm13 = data_143f39660
                        zmm15 = data_143f39650
                        rcx_10 = var_9a8_1
                else
                    char rax_15 = arg1[4].b
                    
                    if (rax_15 == 1)
                        float var_1b8[0x3][0x4]
                        float (* rax_16)[0x4] = sub_140ad7d70(arg6, &var_1b8, arg4)
                        float zmm1_1[0x4] = data_143f396b0
                        var_988_1.o = zmm1_1
                        float zmm8_1[0x4] = rax_16[2]
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_8e8_1, zmm8_1), zmm1_1, 1))
                                == 0)
                            float zmm5_2[0x4] = *rax_16
                            float temp0_174[0x4] = __mulps_xmmps_memps(zmm8_1, var_8f8_1)
                            float zmm7_1[0x4] = rax_16[1]
                            float temp0_175[0x4] = _mm_shuffle_ps(var_908_1, var_908_1, 0x1b)
                            float temp0_176[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0x55)
                            float temp0_178[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0), temp0_175)
                            float temp0_179[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
                            var_8e8_1 = _mm_mul_ps(var_8e8_1, zmm8_1)
                            float temp0_183[0x4] = _mm_add_ps(
                                __mulps_xmmps_memps(temp0_178, data_143f39670), 
                                _mm_mul_ps(temp0_179, var_908_1))
                            float temp0_185[0x4] =
                                _mm_mul_ps(temp0_176, _mm_shuffle_ps(var_908_1, var_908_1, 0x4e))
                            float temp0_188[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0xaa), 
                                _mm_shuffle_ps(var_908_1, var_908_1, 0xb1))
                            float temp0_189[0x4] = __mulps_xmmps_memps(temp0_185, data_143f39660)
                            float temp0_190[0x4] = _mm_shuffle_ps(temp0_174, temp0_174, 0xd2)
                            float temp0_191[0x4] = __mulps_xmmps_memps(temp0_188, data_143f39650)
                            float temp0_193[0x4] =
                                _mm_add_ps(_mm_add_ps(temp0_183, temp0_189), temp0_191)
                            float temp0_194[0x4] = _mm_shuffle_ps(temp0_174, temp0_174, 0xc9)
                            var_908_1 = temp0_193
                            float temp0_195[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xd2)
                            float temp0_196[0x4] = _mm_mul_ps(temp0_194, temp0_195)
                            float temp0_197[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xc9)
                            float temp0_199[0x4] =
                                _mm_sub_ps(_mm_mul_ps(temp0_190, temp0_197), temp0_196)
                            float temp0_200[0x4] = _mm_add_ps(temp0_199, temp0_199)
                            float temp0_201[0x4] = _mm_mul_ps(temp0_179, temp0_200)
                            float temp0_203[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_200, temp0_200, 0xd2), temp0_197)
                            float temp0_204[0x4] = _mm_shuffle_ps(temp0_200, temp0_200, 0xc9)
                            float temp0_205[0x4] = _mm_add_ps(temp0_201, temp0_174)
                            var_8f8_1 = _mm_add_ps(
                                _mm_add_ps(_mm_sub_ps(temp0_203, _mm_mul_ps(temp0_204, temp0_195)), 
                                    temp0_205), 
                                zmm7_1)
                        else
                            zmm1_1 = *rax_16
                            float zmm11_1[0x4] = data_143f395f0
                            float temp0_45[0x4] = _mm_add_ps(zmm1_1, zmm1_1)
                            float temp0_46[0x4] = _mm_shuffle_ps(zmm8_1, zmm8_1, 0xc9)
                            float temp0_47[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 4)
                            float temp0_48[0x4] = _mm_shuffle_ps(zmm1_1, zmm1_1, 0xff)
                            _mm_mul_ps(zmm8_1, var_8e8_1)
                            float temp0_50[0x4] = _mm_mul_ps(zmm1_1, temp0_45)
                            float temp0_52[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_45, temp0_45, 0x29), temp0_47)
                            float temp0_54[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_45, temp0_45, 0x12), temp0_48)
                            float temp0_57[0x4] = _mm_add_ps(
                                _mm_shuffle_ps(temp0_50, temp0_50, 0x1a), 
                                _mm_shuffle_ps(temp0_50, temp0_50, 1))
                            float temp0_58[0x4] = _mm_add_ps(temp0_54, temp0_52)
                            float temp0_59[0x4] = _mm_sub_ps(temp0_52, temp0_54)
                            float temp0_60[0x4] = _mm_sub_ps(zmm11_1, temp0_57)
                            float temp0_61[0x4] = _mm_mul_ps(temp0_58, zmm8_1)
                            float temp0_62[0x4] = _mm_mul_ps(temp0_46, temp0_59)
                            float temp0_63[0x4] = _mm_mul_ps(temp0_60, zmm8_1)
                            float temp0_64[0x4] = _mm_shuffle_ps(var_908_1, var_908_1, 4)
                            zmm1_1 = __andps_xmmxud_memxud(temp0_63, data_143f39600)
                            float temp0_66[0x4] = _mm_shuffle_ps(temp0_62, zmm1_1, 0x32)
                            float temp0_68[0x4] =
                                _mm_shuffle_ps(_mm_shuffle_ps(temp0_61, zmm1_1, 0), temp0_66, 0x82)
                            float temp0_69[0x4] = _mm_shuffle_ps(temp0_61, zmm1_1, 0x31)
                            float temp0_71[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_62, zmm1_1, 0x10), temp0_69, 0x88)
                            float temp0_73[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_61, temp0_62, 0x12), zmm1_1, 0xe8)
                            float temp0_74[0x4] = _mm_add_ps(var_908_1, var_908_1)
                            float var_5c8_1[0x4] = temp0_68
                            float var_5b8_1[0x4] = temp0_71
                            float var_5a8_1[0x4] = temp0_73
                            float zmm9_1[0x4] = rax_16[1]
                            zmm11_1[0].q = zmm9_1 u>> 0x40
                            float temp0_75[0x4] = _mm_shuffle_ps(zmm9_1, zmm11_1, 0xc4)
                            float temp0_76[0x4] = _mm_mul_ps(temp0_74, var_908_1)
                            float temp0_78[0x4] =
                                _mm_mul_ps(temp0_64, _mm_shuffle_ps(temp0_74, temp0_74, 0x29))
                            float temp0_79[0x4] = _mm_shuffle_ps(temp0_74, temp0_74, 0x12)
                            float temp0_81[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(var_908_1, var_908_1, 0xff), temp0_79)
                            float temp0_84[0x4] = _mm_add_ps(
                                _mm_shuffle_ps(temp0_76, temp0_76, 0x1a), 
                                _mm_shuffle_ps(temp0_76, temp0_76, 1))
                            float temp0_85[0x4] = _mm_shuffle_ps(var_8e8_1, var_8e8_1, 0xc9)
                            float var_598_1[0x4] = temp0_75
                            float temp0_86[0x4] = _mm_add_ps(temp0_81, temp0_78)
                            float temp0_87[0x4] = _mm_sub_ps(temp0_78, temp0_81)
                            float temp0_88[0x4] = _mm_sub_ps(zmm11_1, temp0_84)
                            float temp0_89[0x4] = _mm_mul_ps(temp0_86, var_8e8_1)
                            float temp0_90[0x4] = _mm_mul_ps(temp0_85, temp0_87)
                            zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(temp0_88, var_8e8_1), 
                                data_143f39600)
                            float temp0_95[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_89, zmm1_1, 0), 
                                _mm_shuffle_ps(temp0_90, zmm1_1, 0x32), 0x82)
                            float temp0_96[0x4] = _mm_shuffle_ps(temp0_89, zmm1_1, 0x31)
                            float temp0_97[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0x55)
                            float temp0_99[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_90, zmm1_1, 0x10), temp0_96, 0x88)
                            float var_588_1[0x4] = temp0_95
                            float temp0_100[0x4] = _mm_mul_ps(temp0_97, temp0_71)
                            float temp0_102[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_89, temp0_90, 0x12), zmm1_1, 0xe8)
                            float temp0_104[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xaa), temp0_73)
                            zmm11_1[0].q = var_8f8_1 u>> 0x40
                            float temp0_105[0x4] = _mm_shuffle_ps(var_8f8_1, zmm11_1, 0xc4)
                            float temp0_106[0x4] = _mm_shuffle_ps(temp0_95, temp0_95, 0)
                            float temp0_108[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_95, temp0_95, 0xff), temp0_75)
                            float var_578_1[0x4] = temp0_99
                            float var_558_1[0x4] = temp0_105
                            float var_568_1[0x4] = temp0_102
                            float temp0_110[0x4] =
                                _mm_add_ps(temp0_100, _mm_mul_ps(temp0_106, temp0_68))
                            float temp0_112[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_99, temp0_99, 0), temp0_68)
                            float temp0_113[0x4] = _mm_add_ps(temp0_110, temp0_104)
                            float temp0_115[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_99, temp0_99, 0xaa), temp0_73)
                            float temp0_116[0x4] = _mm_add_ps(temp0_113, temp0_108)
                            float temp0_118[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_99, temp0_99, 0x55), temp0_71)
                            float temp0_119[0x4] = _mm_shuffle_ps(temp0_99, temp0_99, 0xff)
                            float var_888[0x4] = temp0_116
                            float temp0_120[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0x55)
                            float temp0_121[0x4] = _mm_add_ps(temp0_118, temp0_112)
                            float temp0_122[0x4] = _mm_mul_ps(temp0_120, temp0_71)
                            float temp0_123[0x4] = _mm_mul_ps(temp0_119, temp0_75)
                            float temp0_124[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0)
                            float temp0_125[0x4] = _mm_add_ps(temp0_121, temp0_115)
                            float temp0_126[0x4] = _mm_mul_ps(temp0_124, temp0_68)
                            float temp0_128[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_102, temp0_102, 0xaa), temp0_73)
                            float temp0_129[0x4] = _mm_add_ps(temp0_125, temp0_123)
                            float temp0_130[0x4] = _mm_shuffle_ps(temp0_102, temp0_102, 0xff)
                            float temp0_131[0x4] = _mm_add_ps(temp0_122, temp0_126)
                            float temp0_132[0x4] = _mm_mul_ps(temp0_130, temp0_75)
                            float temp0_133[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0)
                            int96_t var_878_1 = temp0_129[0].12
                            float temp0_134[0x4] = _mm_shuffle_ps(temp0_105, temp0_105, 0x55)
                            float temp0_135[0x4] = _mm_add_ps(temp0_131, temp0_128)
                            float temp0_136[0x4] = _mm_mul_ps(temp0_134, temp0_71)
                            float temp0_138[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_105, temp0_105, 0xaa), temp0_73)
                            float temp0_139[0x4] = _mm_mul_ps(temp0_133, temp0_68)
                            float temp0_140[0x4] = _mm_add_ps(temp0_135, temp0_132)
                            float temp0_142[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_105, temp0_105, 0xff), temp0_75)
                            float temp0_143[0x4] = _mm_add_ps(temp0_136, temp0_139)
                            int96_t var_868_1 = temp0_140[0].12
                            int96_t var_858_1 =
                                _mm_add_ps(_mm_add_ps(temp0_143, temp0_138), temp0_142)[0].12
                            int128_t zmm11_2
                            float zmm13_2[0x4]
                            zmm11_2, zmm13_2 = sub_1407740e0(&var_888, 0x322bcc77)
                            float zmm2_2[0x4] = var_888[0]
                            float zmm1_2 = var_888[1]
                            float zmm4_3[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_988_1.o, zmm13_2, 2), 
                                data_143f396a0 ^ zmm11_2)
                            uint32_t zmm0_3[0x4] = var_888[2]
                            zmm4_3 ^= data_143f396a0
                            zmm2_2[0] = zmm2_2[0] * zmm4_3[0]
                            zmm1_2 = zmm1_2 * zmm4_3[0]
                            zmm0_3[0] = zmm0_3[0] f* zmm4_3[0]
                            var_888[0] = zmm2_2[0]
                            float temp0_148[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                            var_888[1] = zmm1_2
                            zmm1_2 = var_878_1:4.d * temp0_148[0]
                            var_888[2] = zmm0_3[0]
                            zmm0_3 = var_878_1:8.d
                            zmm0_3[0] = zmm0_3[0] f* temp0_148[0]
                            float zmm3_2 = var_878_1.d * temp0_148[0]
                            zmm2_2 = var_868_1.d
                            float temp0_149[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
                            var_878_1:4.d = zmm1_2
                            var_878_1:8.d = zmm0_3[0]
                            zmm0_3 = var_868_1:8.d
                            zmm1_2 = var_868_1:4.d * temp0_149[0]
                            zmm0_3[0] = zmm0_3[0] f* temp0_149[0]
                            zmm2_2[0] = zmm2_2[0] * temp0_149[0]
                            var_868_1:4.d = zmm1_2
                            var_868_1:8.d = zmm0_3[0]
                            var_878_1.d = zmm3_2
                            var_868_1.d = zmm2_2[0]
                            uint32_t var_6b8[0x4]
                            sub_14077e4a0(&var_6b8, &var_888)
                            uint32_t zmm5_3[0x4] = var_6b8
                            float zmm6_2[0x4] = data_143f39690
                            uint32_t zmm1_3[0x4] = _mm_mul_ps(zmm5_3, zmm5_3)
                            var_8e8_1 = zmm13_2
                            zmm1_3 = _mm_add_ps(zmm1_3, _mm_shuffle_ps(zmm1_3, zmm1_3, 0x4e))
                            uint32_t zmm4_4[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(zmm1_3, zmm1_3, 0x39), zmm1_3)
                            zmm1_3 = _mm_rsqrt_ps(zmm4_4)
                            float temp0_156[0x4] = _mm_mul_ps(zmm4_4, zmm6_2)
                            float temp0_161[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6_2, 
                                        _mm_mul_ps(_mm_mul_ps(zmm1_3, zmm1_3), temp0_156)), 
                                    zmm1_3), 
                                zmm1_3)
                            float temp0_164[0x4] = _mm_sub_ps(zmm6_2, 
                                _mm_mul_ps(_mm_mul_ps(temp0_161, temp0_161), temp0_156))
                            uint32_t zmm0_4[0x4] =
                                _mm_cmpeq_ps(_mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), zmm4_4, 2)
                            zmm6_2 = _mm_and_ps(
                                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_164, temp0_161), temp0_161), 
                                    zmm5_3) ^ data_143f39680, 
                                zmm0_4) ^ data_143f39680
                            var_6b8 = zmm6_2
                            var_908_1 = zmm6_2
                            var_8f8_1 = _mm_unpacklo_ps(
                                _mm_unpacklo_ps(var_858_1.d, var_858_1:8.d[0].q), 
                                _mm_unpacklo_ps(var_858_1:4.d, 0)[0].q)
                        
                        float var_188[0x3][0x4]
                        float (* rax_17)[0x4]
                        rax_17, zmm14 = sub_140ad7d70(arg7, &var_188, arg4)
                        zmm1 = data_143f396b0
                        var_988_1.o = zmm1
                        zmm9 = rax_17[2]
                        
                        if (_mm_movemask_ps(_mm_cmpeq_ps(_mm_min_ps(var_938_1, zmm9), zmm1, 1))
                                != 0)
                            zmm3 = *rax_17
                            zmm11 = data_143f395f0
                            float temp0_213[0x4] = _mm_add_ps(zmm3, zmm3)
                            float temp0_214[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
                            float temp0_215[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                            float temp0_216[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                            _mm_mul_ps(zmm9, var_938_1)
                            float temp0_218[0x4] = _mm_mul_ps(zmm3, temp0_213)
                            float temp0_220[0x4] =
                                _mm_mul_ps(temp0_215, _mm_shuffle_ps(temp0_213, temp0_213, 0x29))
                            float temp0_221[0x4] = _mm_shuffle_ps(temp0_213, temp0_213, 0x12)
                            float temp0_222[0x4] = _mm_shuffle_ps(temp0_218, temp0_218, 0x1a)
                            float temp0_223[0x4] = _mm_mul_ps(temp0_216, temp0_221)
                            float temp0_225[0x4] =
                                _mm_add_ps(temp0_222, _mm_shuffle_ps(temp0_218, temp0_218, 1))
                            float temp0_226[0x4] = _mm_add_ps(temp0_223, temp0_220)
                            float temp0_227[0x4] = _mm_sub_ps(temp0_220, temp0_223)
                            float temp0_228[0x4] = _mm_sub_ps(zmm11, temp0_225)
                            float temp0_229[0x4] = _mm_mul_ps(temp0_226, zmm9)
                            float temp0_230[0x4] = _mm_mul_ps(temp0_214, temp0_227)
                            zmm1 =
                                __andps_xmmxud_memxud(_mm_mul_ps(temp0_228, zmm9), data_143f39600)
                            float temp0_233[0x4] = _mm_shuffle_ps(temp0_230, zmm1, 0x32)
                            float temp0_235[0x4] =
                                _mm_shuffle_ps(_mm_shuffle_ps(temp0_229, zmm1, 0), temp0_233, 0x82)
                            float temp0_236[0x4] = _mm_shuffle_ps(temp0_229, zmm1, 0x31)
                            float temp0_238[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_230, zmm1, 0x10), temp0_236, 0x88)
                            float temp0_240[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_229, temp0_230, 0x12), zmm1, 0xe8)
                            float var_548_1[0x4] = temp0_235
                            float temp0_241[0x4] = _mm_add_ps(var_958_1, var_958_1)
                            float var_538_1[0x4] = temp0_238
                            float var_528_1[0x4] = temp0_240
                            zmm9 = rax_17[1]
                            zmm11[0].q = zmm9 u>> 0x40
                            float temp0_242[0x4] = _mm_shuffle_ps(zmm9, zmm11, 0xc4)
                            float temp0_243[0x4] = _mm_shuffle_ps(var_958_1, var_958_1, 4)
                            float temp0_244[0x4] = _mm_mul_ps(temp0_241, var_958_1)
                            float temp0_246[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_241, temp0_241, 0x29), temp0_243)
                            float temp0_247[0x4] = _mm_shuffle_ps(var_958_1, var_958_1, 0xff)
                            float temp0_248[0x4] = _mm_shuffle_ps(var_938_1, var_938_1, 0xc9)
                            float temp0_250[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_241, temp0_241, 0x12), temp0_247)
                            float var_518_1[0x4] = temp0_242
                            float temp0_251[0x4] = _mm_add_ps(temp0_250, temp0_246)
                            float temp0_252[0x4] = _mm_sub_ps(temp0_246, temp0_250)
                            float temp0_253[0x4] = _mm_mul_ps(temp0_251, var_938_1)
                            float temp0_256[0x4] = _mm_add_ps(
                                _mm_shuffle_ps(temp0_244, temp0_244, 0x1a), 
                                _mm_shuffle_ps(temp0_244, temp0_244, 1))
                            float temp0_257[0x4] = _mm_mul_ps(temp0_248, temp0_252)
                            zmm1 = __andps_xmmxud_memxud(
                                __mulps_xmmps_memps(_mm_sub_ps(zmm11, temp0_256), var_938_1), 
                                data_143f39600)
                            float temp0_263[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_253, zmm1, 0), 
                                _mm_shuffle_ps(temp0_257, zmm1, 0x32), 0x82)
                            float temp0_264[0x4] = _mm_shuffle_ps(temp0_253, zmm1, 0x31)
                            float temp0_265[0x4] = _mm_shuffle_ps(temp0_263, temp0_263, 0x55)
                            float temp0_267[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_257, zmm1, 0x10), temp0_264, 0x88)
                            float var_508_1[0x4] = temp0_263
                            float temp0_268[0x4] = _mm_mul_ps(temp0_265, temp0_238)
                            float temp0_270[0x4] = _mm_shuffle_ps(
                                _mm_shuffle_ps(temp0_253, temp0_257, 0x12), zmm1, 0xe8)
                            float temp0_272[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_263, temp0_263, 0xaa), temp0_240)
                            zmm11[0].q = var_948_1 u>> 0x40
                            float temp0_273[0x4] = _mm_shuffle_ps(var_948_1, zmm11, 0xc4)
                            float temp0_274[0x4] = _mm_shuffle_ps(temp0_263, temp0_263, 0)
                            float temp0_276[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_263, temp0_263, 0xff), temp0_242)
                            float var_4f8_1[0x4] = temp0_267
                            float var_4e8_1[0x4] = temp0_270
                            float var_4d8_1[0x4] = temp0_273
                            float temp0_278[0x4] =
                                _mm_add_ps(temp0_268, _mm_mul_ps(temp0_274, temp0_235))
                            float temp0_280[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_267, temp0_267, 0), temp0_235)
                            float temp0_281[0x4] = _mm_add_ps(temp0_278, temp0_272)
                            float temp0_283[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_267, temp0_267, 0xaa), temp0_240)
                            float temp0_284[0x4] = _mm_add_ps(temp0_281, temp0_276)
                            float temp0_286[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_267, temp0_267, 0x55), temp0_238)
                            float temp0_287[0x4] = _mm_shuffle_ps(temp0_267, temp0_267, 0xff)
                            float var_8c8[0x4] = temp0_284
                            float temp0_288[0x4] = _mm_shuffle_ps(temp0_270, temp0_270, 0x55)
                            float temp0_289[0x4] = _mm_add_ps(temp0_286, temp0_280)
                            float temp0_290[0x4] = _mm_mul_ps(temp0_288, temp0_238)
                            float temp0_291[0x4] = _mm_mul_ps(temp0_287, temp0_242)
                            float temp0_292[0x4] = _mm_shuffle_ps(temp0_270, temp0_270, 0)
                            float temp0_293[0x4] = _mm_add_ps(temp0_289, temp0_283)
                            float temp0_294[0x4] = _mm_mul_ps(temp0_292, temp0_235)
                            float temp0_296[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_270, temp0_270, 0xaa), temp0_240)
                            float temp0_297[0x4] = _mm_add_ps(temp0_293, temp0_291)
                            float temp0_298[0x4] = _mm_shuffle_ps(temp0_270, temp0_270, 0xff)
                            float temp0_299[0x4] = _mm_add_ps(temp0_290, temp0_294)
                            float temp0_300[0x4] = _mm_mul_ps(temp0_298, temp0_242)
                            float temp0_301[0x4] = _mm_shuffle_ps(temp0_273, temp0_273, 0)
                            int96_t var_8b8_1 = temp0_297[0].12
                            float temp0_302[0x4] = _mm_shuffle_ps(temp0_273, temp0_273, 0x55)
                            float temp0_303[0x4] = _mm_add_ps(temp0_299, temp0_296)
                            float temp0_304[0x4] = _mm_mul_ps(temp0_302, temp0_238)
                            float temp0_306[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_273, temp0_273, 0xaa), temp0_240)
                            float temp0_307[0x4] = _mm_mul_ps(temp0_301, temp0_235)
                            float temp0_308[0x4] = _mm_add_ps(temp0_303, temp0_300)
                            float temp0_310[0x4] =
                                _mm_mul_ps(_mm_shuffle_ps(temp0_273, temp0_273, 0xff), temp0_242)
                            float temp0_311[0x4] = _mm_add_ps(temp0_304, temp0_307)
                            int96_t var_8a8_1 = temp0_308[0].12
                            int96_t var_898_1 =
                                _mm_add_ps(_mm_add_ps(temp0_311, temp0_306), temp0_310)[0].12
                            zmm11, zmm13, zmm14 = sub_1407740e0(&var_8c8, 0x322bcc77)
                            float zmm2_4[0x4] = var_8c8[0]
                            float zmm1_4 = var_8c8[1]
                            float zmm4_5[0x4] = _mm_and_ps(_mm_cmpeq_ps(var_988_1.o, zmm13, 2), 
                                data_143f396a0 ^ zmm11)
                            uint32_t zmm0_5[0x4] = var_8c8[2]
                            zmm4_5 ^= data_143f396a0
                            zmm2_4[0] = zmm2_4[0] * zmm4_5[0]
                            zmm1_4 = zmm1_4 * zmm4_5[0]
                            zmm0_5[0] = zmm0_5[0] f* zmm4_5[0]
                            var_8c8[0] = zmm2_4[0]
                            float temp0_316[0x4] = _mm_shuffle_ps(zmm4_5, zmm4_5, 0x55)
                            var_8c8[1] = zmm1_4
                            zmm1_4 = var_8b8_1:4.d * temp0_316[0]
                            var_8c8[2] = zmm0_5[0]
                            zmm0_5 = var_8b8_1:8.d
                            zmm0_5[0] = zmm0_5[0] f* temp0_316[0]
                            float zmm3_4 = var_8b8_1.d * temp0_316[0]
                            zmm2_4 = var_8a8_1.d
                            float temp0_317[0x4] = _mm_shuffle_ps(zmm4_5, zmm4_5, 0xaa)
                            var_8b8_1:4.d = zmm1_4
                            var_8b8_1:8.d = zmm0_5[0]
                            zmm0_5 = var_8a8_1:8.d
                            zmm1_4 = var_8a8_1:4.d * temp0_317[0]
                            zmm0_5[0] = zmm0_5[0] f* temp0_317[0]
                            zmm2_4[0] = zmm2_4[0] * temp0_317[0]
                            var_8a8_1:4.d = zmm1_4
                            var_8a8_1:8.d = zmm0_5[0]
                            var_8b8_1.d = zmm3_4
                            var_8a8_1.d = zmm2_4[0]
                            uint32_t var_6a8[0x4]
                            sub_14077e4a0(&var_6a8, &var_8c8)
                            zmm5_1 = var_6a8
                            zmm6 = data_143f39690
                            zmm8 = var_898_1.d
                            float temp0_318[0x4] = _mm_mul_ps(zmm5_1, zmm5_1)
                            float temp0_320[0x4] =
                                _mm_add_ps(temp0_318, _mm_shuffle_ps(temp0_318, temp0_318, 0x4e))
                            float temp0_322[0x4] =
                                _mm_add_ps(_mm_shuffle_ps(temp0_320, temp0_320, 0x39), temp0_320)
                            float temp0_323[0x4] = _mm_rsqrt_ps(temp0_322)
                            float temp0_324[0x4] = _mm_mul_ps(temp0_322, zmm6)
                            float temp0_329[0x4] = _mm_add_ps(
                                _mm_mul_ps(
                                    _mm_sub_ps(zmm6, 
                                        _mm_mul_ps(_mm_mul_ps(temp0_323, temp0_323), temp0_324)), 
                                    temp0_323), 
                                temp0_323)
                            float temp0_332[0x4] = _mm_sub_ps(zmm6, 
                                _mm_mul_ps(_mm_mul_ps(temp0_329, temp0_329), temp0_324))
                            float temp0_334[0x4] = _mm_cmpeq_ps(
                                _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0), temp0_322, 2)
                            zmm2 = var_898_1:4.d
                            zmm0_1 = var_898_1:8.d
                            zmm6 = _mm_and_ps(
                                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_332, temp0_329), temp0_329), 
                                    zmm5_1) ^ data_143f39680, 
                                temp0_334) ^ data_143f39680
                            var_6a8 = zmm6
                        label_141e26547:
                            zmm8 = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm8, zmm0_1[0].q), 
                                _mm_unpacklo_ps(zmm2, zx.o(0)[0].q)[0].q)
                            float var_948_2[0x4] = zmm8
                            var_958_1 = zmm6
                            var_938_1 = zmm13
                            goto label_141e28431
                        
                        zmm4_1 = *rax_17
                        zmm6 = rax_17[1]
                        zmm12 = data_143f39670
                        zmm13 = data_143f39660
                        zmm15 = data_143f39650
                        float temp0_342[0x4] = _mm_shuffle_ps(var_958_1, var_958_1, 0x1b)
                        float temp0_344[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), temp0_342)
                        float temp0_345[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
                        float temp0_346[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
                        float temp0_347[0x4] = _mm_mul_ps(var_958_1, temp0_346)
                        float temp0_348[0x4] = _mm_mul_ps(temp0_344, zmm12)
                        float temp0_349[0x4] = _mm_mul_ps(var_938_1, zmm9)
                        float temp0_350[0x4] = _mm_add_ps(temp0_348, temp0_347)
                        float temp0_352[0x4] =
                            _mm_mul_ps(temp0_345, _mm_shuffle_ps(var_958_1, var_958_1, 0x4e))
                        float temp0_355[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), 
                            _mm_shuffle_ps(var_958_1, var_958_1, 0xb1))
                        float temp0_356[0x4] = _mm_mul_ps(temp0_352, zmm13)
                        var_938_1 = temp0_349
                        float temp0_357[0x4] = _mm_mul_ps(temp0_355, zmm15)
                        float temp0_358[0x4] = _mm_add_ps(temp0_350, temp0_356)
                        float temp0_359[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xd2)
                        float temp0_360[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xc9)
                        var_958_1 = _mm_add_ps(temp0_358, temp0_357)
                        float temp0_362[0x4] = _mm_mul_ps(var_948_1, zmm9)
                        float temp0_363[0x4] = _mm_shuffle_ps(temp0_362, temp0_362, 0xd2)
                        float temp0_364[0x4] = _mm_shuffle_ps(temp0_362, temp0_362, 0xc9)
                        float temp0_367[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_363, temp0_360), 
                            _mm_mul_ps(temp0_364, temp0_359))
                        float temp0_368[0x4] = _mm_add_ps(temp0_367, temp0_367)
                        float temp0_369[0x4] = _mm_shuffle_ps(temp0_368, temp0_368, 0xd2)
                        float temp0_370[0x4] = _mm_shuffle_ps(temp0_368, temp0_368, 0xc9)
                        float temp0_371[0x4] = _mm_mul_ps(temp0_369, temp0_360)
                        float temp0_372[0x4] = _mm_mul_ps(temp0_370, temp0_359)
                        float temp0_373[0x4] = _mm_mul_ps(temp0_368, temp0_346)
                        zmm8 = _mm_add_ps(
                            _mm_add_ps(_mm_sub_ps(temp0_371, temp0_372), 
                                _mm_add_ps(temp0_373, temp0_362)), 
                            zmm6)
                        float var_948_3[0x4] = zmm8
                        rcx_10 = var_9a8_1
                    else if (rax_15 == 2)
                        zmm2 = *arg6
                        float temp0_378[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0)
                        float temp0_379[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
                        float temp0_380[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
                        float temp0_381[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0xb1)
                        float temp0_382[0x4] = _mm_mul_ps(temp0_379, temp0_378)
                        float temp0_383[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xff)
                        float temp0_384[0x4] = _mm_mul_ps(zmm2, temp0_383)
                        float temp0_385[0x4] = _mm_mul_ps(temp0_382, zmm12)
                        float temp0_386[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0x55)
                        float temp0_387[0x4] = _mm_mul_ps(temp0_380, temp0_386)
                        float temp0_388[0x4] = _mm_add_ps(temp0_385, temp0_384)
                        float temp0_389[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
                        float temp0_390[0x4] = _mm_mul_ps(temp0_381, temp0_389)
                        float temp0_391[0x4] = _mm_mul_ps(temp0_387, zmm13)
                        float temp0_392[0x4] = _mm_mul_ps(temp0_390, zmm15)
                        float temp0_393[0x4] = _mm_add_ps(temp0_388, temp0_391)
                        float temp0_394[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x4e)
                        float temp0_395[0x4] = _mm_add_ps(temp0_393, temp0_392)
                        float temp0_398[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0x1b), 
                            _mm_shuffle_ps(temp0_395, temp0_395, 0))
                        float temp0_400[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_395, temp0_395, 0xff), zmm10)
                        float temp0_401[0x4] = _mm_mul_ps(temp0_398, zmm12)
                        float temp0_402[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xb1)
                        float temp0_403[0x4] = _mm_add_ps(temp0_401, temp0_400)
                        float temp0_405[0x4] =
                            _mm_mul_ps(temp0_394, _mm_shuffle_ps(temp0_395, temp0_395, 0x55))
                        float temp0_407[0x4] =
                            _mm_mul_ps(temp0_402, _mm_shuffle_ps(temp0_395, temp0_395, 0xaa))
                        float temp0_408[0x4] = _mm_mul_ps(temp0_405, zmm13)
                        float temp0_409[0x4] = _mm_mul_ps(temp0_407, zmm15)
                        var_908_1 = _mm_add_ps(_mm_add_ps(temp0_403, temp0_408), temp0_409)
                        zmm2 = *arg7
                        float temp0_412[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x4e)
                        float temp0_413[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0x1b)
                        float temp0_414[0x4] = _mm_mul_ps(zmm2, temp0_383)
                        float temp0_416[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0xb1), temp0_389)
                        float temp0_417[0x4] = _mm_mul_ps(temp0_412, temp0_386)
                        float temp0_418[0x4] = _mm_mul_ps(temp0_413, temp0_378)
                        float temp0_419[0x4] = _mm_mul_ps(temp0_416, zmm15)
                        float temp0_420[0x4] = _mm_mul_ps(temp0_417, zmm13)
                        float temp0_423[0x4] = _mm_add_ps(
                            _mm_add_ps(_mm_mul_ps(temp0_418, zmm12), temp0_414), temp0_420)
                        float temp0_424[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0x4e)
                        float temp0_425[0x4] = _mm_add_ps(temp0_423, temp0_419)
                        float temp0_428[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm11, zmm11, 0x1b), 
                            _mm_shuffle_ps(temp0_425, temp0_425, 0))
                        float temp0_430[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_425, temp0_425, 0xff), zmm11)
                        float temp0_432[0x4] = _mm_add_ps(_mm_mul_ps(temp0_428, zmm12), temp0_430)
                        float temp0_435[0x4] = _mm_mul_ps(
                            _mm_mul_ps(temp0_424, _mm_shuffle_ps(temp0_425, temp0_425, 0x55)), 
                            zmm13)
                        float temp0_436[0x4] = _mm_shuffle_ps(zmm11, zmm11, 0xb1)
                        var_958_1 = _mm_add_ps(_mm_add_ps(temp0_432, temp0_435), 
                            _mm_mul_ps(
                                _mm_mul_ps(temp0_436, _mm_shuffle_ps(temp0_425, temp0_425, 0xaa)), 
                                zmm15))
                zmm10 = zx.o(0)
                zmm5_1 = data_143dbb1f8
                var_8f8_1[0] = var_8f8_1[0] - var_638_1[0]
                zmm6 = data_143dbb1fc
                zmm7 = data_143dbb200
                float temp0_1279[0x4] = _mm_shuffle_ps(var_638_1, var_638_1, 0x55)
                float temp0_1280[0x4] = _mm_shuffle_ps(var_8f8_1, var_8f8_1, 0x55)
                temp0_1280[0] = temp0_1280[0] - temp0_1279[0]
                float temp0_1281[0x4] = _mm_shuffle_ps(var_8f8_1, var_8f8_1, 0xaa)
                float var_928_1 = zmm5_1[0]
                float temp0_1282[0x4] = _mm_shuffle_ps(var_638_1, var_638_1, 0xaa)
                temp0_1281[0] = temp0_1281[0] - temp0_1282[0]
                float var_924_1 = zmm6[0]
                float var_920_1 = zmm7[0]
                var_8f8_1[0] = var_8f8_1[0] * var_8f8_1[0]
                temp0_1280[0] = temp0_1280[0] * temp0_1280[0]
                temp0_1281[0] = temp0_1281[0] * temp0_1281[0]
                temp0_1280[0] = temp0_1280[0] + var_8f8_1[0]
                temp0_1280[0] = temp0_1280[0] + temp0_1281[0]
                int64_t* rsi_5 = rsi_1 * 0x3c + *arg1
                float temp0_1283[0x4] = _mm_sqrt_ss(temp0_1280[0], temp0_1280[0])
                
                if (not(temp0_1283[0] <= 9.99999975e-05f))
                    zmm0_1 = 0x3f800000
                    zmm5_1 = var_8f8_1
                    zmm0_1[0] = 1f / temp0_1283[0]
                    zmm6 = temp0_1280
                    zmm7 = temp0_1281
                    zmm5_1[0] = zmm5_1[0] * zmm0_1[0]
                    zmm6[0] = zmm6[0] * zmm0_1[0]
                    zmm7[0] = zmm7[0] * zmm0_1[0]
                    var_928_1 = zmm5_1[0]
                    float var_924_2 = zmm6[0]
                    var_920_1 = zmm7[0]
                
                if (rcx_10 == 1)
                    zmm3 = (*arg6)[0x22]
                    
                    if (not(zmm3[0] <= 9.99999975e-05f) && not(temp0_1283[0] <= 9.99999975e-05f))
                        float temp0_1284[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0x55)
                        zmm10 = temp0_1283
                        float temp0_1285[0x4] = _mm_shuffle_ps(var_638_1, var_638_1, 0x55)
                        temp0_1284[0] = temp0_1284[0] - temp0_1285[0]
                        zmm8[0] = zmm8[0] - var_638_1[0]
                        float temp0_1286[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xaa)
                        float temp0_1287[0x4] = _mm_shuffle_ps(var_638_1, var_638_1, 0xaa)
                        temp0_1286[0] = temp0_1286[0] - temp0_1287[0]
                        temp0_1284[0] = temp0_1284[0] * zmm6[0]
                        zmm8[0] = zmm8[0] * zmm5_1[0]
                        temp0_1286[0] = temp0_1286[0] * zmm7[0]
                        temp0_1284[0] = temp0_1284[0] + zmm8[0]
                        temp0_1284[0] = temp0_1284[0] + temp0_1286[0]
                        zmm10[0] = zmm10[0] - temp0_1284[0]
                        zmm10[0] = zmm10[0] / zmm3[0]
                
                zmm4_1 = zmm14 ^ 0x80000000
                *rsi_5 = var_928_1.q
                zmm9 = zx.o(0)
                float temp0_1288[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
                zmm0_1 = _mm_shuffle_ps(zmm14, zmm14, 0x55) ^ 0x80000000
                float temp0_1290[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
                temp0_1288[0] = zmm0_1[0]
                rsi_5[1].d = var_920_1
                float temp0_1291[0x4] = _mm_shuffle_ps(temp0_1288, temp0_1288, 0xc6)
                temp0_1291[0] = (temp0_1290 ^ 0x80000000)[0]
                *(rsi_5 + 0x24) = temp0_1283[0]
                float temp0_1292[0x4] = _mm_shuffle_ps(temp0_1291, temp0_1291, 0x27)
                rsi_5[5].d = zmm10[0]
                zmm10 = zx.o(0)
                float temp0_1293[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xff)
                float temp0_1294[0x4] = _mm_shuffle_ps(var_908_1, var_908_1, 0)
                temp0_1292[0] = temp0_1293[0]
                float temp0_1295[0x4] = _mm_shuffle_ps(temp0_1292, temp0_1292, 0x39)
                var_988_1.o = temp0_1295
                float temp0_1297[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_1295, temp0_1295, 0x1b), temp0_1294)
                float temp0_1299[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(var_908_1, var_908_1, 0xff), temp0_1295)
                float temp0_1300[0x4] = _mm_shuffle_ps(temp0_1295, temp0_1295, 0x4e)
                float temp0_1301[0x4] = _mm_mul_ps(temp0_1297, zmm12)
                float temp0_1302[0x4] = _mm_shuffle_ps(temp0_1295, temp0_1295, 0xb1)
                float temp0_1303[0x4] = _mm_add_ps(temp0_1301, temp0_1299)
                float temp0_1305[0x4] =
                    _mm_mul_ps(temp0_1300, _mm_shuffle_ps(var_908_1, var_908_1, 0x55))
                zmm0_1 = 0xbf800000
                float temp0_1307[0x4] =
                    _mm_mul_ps(temp0_1302, _mm_shuffle_ps(var_908_1, var_908_1, 0xaa))
                float temp0_1308[0x4] = _mm_mul_ps(temp0_1305, zmm13)
                float temp0_1309[0x4] = _mm_mul_ps(temp0_1307, zmm15)
                float temp0_1311[0x4] = _mm_add_ps(_mm_add_ps(temp0_1303, temp0_1308), temp0_1309)
                var_988_1.o = temp0_1311
                float temp0_1312[0x4] = _mm_shuffle_ps(temp0_1311, temp0_1311, 0xff)
                
                if (not(temp0_1312[0] < -1f))
                    zmm0_1 = __minss_xmmss_memss(temp0_1312[0], 0x3f800000)
                
                zmm6 = acosf(zmm0_1[0])
                temp0_1312[0] = temp0_1312[0] * temp0_1312[0]
                zmm6[0] = zmm6[0] + zmm6[0]
                zmm0_1 = 0x3f800000
                zmm0_1[0] = 1f - temp0_1312[0]
                float temp0_1315[0x4] = _mm_sqrt_ss(0, _mm_max_ss(zmm0_1[0], zmm9[0])[0])
                
                if (temp0_1315[0] < 9.99999975e-05f)
                    zmm3 = 0x3f800000
                    zmm4_1 = zx.o(0)
                    zmm2 = zx.o(0)
                else
                    zmm3 = var_988_1.d
                    zmm0_1 = 0x3f800000
                    zmm4_1 = var_988_1:4.d
                    int32_t var_980
                    zmm2 = var_980
                    zmm0_1[0] = 1f / temp0_1315[0]
                    zmm3[0] = zmm3[0] * zmm0_1[0]
                    zmm4_1[0] = zmm4_1[0] * zmm0_1[0]
                    zmm2[0] = zmm2[0] * zmm0_1[0]
                
                float var_718_1 = zmm2[0]
                float temp0_1316[0x4] = _mm_unpacklo_ps(zmm3, zmm4_1[0].q)
                int64_t var_720_1 = temp0_1316.q
                int64_t var_918 = temp0_1316.q
                float var_910_1 = var_718_1
                
                if (not(zmm6[0] <= 3.14159274f))
                    do
                        zmm6[0] = zmm6[0] + -6.28318548f
                    while (zmm6[0] > 3.14159274f)
                
                if (not(zmm6[0] >= -3.14159274f))
                    do
                        zmm6[0] = zmm6[0] + 6.28318548f
                    while (zmm6[0] < -3.14159274f)
                
                if (not(zmm6[0] >= zmm9[0]))
                    var_918.d = (zmm3 ^ 0x80000000)[0]
                    var_918:4.d = (zmm4_1 ^ 0x80000000)[0]
                    zmm6 ^= 0x80000000
                    var_910_1 = (zmm2 ^ 0x80000000)[0]
                
                char rcx_52 = var_9a8_1
                
                if (rcx_52 == 1 && not(9.99999975e-05f >= (*arg6)[0x22])
                        && not(zmm6[0] <= 9.99999975e-05f))
                    zmm4_1 = zmm14 ^ 0x80000000
                    float temp0_1317[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xe1)
                    zmm0_1 = _mm_shuffle_ps(zmm14, zmm14, 0x55) ^ 0x80000000
                    float temp0_1319[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xaa)
                    temp0_1317[0] = zmm0_1[0]
                    float temp0_1320[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xff)
                    float temp0_1321[0x4] = _mm_shuffle_ps(temp0_1317, temp0_1317, 0xc6)
                    temp0_1321[0] = (temp0_1319 ^ 0x80000000)[0]
                    float temp0_1322[0x4] = _mm_shuffle_ps(var_958_1, var_958_1, 0)
                    float temp0_1323[0x4] = _mm_shuffle_ps(temp0_1321, temp0_1321, 0x27)
                    temp0_1323[0] = temp0_1320[0]
                    float temp0_1324[0x4] = _mm_shuffle_ps(temp0_1323, temp0_1323, 0x39)
                    var_988_1.o = temp0_1324
                    float temp0_1326[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_1324, temp0_1324, 0x1b), temp0_1322)
                    float temp0_1327[0x4] = _mm_shuffle_ps(temp0_1324, temp0_1324, 0x4e)
                    float temp0_1329[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(var_958_1, var_958_1, 0xff), temp0_1324)
                    float temp0_1330[0x4] = _mm_mul_ps(temp0_1326, zmm12)
                    float temp0_1331[0x4] = _mm_shuffle_ps(temp0_1324, temp0_1324, 0xb1)
                    float temp0_1332[0x4] = _mm_add_ps(temp0_1330, temp0_1329)
                    float temp0_1334[0x4] =
                        _mm_mul_ps(temp0_1327, _mm_shuffle_ps(var_958_1, var_958_1, 0x55))
                    float temp0_1336[0x4] =
                        _mm_mul_ps(temp0_1331, _mm_shuffle_ps(var_958_1, var_958_1, 0xaa))
                    float temp0_1337[0x4] = _mm_mul_ps(temp0_1334, zmm13)
                    float temp0_1338[0x4] = _mm_mul_ps(temp0_1336, zmm15)
                    float var_628[0x4] = _mm_add_ps(_mm_add_ps(temp0_1332, temp0_1337), temp0_1338)
                    float zmm0_17
                    zmm0_17, zmm6 = sub_140ad8820(&var_628, &var_918)
                    zmm0_1 = sub_141e32230(zmm6[0] - zmm0_17)
                    zmm12 = data_143f39670
                    zmm10 = zmm0_1
                    zmm10[0] = zmm10[0] / (*arg6)[0x22]
                    rcx_52 = var_9a8_1
                    zmm13 = data_143f39660
                    zmm15 = data_143f39650
                
                *(rsi_5 + 0xc) = var_918
                *(rsi_5 + 0x14) = var_910_1
                float temp0_1341[0x4] = _mm_shuffle_ps(var_618_1, var_618_1, 0x55)
                *(rsi_5 + 0x2c) = zmm6[0]
                rsi_5[6].d = zmm10[0]
                zmm6 = data_143dbb1f8
                zmm7 = data_143dbb1fc
                var_8e8_1[0] = var_8e8_1[0] - var_618_1[0]
                zmm8 = data_143dbb200
                float temp0_1342[0x4] = _mm_shuffle_ps(var_8e8_1, var_8e8_1, 0x55)
                temp0_1342[0] = temp0_1342[0] - temp0_1341[0]
                float temp0_1343[0x4] = _mm_shuffle_ps(var_8e8_1, var_8e8_1, 0xaa)
                var_968.d = zmm6[0]
                float temp0_1344[0x4] = _mm_shuffle_ps(var_618_1, var_618_1, 0xaa)
                temp0_1343[0] = temp0_1343[0] - temp0_1344[0]
                var_968:4.d = zmm7[0]
                var_968:8.d = zmm8[0]
                var_8e8_1[0] = var_8e8_1[0] * var_8e8_1[0]
                temp0_1342[0] = temp0_1342[0] * temp0_1342[0]
                temp0_1343[0] = temp0_1343[0] * temp0_1343[0]
                temp0_1342[0] = temp0_1342[0] + var_8e8_1[0]
                zmm0_1 = 0x38d1b717
                temp0_1342[0] = temp0_1342[0] + temp0_1343[0]
                float temp0_1345[0x4] = _mm_sqrt_ss(0, temp0_1342[0])
                
                if (not(temp0_1345[0] <= 9.99999975e-05f))
                    zmm0_1 = 0x3f800000
                    zmm6 = var_8e8_1
                    zmm0_1[0] = 1f / temp0_1345[0]
                    zmm7 = temp0_1342
                    zmm8 = temp0_1343
                    zmm6[0] = zmm6[0] * zmm0_1[0]
                    zmm7[0] = zmm7[0] * zmm0_1[0]
                    zmm8[0] = zmm8[0] * zmm0_1[0]
                    zmm0_1 = 0x38d1b717
                    var_968.d = zmm6[0]
                    var_968:4.d = zmm7[0]
                    var_968:8.d = zmm8[0]
                
                if (rcx_52 == 1)
                    zmm3 = (*arg6)[0x22]
                    
                    if (not(zmm3[0] <= zmm0_1[0]) && not(temp0_1345[0] <= zmm0_1[0]))
                        float temp0_1346[0x4] = _mm_shuffle_ps(var_618_1, var_618_1, 0x55)
                        float temp0_1347[0x4] = _mm_shuffle_ps(var_938_1, var_938_1, 0x55)
                        zmm9 = temp0_1345
                        temp0_1347[0] = temp0_1347[0] - temp0_1346[0]
                        var_938_1[0] = var_938_1[0] - var_618_1[0]
                        float temp0_1348[0x4] = _mm_shuffle_ps(var_938_1, var_938_1, 0xaa)
                        float temp0_1349[0x4] = _mm_shuffle_ps(var_618_1, var_618_1, 0xaa)
                        temp0_1348[0] = temp0_1348[0] - temp0_1349[0]
                        temp0_1347[0] = temp0_1347[0] * zmm7[0]
                        var_938_1[0] = var_938_1[0] * zmm6[0]
                        temp0_1348[0] = temp0_1348[0] * zmm8[0]
                        temp0_1347[0] = temp0_1347[0] + var_938_1[0]
                        temp0_1347[0] = temp0_1347[0] + temp0_1348[0]
                        zmm9[0] = zmm9[0] - temp0_1347[0]
                        zmm9[0] = zmm9[0] / zmm3[0]
                
                rsi_5[3] = var_968.q
                rsi_5[4].d = var_968:8.d
                *(rsi_5 + 0x34) = temp0_1345[0]
                rsi_5[7].d = zmm9[0]
                zmm9 = var_608
        
        rbx_3 += 1
    while (rbx_3 != rdi_2)

void* rcx_54 = arg3[2]
int32_t r12_1

if (rcx_54 == 0 || arg3[1].d != zx.d(arg3[3].w))
    r12_1 = 0
else
    r12_1 = *(rcx_54 + 8)

int32_t rbx_4 = 0
arg1[3].d = 0

if (*(arg1 + 0x1c) != r12_1)
    sub_1405c5570(&arg1[2], r12_1)
    rbx_4 = arg1[3].d

int32_t rax_36 = rbx_4 + r12_1
arg1[3].d = rax_36

if (rax_36 s> *(arg1 + 0x1c))
    sub_1405a4d70(&arg1[2])

int32_t result = memset(arg1[2] + (sx.q(rbx_4) << 3), 0, sx.q(r12_1) << 3)

if (r12_1 != 0)
    int64_t* r13_2 = arg3[2]
    result = 0
    int64_t* r11_1 = arg6[6][0].q
    float* r10_1 = nullptr
    
    do
        uint64_t rdx_34 = zx.q(result.w)
        uint64_t r8_11 = zx.q(rdx_34.d)
        int16_t rcx_59
        
        if (rdx_34.d s>= r13_2[1].d)
            rcx_59 = -1
        else
            rcx_59 = *(*r13_2 + (rdx_34 << 1))
        
        uint32_t rax_39 = zx.d(rcx_59)
        uint32_t r9 = -1
        
        if (rax_39 != 0xffff)
            r9 = rax_39
        
        int16_t rcx_60
        
        if (rdx_34.d s>= r11_1[1].d)
            rcx_60 = -1
        else
            rcx_60 = *(*r11_1 + (r8_11 << 1))
        
        uint32_t rax_41 = zx.d(rcx_60)
        uint32_t rcx_61 = -1
        
        if (rax_41 != 0xffff)
            rcx_61 = rax_41
        
        if (r9 != 0xffffffff && rcx_61 != 0xffffffff)
            int64_t rbx_5 = arg6[5][0].q
            int64_t rdi_4 = arg1[2]
            int64_t r11_2 = sx.q(rcx_61)
            int64_t* rax_44 = arg7[6][0].q
            *(r10_1 + rdi_4) = *(rbx_5 + (r11_2 << 3)) f- *(*arg3 + (sx.q(r9) << 3))
            int16_t rcx_63
            
            if (rdx_34.d s>= rax_44[1].d)
                rcx_63 = -1
            else
                rcx_63 = *(*rax_44 + (r8_11 << 1))
            
            if (rcx_63 != 0xffff)
                zmm2 = (*arg6)[0x22]
                
                if (not(zmm2[0] <= 9.99999975e-05f))
                    *(r10_1 + rdi_4 + 4) = (*(rbx_5 + (r11_2 << 3)) f-
                        *(arg7[5][0].q i+ (zx.q(rcx_63) << 3))) / zmm2[0]
            
            r11_1 = arg6[6][0].q
        
        r10_1 = &r10_1[2]
        result = result_1 + 1
        result_1 = result
    while (result != r12_1)

__security_check_cookie(rax_1 ^ &var_9c8)
return result
