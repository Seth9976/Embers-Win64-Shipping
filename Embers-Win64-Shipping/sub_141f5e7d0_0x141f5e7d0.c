// 函数: sub_141f5e7d0
// 地址: 0x141f5e7d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm6[0x4]
float var_38[0x4] = zmm6
float zmm7[0x4]
float var_48[0x4] = zmm7
float zmm8[0x4]
float var_58[0x4] = zmm8
float zmm9[0x4]
float var_68[0x4] = zmm9
float zmm10[0x4]
float var_78[0x4] = zmm10
float zmm11[0x4]
float var_88[0x4] = zmm11
float zmm12[0x4]
float var_98[0x4] = zmm12
uint32_t zmm13[0x4]
uint32_t var_a8[0x4] = zmm13
float zmm14[0x4]
float var_b8[0x4] = zmm14
float zmm15[0x4]
float var_c8[0x4] = zmm15
int64_t r15 = sx.q(arg3)
void* rax = sub_140d3c6e0(arg1 + 0x438)
uint32_t var_608[0x4]
int32_t arg_8
float zmm1[0x4]
float zmm2[0x4]
float zmm3[0x4]
float zmm5[0x4]

if (rax != 0)
    if ((*(rax + 0x88) & 1) == 0 || r15.d s>= *(arg1 + 0x4b8))
        goto label_141f608b4
    
    int64_t r8 = sx.q(*(*(arg1 + 0x4b0) + (r15 << 2)))
    int64_t rcx_2
    
    if (r8.d != 0xffffffff)
        rcx_2 = sx.q(*(rax + 0x494))
    
    if (r8.d == 0xffffffff || r8.d s>= *(rax + rcx_2 * 0x10 + 0x458))
        zmm1 = data_143dbb0d0
        float var_418[0x4] = data_143dbb0c0
        float zmm0[0x4] = data_143dbb0e0
        float var_408_1[0x4] = zmm1
        int32_t var_3e8_1 = 0xffffffff
        sub_141f5d820(arg1 + 0x4c0, &arg_8, r15.d)
        int64_t rax_4 = sx.q(arg_8)
        void* rax_7
        
        if (rax_4.d == 0xffffffff)
            rax_7 = nullptr
        else
            rax_7 = rax_4 * 0x60 + *(arg1 + 0x4c0)
        
        float (* rdx_5)[0x4] = rax_7 + 0x10
        
        if (rax_7 == 0)
            rdx_5 = nullptr
        
        if (rdx_5 == 0)
            if (sub_141f64290(arg1, r15.d, &var_418) == 0)
                goto label_141f608b4
            
            int64_t rcx_17 = sx.q(*(rax + 0x494)) + 0x45
            zmm13 = data_143f3b870
            zmm15 = data_143f3b880
            zmm1 = zmm13
            zmm14 = zmm0
            zmm12 = zx.o(0)
            zmm10 = data_143f3b8b0
            zmm11 = data_143f3b8a0
            zmm1[0].q = zx.o(0) u>> 0x40
            float temp0_509[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
            zmm1 = _mm_and_ps(zmm13, zmm15)
            float (* rdx_11)[0x4] = sx.q(var_3e8_1) * 0x30 + *(rax + rcx_17 * 0x10)
            float var_448_1[0x4] = temp0_509
            int128_t var_438_1 = zx.o(0)
            float var_428_1[0x4] = zmm1
            zmm8 = rdx_11[2]
            float var_448_2[0x4]
            float var_438_2[0x4]
            float var_428_2[0x4]
            float zmm3_6[0x4]
            float zmm5_3[0x4]
            
            if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm14, zmm8), data_143f3b8f0, 
                    1)) == 0)
                zmm5_3 = *rdx_11
                float zmm2_6[0x4] = var_418
                zmm7 = rdx_11[1]
                float temp0_643[0x4] = _mm_shuffle_ps(zmm2_6, zmm2_6, 0x4e)
                float temp0_646[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_6, zmm2_6, 0x1b), 
                    _mm_shuffle_ps(zmm5_3, zmm5_3, 0))
                float temp0_647[0x4] = _mm_shuffle_ps(zmm2_6, zmm2_6, 0xb1)
                float temp0_648[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xff)
                float temp0_649[0x4] = _mm_mul_ps(zmm2_6, temp0_648)
                float temp0_650[0x4] = _mm_mul_ps(temp0_646, zmm10)
                float temp0_651[0x4] = _mm_mul_ps(var_408_1, zmm8)
                float temp0_652[0x4] = _mm_mul_ps(zmm14, zmm8)
                float temp0_653[0x4] = _mm_add_ps(temp0_650, temp0_649)
                float temp0_655[0x4] = _mm_mul_ps(temp0_643, _mm_shuffle_ps(zmm5_3, zmm5_3, 0x55))
                float temp0_657[0x4] = _mm_mul_ps(temp0_647, _mm_shuffle_ps(zmm5_3, zmm5_3, 0xaa))
                float temp0_658[0x4] = _mm_mul_ps(temp0_655, zmm11)
                float temp0_659[0x4] = _mm_shuffle_ps(temp0_651, temp0_651, 0xc9)
                float temp0_660[0x4] = __mulps_xmmps_memps(temp0_657, data_143f3b890)
                var_428_2 = temp0_652
                zmm14 = 0x322bcc77
                float temp0_662[0x4] = _mm_add_ps(_mm_add_ps(temp0_653, temp0_658), temp0_660)
                float temp0_663[0x4] = _mm_shuffle_ps(temp0_651, temp0_651, 0xd2)
                var_448_2 = temp0_662
                float temp0_664[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xd2)
                float temp0_665[0x4] = _mm_mul_ps(temp0_659, temp0_664)
                float temp0_666[0x4] = _mm_shuffle_ps(zmm5_3, zmm5_3, 0xc9)
                float temp0_668[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_663, temp0_666), temp0_665)
                float temp0_669[0x4] = _mm_add_ps(temp0_668, temp0_668)
                float temp0_670[0x4] = _mm_mul_ps(temp0_648, temp0_669)
                float temp0_672[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_669, temp0_669, 0xd2), temp0_666)
                float temp0_673[0x4] = _mm_shuffle_ps(temp0_669, temp0_669, 0xc9)
                float temp0_674[0x4] = _mm_add_ps(temp0_670, temp0_651)
                var_438_2 = _mm_add_ps(
                    _mm_add_ps(_mm_sub_ps(temp0_672, _mm_mul_ps(temp0_673, temp0_664)), temp0_674), 
                    zmm7)
            else
                zmm1 = *rdx_11
                float temp0_514[0x4] = _mm_shuffle_ps(zmm8, zmm8, 0xc9)
                float temp0_515[0x4] = _mm_add_ps(zmm1, zmm1)
                float temp0_516[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                _mm_mul_ps(zmm14, zmm8)
                float temp0_518[0x4] = _mm_mul_ps(temp0_515, zmm1)
                float temp0_520[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_515, temp0_515, 0x29), temp0_516)
                float temp0_521[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                float temp0_522[0x4] = _mm_shuffle_ps(temp0_518, temp0_518, 0x1a)
                float temp0_524[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_515, temp0_515, 0x12), temp0_521)
                float temp0_526[0x4] =
                    _mm_add_ps(temp0_522, _mm_shuffle_ps(temp0_518, temp0_518, 1))
                float temp0_527[0x4] = _mm_add_ps(temp0_524, temp0_520)
                float temp0_528[0x4] = _mm_sub_ps(temp0_520, temp0_524)
                zmm3_6 = var_418
                float temp0_529[0x4] = _mm_sub_ps(zmm13, temp0_526)
                float temp0_530[0x4] = _mm_mul_ps(temp0_527, zmm8)
                float temp0_531[0x4] = _mm_mul_ps(temp0_514, temp0_528)
                float temp0_532[0x4] = _mm_mul_ps(temp0_529, zmm8)
                float temp0_533[0x4] = _mm_shuffle_ps(zmm3_6, zmm3_6, 4)
                zmm1 = _mm_and_ps(temp0_532, zmm15)
                float temp0_535[0x4] = _mm_shuffle_ps(temp0_531, zmm1, 0x32)
                float temp0_537[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_530, zmm1, 0), temp0_535, 0x82)
                float temp0_538[0x4] = _mm_shuffle_ps(temp0_530, zmm1, 0x31)
                float temp0_540[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_531, zmm1, 0x10), temp0_538, 0x88)
                zmm0 = zmm13
                float temp0_542[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_530, temp0_531, 0x12), zmm1, 0xe8)
                float temp0_543[0x4] = _mm_add_ps(zmm3_6, zmm3_6)
                float var_248_1[0x4] = temp0_537
                float temp0_544[0x4] = _mm_shuffle_ps(zmm3_6, zmm3_6, 0xff)
                float var_238_1[0x4] = temp0_540
                float var_228_1[0x4] = temp0_542
                zmm8 = rdx_11[1]
                float temp0_545[0x4] = _mm_mul_ps(zmm3_6, temp0_543)
                zmm0[0].q = zmm8 u>> 0x40
                float temp0_546[0x4] = _mm_shuffle_ps(zmm8, zmm0, 0xc4)
                float temp0_548[0x4] =
                    _mm_mul_ps(temp0_533, _mm_shuffle_ps(temp0_543, temp0_543, 0x29))
                float temp0_550[0x4] =
                    _mm_mul_ps(temp0_544, _mm_shuffle_ps(temp0_543, temp0_543, 0x12))
                float temp0_553[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_545, temp0_545, 0x1a), 
                    _mm_shuffle_ps(temp0_545, temp0_545, 1))
                float temp0_554[0x4] = _mm_shuffle_ps(zmm14, zmm14, 0xc9)
                float var_218_1[0x4] = temp0_546
                float temp0_555[0x4] = _mm_add_ps(temp0_550, temp0_548)
                float temp0_556[0x4] = _mm_sub_ps(temp0_548, temp0_550)
                float temp0_557[0x4] = _mm_sub_ps(zmm13, temp0_553)
                float temp0_558[0x4] = _mm_mul_ps(temp0_555, zmm14)
                float temp0_559[0x4] = _mm_mul_ps(temp0_554, temp0_556)
                zmm1 = _mm_and_ps(_mm_mul_ps(temp0_557, zmm14), zmm15)
                float temp0_564[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_558, zmm1, 0), 
                    _mm_shuffle_ps(temp0_559, zmm1, 0x32), 0x82)
                float temp0_565[0x4] = _mm_shuffle_ps(temp0_558, zmm1, 0x31)
                float temp0_566[0x4] = _mm_shuffle_ps(temp0_564, temp0_564, 0x55)
                float temp0_568[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_559, zmm1, 0x10), temp0_565, 0x88)
                float var_208_1[0x4] = temp0_564
                float temp0_570[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_564, temp0_564, 0), temp0_537)
                float temp0_571[0x4] = _mm_mul_ps(temp0_566, temp0_540)
                float temp0_573[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_558, temp0_559, 0x12), zmm1, 0xe8)
                float temp0_574[0x4] = _mm_shuffle_ps(temp0_564, temp0_564, 0xaa)
                float temp0_575[0x4] = _mm_add_ps(temp0_571, temp0_570)
                float temp0_577[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_564, temp0_564, 0xff), temp0_546)
                float temp0_578[0x4] = _mm_mul_ps(temp0_574, temp0_542)
                float temp0_580[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_568, temp0_568, 0), temp0_537)
                float temp0_581[0x4] = _mm_add_ps(temp0_575, temp0_578)
                zmm13[0].q = var_408_1 u>> 0x40
                float temp0_582[0x4] = _mm_shuffle_ps(var_408_1, zmm13, 0xc4)
                float temp0_584[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_568, temp0_568, 0xaa), temp0_542)
                float temp0_585[0x4] = _mm_add_ps(temp0_581, temp0_577)
                float var_1f8_1[0x4] = temp0_568
                float var_1e8_1[0x4] = temp0_573
                float temp0_587[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_568, temp0_568, 0x55), temp0_540)
                float var_538[0x4] = temp0_585
                float temp0_589[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_573, temp0_573, 0x55), temp0_540)
                float temp0_590[0x4] = _mm_add_ps(temp0_587, temp0_580)
                float var_1d8_1[0x4] = temp0_582
                float temp0_591[0x4] = _mm_shuffle_ps(temp0_568, temp0_568, 0xff)
                float temp0_593[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_573, temp0_573, 0), temp0_537)
                float temp0_594[0x4] = _mm_add_ps(temp0_590, temp0_584)
                float temp0_595[0x4] = _mm_mul_ps(temp0_591, temp0_546)
                float temp0_596[0x4] = _mm_shuffle_ps(temp0_573, temp0_573, 0xaa)
                float temp0_597[0x4] = _mm_add_ps(temp0_589, temp0_593)
                float temp0_598[0x4] = _mm_mul_ps(temp0_596, temp0_542)
                float temp0_599[0x4] = _mm_add_ps(temp0_594, temp0_595)
                float temp0_601[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_582, temp0_582, 0), temp0_537)
                float temp0_602[0x4] = _mm_add_ps(temp0_597, temp0_598)
                float temp0_604[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_573, temp0_573, 0xff), temp0_546)
                int96_t var_528_1 = temp0_599[0].12
                float temp0_605[0x4] = _mm_shuffle_ps(temp0_582, temp0_582, 0x55)
                float temp0_606[0x4] = _mm_shuffle_ps(temp0_582, temp0_582, 0xaa)
                float temp0_607[0x4] = _mm_mul_ps(temp0_605, temp0_540)
                float temp0_608[0x4] = _mm_add_ps(temp0_602, temp0_604)
                float temp0_609[0x4] = _mm_mul_ps(temp0_606, temp0_542)
                float temp0_610[0x4] = _mm_shuffle_ps(temp0_582, temp0_582, 0xff)
                float temp0_611[0x4] = _mm_add_ps(temp0_607, temp0_601)
                float temp0_612[0x4] = _mm_mul_ps(temp0_610, temp0_546)
                int96_t var_518_1 = temp0_608[0].12
                int96_t var_508_1 = _mm_add_ps(_mm_add_ps(temp0_611, temp0_609), temp0_612)[0].12
                zmm11, zmm12, zmm14, zmm15 = sub_1407740e0(&var_538, 0x322bcc77)
                float zmm2_7[0x4] = var_538[0]
                float zmm1_6 = var_538[1]
                float zmm4_7[0x4] = _mm_and_ps(_mm_cmpeq_ps(data_143f3b8f0, zmm11, 2), 
                    data_143f3b8e0 ^ data_143f3b870)
                uint32_t zmm0_6[0x4] = var_538[2]
                zmm4_7 ^= data_143f3b8e0
                zmm2_7[0] = zmm2_7[0] * zmm4_7[0]
                zmm1_6 = zmm1_6 * zmm4_7[0]
                zmm0_6[0] = zmm0_6[0] f* zmm4_7[0]
                var_538[0] = zmm2_7[0]
                float temp0_617[0x4] = _mm_shuffle_ps(zmm4_7, zmm4_7, 0x55)
                var_538[1] = zmm1_6
                zmm1_6 = var_528_1:4.d * temp0_617[0]
                var_538[2] = zmm0_6[0]
                zmm0_6 = var_528_1:8.d
                zmm0_6[0] = zmm0_6[0] f* temp0_617[0]
                float zmm3_7 = var_528_1.d * temp0_617[0]
                zmm2_7 = var_518_1.d
                float temp0_618[0x4] = _mm_shuffle_ps(zmm4_7, zmm4_7, 0xaa)
                var_528_1:4.d = zmm1_6
                var_528_1:8.d = zmm0_6[0]
                zmm0_6 = var_518_1:8.d
                zmm1_6 = var_518_1:4.d * temp0_618[0]
                zmm0_6[0] = zmm0_6[0] f* temp0_618[0]
                zmm2_7[0] = zmm2_7[0] * temp0_618[0]
                var_518_1:4.d = zmm1_6
                var_518_1:8.d = zmm0_6[0]
                var_528_1.d = zmm3_7
                var_518_1.d = zmm2_7[0]
                sub_14077e4a0(&var_608, &var_538)
                zmm6 = var_608
                zmm5_3 = data_143f3b8d0
                float temp0_619[0x4] = _mm_mul_ps(zmm6, zmm6)
                arg_8 = 0x322bcc77
                var_428_2 = zmm11
                float temp0_621[0x4] =
                    _mm_add_ps(temp0_619, _mm_shuffle_ps(temp0_619, temp0_619, 0x4e))
                float temp0_623[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_621, temp0_621, 0x39), temp0_621)
                float temp0_624[0x4] = _mm_rsqrt_ps(temp0_623)
                float temp0_625[0x4] = _mm_mul_ps(temp0_623, zmm5_3)
                float temp0_630[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm5_3, 
                            _mm_mul_ps(_mm_mul_ps(temp0_624, temp0_624), temp0_625)), 
                        temp0_624), 
                    temp0_624)
                float temp0_633[0x4] =
                    _mm_sub_ps(zmm5_3, _mm_mul_ps(_mm_mul_ps(temp0_630, temp0_630), temp0_625))
                zmm0 = arg_8
                float temp0_635[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_623, 2)
                float temp0_637[0x4] = _mm_add_ps(_mm_mul_ps(temp0_633, temp0_630), temp0_630)
                float temp0_638[0x4] = _mm_unpacklo_ps(var_508_1:4.d, 0)
                zmm5_3 = _mm_and_ps(_mm_mul_ps(temp0_637, zmm6) ^ data_143f3b8c0, temp0_635)
                    ^ data_143f3b8c0
                float temp0_642[0x4] = _mm_unpacklo_ps(
                    _mm_unpacklo_ps(var_508_1.d, var_508_1:8.d[0].q), temp0_638[0].q)
                var_448_2 = zmm5_3
                zmm13 = data_143f3b870
                zmm10 = data_143f3b8b0
                zmm11 = data_143f3b8a0
                var_438_2 = temp0_642
            zmm13[0].q = zmm12 u>> 0x40
            *arg2 = _mm_shuffle_ps(zx.o(0), zmm13, 0xc4)
            arg2[1] = zmm12
            arg2[2] = _mm_and_ps(data_143f3b870, zmm15)
            zmm13 = var_428_2
            zmm9 = arg4[2]
            
            if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm13, zmm9), data_143f3b8f0, 
                    1)) == 0)
                zmm6 = *arg4
                zmm8 = arg4[1]
                float temp0_813[0x4] = _mm_shuffle_ps(var_448_2, var_448_2, 0x1b)
                float temp0_815[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), temp0_813)
                float temp0_816[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                float temp0_817[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                float temp0_818[0x4] = _mm_mul_ps(var_448_2, temp0_817)
                float temp0_819[0x4] = _mm_mul_ps(temp0_815, zmm10)
                float temp0_820[0x4] = _mm_mul_ps(zmm9, var_438_2)
                float temp0_821[0x4] = _mm_add_ps(temp0_819, temp0_818)
                float temp0_823[0x4] =
                    _mm_mul_ps(temp0_816, _mm_shuffle_ps(var_448_2, var_448_2, 0x4e))
                float temp0_826[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), 
                    _mm_shuffle_ps(var_448_2, var_448_2, 0xb1))
                float temp0_827[0x4] = _mm_mul_ps(temp0_823, zmm11)
                float temp0_828[0x4] = _mm_shuffle_ps(temp0_820, temp0_820, 0xd2)
                float temp0_829[0x4] = __mulps_xmmps_memps(temp0_826, data_143f3b890)
                float temp0_831[0x4] = _mm_add_ps(_mm_add_ps(temp0_821, temp0_827), temp0_829)
                float temp0_832[0x4] = _mm_shuffle_ps(temp0_820, temp0_820, 0xc9)
                *arg2 = temp0_831
                float temp0_833[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                float temp0_834[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                float temp0_835[0x4] = _mm_mul_ps(temp0_832, temp0_834)
                float temp0_837[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_828, temp0_833), temp0_835)
                float temp0_838[0x4] = _mm_add_ps(temp0_837, temp0_837)
                float temp0_839[0x4] = _mm_mul_ps(temp0_817, temp0_838)
                float temp0_840[0x4] = _mm_shuffle_ps(temp0_838, temp0_838, 0xc9)
                float temp0_842[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_838, temp0_838, 0xd2), temp0_833)
                float temp0_843[0x4] = _mm_mul_ps(temp0_840, temp0_834)
                float temp0_844[0x4] = _mm_add_ps(temp0_839, temp0_820)
                zmm1 = _mm_add_ps(_mm_sub_ps(temp0_842, temp0_843), temp0_844)
                goto label_141f6031b
            
            zmm3_6 = *arg4
            zmm6 = data_143f3b870
            float temp0_684[0x4] = _mm_add_ps(zmm3_6, zmm3_6)
            float temp0_685[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
            float temp0_686[0x4] = _mm_shuffle_ps(zmm3_6, zmm3_6, 4)
            float temp0_687[0x4] = _mm_shuffle_ps(zmm3_6, zmm3_6, 0xff)
            _mm_mul_ps(zmm13, zmm9)
            float temp0_689[0x4] = _mm_mul_ps(zmm3_6, temp0_684)
            float temp0_691[0x4] = _mm_mul_ps(temp0_686, _mm_shuffle_ps(temp0_684, temp0_684, 0x29))
            float temp0_693[0x4] = _mm_mul_ps(temp0_687, _mm_shuffle_ps(temp0_684, temp0_684, 0x12))
            float temp0_696[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_689, temp0_689, 0x1a), 
                _mm_shuffle_ps(temp0_689, temp0_689, 1))
            float temp0_697[0x4] = _mm_add_ps(temp0_693, temp0_691)
            float temp0_698[0x4] = _mm_sub_ps(temp0_691, temp0_693)
            float temp0_699[0x4] = _mm_sub_ps(zmm6, temp0_696)
            float temp0_700[0x4] = _mm_mul_ps(temp0_697, zmm9)
            float temp0_701[0x4] = _mm_mul_ps(temp0_685, temp0_698)
            float temp0_702[0x4] = _mm_mul_ps(temp0_699, zmm9)
            float temp0_703[0x4] = _mm_shuffle_ps(var_448_2, var_448_2, 4)
            zmm1 = _mm_and_ps(temp0_702, zmm15)
            float temp0_705[0x4] = _mm_shuffle_ps(temp0_701, zmm1, 0x32)
            float temp0_707[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_700, zmm1, 0), temp0_705, 0x82)
            float temp0_708[0x4] = _mm_shuffle_ps(temp0_700, zmm1, 0x31)
            float temp0_710[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_701, zmm1, 0x10), temp0_708, 0x88)
            float temp0_712[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_700, temp0_701, 0x12), zmm1, 0xe8)
            float temp0_713[0x4] = _mm_add_ps(var_448_2, var_448_2)
            float var_1c8_1[0x4] = temp0_707
            float temp0_714[0x4] = _mm_shuffle_ps(var_448_2, var_448_2, 0xff)
            float var_1b8_1[0x4] = temp0_710
            float var_1a8_1[0x4] = temp0_712
            zmm9 = arg4[1]
            float temp0_715[0x4] = _mm_mul_ps(var_448_2, temp0_713)
            zmm6[0].q = zmm9 u>> 0x40
            float temp0_716[0x4] = _mm_shuffle_ps(zmm9, zmm6, 0xc4)
            float temp0_718[0x4] = _mm_mul_ps(temp0_703, _mm_shuffle_ps(temp0_713, temp0_713, 0x29))
            float temp0_720[0x4] = _mm_mul_ps(temp0_714, _mm_shuffle_ps(temp0_713, temp0_713, 0x12))
            float temp0_723[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_715, temp0_715, 0x1a), 
                _mm_shuffle_ps(temp0_715, temp0_715, 1))
            float temp0_724[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
            float var_198_1[0x4] = temp0_716
            float temp0_725[0x4] = _mm_add_ps(temp0_720, temp0_718)
            float temp0_726[0x4] = _mm_sub_ps(temp0_718, temp0_720)
            float temp0_727[0x4] = _mm_sub_ps(zmm6, temp0_723)
            float temp0_728[0x4] = _mm_mul_ps(temp0_725, zmm13)
            float temp0_729[0x4] = _mm_mul_ps(temp0_724, temp0_726)
            zmm1 = _mm_and_ps(_mm_mul_ps(temp0_727, zmm13), zmm15)
            float temp0_734[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_728, zmm1, 0), 
                _mm_shuffle_ps(temp0_729, zmm1, 0x32), 0x82)
            float temp0_735[0x4] = _mm_shuffle_ps(temp0_728, zmm1, 0x31)
            float temp0_736[0x4] = _mm_shuffle_ps(temp0_734, temp0_734, 0x55)
            float var_188_1[0x4] = temp0_734
            float temp0_738[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_729, zmm1, 0x10), temp0_735, 0x88)
            float temp0_739[0x4] = _mm_shuffle_ps(temp0_734, temp0_734, 0)
            float temp0_740[0x4] = _mm_mul_ps(temp0_736, temp0_710)
            float temp0_741[0x4] = _mm_mul_ps(temp0_739, temp0_707)
            float temp0_743[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_728, temp0_729, 0x12), zmm1, 0xe8)
            float temp0_744[0x4] = _mm_shuffle_ps(temp0_734, temp0_734, 0xaa)
            float temp0_745[0x4] = _mm_add_ps(temp0_740, temp0_741)
            float temp0_747[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_734, temp0_734, 0xff), temp0_716)
            float temp0_748[0x4] = _mm_shuffle_ps(temp0_738, temp0_738, 0)
            float temp0_749[0x4] = _mm_mul_ps(temp0_744, temp0_712)
            float temp0_750[0x4] = _mm_mul_ps(temp0_748, temp0_707)
            zmm6[0].q = var_438_2 u>> 0x40
            float temp0_751[0x4] = _mm_add_ps(temp0_745, temp0_749)
            float temp0_752[0x4] = _mm_shuffle_ps(var_438_2, zmm6, 0xc4)
            float var_178_1[0x4] = temp0_738
            float temp0_754[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_738, temp0_738, 0xaa), temp0_712)
            float temp0_755[0x4] = _mm_add_ps(temp0_751, temp0_747)
            float var_168_1[0x4] = temp0_743
            float var_158_1[0x4] = temp0_752
            float temp0_757[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_738, temp0_738, 0x55), temp0_710)
            float var_4f8[0x4] = temp0_755
            float temp0_759[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_743, temp0_743, 0x55), temp0_710)
            float temp0_760[0x4] = _mm_add_ps(temp0_757, temp0_750)
            float temp0_762[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_738, temp0_738, 0xff), temp0_716)
            float temp0_764[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_743, temp0_743, 0), temp0_707)
            float temp0_765[0x4] = _mm_add_ps(temp0_760, temp0_754)
            float temp0_767[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_743, temp0_743, 0xaa), temp0_712)
            float temp0_768[0x4] = _mm_add_ps(temp0_759, temp0_764)
            float temp0_769[0x4] = _mm_shuffle_ps(temp0_743, temp0_743, 0xff)
            float temp0_770[0x4] = _mm_add_ps(temp0_765, temp0_762)
            float temp0_771[0x4] = _mm_mul_ps(temp0_769, temp0_716)
            float temp0_772[0x4] = _mm_shuffle_ps(temp0_752, temp0_752, 0)
            float temp0_773[0x4] = _mm_add_ps(temp0_768, temp0_767)
            float temp0_774[0x4] = _mm_mul_ps(temp0_772, temp0_707)
            int96_t var_4e8_1 = temp0_770[0].12
            float temp0_775[0x4] = _mm_shuffle_ps(temp0_752, temp0_752, 0x55)
            float temp0_776[0x4] = _mm_add_ps(temp0_773, temp0_771)
            float temp0_777[0x4] = _mm_mul_ps(temp0_775, temp0_710)
            int96_t var_4d8_1 = temp0_776[0].12
            float temp0_778[0x4] = _mm_add_ps(temp0_777, temp0_774)
            float temp0_780[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_752, temp0_752, 0xaa), temp0_712)
            float temp0_782[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_752, temp0_752, 0xff), temp0_716)
            int96_t var_4c8_1 = _mm_add_ps(_mm_add_ps(temp0_778, temp0_780), temp0_782)[0].12
            zmm12 = sub_1407740e0(&var_4f8, zmm14)
            float zmm2_8[0x4] = var_4f8[0]
            float zmm1_7 = var_4f8[1]
            float zmm4_8[0x4] =
                _mm_and_ps(_mm_cmpeq_ps(data_143f3b8f0, zmm12, 2), data_143f3b8e0 ^ data_143f3b870)
            uint32_t zmm0_7[0x4] = var_4f8[2]
            zmm4_8 ^= data_143f3b8e0
            zmm2_8[0] = zmm2_8[0] * zmm4_8[0]
            zmm1_7 = zmm1_7 * zmm4_8[0]
            zmm0_7[0] = zmm0_7[0] f* zmm4_8[0]
            var_4f8[0] = zmm2_8[0]
            float temp0_787[0x4] = _mm_shuffle_ps(zmm4_8, zmm4_8, 0x55)
            var_4f8[1] = zmm1_7
            zmm1_7 = var_4e8_1:4.d * temp0_787[0]
            var_4f8[2] = zmm0_7[0]
            zmm0_7 = var_4e8_1:8.d
            zmm0_7[0] = zmm0_7[0] f* temp0_787[0]
            float zmm3_8 = var_4e8_1.d * temp0_787[0]
            zmm2_8 = var_4d8_1.d
            float temp0_788[0x4] = _mm_shuffle_ps(zmm4_8, zmm4_8, 0xaa)
            var_4e8_1:4.d = zmm1_7
            var_4e8_1:8.d = zmm0_7[0]
            zmm0_7 = var_4d8_1:8.d
            zmm1_7 = var_4d8_1:4.d * temp0_788[0]
            zmm0_7[0] = zmm0_7[0] f* temp0_788[0]
            zmm2_8[0] = zmm2_8[0] * temp0_788[0]
            var_4d8_1:4.d = zmm1_7
            var_4d8_1:8.d = zmm0_7[0]
            var_4e8_1.d = zmm3_8
            var_4d8_1.d = zmm2_8[0]
            sub_14077e4a0(&var_608, &var_4f8)
            zmm6 = var_608
            float zmm5_4[0x4] = data_143f3b8d0
            float temp0_789[0x4] = _mm_mul_ps(zmm6, zmm6)
            arg_8 = 0x322bcc77
            float temp0_791[0x4] = _mm_add_ps(temp0_789, _mm_shuffle_ps(temp0_789, temp0_789, 0x4e))
            float temp0_793[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_791, temp0_791, 0x39), temp0_791)
            float temp0_794[0x4] = _mm_rsqrt_ps(temp0_793)
            float temp0_795[0x4] = _mm_mul_ps(temp0_793, zmm5_4)
            float temp0_800[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm5_4, _mm_mul_ps(_mm_mul_ps(temp0_794, temp0_794), temp0_795)), 
                    temp0_794), 
                temp0_794)
            float temp0_803[0x4] =
                _mm_sub_ps(zmm5_4, _mm_mul_ps(_mm_mul_ps(temp0_800, temp0_800), temp0_795))
            float zmm0_8[0x4] = arg_8
            float temp0_805[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_8, zmm0_8, 0), temp0_793, 2)
            zmm5_4 = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_803, temp0_800), temp0_800), zmm6)
                    ^ data_143f3b8c0, 
                temp0_805) ^ data_143f3b8c0
            arg2[2] = zmm12
            *arg2 = zmm5_4
            arg2[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_4c8_1.d, var_4c8_1:8.d[0].q), 
                _mm_unpacklo_ps(var_4c8_1:4.d, 0)[0].q)
        else
            int64_t rax_8 = sx.q(rdx_5[3][0])
            zmm12 = zx.o(0)
            zmm13 = data_143f3b870
            int64_t rcx_9 = sx.q(*(rax + 0x494)) + 0x45
            zmm14 = data_143f3b880
            zmm1 = zmm13
            zmm15 = data_143f3b8b0
            zmm11 = data_143f3b8a0
            zmm1[0].q = zx.o(0) u>> 0x40
            float temp0_171[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
            zmm1 = _mm_and_ps(zmm13, zmm14)
            float (* r8_4)[0x4] = rax_8 * 0x30 + *(rax + rcx_9 * 0x10)
            float var_478_1[0x4] = temp0_171
            float var_458_1[0x4] = zmm1
            int128_t var_468_1 = zx.o(0)
            zmm10 = rdx_5[2]
            zmm9 = r8_4[2]
            float var_478_2[0x4]
            float var_468_2[0x4]
            float var_458_2[0x4]
            
            if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm10, zmm9), data_143f3b8f0, 
                    1)) == 0)
                zmm6 = *r8_4
                zmm3 = *rdx_5
                zmm5 = rdx_5[1]
                zmm8 = r8_4[1]
                float temp0_305[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
                float temp0_307[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), temp0_305)
                float temp0_308[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                float temp0_309[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                float temp0_310[0x4] = _mm_mul_ps(zmm3, temp0_309)
                float temp0_311[0x4] = _mm_mul_ps(temp0_307, zmm15)
                float temp0_312[0x4] = _mm_mul_ps(zmm9, zmm5)
                float temp0_313[0x4] = _mm_mul_ps(zmm9, zmm10)
                float temp0_314[0x4] = _mm_add_ps(temp0_311, temp0_310)
                float temp0_316[0x4] = _mm_mul_ps(temp0_308, _mm_shuffle_ps(zmm3, zmm3, 0x4e))
                float temp0_319[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), _mm_shuffle_ps(zmm3, zmm3, 0xb1))
                float temp0_320[0x4] = _mm_mul_ps(temp0_316, zmm11)
                float temp0_321[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                float temp0_322[0x4] = __mulps_xmmps_memps(temp0_319, data_143f3b890)
                float temp0_323[0x4] = _mm_add_ps(temp0_314, temp0_320)
                float temp0_324[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                var_458_2 = temp0_313
                float temp0_325[0x4] = _mm_add_ps(temp0_323, temp0_322)
                float temp0_327[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_312, temp0_312, 0xc9), temp0_321)
                var_478_2 = temp0_325
                float temp0_330[0x4] = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_312, temp0_312, 0xd2), temp0_324), temp0_327)
                float temp0_331[0x4] = _mm_add_ps(temp0_330, temp0_330)
                float temp0_332[0x4] = _mm_mul_ps(temp0_309, temp0_331)
                float temp0_334[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_331, temp0_331, 0xd2), temp0_324)
                float temp0_335[0x4] = _mm_shuffle_ps(temp0_331, temp0_331, 0xc9)
                float temp0_336[0x4] = _mm_add_ps(temp0_332, temp0_312)
                var_468_2 = _mm_add_ps(
                    _mm_add_ps(_mm_sub_ps(temp0_334, _mm_mul_ps(temp0_335, temp0_321)), temp0_336), 
                    zmm8)
            else
                zmm3 = *r8_4
                _mm_mul_ps(zmm9, zmm10)
                float temp0_177[0x4] = _mm_add_ps(zmm3, zmm3)
                float temp0_178[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
                float temp0_179[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                float temp0_180[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
                float temp0_181[0x4] = _mm_mul_ps(zmm3, temp0_177)
                float temp0_183[0x4] =
                    _mm_mul_ps(temp0_178, _mm_shuffle_ps(temp0_177, temp0_177, 0x29))
                float temp0_184[0x4] = _mm_shuffle_ps(temp0_177, temp0_177, 0x12)
                float temp0_185[0x4] = _mm_shuffle_ps(temp0_181, temp0_181, 0x1a)
                float temp0_186[0x4] = _mm_mul_ps(temp0_179, temp0_184)
                float temp0_188[0x4] =
                    _mm_add_ps(temp0_185, _mm_shuffle_ps(temp0_181, temp0_181, 1))
                float temp0_189[0x4] = _mm_add_ps(temp0_186, temp0_183)
                float temp0_190[0x4] = _mm_sub_ps(temp0_183, temp0_186)
                float temp0_191[0x4] = _mm_sub_ps(zmm13, temp0_188)
                float temp0_192[0x4] = _mm_mul_ps(temp0_189, zmm9)
                float temp0_193[0x4] = _mm_mul_ps(temp0_180, temp0_190)
                zmm1 = _mm_and_ps(_mm_mul_ps(temp0_191, zmm9), zmm14)
                float temp0_196[0x4] = _mm_shuffle_ps(temp0_193, zmm1, 0x32)
                float temp0_198[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_192, zmm1, 0), temp0_196, 0x82)
                float temp0_199[0x4] = _mm_shuffle_ps(temp0_192, zmm1, 0x31)
                float temp0_201[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_193, zmm1, 0x10), temp0_199, 0x88)
                zmm0 = zmm13
                float temp0_203[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_192, temp0_193, 0x12), zmm1, 0xe8)
                float var_338_1[0x4] = temp0_201
                float var_348_1[0x4] = temp0_198
                float var_328_1[0x4] = temp0_203
                zmm8 = r8_4[1]
                zmm0[0].q = zmm8 u>> 0x40
                float temp0_204[0x4] = _mm_shuffle_ps(zmm8, zmm0, 0xc4)
                float var_318_1[0x4] = temp0_204
                zmm1 = *rdx_5
                float temp0_205[0x4] = _mm_add_ps(zmm1, zmm1)
                float temp0_206[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                float temp0_207[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                float temp0_208[0x4] = _mm_mul_ps(zmm1, temp0_205)
                float temp0_210[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_205, temp0_205, 0x29), temp0_206)
                float temp0_212[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_205, temp0_205, 0x12), temp0_207)
                zmm1 = rdx_5[2]
                float temp0_213[0x4] = _mm_shuffle_ps(temp0_208, temp0_208, 0x1a)
                float temp0_214[0x4] = _mm_shuffle_ps(temp0_208, temp0_208, 1)
                float temp0_215[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
                float temp0_216[0x4] = _mm_add_ps(temp0_212, temp0_210)
                float temp0_217[0x4] = _mm_sub_ps(temp0_210, temp0_212)
                float temp0_218[0x4] = _mm_add_ps(temp0_213, temp0_214)
                float temp0_219[0x4] = _mm_mul_ps(temp0_216, zmm1)
                float temp0_220[0x4] = _mm_mul_ps(temp0_215, temp0_217)
                zmm2 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm13, temp0_218), zmm1), zmm14)
                float temp0_226[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_219, zmm2, 0), 
                    _mm_shuffle_ps(temp0_220, zmm2, 0x32), 0x82)
                float temp0_227[0x4] = _mm_shuffle_ps(temp0_219, zmm2, 0x31)
                float temp0_228[0x4] = _mm_shuffle_ps(temp0_226, temp0_226, 0xaa)
                float temp0_230[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_220, zmm2, 0x10), temp0_227, 0x88)
                float temp0_231[0x4] = _mm_shuffle_ps(temp0_226, temp0_226, 0)
                float var_308_1[0x4] = temp0_226
                float temp0_232[0x4] = _mm_mul_ps(temp0_228, temp0_203)
                float temp0_233[0x4] = _mm_mul_ps(temp0_231, temp0_198)
                float temp0_235[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_219, temp0_220, 0x12), zmm2, 0xe8)
                float temp0_236[0x4] = _mm_shuffle_ps(temp0_226, temp0_226, 0x55)
                float temp0_238[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_226, temp0_226, 0xff), temp0_204)
                float temp0_239[0x4] = _mm_mul_ps(temp0_236, temp0_201)
                float var_2f8_1[0x4] = temp0_230
                float var_2e8_1[0x4] = temp0_235
                zmm5 = rdx_5[1]
                float temp0_240[0x4] = _mm_add_ps(temp0_239, temp0_233)
                zmm13[0].q = zmm5 u>> 0x40
                float temp0_241[0x4] = _mm_shuffle_ps(zmm5, zmm13, 0xc4)
                float temp0_243[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0), temp0_198)
                float temp0_244[0x4] = _mm_add_ps(temp0_240, temp0_232)
                float var_2d8_1[0x4] = temp0_241
                float temp0_246[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0xaa), temp0_203)
                float temp0_247[0x4] = _mm_add_ps(temp0_244, temp0_238)
                float temp0_249[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_230, temp0_230, 0x55), temp0_201)
                float temp0_250[0x4] = _mm_shuffle_ps(temp0_230, temp0_230, 0xff)
                float var_5b8[0x4] = temp0_247
                float temp0_251[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0x55)
                float temp0_252[0x4] = _mm_add_ps(temp0_249, temp0_243)
                float temp0_253[0x4] = _mm_mul_ps(temp0_251, temp0_201)
                float temp0_254[0x4] = _mm_mul_ps(temp0_250, temp0_204)
                float temp0_255[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0)
                float temp0_256[0x4] = _mm_add_ps(temp0_252, temp0_246)
                float temp0_257[0x4] = _mm_mul_ps(temp0_255, temp0_198)
                float temp0_259[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_235, temp0_235, 0xaa), temp0_203)
                float temp0_260[0x4] = _mm_add_ps(temp0_256, temp0_254)
                float temp0_261[0x4] = _mm_shuffle_ps(temp0_235, temp0_235, 0xff)
                float temp0_262[0x4] = _mm_add_ps(temp0_253, temp0_257)
                float temp0_263[0x4] = _mm_mul_ps(temp0_261, temp0_204)
                float temp0_264[0x4] = _mm_shuffle_ps(temp0_241, temp0_241, 0)
                int96_t var_5a8_1 = temp0_260[0].12
                float temp0_265[0x4] = _mm_shuffle_ps(temp0_241, temp0_241, 0x55)
                float temp0_266[0x4] = _mm_add_ps(temp0_262, temp0_259)
                float temp0_267[0x4] = _mm_mul_ps(temp0_265, temp0_201)
                float temp0_269[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_241, temp0_241, 0xaa), temp0_203)
                float temp0_270[0x4] = _mm_mul_ps(temp0_264, temp0_198)
                float temp0_271[0x4] = _mm_add_ps(temp0_266, temp0_263)
                float temp0_273[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_241, temp0_241, 0xff), temp0_204)
                float temp0_274[0x4] = _mm_add_ps(temp0_267, temp0_270)
                int96_t var_598_1 = temp0_271[0].12
                int96_t var_588_1 = _mm_add_ps(_mm_add_ps(temp0_274, temp0_269), temp0_273)[0].12
                zmm11, zmm12, zmm14, zmm15 = sub_1407740e0(&var_5b8, 0x322bcc77)
                float zmm2_3[0x4] = var_5b8[0]
                float zmm1_3 = var_5b8[1]
                uint32_t temp0_278[0x4] = _mm_and_ps(data_143f3b8e0 ^ data_143f3b870, 
                    _mm_cmpeq_ps(data_143f3b8f0, zmm11, 2))
                float zmm0_3[0x4] = var_5b8[2]
                uint32_t zmm4_3[0x4] = temp0_278 ^ data_143f3b8e0
                zmm2_3[0] = zmm2_3[0] f* zmm4_3[0]
                zmm1_3 = zmm1_3 f* zmm4_3[0]
                zmm0_3[0] = zmm0_3[0] f* zmm4_3[0]
                var_5b8[0] = zmm2_3[0]
                float temp0_279[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                var_5b8[1] = zmm1_3
                zmm1_3 = var_5a8_1:4.d * temp0_279[0]
                var_5b8[2] = zmm0_3[0]
                zmm0_3 = var_5a8_1:8.d
                zmm0_3[0] = zmm0_3[0] * temp0_279[0]
                float zmm3_3 = var_5a8_1.d * temp0_279[0]
                zmm2_3 = var_598_1.d
                zmm4_3 = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
                var_5a8_1:4.d = zmm1_3
                var_5a8_1:8.d = zmm0_3[0]
                zmm0_3 = var_598_1:8.d
                zmm1_3 = var_598_1:4.d f* zmm4_3[0]
                zmm0_3[0] = zmm0_3[0] f* zmm4_3[0]
                zmm2_3[0] = zmm2_3[0] f* zmm4_3[0]
                var_598_1:4.d = zmm1_3
                var_598_1:8.d = zmm0_3[0]
                var_5a8_1.d = zmm3_3
                var_598_1.d = zmm2_3[0]
                sub_14077e4a0(&var_608, &var_5b8)
                zmm6 = var_608
                zmm5 = data_143f3b8d0
                float temp0_281[0x4] = _mm_mul_ps(zmm6, zmm6)
                arg_8 = 0x322bcc77
                var_458_2 = zmm11
                float temp0_283[0x4] =
                    _mm_add_ps(temp0_281, _mm_shuffle_ps(temp0_281, temp0_281, 0x4e))
                float temp0_285[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_283, temp0_283, 0x39), temp0_283)
                float temp0_286[0x4] = _mm_rsqrt_ps(temp0_285)
                float temp0_287[0x4] = _mm_mul_ps(temp0_285, zmm5)
                float temp0_292[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_286, temp0_286), temp0_287)), 
                        temp0_286), 
                    temp0_286)
                float temp0_295[0x4] =
                    _mm_sub_ps(zmm5, _mm_mul_ps(_mm_mul_ps(temp0_292, temp0_292), temp0_287))
                zmm0 = arg_8
                float temp0_297[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0, zmm0, 0), temp0_285, 2)
                float temp0_299[0x4] = _mm_add_ps(_mm_mul_ps(temp0_295, temp0_292), temp0_292)
                float temp0_300[0x4] = _mm_unpacklo_ps(var_588_1:4.d, 0)
                zmm5 = _mm_and_ps(_mm_mul_ps(temp0_299, zmm6) ^ data_143f3b8c0, temp0_297)
                    ^ data_143f3b8c0
                float temp0_304[0x4] = _mm_unpacklo_ps(
                    _mm_unpacklo_ps(var_588_1.d, var_588_1:8.d[0].q), temp0_300[0].q)
                var_478_2 = zmm5
                zmm13 = data_143f3b870
                zmm11 = data_143f3b8a0
                var_468_2 = temp0_304
            
            zmm13[0].q = zmm12 u>> 0x40
            *arg2 = _mm_shuffle_ps(zx.o(0), zmm13, 0xc4)
            arg2[1] = zmm12
            arg2[2] = _mm_and_ps(data_143f3b870, zmm14)
            zmm13 = var_458_2
            zmm9 = arg4[2]
            
            if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm13, zmm9), data_143f3b8f0, 
                    1)) == 0)
                zmm6 = *arg4
                zmm8 = arg4[1]
                float temp0_477[0x4] = _mm_mul_ps(_mm_shuffle_ps(var_478_2, var_478_2, 0x1b), 
                    _mm_shuffle_ps(zmm6, zmm6, 0))
                float temp0_478[0x4] = _mm_shuffle_ps(var_478_2, var_478_2, 0x4e)
                float temp0_479[0x4] = _mm_mul_ps(zmm9, var_468_2)
                float temp0_480[0x4] = _mm_mul_ps(temp0_477, zmm15)
                float temp0_481[0x4] = _mm_shuffle_ps(var_478_2, var_478_2, 0xb1)
                float temp0_482[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                float temp0_484[0x4] = _mm_add_ps(temp0_480, _mm_mul_ps(var_478_2, temp0_482))
                float temp0_486[0x4] = _mm_mul_ps(temp0_478, _mm_shuffle_ps(zmm6, zmm6, 0x55))
                float temp0_488[0x4] = _mm_mul_ps(temp0_481, _mm_shuffle_ps(zmm6, zmm6, 0xaa))
                float temp0_489[0x4] = _mm_mul_ps(temp0_486, zmm11)
                float temp0_490[0x4] = _mm_shuffle_ps(temp0_479, temp0_479, 0xc9)
                float temp0_491[0x4] = __mulps_xmmps_memps(temp0_488, data_143f3b890)
                float temp0_493[0x4] = _mm_add_ps(_mm_add_ps(temp0_484, temp0_489), temp0_491)
                float temp0_494[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
                float temp0_495[0x4] = _mm_mul_ps(temp0_490, temp0_494)
                float temp0_496[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
                *arg2 = temp0_493
                float temp0_499[0x4] = _mm_sub_ps(
                    _mm_mul_ps(_mm_shuffle_ps(temp0_479, temp0_479, 0xd2), temp0_496), temp0_495)
                float temp0_500[0x4] = _mm_add_ps(temp0_499, temp0_499)
                float temp0_501[0x4] = _mm_shuffle_ps(temp0_500, temp0_500, 0xd2)
                float temp0_502[0x4] = _mm_shuffle_ps(temp0_500, temp0_500, 0xc9)
                float temp0_503[0x4] = _mm_mul_ps(temp0_501, temp0_496)
                float temp0_504[0x4] = _mm_mul_ps(temp0_502, temp0_494)
                float temp0_505[0x4] = _mm_mul_ps(temp0_500, temp0_482)
                zmm1 =
                    _mm_add_ps(_mm_sub_ps(temp0_503, temp0_504), _mm_add_ps(temp0_505, temp0_479))
            label_141f6031b:
                float temp0_847[0x4] = _mm_add_ps(zmm1, zmm8)
                float temp0_848[0x4] = _mm_mul_ps(zmm9, zmm13)
                arg2[1] = temp0_847
                arg2[2] = temp0_848
            else
                zmm1 = *arg4
                zmm6 = data_143f3b870
                float temp0_346[0x4] = _mm_add_ps(zmm1, zmm1)
                float temp0_347[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
                float temp0_348[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
                _mm_mul_ps(zmm13, zmm9)
                float temp0_350[0x4] = _mm_mul_ps(temp0_346, zmm1)
                float temp0_352[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_346, temp0_346, 0x29), temp0_348)
                float temp0_353[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
                float temp0_354[0x4] = _mm_shuffle_ps(temp0_350, temp0_350, 0x1a)
                float temp0_356[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_346, temp0_346, 0x12), temp0_353)
                float temp0_358[0x4] =
                    _mm_add_ps(temp0_354, _mm_shuffle_ps(temp0_350, temp0_350, 1))
                float temp0_359[0x4] = _mm_add_ps(temp0_356, temp0_352)
                float temp0_360[0x4] = _mm_sub_ps(temp0_352, temp0_356)
                float temp0_361[0x4] = _mm_sub_ps(zmm6, temp0_358)
                float temp0_362[0x4] = _mm_mul_ps(temp0_359, zmm9)
                float temp0_363[0x4] = _mm_mul_ps(temp0_347, temp0_360)
                float temp0_364[0x4] = _mm_mul_ps(temp0_361, zmm9)
                float temp0_365[0x4] = _mm_shuffle_ps(var_478_2, var_478_2, 4)
                zmm1 = _mm_and_ps(temp0_364, zmm14)
                float temp0_367[0x4] = _mm_shuffle_ps(temp0_363, zmm1, 0x32)
                float temp0_369[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_362, zmm1, 0), temp0_367, 0x82)
                float temp0_370[0x4] = _mm_shuffle_ps(temp0_362, zmm1, 0x31)
                float temp0_372[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_363, zmm1, 0x10), temp0_370, 0x88)
                float temp0_374[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_362, temp0_363, 0x12), zmm1, 0xe8)
                float temp0_375[0x4] = _mm_add_ps(var_478_2, var_478_2)
                float var_2c8_1[0x4] = temp0_369
                float temp0_376[0x4] = _mm_shuffle_ps(var_478_2, var_478_2, 0xff)
                float var_2b8_1[0x4] = temp0_372
                float var_2a8_1[0x4] = temp0_374
                zmm9 = arg4[1]
                float temp0_377[0x4] = _mm_mul_ps(var_478_2, temp0_375)
                zmm6[0].q = zmm9 u>> 0x40
                float temp0_378[0x4] = _mm_shuffle_ps(zmm9, zmm6, 0xc4)
                float temp0_380[0x4] =
                    _mm_mul_ps(temp0_365, _mm_shuffle_ps(temp0_375, temp0_375, 0x29))
                float temp0_382[0x4] =
                    _mm_mul_ps(temp0_376, _mm_shuffle_ps(temp0_375, temp0_375, 0x12))
                float temp0_385[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_377, temp0_377, 0x1a), 
                    _mm_shuffle_ps(temp0_377, temp0_377, 1))
                float temp0_386[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xc9)
                float var_298_1[0x4] = temp0_378
                float temp0_387[0x4] = _mm_add_ps(temp0_382, temp0_380)
                float temp0_388[0x4] = _mm_sub_ps(temp0_380, temp0_382)
                float temp0_389[0x4] = _mm_sub_ps(zmm6, temp0_385)
                float temp0_390[0x4] = _mm_mul_ps(temp0_387, zmm13)
                float temp0_391[0x4] = _mm_mul_ps(temp0_386, temp0_388)
                zmm1 = _mm_and_ps(_mm_mul_ps(temp0_389, zmm13), zmm14)
                float temp0_396[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_390, zmm1, 0), 
                    _mm_shuffle_ps(temp0_391, zmm1, 0x32), 0x82)
                float temp0_397[0x4] = _mm_shuffle_ps(temp0_390, zmm1, 0x31)
                float temp0_398[0x4] = _mm_shuffle_ps(temp0_396, temp0_396, 0x55)
                float var_288_1[0x4] = temp0_396
                float temp0_400[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_391, zmm1, 0x10), temp0_397, 0x88)
                float temp0_401[0x4] = _mm_shuffle_ps(temp0_396, temp0_396, 0)
                float temp0_402[0x4] = _mm_mul_ps(temp0_398, temp0_372)
                float temp0_403[0x4] = _mm_mul_ps(temp0_401, temp0_369)
                float temp0_405[0x4] =
                    _mm_shuffle_ps(_mm_shuffle_ps(temp0_390, temp0_391, 0x12), zmm1, 0xe8)
                float temp0_406[0x4] = _mm_shuffle_ps(temp0_396, temp0_396, 0xaa)
                float temp0_407[0x4] = _mm_add_ps(temp0_402, temp0_403)
                float temp0_409[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_396, temp0_396, 0xff), temp0_378)
                float temp0_410[0x4] = _mm_shuffle_ps(temp0_400, temp0_400, 0)
                float temp0_411[0x4] = _mm_mul_ps(temp0_406, temp0_374)
                float temp0_412[0x4] = _mm_mul_ps(temp0_410, temp0_369)
                zmm6[0].q = var_468_2 u>> 0x40
                float temp0_413[0x4] = _mm_add_ps(temp0_407, temp0_411)
                float temp0_414[0x4] = _mm_shuffle_ps(var_468_2, zmm6, 0xc4)
                float var_278_1[0x4] = temp0_400
                float temp0_416[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_400, temp0_400, 0xaa), temp0_374)
                float temp0_417[0x4] = _mm_add_ps(temp0_413, temp0_409)
                float var_268_1[0x4] = temp0_405
                float var_258_1[0x4] = temp0_414
                float temp0_419[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_400, temp0_400, 0x55), temp0_372)
                float var_578[0x4] = temp0_417
                float temp0_421[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_405, temp0_405, 0x55), temp0_372)
                float temp0_422[0x4] = _mm_add_ps(temp0_419, temp0_412)
                float temp0_424[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_400, temp0_400, 0xff), temp0_378)
                float temp0_426[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_405, temp0_405, 0), temp0_369)
                float temp0_427[0x4] = _mm_add_ps(temp0_422, temp0_416)
                float temp0_429[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_405, temp0_405, 0xaa), temp0_374)
                float temp0_430[0x4] = _mm_add_ps(temp0_421, temp0_426)
                float temp0_431[0x4] = _mm_shuffle_ps(temp0_405, temp0_405, 0xff)
                float temp0_432[0x4] = _mm_add_ps(temp0_427, temp0_424)
                float temp0_433[0x4] = _mm_mul_ps(temp0_431, temp0_378)
                float temp0_434[0x4] = _mm_shuffle_ps(temp0_414, temp0_414, 0)
                float temp0_435[0x4] = _mm_add_ps(temp0_430, temp0_429)
                float temp0_436[0x4] = _mm_mul_ps(temp0_434, temp0_369)
                int96_t var_568_1 = temp0_432[0].12
                float temp0_437[0x4] = _mm_shuffle_ps(temp0_414, temp0_414, 0x55)
                float temp0_438[0x4] = _mm_add_ps(temp0_435, temp0_433)
                float temp0_439[0x4] = _mm_mul_ps(temp0_437, temp0_372)
                int96_t var_558_1 = temp0_438[0].12
                float temp0_440[0x4] = _mm_add_ps(temp0_439, temp0_436)
                float temp0_442[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_414, temp0_414, 0xaa), temp0_374)
                float temp0_444[0x4] =
                    _mm_mul_ps(_mm_shuffle_ps(temp0_414, temp0_414, 0xff), temp0_378)
                int96_t var_548_1 = _mm_add_ps(_mm_add_ps(temp0_440, temp0_442), temp0_444)[0].12
                zmm12 = sub_1407740e0(&var_578, 0x322bcc77)
                float zmm2_4[0x4] = var_578[0]
                float zmm1_4 = var_578[1]
                float zmm4_4[0x4] = _mm_and_ps(_mm_cmpeq_ps(data_143f3b8f0, zmm12, 2), 
                    data_143f3b8e0 ^ data_143f3b870)
                uint32_t zmm0_4[0x4] = var_578[2]
                zmm4_4 ^= data_143f3b8e0
                zmm2_4[0] = zmm2_4[0] * zmm4_4[0]
                zmm1_4 = zmm1_4 * zmm4_4[0]
                zmm0_4[0] = zmm0_4[0] f* zmm4_4[0]
                var_578[0] = zmm2_4[0]
                float temp0_449[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0x55)
                var_578[1] = zmm1_4
                zmm1_4 = var_568_1:4.d * temp0_449[0]
                var_578[2] = zmm0_4[0]
                zmm0_4 = var_568_1:8.d
                zmm0_4[0] = zmm0_4[0] f* temp0_449[0]
                float zmm3_4 = var_568_1.d * temp0_449[0]
                zmm2_4 = var_558_1.d
                float temp0_450[0x4] = _mm_shuffle_ps(zmm4_4, zmm4_4, 0xaa)
                var_568_1:4.d = zmm1_4
                var_568_1:8.d = zmm0_4[0]
                zmm0_4 = var_558_1:8.d
                zmm1_4 = var_558_1:4.d * temp0_450[0]
                zmm0_4[0] = zmm0_4[0] f* temp0_450[0]
                zmm2_4[0] = zmm2_4[0] * temp0_450[0]
                var_558_1:4.d = zmm1_4
                var_558_1:8.d = zmm0_4[0]
                var_568_1.d = zmm3_4
                var_558_1.d = zmm2_4[0]
                sub_14077e4a0(&var_608, &var_578)
                zmm6 = var_608
                float zmm5_2[0x4] = data_143f3b8d0
                float temp0_451[0x4] = _mm_mul_ps(zmm6, zmm6)
                arg_8 = 0x322bcc77
                float temp0_453[0x4] =
                    _mm_add_ps(temp0_451, _mm_shuffle_ps(temp0_451, temp0_451, 0x4e))
                float temp0_455[0x4] =
                    _mm_add_ps(_mm_shuffle_ps(temp0_453, temp0_453, 0x39), temp0_453)
                float temp0_456[0x4] = _mm_rsqrt_ps(temp0_455)
                float temp0_457[0x4] = _mm_mul_ps(temp0_455, zmm5_2)
                float temp0_462[0x4] = _mm_add_ps(
                    _mm_mul_ps(
                        _mm_sub_ps(zmm5_2, 
                            _mm_mul_ps(_mm_mul_ps(temp0_456, temp0_456), temp0_457)), 
                        temp0_456), 
                    temp0_456)
                float temp0_465[0x4] =
                    _mm_sub_ps(zmm5_2, _mm_mul_ps(_mm_mul_ps(temp0_462, temp0_462), temp0_457))
                float zmm0_5[0x4] = arg_8
                float temp0_467[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_5, zmm0_5, 0), temp0_455, 2)
                zmm5_2 = _mm_and_ps(
                    _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_465, temp0_462), temp0_462), zmm6)
                        ^ data_143f3b8c0, 
                    temp0_467) ^ data_143f3b8c0
                arg2[2] = zmm12
                *arg2 = zmm5_2
                arg2[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_548_1.d, var_548_1:8.d[0].q), 
                    _mm_unpacklo_ps(var_548_1:4.d, 0)[0].q)
    else
        zmm1 = data_143f3b870
        zmm13 = data_143f3b880
        zmm1[0].q = zx.o(0) u>> 0x40
        float temp0_1[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
        float (* rdx_2)[0x4] = r8 * 0x30 + *(rax + (rcx_2 + 0x45) * 0x10)
        *arg2 = temp0_1
        arg2[1] = zx.o(0)
        arg2[2] = _mm_and_ps(data_143f3b870, zmm13)
        zmm9 = rdx_2[2]
        zmm10 = arg4[2]
        
        if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm9, zmm10), data_143f3b8f0, 1))
                == 0)
            zmm6 = *arg4
            zmm3 = *rdx_2
            zmm5 = rdx_2[1]
            zmm8 = arg4[1]
            float temp0_135[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
            float temp0_137[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), temp0_135)
            float temp0_138[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
            float temp0_139[0x4] = _mm_mul_ps(zmm10, zmm5)
            float temp0_140[0x4] = __mulps_xmmps_memps(temp0_137, data_143f3b8b0)
            float temp0_141[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
            float temp0_142[0x4] = _mm_mul_ps(zmm9, zmm10)
            float temp0_144[0x4] = _mm_add_ps(temp0_140, _mm_mul_ps(temp0_141, zmm3))
            float temp0_146[0x4] = _mm_mul_ps(temp0_138, _mm_shuffle_ps(zmm3, zmm3, 0x4e))
            float temp0_149[0x4] =
                _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), _mm_shuffle_ps(zmm3, zmm3, 0xb1))
            float temp0_150[0x4] = __mulps_xmmps_memps(temp0_146, data_143f3b8a0)
            float temp0_151[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xd2)
            float temp0_152[0x4] = __mulps_xmmps_memps(temp0_149, data_143f3b890)
            float temp0_154[0x4] = _mm_add_ps(_mm_add_ps(temp0_144, temp0_150), temp0_152)
            float temp0_155[0x4] = _mm_shuffle_ps(temp0_139, temp0_139, 0xc9)
            *arg2 = temp0_154
            float temp0_156[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
            float temp0_157[0x4] = _mm_mul_ps(temp0_155, temp0_156)
            float temp0_158[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
            float temp0_160[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_151, temp0_158), temp0_157)
            float temp0_161[0x4] = _mm_add_ps(temp0_160, temp0_160)
            float temp0_162[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xd2)
            float temp0_163[0x4] = _mm_shuffle_ps(temp0_161, temp0_161, 0xc9)
            float temp0_164[0x4] = _mm_mul_ps(temp0_162, temp0_158)
            float temp0_165[0x4] = _mm_mul_ps(temp0_163, temp0_156)
            float temp0_166[0x4] = _mm_mul_ps(temp0_161, temp0_141)
            arg2[1] = _mm_add_ps(
                _mm_add_ps(_mm_sub_ps(temp0_164, temp0_165), _mm_add_ps(temp0_166, temp0_139)), 
                zmm8)
            arg2[2] = temp0_142
        else
            zmm1 = *arg4
            zmm6 = data_143f3b870
            float temp0_6[0x4] = _mm_add_ps(zmm1, zmm1)
            float temp0_7[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xc9)
            float temp0_8[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
            float temp0_9[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
            _mm_mul_ps(zmm10, zmm9)
            float temp0_11[0x4] = _mm_mul_ps(zmm1, temp0_6)
            float temp0_13[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_6, temp0_6, 0x29), temp0_8)
            float temp0_14[0x4] = _mm_shuffle_ps(temp0_6, temp0_6, 0x12)
            float temp0_15[0x4] = _mm_shuffle_ps(temp0_11, temp0_11, 0x1a)
            float temp0_16[0x4] = _mm_mul_ps(temp0_14, temp0_9)
            float temp0_18[0x4] = _mm_add_ps(temp0_15, _mm_shuffle_ps(temp0_11, temp0_11, 1))
            float temp0_19[0x4] = _mm_add_ps(temp0_16, temp0_13)
            float temp0_20[0x4] = _mm_sub_ps(temp0_13, temp0_16)
            float temp0_21[0x4] = _mm_sub_ps(zmm6, temp0_18)
            float temp0_22[0x4] = _mm_mul_ps(temp0_19, zmm10)
            float temp0_23[0x4] = _mm_mul_ps(temp0_7, temp0_20)
            zmm1 = _mm_and_ps(_mm_mul_ps(temp0_21, zmm10), zmm13)
            float temp0_26[0x4] = _mm_shuffle_ps(temp0_23, zmm1, 0x32)
            float temp0_28[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, zmm1, 0), temp0_26, 0x82)
            float temp0_29[0x4] = _mm_shuffle_ps(temp0_22, zmm1, 0x31)
            float temp0_31[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_23, zmm1, 0x10), temp0_29, 0x88)
            float temp0_33[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_22, temp0_23, 0x12), zmm1, 0xe8)
            float var_3b8_1[0x4] = temp0_31
            float var_3c8_1[0x4] = temp0_28
            float var_3a8_1[0x4] = temp0_33
            zmm9 = arg4[1]
            zmm6[0].q = zmm9 u>> 0x40
            float temp0_34[0x4] = _mm_shuffle_ps(zmm9, zmm6, 0xc4)
            float var_398_1[0x4] = temp0_34
            zmm3 = *rdx_2
            float temp0_35[0x4] = _mm_add_ps(zmm3, zmm3)
            float temp0_36[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
            float temp0_37[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
            float temp0_38[0x4] = _mm_mul_ps(zmm3, temp0_35)
            float temp0_40[0x4] = _mm_mul_ps(temp0_36, _mm_shuffle_ps(temp0_35, temp0_35, 0x29))
            float temp0_42[0x4] = _mm_mul_ps(temp0_37, _mm_shuffle_ps(temp0_35, temp0_35, 0x12))
            zmm1 = rdx_2[2]
            float temp0_43[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 0x1a)
            float temp0_44[0x4] = _mm_shuffle_ps(temp0_38, temp0_38, 1)
            float temp0_45[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
            float temp0_46[0x4] = _mm_add_ps(temp0_42, temp0_40)
            float temp0_47[0x4] = _mm_sub_ps(temp0_40, temp0_42)
            float temp0_48[0x4] = _mm_add_ps(temp0_43, temp0_44)
            float temp0_49[0x4] = _mm_mul_ps(temp0_46, zmm1)
            float temp0_50[0x4] = _mm_mul_ps(temp0_45, temp0_47)
            zmm2 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm6, temp0_48), zmm1), zmm13)
            float temp0_56[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, zmm2, 0), 
                _mm_shuffle_ps(temp0_50, zmm2, 0x32), 0x82)
            float temp0_57[0x4] = _mm_shuffle_ps(temp0_49, zmm2, 0x31)
            float temp0_58[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0xaa)
            float temp0_60[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_50, zmm2, 0x10), temp0_57, 0x88)
            float temp0_61[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0)
            float var_388_1[0x4] = temp0_56
            float temp0_62[0x4] = _mm_mul_ps(temp0_58, temp0_33)
            float temp0_63[0x4] = _mm_mul_ps(temp0_61, temp0_28)
            float temp0_65[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_49, temp0_50, 0x12), zmm2, 0xe8)
            float temp0_66[0x4] = _mm_shuffle_ps(temp0_56, temp0_56, 0x55)
            float temp0_68[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_56, temp0_56, 0xff), temp0_34)
            float temp0_69[0x4] = _mm_mul_ps(temp0_66, temp0_31)
            float var_378_1[0x4] = temp0_60
            float var_368_1[0x4] = temp0_65
            zmm5 = rdx_2[1]
            float temp0_70[0x4] = _mm_add_ps(temp0_69, temp0_63)
            zmm6[0].q = zmm5 u>> 0x40
            float temp0_71[0x4] = _mm_shuffle_ps(zmm5, zmm6, 0xc4)
            float temp0_73[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0), temp0_28)
            float temp0_74[0x4] = _mm_add_ps(temp0_70, temp0_62)
            float var_358_1[0x4] = temp0_71
            float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0xaa), temp0_33)
            float temp0_77[0x4] = _mm_add_ps(temp0_74, temp0_68)
            float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_60, temp0_60, 0x55), temp0_31)
            float temp0_80[0x4] = _mm_shuffle_ps(temp0_60, temp0_60, 0xff)
            float var_5f8[0x4] = temp0_77
            float temp0_81[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0x55)
            float temp0_82[0x4] = _mm_add_ps(temp0_79, temp0_73)
            float temp0_83[0x4] = _mm_mul_ps(temp0_81, temp0_31)
            float temp0_84[0x4] = _mm_mul_ps(temp0_80, temp0_34)
            float temp0_85[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0)
            float temp0_86[0x4] = _mm_add_ps(temp0_82, temp0_76)
            float temp0_87[0x4] = _mm_mul_ps(temp0_85, temp0_28)
            float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_65, temp0_65, 0xaa), temp0_33)
            float temp0_90[0x4] = _mm_add_ps(temp0_86, temp0_84)
            float temp0_91[0x4] = _mm_shuffle_ps(temp0_65, temp0_65, 0xff)
            float temp0_92[0x4] = _mm_add_ps(temp0_83, temp0_87)
            float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_34)
            float temp0_94[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0)
            int96_t var_5e8_1 = temp0_90[0].12
            float temp0_95[0x4] = _mm_shuffle_ps(temp0_71, temp0_71, 0x55)
            float temp0_96[0x4] = _mm_add_ps(temp0_92, temp0_89)
            float temp0_97[0x4] = _mm_mul_ps(temp0_95, temp0_31)
            float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_71, temp0_71, 0xaa), temp0_33)
            float temp0_100[0x4] = _mm_mul_ps(temp0_94, temp0_28)
            float temp0_101[0x4] = _mm_add_ps(temp0_96, temp0_93)
            float temp0_103[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_71, temp0_71, 0xff), temp0_34)
            float temp0_104[0x4] = _mm_add_ps(temp0_97, temp0_100)
            int96_t var_5d8_1 = temp0_101[0].12
            int96_t var_5c8_1 = _mm_add_ps(_mm_add_ps(temp0_104, temp0_99), temp0_103)[0].12
            zmm12 = sub_1407740e0(&var_5f8, 0x322bcc77)
            float zmm2_1[0x4] = var_5f8[0]
            float zmm1_1 = var_5f8[1]
            float zmm4_1[0x4] =
                _mm_and_ps(_mm_cmpeq_ps(data_143f3b8f0, zmm12, 2), data_143f3b8e0 ^ data_143f3b870)
            uint32_t zmm0_1[0x4] = var_5f8[2]
            zmm4_1 ^= data_143f3b8e0
            zmm2_1[0] = zmm2_1[0] * zmm4_1[0]
            zmm1_1 = zmm1_1 * zmm4_1[0]
            zmm0_1[0] = zmm0_1[0] f* zmm4_1[0]
            var_5f8[0] = zmm2_1[0]
            float temp0_109[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0x55)
            var_5f8[1] = zmm1_1
            zmm1_1 = var_5e8_1:4.d * temp0_109[0]
            var_5f8[2] = zmm0_1[0]
            zmm0_1 = var_5e8_1:8.d
            zmm0_1[0] = zmm0_1[0] f* temp0_109[0]
            float zmm3_1 = var_5e8_1.d * temp0_109[0]
            zmm2_1 = var_5d8_1.d
            float temp0_110[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa)
            var_5e8_1:4.d = zmm1_1
            var_5e8_1:8.d = zmm0_1[0]
            zmm0_1 = var_5d8_1:8.d
            zmm1_1 = var_5d8_1:4.d * temp0_110[0]
            zmm0_1[0] = zmm0_1[0] f* temp0_110[0]
            zmm2_1[0] = zmm2_1[0] * temp0_110[0]
            var_5d8_1:4.d = zmm1_1
            var_5d8_1:8.d = zmm0_1[0]
            var_5e8_1.d = zmm3_1
            var_5d8_1.d = zmm2_1[0]
            sub_14077e4a0(&var_608, &var_5f8)
            zmm6 = var_608
            float zmm5_1[0x4] = data_143f3b8d0
            float temp0_111[0x4] = _mm_mul_ps(zmm6, zmm6)
            arg_8 = 0x322bcc77
            float temp0_113[0x4] = _mm_add_ps(temp0_111, _mm_shuffle_ps(temp0_111, temp0_111, 0x4e))
            float temp0_115[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_113, temp0_113, 0x39), temp0_113)
            float temp0_116[0x4] = _mm_rsqrt_ps(temp0_115)
            float temp0_117[0x4] = _mm_mul_ps(temp0_115, zmm5_1)
            float temp0_122[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_116, temp0_116), temp0_117)), 
                    temp0_116), 
                temp0_116)
            float temp0_125[0x4] =
                _mm_sub_ps(zmm5_1, _mm_mul_ps(_mm_mul_ps(temp0_122, temp0_122), temp0_117))
            float zmm0_2[0x4] = arg_8
            float temp0_127[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_2, zmm0_2, 0), temp0_115, 2)
            zmm5_1 = _mm_and_ps(
                _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_125, temp0_122), temp0_122), zmm6)
                    ^ data_143f3b8c0, 
                temp0_127) ^ data_143f3b8c0
            arg2[2] = zmm12
            *arg2 = zmm5_1
            arg2[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_5c8_1.d, var_5c8_1:8.d[0].q), 
                _mm_unpacklo_ps(var_5c8_1:4.d, 0)[0].q)
else if (r15.d s< 0)
label_141f608b4:
    *arg2 = data_143dbb0c0
    arg2[1] = data_143dbb0d0
    arg2[2] = data_143dbb0e0
else
    int64_t rcx_23 = sx.q(*(arg1 + 0x494))
    
    if (r15.d s>= *(arg1 + rcx_23 * 0x10 + 0x458))
        goto label_141f608b4
    
    zmm1 = data_143f3b870
    zmm13 = data_143f3b880
    zmm1[0].q = zx.o(0) u>> 0x40
    float temp0_849[0x4] = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
    float (* rdx_16)[0x4] = r15 * 0x30 + *(arg1 + (rcx_23 + 0x45) * 0x10)
    *arg2 = temp0_849
    arg2[1] = zx.o(0)
    arg2[2] = _mm_and_ps(data_143f3b870, zmm13)
    zmm12 = rdx_16[2]
    zmm9 = arg4[2]
    
    if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(zmm12, zmm9), data_143f3b8f0, 1)) == 0)
        zmm6 = *arg4
        zmm3 = *rdx_16
        zmm5 = rdx_16[1]
        zmm8 = arg4[1]
        float temp0_983[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
        float temp0_985[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0x1b), temp0_983)
        float temp0_986[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
        float temp0_987[0x4] = _mm_mul_ps(zmm9, zmm5)
        float temp0_988[0x4] = __mulps_xmmps_memps(temp0_985, data_143f3b8b0)
        float temp0_989[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xff)
        float temp0_990[0x4] = _mm_mul_ps(zmm12, zmm9)
        float temp0_992[0x4] = _mm_add_ps(temp0_988, _mm_mul_ps(temp0_989, zmm3))
        float temp0_994[0x4] = _mm_mul_ps(temp0_986, _mm_shuffle_ps(zmm3, zmm3, 0x4e))
        float temp0_997[0x4] =
            _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xaa), _mm_shuffle_ps(zmm3, zmm3, 0xb1))
        float temp0_998[0x4] = __mulps_xmmps_memps(temp0_994, data_143f3b8a0)
        float temp0_999[0x4] = _mm_shuffle_ps(temp0_987, temp0_987, 0xd2)
        float temp0_1000[0x4] = __mulps_xmmps_memps(temp0_997, data_143f3b890)
        float temp0_1002[0x4] = _mm_add_ps(_mm_add_ps(temp0_992, temp0_998), temp0_1000)
        float temp0_1003[0x4] = _mm_shuffle_ps(temp0_987, temp0_987, 0xc9)
        *arg2 = temp0_1002
        float temp0_1004[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xd2)
        float temp0_1005[0x4] = _mm_mul_ps(temp0_1003, temp0_1004)
        float temp0_1006[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0xc9)
        float temp0_1008[0x4] = _mm_sub_ps(_mm_mul_ps(temp0_999, temp0_1006), temp0_1005)
        float temp0_1009[0x4] = _mm_add_ps(temp0_1008, temp0_1008)
        float temp0_1010[0x4] = _mm_shuffle_ps(temp0_1009, temp0_1009, 0xd2)
        float temp0_1011[0x4] = _mm_shuffle_ps(temp0_1009, temp0_1009, 0xc9)
        float temp0_1012[0x4] = _mm_mul_ps(temp0_1010, temp0_1006)
        float temp0_1013[0x4] = _mm_mul_ps(temp0_1011, temp0_1004)
        float temp0_1014[0x4] = _mm_mul_ps(temp0_1009, temp0_989)
        arg2[1] = _mm_add_ps(
            _mm_add_ps(_mm_sub_ps(temp0_1012, temp0_1013), _mm_add_ps(temp0_1014, temp0_987)), zmm8)
        arg2[2] = temp0_990
    else
        zmm1 = *arg4
        zmm6 = data_143f3b870
        float temp0_854[0x4] = _mm_add_ps(zmm1, zmm1)
        float temp0_855[0x4] = _mm_shuffle_ps(zmm9, zmm9, 0xc9)
        _mm_mul_ps(zmm12, zmm9)
        float temp0_857[0x4] = _mm_shuffle_ps(zmm1, zmm1, 4)
        float temp0_858[0x4] = _mm_mul_ps(zmm1, temp0_854)
        float temp0_860[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_854, temp0_854, 0x29), temp0_857)
        float temp0_861[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xff)
        float temp0_862[0x4] = _mm_shuffle_ps(temp0_858, temp0_858, 0x1a)
        float temp0_864[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_854, temp0_854, 0x12), temp0_861)
        float temp0_866[0x4] = _mm_add_ps(temp0_862, _mm_shuffle_ps(temp0_858, temp0_858, 1))
        float temp0_867[0x4] = _mm_add_ps(temp0_864, temp0_860)
        float temp0_868[0x4] = _mm_sub_ps(temp0_860, temp0_864)
        float temp0_869[0x4] = _mm_sub_ps(zmm6, temp0_866)
        float temp0_870[0x4] = _mm_mul_ps(temp0_867, zmm9)
        float temp0_871[0x4] = _mm_mul_ps(temp0_855, temp0_868)
        zmm1 = _mm_and_ps(_mm_mul_ps(temp0_869, zmm9), zmm13)
        float temp0_874[0x4] = _mm_shuffle_ps(temp0_871, zmm1, 0x32)
        float temp0_876[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_870, zmm1, 0), temp0_874, 0x82)
        float temp0_877[0x4] = _mm_shuffle_ps(temp0_870, zmm1, 0x31)
        float temp0_879[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_871, zmm1, 0x10), temp0_877, 0x88)
        float temp0_881[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_870, temp0_871, 0x12), zmm1, 0xe8)
        float var_138_1[0x4] = temp0_879
        float var_148_1[0x4] = temp0_876
        float var_128_1[0x4] = temp0_881
        zmm9 = arg4[1]
        zmm6[0].q = zmm9 u>> 0x40
        float temp0_882[0x4] = _mm_shuffle_ps(zmm9, zmm6, 0xc4)
        float var_118_1[0x4] = temp0_882
        zmm3 = *rdx_16
        float temp0_883[0x4] = _mm_add_ps(zmm3, zmm3)
        float temp0_884[0x4] = _mm_shuffle_ps(zmm3, zmm3, 4)
        float temp0_885[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xff)
        float temp0_886[0x4] = _mm_mul_ps(zmm3, temp0_883)
        float temp0_888[0x4] = _mm_mul_ps(temp0_884, _mm_shuffle_ps(temp0_883, temp0_883, 0x29))
        float temp0_890[0x4] = _mm_mul_ps(temp0_885, _mm_shuffle_ps(temp0_883, temp0_883, 0x12))
        zmm1 = rdx_16[2]
        float temp0_891[0x4] = _mm_shuffle_ps(temp0_886, temp0_886, 0x1a)
        float temp0_892[0x4] = _mm_shuffle_ps(temp0_886, temp0_886, 1)
        float temp0_893[0x4] = _mm_shuffle_ps(zmm1, zmm1, 0xc9)
        float temp0_894[0x4] = _mm_add_ps(temp0_890, temp0_888)
        float temp0_895[0x4] = _mm_sub_ps(temp0_888, temp0_890)
        float temp0_896[0x4] = _mm_add_ps(temp0_891, temp0_892)
        float temp0_897[0x4] = _mm_mul_ps(temp0_894, zmm1)
        float temp0_898[0x4] = _mm_mul_ps(temp0_893, temp0_895)
        zmm2 = _mm_and_ps(_mm_mul_ps(_mm_sub_ps(zmm6, temp0_896), zmm1), zmm13)
        float temp0_904[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_897, zmm2, 0), 
            _mm_shuffle_ps(temp0_898, zmm2, 0x32), 0x82)
        float temp0_905[0x4] = _mm_shuffle_ps(temp0_897, zmm2, 0x31)
        float temp0_906[0x4] = _mm_shuffle_ps(temp0_904, temp0_904, 0xaa)
        float temp0_908[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_898, zmm2, 0x10), temp0_905, 0x88)
        float temp0_909[0x4] = _mm_shuffle_ps(temp0_904, temp0_904, 0)
        float var_108_1[0x4] = temp0_904
        float temp0_910[0x4] = _mm_mul_ps(temp0_906, temp0_881)
        float temp0_911[0x4] = _mm_mul_ps(temp0_909, temp0_876)
        float temp0_913[0x4] =
            _mm_shuffle_ps(_mm_shuffle_ps(temp0_897, temp0_898, 0x12), zmm2, 0xe8)
        float temp0_914[0x4] = _mm_shuffle_ps(temp0_904, temp0_904, 0x55)
        float temp0_916[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_904, temp0_904, 0xff), temp0_882)
        float temp0_917[0x4] = _mm_mul_ps(temp0_914, temp0_879)
        float var_f8_1[0x4] = temp0_908
        float var_e8_1[0x4] = temp0_913
        zmm5 = rdx_16[1]
        float temp0_918[0x4] = _mm_add_ps(temp0_917, temp0_911)
        zmm6[0].q = zmm5 u>> 0x40
        float temp0_919[0x4] = _mm_shuffle_ps(zmm5, zmm6, 0xc4)
        float temp0_921[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_908, temp0_908, 0), temp0_876)
        float temp0_922[0x4] = _mm_add_ps(temp0_918, temp0_910)
        float var_d8_1[0x4] = temp0_919
        float temp0_924[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_908, temp0_908, 0xaa), temp0_881)
        float temp0_925[0x4] = _mm_add_ps(temp0_922, temp0_916)
        float temp0_927[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_908, temp0_908, 0x55), temp0_879)
        float temp0_928[0x4] = _mm_shuffle_ps(temp0_908, temp0_908, 0xff)
        float var_4b8[0x4] = temp0_925
        float temp0_929[0x4] = _mm_shuffle_ps(temp0_913, temp0_913, 0x55)
        float temp0_930[0x4] = _mm_add_ps(temp0_927, temp0_921)
        float temp0_931[0x4] = _mm_mul_ps(temp0_929, temp0_879)
        float temp0_932[0x4] = _mm_mul_ps(temp0_928, temp0_882)
        float temp0_933[0x4] = _mm_shuffle_ps(temp0_913, temp0_913, 0)
        float temp0_934[0x4] = _mm_add_ps(temp0_930, temp0_924)
        float temp0_935[0x4] = _mm_mul_ps(temp0_933, temp0_876)
        float temp0_937[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_913, temp0_913, 0xaa), temp0_881)
        float temp0_938[0x4] = _mm_add_ps(temp0_934, temp0_932)
        float temp0_939[0x4] = _mm_shuffle_ps(temp0_913, temp0_913, 0xff)
        float temp0_940[0x4] = _mm_add_ps(temp0_931, temp0_935)
        float temp0_941[0x4] = _mm_mul_ps(temp0_939, temp0_882)
        float temp0_942[0x4] = _mm_shuffle_ps(temp0_919, temp0_919, 0)
        int96_t var_4a8_1 = temp0_938[0].12
        float temp0_943[0x4] = _mm_shuffle_ps(temp0_919, temp0_919, 0x55)
        float temp0_944[0x4] = _mm_add_ps(temp0_940, temp0_937)
        float temp0_945[0x4] = _mm_mul_ps(temp0_943, temp0_879)
        float temp0_947[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_919, temp0_919, 0xaa), temp0_881)
        float temp0_948[0x4] = _mm_mul_ps(temp0_942, temp0_876)
        float temp0_949[0x4] = _mm_add_ps(temp0_944, temp0_941)
        float temp0_951[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_919, temp0_919, 0xff), temp0_882)
        float temp0_952[0x4] = _mm_add_ps(temp0_945, temp0_948)
        int96_t var_498_1 = temp0_949[0].12
        int96_t var_488_1 = _mm_add_ps(_mm_add_ps(temp0_952, temp0_947), temp0_951)[0].12
        zmm12 = sub_1407740e0(&var_4b8, 0x322bcc77)
        float zmm6_1[0x4] =
            _mm_and_ps(_mm_cmpeq_ps(data_143f3b8f0, zmm12, 2), data_143f3b8e0 ^ data_143f3b870)
            ^ data_143f3b8e0
        void var_3d8
        int64_t* rax_18 = sub_14173efa0(&var_4b8, &var_3d8, 1)
        float zmm1_9 = zmm6_1[0]
        float zmm0_10 = zmm6_1[0]
        zmm6_1[0] = zmm6_1[0] f* *rax_18
        zmm1_9 = zmm1_9 f* *(rax_18 + 4)
        zmm0_10 = zmm0_10 f* rax_18[1].d
        var_4b8[0] = zmm6_1[0]
        float temp0_957[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0x55)
        var_4b8[1] = zmm1_9
        zmm1_9 = var_4a8_1:4.d * temp0_957[0]
        var_4b8[2] = zmm0_10
        zmm0_10 = var_4a8_1:8.d * temp0_957[0]
        float zmm3_10 = var_4a8_1.d * temp0_957[0]
        float zmm2_10[0x4] = var_498_1.d
        var_4a8_1:4.d = zmm1_9
        var_4a8_1:8.d = zmm0_10
        float temp0_958[0x4] = _mm_shuffle_ps(zmm6_1, zmm6_1, 0xaa)
        zmm1_9 = var_498_1:4.d * temp0_958[0]
        zmm0_10 = var_498_1:8.d * temp0_958[0]
        zmm2_10[0] = zmm2_10[0] * temp0_958[0]
        var_498_1:4.d = zmm1_9
        var_498_1:8.d = zmm0_10
        var_4a8_1.d = zmm3_10
        var_498_1.d = zmm2_10[0]
        sub_14077e4a0(&var_608, &var_4b8)
        zmm6 = var_608
        float zmm5_5[0x4] = data_143f3b8d0
        float temp0_959[0x4] = _mm_mul_ps(zmm6, zmm6)
        arg_8 = 0x322bcc77
        float temp0_961[0x4] = _mm_add_ps(temp0_959, _mm_shuffle_ps(temp0_959, temp0_959, 0x4e))
        float temp0_963[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_961, temp0_961, 0x39), temp0_961)
        float temp0_964[0x4] = _mm_rsqrt_ps(temp0_963)
        float temp0_965[0x4] = _mm_mul_ps(temp0_963, zmm5_5)
        float temp0_970[0x4] = _mm_add_ps(
            _mm_mul_ps(_mm_sub_ps(zmm5_5, _mm_mul_ps(_mm_mul_ps(temp0_964, temp0_964), temp0_965)), 
                temp0_964), 
            temp0_964)
        float temp0_973[0x4] =
            _mm_sub_ps(zmm5_5, _mm_mul_ps(_mm_mul_ps(temp0_970, temp0_970), temp0_965))
        float zmm0_11[0x4] = arg_8
        float temp0_975[0x4] = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_11, zmm0_11, 0), temp0_963, 2)
        zmm5_5 = _mm_and_ps(
            _mm_mul_ps(_mm_add_ps(_mm_mul_ps(temp0_973, temp0_970), temp0_970), zmm6)
                ^ data_143f3b8c0, 
            temp0_975) ^ data_143f3b8c0
        arg2[2] = zmm12
        *arg2 = zmm5_5
        arg2[1] = _mm_unpacklo_ps(_mm_unpacklo_ps(var_488_1.d, var_488_1:8.d[0].q), 
            _mm_unpacklo_ps(var_488_1:4.d, 0)[0].q)
return arg2
