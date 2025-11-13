// 函数: sub_14035fc40
// 地址: 0x14035fc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float zmm15[0x4]
float var_58[0x4] = zmm15
float zmm14[0x4]
float var_68[0x4] = zmm14
float var_78[0x4] = arg14
float var_88[0x4] = arg13
uint32_t var_98[0x4] = arg12
float var_b8[0x4] = arg11
float zmm8[0x4]
float var_c8[0x4] = zmm8
float var_d8[0x4] = arg10
float var_e8[0x4] = arg9
uint64_t rcx_1 = zx.q(_mm_movemask_ps(*arg18))
int32_t i = ((arg17 s>> 0x1f u>> 0x1e) + arg17) & 0xfffffffc
uint64_t i_2
float var_968[0x4]
int64_t var_948
int64_t var_8f8
int64_t var_8e8
float (* var_8a8)[0x4]
int64_t var_808
int64_t var_7e8
int32_t var_7b8
float var_7a8[0x4]
uint32_t var_798[0x4]
float var_788[0x4]
uint32_t var_778[0x4]
float var_768[0x4]
float var_758[0x4]
float var_748[0x4]
uint128_t var_738
float var_728[0x4]
float var_718[0x4]
uint32_t var_708[0x4]
float var_6f8[0x4]
float var_6e8[0x4]
float var_6d8[0x4]
float var_6c8[0x4]
float zmm0[0x4]
float zmm2[0x4]
float zmm10[0x4]

if (rcx_1.d != 0xf)
    int32_t i_5 = rcx_1.d
    float var_958_2[0x4]
    uint128_t var_908_1
    float var_8b8[0x4]
    float var_858[0x4]
    float var_828[0x4]
    int32_t rax_83
    uint64_t rbx_6
    
    if (i s> 0)
        zmm2 = zx.o(0)
        rbx_6 = 0
        zmm8 = zx.o(0)
        zmm10 = zx.o(0)
        arg14 = zx.o(0)
        arg13 = zx.o(0)
        zmm14 = zx.o(0)
        var_908_1 = zx.o(0)
        var_958_2 = zx.o(0)
        
        do
            int64_t rax_21 = sx.q((rbx_6 << 3).d - rbx_6.d)
            zmm0 = _mm_insert_epi16(
                _mm_insert_epi16(
                    _mm_insert_epi16(zx.o(*(arg4 + (rax_21 << 2) + 0x18)), 
                        zx.d(*(arg4 + (rax_21 << 2) + 0x34)), 2), 
                    zx.d(*(arg4 + (rax_21 << 2) + 0x50)), 4), 
                zx.d(*(arg4 + (rax_21 << 2) + 0x6c)), 6)
            int64_t rbp_6 = sx.q((rbx_6 << 2).d)
            zmm15 = *(arg1 + rbp_6)
            arg5 = _mm_cmpeq_epi32(arg5, arg5)
            zmm15 = _mm_cmpeq_epi32(zmm15, arg5) & not.o(_mm_cmpeq_epi32(zmm0, zmm2) ^ arg5)
            char temp0_463 = _mm_movemask_ps(zmm15)
            
            if (temp0_463 != 0)
                float var_928_1[0x4] = arg8
                var_948.o = arg6
                var_968 = arg7
                var_8e8.o = arg12
                var_8f8.o = arg10
                float var_918_1[0x4] = arg9
                float var_7d8_2[0x4] = arg11
                float var_878_2[0x4] = zmm8
                float var_898_2[0x4] = zmm10
                float var_868_2[0x4] = arg14
                float var_888_2[0x4] = arg13
                float var_8c8_2[0x4] = zmm14
                int64_t rdi_7 = sx.q((rbx_6 * 9).d * 3 + rbx_6.d)
                arg8 = *(arg4 + rdi_7)
                zmm0 = *(arg4 + rdi_7 + 0x1c)
                arg5 = *(arg4 + rdi_7 + 0x38)
                zmm2 = *(arg4 + rdi_7 + 0x54)
                float temp0_466[0x4] = _mm_shuffle_ps(_mm_unpacklo_ps(arg8, zmm0[0].q), 
                    _mm_shuffle_ps(zmm2, arg5, 0), 0x24)
                arg9 = _mm_unpacklo_epi32(_mm_shuffle_epi32(arg8, 0xe5), 
                    _mm_shuffle_epi32(zmm0, 0xe5)[0].q)
                var_828 = _mm_shuffle_ps(arg9, 
                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg9, arg5, 0xd4), 0x21), 0x24)
                arg7 = _mm_shuffle_epi32(arg8, 0xe7)
                var_858 = _mm_shuffle_ps(_mm_unpackhi_ps(arg8, zmm0), 
                    _mm_shuffle_ps(zmm2, arg5, 0x22), 0x24)
                arg7 = _mm_unpacklo_epi32(arg7, _mm_shuffle_epi32(zmm0, 0xe7)[0].q)
                var_7e8.o = _mm_shuffle_ps(arg7, 
                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg7, arg5, 0xf4), 0x23), 0x24)
                int64_t rax_28 = *(arg4 + rdi_7 + 0x10)
                int64_t rcx_63 = *(arg4 + rdi_7 + 0x2c)
                int64_t rsi_7 = *(arg4 + rdi_7 + 0x48)
                int64_t rdi_8 = *(arg4 + rdi_7 + 0x64)
                arg5 = _mm_unpacklo_epi32(zx.o(rsi_7.d), zx.o(rdi_8.d)[0].q)
                float var_7c8_2[0x4] = _mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(zx.o(rax_28.d), zx.o(rcx_63.d)[0].q), arg5.q)
                arg5 = _mm_unpacklo_epi32(zx.o((rsi_7 u>> 0x20).d), zx.o((rdi_8 u>> 0x20).d)[0].q)
                float var_8d8_2[0x4] = _mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(zx.o((rax_28 u>> 0x20).d), zx.o((rcx_63 u>> 0x20).d)[0].q), 
                    arg5.q)
                zmm0 = _mm_slli_epi32(*(arg2 + rbp_6), 6) & zmm15
                int64_t rax_31 = sx.q(zmm0[0])
                void* rbp_7 = arg3 + rax_31
                arg12 = *(arg3 + rax_31)
                int64_t rax_33 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
                void* rdi_10 = arg3 + rax_33
                arg12 = _mm_unpacklo_ps(arg12, (*(arg3 + rax_33)).q)
                int64_t rax_35 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
                void* rsi_9 = arg3 + rax_35
                arg5 = *(arg3 + rax_35)
                int64_t rax_37 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                void* r11_2 = arg3 + rax_37
                arg5 = _mm_unpacklo_ps(arg5, (*(arg3 + rax_37))[0].q)
                arg12 = arg12[0].q | arg5.q << 0x40
                zmm0 = zmm15 & data_142fc95e0
                float temp0_495[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbp_7), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rdi_10)).q)
                arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rsi_9), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + r11_2))[0].q)
                float var_938_5[0x4] = temp0_495[0].q | arg5.q << 0x40
                zmm0 = zmm15 & data_142fc95f0
                uint128_t var_7f8_2 = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbp_7), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_10))[0].q).q | _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rsi_9), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + r11_2))[0].q)[0].q << 0x40
                zmm0 = zmm15 & data_143442650
                uint128_t var_818_3 = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbp_7), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_10))[0].q).q | _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rsi_9), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + r11_2))[0].q)[0].q << 0x40
                zmm0 = zmm15 & data_143442660
                var_808.o = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbp_7), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_10))[0].q).q | _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rsi_9), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + r11_2))[0].q)[0].q << 0x40
                zmm0 = zmm15 & data_143442670
                float temp0_515[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbp_7), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_10))[0].q)
                float temp0_518[0x4] = _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rsi_9), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + r11_2))[0].q)
                arg11 = temp0_515[0].q | temp0_518[0].q << 0x40
                zmm0 = zmm15 & data_143442700
                float temp0_520[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbp_7), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_10))[0].q)
                float temp0_523[0x4] = _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rsi_9), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + r11_2))[0].q)
                arg6 = temp0_520[0].q | temp0_523[0].q << 0x40
                zmm0 = zmm15 & data_1434b2e20
                float temp0_525[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbp_7), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_10))[0].q)
                float temp0_528[0x4] = _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rsi_9), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + r11_2))[0].q)
                zmm2 = temp0_525[0].q | temp0_528[0].q << 0x40
                zmm0 = zmm15 & (*U"    $$$$((((,,,,000044448888<<<<")[0].o
                float (* rax_66)[0x4] = zx.q(zmm0[0])
                float (* rcx_65)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                float temp0_530[0x4] = _mm_unpacklo_ps(*(rax_66 + rbp_7), (*(rcx_65 + rdi_10))[0].q)
                float (* rax_67)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                float (* rcx_66)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                float temp0_533[0x4] = _mm_unpacklo_ps(*(rax_67 + rsi_9), (*(rcx_66 + r11_2))[0].q)
                zmm14 = temp0_530[0].q | temp0_533[0].q << 0x40
                zmm0 = zmm15 & (*U"    $$$$((((,,,,000044448888<<<<")[4].o
                float (* rax_68)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                float temp0_535[0x4] =
                    _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbp_7), (*(rax_68 + rdi_10))[0].q)
                float (* rax_69)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                float (* rcx_68)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                float temp0_538[0x4] = _mm_unpacklo_ps(*(rax_69 + rsi_9), (*(rcx_68 + r11_2))[0].q)
                arg13 = temp0_535[0].q | temp0_538[0].q << 0x40
                zmm0 = zmm15 & (*U"    $$$$((((,,,,000044448888<<<<")[8].o
                float (* rax_70)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                float temp0_540[0x4] =
                    _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbp_7), (*(rax_70 + rdi_10))[0].q)
                float (* rax_71)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                float (* rcx_70)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                float temp0_543[0x4] = _mm_unpacklo_ps(*(rax_71 + rsi_9), (*(rcx_70 + r11_2))[0].q)
                zmm8 = temp0_540[0].q | temp0_543[0].q << 0x40
                zmm0 = zmm15 & (*U"    $$$$((((,,,,000044448888<<<<")[0xc].o
                float (* rax_72)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                float temp0_545[0x4] =
                    _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbp_7), (*(rax_72 + rdi_10))[0].q)
                float (* rax_73)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                float (* rcx_72)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                float temp0_548[0x4] = _mm_unpacklo_ps(*(rax_73 + rsi_9), (*(rcx_72 + r11_2))[0].q)
                arg10 = temp0_545[0].q | temp0_548[0].q << 0x40
                arg7 = zmm15 & (*U"    $$$$((((,,,,000044448888<<<<")[0x10].o
                uint128_t* rax_74 = zx.q(_mm_shuffle_epi32(arg7, 0xe5)[0])
                float temp0_550[0x4] =
                    _mm_unpacklo_ps(*(zx.q(arg7[0]) + rbp_7), (*(rax_74 + rdi_10)).q)
                uint128_t* rax_75 = zx.q(_mm_shuffle_epi32(arg7, 0x4e).d)
                float (* rcx_74)[0x4] = zx.q(_mm_shuffle_epi32(arg7, 0xe7).d)
                arg5 = _mm_unpacklo_ps(*(rax_75 + rsi_9), (*(rcx_74 + r11_2))[0].q)
                zmm0 = temp0_550[0].q | arg5.q << 0x40
                arg5 = zmm15 & (*U"    $$$$((((,,,,000044448888<<<<")[0x14].o
                uint32_t (* rax_76)[0x4] = zx.q(_mm_shuffle_epi32(arg5, 0xe5)[0])
                float temp0_555[0x4] =
                    _mm_unpacklo_ps(*(zx.q(arg5.d) + rbp_7), (*(rax_76 + rdi_10))[0].q)
                uint128_t* rax_77 = zx.q(_mm_shuffle_epi32(arg5, 0x4e)[0])
                uint32_t (* rcx_76)[0x4] = zx.q(_mm_shuffle_epi32(arg5, 0xe7).d)
                arg5 = _mm_unpacklo_ps(*(rax_77 + rsi_9), (*(rcx_76 + r11_2))[0].q)
                arg7 = temp0_555[0].q | arg5.q << 0x40
                arg5 = zmm15 & (*U"    $$$$((((,,,,000044448888<<<<")[0x18].o
                uint32_t (* rax_78)[0x4] = zx.q(_mm_shuffle_epi32(arg5, 0xe5)[0])
                float temp0_560[0x4] =
                    _mm_unpacklo_ps(*(zx.q(arg5.d) + rbp_7), (*(rax_78 + rdi_10))[0].q)
                uint128_t* rax_79 = zx.q(_mm_shuffle_epi32(arg5, 0x4e)[0])
                uint32_t (* rcx_78)[0x4] = zx.q(_mm_shuffle_epi32(arg5, 0xe7).d)
                arg5 = _mm_unpacklo_ps(*(rax_79 + rsi_9), (*(rcx_78 + r11_2))[0].q)
                arg14 = temp0_560[0].q | arg5.q << 0x40
                float var_848_2[0x4] = zmm15
                zmm15 &= (*U"    $$$$((((,,,,000044448888<<<<")[0x1c].o
                float (* rax_80)[0x4] = zx.q(_mm_shuffle_epi32(zmm15, 0xe5)[0])
                arg8 = _mm_unpacklo_ps(*(zx.q(zmm15[0]) + rbp_7), (*(rax_80 + rdi_10))[0].q)
                uint128_t* rax_81 = zx.q(_mm_shuffle_epi32(zmm15, 0x4e)[0])
                float (* rcx_80)[0x4] = zx.q(_mm_shuffle_epi32(zmm15, 0xe7).d)
                arg5 = _mm_unpacklo_ps(*(rax_81 + rsi_9), (*(rcx_80 + r11_2))[0].q)
                arg8 = arg8[0].q | arg5.q << 0x40
                uint32_t var_3e8[0x4] = arg12
                uint128_t var_3d8 = var_938_5
                uint128_t var_3c8 = var_7f8_2
                uint128_t var_3b8 = var_818_3
                uint128_t var_3a8_1 = var_808.o
                float var_398_1[0x4] = arg11
                float var_388_1[0x4] = arg6
                float var_378_1[0x4] = zmm2
                float var_368_1[0x4] = zmm14
                float var_358_1[0x4] = arg13
                float var_348_1[0x4] = zmm8
                float var_338_1[0x4] = arg10
                float var_328_1[0x4] = zmm0
                float var_318_1[0x4] = arg7
                float var_308_1[0x4] = arg14
                uint32_t var_2f8_1[0x4] = arg8
                float var_938_6[0x4] = (*arg15)[9]
                arg11 = (*arg15)[0xd]
                arg13 = (*arg15)[2]
                zmm14 = (*arg15)[3]
                arg14 = (*arg15)[6]
                zmm15 = (*arg15)[0xa]
                arg8 = (*arg15)[0xe]
                arg10 = (*arg15)[7]
                zmm0 = (*arg15)[0xb]
                
                for (int64_t j = 0; j != 0x100; j += 0x40)
                    arg9 = *arg15
                    arg12 = arg15[1][0]
                    float temp0_569[0x4] = _mm_shuffle_ps(arg9, arg9, 0)
                    zmm10 = *(&var_3e8 + j)
                    arg7 = *(&var_3d8 + j)
                    arg6 = *(&var_3c8 + j)
                    zmm2 = *(&var_3b8 + j)
                    zmm8 = zx.o(0)
                    float temp0_571[0x4] = _mm_add_ps(_mm_mul_ps(temp0_569, zmm10), zmm8)
                    arg12 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg12, arg12, 0), arg7), temp0_571)
                    arg9 = arg15[2][0]
                    float temp0_577[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg9, arg9, 0), arg6), arg12)
                    arg5 = arg15[3][0]
                    *(&var_7b8 + j) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), zmm2), temp0_577)
                    arg5 = (*arg15)[1]
                    arg9 = (*arg15)[5]
                    arg5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), zmm10), zmm8)
                    float temp0_586[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg9, arg9, 0), arg7), arg5)
                    arg5 = var_938_6
                    arg5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), arg6), temp0_586)
                    *(&var_7a8 + j) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg11, arg11, 0), zmm2), arg5)
                    arg5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg13, arg13, 0), zmm10), zmm8)
                    float temp0_598[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg14, arg14, 0), arg7), arg5)
                    arg5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0), arg6), temp0_598)
                    *(&var_798 + j) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg8, arg8, 0), zmm2), arg5)
                    arg5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm10), zmm8)
                    float temp0_610[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg10, arg10, 0), arg7), arg5)
                    arg5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), arg6), temp0_610)
                    arg6 = (*arg15)[0xf]
                    *(&var_788 + j) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg6, arg6, 0), zmm2), arg5)
                
                arg5 = var_7b8.o
                uint128_t var_7f8_3 = arg5
                zmm0 = var_7a8
                uint32_t var_938_7[0x4] = zmm0
                arg8 = var_798
                uint32_t var_818_4[0x4] = arg8
                zmm10 = var_7e8.o
                float temp0_617[0x4] = __addps_xmmps_memps(zmm10, temp0_466)
                arg11 = data_142d3f640
                float temp0_618[0x4] = _mm_mul_ps(temp0_617, arg11)
                float temp0_619[0x4] = _mm_mul_ps(temp0_618, arg5)
                float temp0_620[0x4] = _mm_mul_ps(temp0_618, zmm0)
                arg5 = _mm_mul_ps(_mm_add_ps(var_828, var_7c8_2), arg11)
                float temp0_624[0x4] = _mm_add_ps(_mm_mul_ps(arg5, var_778), temp0_619)
                float temp0_626[0x4] = _mm_add_ps(_mm_mul_ps(arg5, var_768), temp0_620)
                float temp0_627[0x4] = _mm_mul_ps(temp0_618, arg8)
                arg8 = _mm_add_ps(_mm_mul_ps(arg5, var_758), temp0_627)
                float temp0_630[0x4] = __mulps_xmmps_memps(temp0_618, var_788)
                arg5 = _mm_add_ps(_mm_mul_ps(arg5, var_748), temp0_630)
                float temp0_634[0x4] = _mm_mul_ps(_mm_add_ps(var_858, var_8d8_2), arg11)
                arg11 = var_738
                float temp0_636[0x4] = _mm_add_ps(_mm_mul_ps(temp0_634, arg11), temp0_624)
                float temp0_638[0x4] = _mm_add_ps(_mm_mul_ps(temp0_634, var_728), temp0_626)
                float temp0_640[0x4] = _mm_add_ps(_mm_mul_ps(temp0_634, var_718), arg8)
                float temp0_642[0x4] = _mm_add_ps(_mm_mul_ps(temp0_634, var_708), arg5)
                float temp0_643[0x4] = __addps_xmmps_memps(temp0_636, var_6f8)
                float temp0_644[0x4] = __addps_xmmps_memps(temp0_638, var_6e8)
                float temp0_645[0x4] = __addps_xmmps_memps(temp0_640, var_6d8)
                float temp0_646[0x4] = __addps_xmmps_memps(temp0_642, var_6c8)
                var_7b8.o = var_778
                var_7a8 = var_768
                var_798 = var_758
                var_788 = var_748
                float var_5f8_2[0x4] = arg11
                float var_5e8_2[0x4] = var_728
                float var_5d8_2[0x4] = var_718
                uint32_t var_5c8_2[0x4] = var_708
                float temp0_647[0x4] = __subps_xmmps_memps(var_7c8_2, var_828)
                float temp0_648[0x4] = __subps_xmmps_memps(var_8d8_2, var_858)
                float temp0_649[0x4] = __subps_xmmps_memps(zmm10, temp0_466)
                float var_638_2[0x4] = temp0_643
                float var_628_2[0x4] = temp0_644
                float var_618_2[0x4] = temp0_645
                float var_608_2[0x4] = temp0_646
                arg5 = data_142d3f640
                float temp0_650[0x4] = _mm_mul_ps(temp0_649, arg5)
                float temp0_651[0x4] = _mm_mul_ps(var_7f8_3, temp0_650)
                arg8 = _mm_mul_ps(var_938_7, temp0_650)
                float temp0_653[0x4] = __mulps_xmmps_memps(temp0_650, var_818_4)
                float temp0_654[0x4] = _mm_mul_ps(temp0_647, arg5)
                zmm15 = arg5
                arg12 = _mm_mul_ps(var_778, temp0_654)
                float temp0_656[0x4] = _mm_mul_ps(var_768, temp0_654)
                float temp0_657[0x4] = _mm_mul_ps(temp0_654, var_758)
                arg5 = data_142d3f770
                arg9 = _mm_and_ps(temp0_651, arg5)
                arg12 = _mm_add_ps(_mm_and_ps(arg12, arg5), arg9)
                uint32_t temp0_661[0x4] = _mm_and_ps(arg8, arg5)
                float temp0_663[0x4] = _mm_add_ps(_mm_and_ps(temp0_656, arg5), temp0_661)
                zmm10 = _mm_and_ps(temp0_653, arg5)
                float temp0_666[0x4] = _mm_add_ps(_mm_and_ps(temp0_657, arg5), zmm10)
                float temp0_667[0x4] = _mm_mul_ps(temp0_648, zmm15)
                float temp0_668[0x4] = _mm_mul_ps(arg11, temp0_667)
                float temp0_669[0x4] = _mm_mul_ps(var_728, temp0_667)
                float temp0_670[0x4] = _mm_mul_ps(temp0_667, var_718)
                float temp0_672[0x4] = _mm_add_ps(_mm_and_ps(temp0_668, arg5), arg12)
                float temp0_674[0x4] = _mm_add_ps(_mm_and_ps(temp0_669, arg5), temp0_663)
                float temp0_676[0x4] = _mm_add_ps(_mm_and_ps(temp0_670, arg5), temp0_666)
                float temp0_677[0x4] = _mm_sub_ps(temp0_643, temp0_672)
                float temp0_678[0x4] = _mm_sub_ps(temp0_644, temp0_674)
                arg5 = _mm_sub_ps(temp0_645, temp0_676)
                var_8b8 = arg5
                float temp0_680[0x4] = _mm_add_ps(temp0_672, temp0_643)
                float temp0_681[0x4] = _mm_add_ps(temp0_674, temp0_644)
                float temp0_682[0x4] = _mm_add_ps(temp0_676, temp0_645)
                zmm14 = var_958_2 & data_142ed6810
                zmm0 = zx.o(0)
                zmm15 = var_848_2
                uint32_t temp0_684[0x4] =
                    _mm_slli_epi32(_mm_cmpeq_epi32(zmm14, zx.o(0)) & not.o(zmm15), 0x1f)
                char temp0_685 = _mm_movemask_ps(temp0_684)
                
                if (temp0_685 != 0)
                    arg12 = _mm_min_ps(var_878_2, temp0_677)
                    char temp0_688 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(zmm14, data_142d8f750)
                        ^ data_142d3f800)
                    char temp0_689 = temp0_688 & 1
                    
                    if (temp0_689 != 0)
                        zmm0 = var_8e8.o
                        zmm0[0] = arg12[0]
                        var_8e8.o = zmm0
                    
                    zmm8 = temp0_681
                    arg14 = temp0_678
                    float temp0_690[0x4] = _mm_min_ps(var_898_2, arg14)
                    
                    if (temp0_689 == 0)
                        arg11 = var_7d8_2
                        zmm0 = __minps_xmmps_memps(var_868_2, var_8b8)
                        
                        if (temp0_689 != 0)
                            goto label_1403627f7
                        
                        goto label_1403626cc
                    
                    zmm0 = var_968
                    zmm0[0] = temp0_690[0]
                    var_968 = zmm0
                    arg11 = var_7d8_2
                    zmm0 = __minps_xmmps_memps(var_868_2, var_8b8)
                    
                    if (temp0_689 != 0)
                    label_1403627f7:
                        arg5.d = zmm0[0]
                        var_948.o = arg5
                        arg13 = __maxps_xmmps_memps(var_888_2, temp0_680)
                        
                        if (temp0_689 == 0)
                            goto label_1403626e0
                        
                        goto label_14036281a
                    
                label_1403626cc:
                    arg13 = __maxps_xmmps_memps(var_888_2, temp0_680)
                    
                    if (temp0_689 == 0)
                    label_1403626e0:
                        arg7 = _mm_max_ps(var_8c8_2, zmm8)
                        
                        if (temp0_689 != 0)
                            goto label_14036283b
                        
                        goto label_1403626ef
                    
                label_14036281a:
                    arg5.d = arg13[0]
                    var_928_1 = arg5
                    arg7 = _mm_max_ps(var_8c8_2, zmm8)
                    
                    if (temp0_689 != 0)
                    label_14036283b:
                        arg5.d = arg7[0]
                        var_8f8.o = arg5
                        arg5 = __maxps_xmmps_memps(var_908_1, temp0_682)
                        
                        if (temp0_689 == 0)
                            goto label_14036266f
                        
                        goto label_14036285c
                    
                label_1403626ef:
                    arg5 = __maxps_xmmps_memps(var_908_1, temp0_682)
                    
                    if (temp0_689 == 0)
                    label_14036266f:
                        
                        if (temp0_689 != 0)
                            goto label_140362870
                        
                        goto label_140362703
                    
                label_14036285c:
                    var_918_1[0] = arg5.d
                    bool cond:87_1
                    bool cond:88_1
                    bool cond:103_1
                    bool cond:104_1
                    bool cond:119_1
                    bool cond:120_1
                    bool cond:139_1
                    bool cond:140_1
                    bool cond:159_1
                    bool cond:160_1
                    bool cond:176_1
                    bool cond:177_1
                    
                    if (temp0_689 != 0)
                    label_140362870:
                        arg11[0] = var_958_2[0]
                        char temp11_1 = temp0_688 & 2
                        cond:87_1 = temp11_1 == 0
                        cond:88_1 = temp11_1 != 0
                        cond:103_1 = temp11_1 != 0
                        cond:104_1 = temp11_1 == 0
                        cond:119_1 = temp11_1 == 0
                        cond:120_1 = temp11_1 != 0
                        cond:139_1 = temp11_1 != 0
                        cond:140_1 = temp11_1 == 0
                        cond:159_1 = temp11_1 == 0
                        cond:160_1 = temp11_1 != 0
                        cond:176_1 = temp11_1 != 0
                        cond:177_1 = temp11_1 == 0
                        
                        if (temp11_1 == 0)
                            goto label_14036270d
                        
                        goto label_140362883
                    
                label_140362703:
                    char temp10_1 = temp0_688 & 2
                    cond:87_1 = temp10_1 == 0
                    cond:88_1 = temp10_1 != 0
                    cond:103_1 = temp10_1 != 0
                    cond:104_1 = temp10_1 == 0
                    cond:119_1 = temp10_1 == 0
                    cond:120_1 = temp10_1 != 0
                    cond:139_1 = temp10_1 != 0
                    cond:140_1 = temp10_1 == 0
                    cond:159_1 = temp10_1 == 0
                    cond:160_1 = temp10_1 != 0
                    cond:176_1 = temp10_1 != 0
                    cond:177_1 = temp10_1 == 0
                    
                    if (temp10_1 == 0)
                    label_14036270d:
                        
                        if (cond:88_1)
                            goto label_1403628a4
                        
                        goto label_140362713
                    
                label_140362883:
                    zmm2 = var_8e8.o
                    var_8e8.o = _mm_shuffle_ps(_mm_shuffle_ps(arg12, zmm2, 1), zmm2, 0xe2)
                    
                    if (not(cond:87_1))
                    label_1403628a4:
                        zmm2 = var_968
                        var_968 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_690, zmm2, 1), zmm2, 0xe2)
                        
                        if (cond:104_1)
                            goto label_140362719
                        
                        goto label_1403628bd
                    
                label_140362713:
                    
                    if (not(cond:103_1))
                    label_140362719:
                        
                        if (cond:120_1)
                            goto label_1403628e6
                        
                        goto label_14036271f
                    
                label_1403628bd:
                    zmm2 = var_948.o
                    var_948.o = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, zmm2, 1), zmm2, 0xe2)
                    
                    if (not(cond:119_1))
                    label_1403628e6:
                        var_928_1 =
                            _mm_shuffle_ps(_mm_shuffle_ps(arg13, var_928_1, 1), var_928_1, 0xe2)
                        
                        if (cond:140_1)
                            goto label_140362725
                        
                        goto label_1403628f4
                    
                label_14036271f:
                    
                    if (cond:139_1)
                    label_1403628f4:
                        zmm2 = var_8f8.o
                        var_8f8.o = _mm_shuffle_ps(_mm_shuffle_ps(arg7, zmm2, 1), zmm2, 0xe2)
                        
                        if (not(cond:159_1))
                        label_14036291f:
                            var_918_1 =
                                _mm_shuffle_ps(_mm_shuffle_ps(arg5, var_918_1, 1), var_918_1, 0xe2)
                            
                            if (cond:177_1)
                                goto label_140362731
                            
                            goto label_140362939
                    else
                    label_140362725:
                        
                        if (cond:160_1)
                            goto label_14036291f
                    
                    bool cond:208_1
                    bool cond:209_1
                    bool cond:224_1
                    bool cond:225_1
                    bool cond:240_1
                    bool cond:241_1
                    bool cond:260_1
                    bool cond:261_1
                    bool cond:280_1
                    bool cond:281_1
                    bool cond:296_1
                    bool cond:297_1
                    
                    if (not(cond:176_1))
                    label_140362731:
                        char temp30_1 = temp0_688 & 4
                        cond:208_1 = temp30_1 != 0
                        cond:209_1 = temp30_1 == 0
                        cond:224_1 = temp30_1 == 0
                        cond:225_1 = temp30_1 != 0
                        cond:240_1 = temp30_1 != 0
                        cond:241_1 = temp30_1 == 0
                        cond:260_1 = temp30_1 == 0
                        cond:261_1 = temp30_1 != 0
                        cond:280_1 = temp30_1 != 0
                        cond:281_1 = temp30_1 == 0
                        cond:296_1 = temp30_1 == 0
                        cond:297_1 = temp30_1 != 0
                        
                        if (temp30_1 != 0)
                            goto label_14036294b
                        
                        goto label_14036273b
                    
                label_140362939:
                    arg11 = _mm_shuffle_ps(_mm_shuffle_ps(var_958_2, arg11, 1), arg11, 0xe2)
                    char temp29_1 = temp0_688 & 4
                    cond:208_1 = temp29_1 != 0
                    cond:209_1 = temp29_1 == 0
                    cond:224_1 = temp29_1 == 0
                    cond:225_1 = temp29_1 != 0
                    cond:240_1 = temp29_1 != 0
                    cond:241_1 = temp29_1 == 0
                    cond:260_1 = temp29_1 == 0
                    cond:261_1 = temp29_1 != 0
                    cond:280_1 = temp29_1 != 0
                    cond:281_1 = temp29_1 == 0
                    cond:296_1 = temp29_1 == 0
                    cond:297_1 = temp29_1 != 0
                    
                    if (temp29_1 != 0)
                    label_14036294b:
                        zmm2 = var_8e8.o
                        var_8e8.o = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg12, zmm2, 0x32), 0x84)
                        
                        if (cond:209_1)
                            goto label_140362741
                        
                        goto label_14036296c
                    
                label_14036273b:
                    
                    if (not(cond:208_1))
                    label_140362741:
                        
                        if (cond:225_1)
                            goto label_140362985
                        
                        goto label_140362747
                    
                label_14036296c:
                    zmm2 = var_968
                    var_968 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(temp0_690, zmm2, 0x32), 0x84)
                    
                    if (not(cond:224_1))
                    label_140362985:
                        zmm2 = var_948.o
                        var_948.o = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm0, zmm2, 0x32), 0x84)
                        
                        if (cond:241_1)
                            goto label_14036274d
                        
                        goto label_1403629ae
                    
                label_140362747:
                    
                    if (not(cond:240_1))
                    label_14036274d:
                        
                        if (cond:261_1)
                            goto label_1403629bc
                        
                        goto label_140362753
                    
                label_1403629ae:
                    var_928_1 =
                        _mm_shuffle_ps(var_928_1, _mm_shuffle_ps(arg13, var_928_1, 0x32), 0x84)
                    
                    if (not(cond:260_1))
                    label_1403629bc:
                        zmm2 = var_8f8.o
                        var_8f8.o = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg7, zmm2, 0x32), 0x84)
                        
                        if (cond:281_1)
                            goto label_140362759
                        
                        goto label_1403629e4
                    
                label_140362753:
                    
                    if (not(cond:280_1))
                    label_140362759:
                        
                        if (cond:297_1)
                            goto label_1403629f9
                        
                        goto label_14036275f
                    
                label_1403629e4:
                    var_918_1 =
                        _mm_shuffle_ps(var_918_1, _mm_shuffle_ps(arg5, var_918_1, 0x32), 0x84)
                    bool cond:328_1
                    bool cond:329_1
                    bool cond:344_1
                    bool cond:359_1
                    bool cond:360_1
                    bool cond:379_1
                    bool cond:380_1
                    bool cond:399_1
                    bool cond:400_1
                    bool cond:417_1
                    bool cond:418_1
                    
                    if (not(cond:296_1))
                    label_1403629f9:
                        arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(var_958_2, arg11, 0x32), 0x84)
                        char temp50_1 = temp0_688 & 8
                        cond:328_1 = temp50_1 == 0
                        cond:329_1 = temp50_1 != 0
                        cond:344_1 = temp50_1 != 0
                        cond:359_1 = temp50_1 == 0
                        cond:360_1 = temp50_1 != 0
                        cond:379_1 = temp50_1 != 0
                        cond:380_1 = temp50_1 == 0
                        cond:399_1 = temp50_1 == 0
                        cond:400_1 = temp50_1 != 0
                        cond:417_1 = temp50_1 != 0
                        cond:418_1 = temp50_1 == 0
                        
                        if (temp50_1 != 0)
                            goto label_140362769
                        
                        goto label_140362a08
                    
                label_14036275f:
                    char temp49_1 = temp0_688 & 8
                    cond:328_1 = temp49_1 == 0
                    cond:329_1 = temp49_1 != 0
                    cond:344_1 = temp49_1 != 0
                    cond:359_1 = temp49_1 == 0
                    cond:360_1 = temp49_1 != 0
                    cond:379_1 = temp49_1 != 0
                    cond:380_1 = temp49_1 == 0
                    cond:399_1 = temp49_1 == 0
                    cond:400_1 = temp49_1 != 0
                    cond:417_1 = temp49_1 != 0
                    cond:418_1 = temp49_1 == 0
                    
                    if (temp49_1 == 0)
                    label_140362a08:
                        zmm2 = zx.o(0)
                        arg10 = var_8f8.o
                        arg12 = var_8e8.o
                        
                        if (not(cond:328_1))
                            arg6 = var_968
                            var_968 =
                                _mm_shuffle_ps(arg6, _mm_shuffle_ps(temp0_690, arg6, 0x23), 0x24)
                    else
                    label_140362769:
                        zmm2 = var_8e8.o
                        arg12 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg12, zmm2, 0x23), 0x24)
                        zmm2 = zx.o(0)
                        arg10 = var_8f8.o
                        
                        if (cond:329_1)
                            arg6 = var_968
                            var_968 =
                                _mm_shuffle_ps(arg6, _mm_shuffle_ps(temp0_690, arg6, 0x23), 0x24)
                    
                    if (not(cond:344_1))
                        if (cond:360_1)
                            goto label_140362a62
                        
                        goto label_140362a2f
                    
                    arg6 = var_948.o
                    var_948.o = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm0, arg6, 0x23), 0x24)
                    
                    if (not(cond:359_1))
                    label_140362a62:
                        var_928_1 =
                            _mm_shuffle_ps(var_928_1, _mm_shuffle_ps(arg13, var_928_1, 0x23), 0x24)
                        
                        if (cond:380_1)
                            goto label_140362a31
                        
                        goto label_140362a6d
                    
                label_140362a2f:
                    
                    if (not(cond:379_1))
                    label_140362a31:
                        
                        if (cond:400_1)
                            goto label_140362a78
                        
                        goto label_140362a33
                    
                label_140362a6d:
                    arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(arg7, arg10, 0x23), 0x24)
                    
                    if (not(cond:399_1))
                    label_140362a78:
                        arg5 = _mm_shuffle_ps(arg5, var_918_1, 0x23)
                        var_918_1 = _mm_shuffle_ps(var_918_1, arg5, 0x24)
                        
                        if (cond:418_1)
                            goto label_140362a35
                        
                        goto label_140362a91
                    
                label_140362a33:
                    
                    if (cond:417_1)
                    label_140362a91:
                        arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(var_958_2, arg11, 0x23), 0x24)
                        
                        if (temp0_463 == temp0_685)
                            goto label_140362bd0
                    else
                    label_140362a35:
                        
                        if (temp0_463 == temp0_685)
                            goto label_140362bd0
                    
                    zmm0 = _mm_srai_epi32(temp0_684, 0x1f)
                    zmm15 = var_848_2
                    goto label_140362ab2
                
                zmm2 = zx.o(0)
                arg11 = var_7d8_2
                arg10 = var_8f8.o
                arg12 = var_8e8.o
                zmm8 = temp0_681
                arg14 = temp0_678
            label_140362ab2:
                zmm14 = _mm_cmpeq_epi32(zmm14, zmm2)
                zmm15 = _mm_slli_epi32(zmm15 & zmm14, 0x1f)
                char rbp_4
                bool cond:18_1
                bool cond:27_1
                bool cond:28_1
                bool cond:40_1
                bool cond:41_1
                bool cond:53_1
                bool cond:54_1
                bool cond:68_1
                bool cond:69_1
                bool cond:83_1
                bool cond:84_1
                
                if (_mm_movemask_ps(zmm15) == 0)
                label_140362bd0:
                    zmm14 = var_8c8_2
                    arg13 = var_888_2
                    arg14 = var_868_2
                    zmm10 = var_898_2
                    zmm8 = var_878_2
                    arg9 = var_918_1
                    arg7 = var_968
                    arg6 = var_948.o
                    arg8 = var_928_1
                    rbp_4 = temp0_463
                    char temp2_1 = rbp_4 & 1
                    cond:18_1 = temp2_1 != 0
                    cond:27_1 = temp2_1 == 0
                    cond:28_1 = temp2_1 != 0
                    cond:40_1 = temp2_1 != 0
                    cond:41_1 = temp2_1 == 0
                    cond:53_1 = temp2_1 == 0
                    cond:54_1 = temp2_1 != 0
                    cond:68_1 = temp2_1 != 0
                    cond:69_1 = temp2_1 == 0
                    cond:83_1 = temp2_1 == 0
                    cond:84_1 = temp2_1 != 0
                    
                    if (temp2_1 != 0)
                        zmm8[0] = arg12[0]
                else
                    char temp0_745 = _mm_movemask_ps(zmm14)
                    char temp3_1 = temp0_745 & 1
                    
                    if (temp3_1 == 0)
                        arg13 = var_888_2
                        arg9 = var_918_1
                        
                        if (temp3_1 != 0)
                            goto label_1403617d0
                        
                        goto label_140362ad2
                    
                    arg12[0] = temp0_677[0]
                    arg13 = var_888_2
                    arg9 = var_918_1
                    
                    if (temp3_1 != 0)
                    label_1403617d0:
                        arg5.d = arg14[0]
                        var_968 = arg5
                        
                        if (temp3_1 == 0)
                            goto label_140362ad2_1
                        
                        goto label_1403617ec
                    
                label_140362ad2:
                    
                    if (temp3_1 == 0)
                    label_140362ad2_1:
                        
                        if (temp3_1 != 0)
                            goto label_140361805
                        
                        goto label_140362ad2_2
                    
                label_1403617ec:
                    arg5.d = var_8b8[0]
                    var_948.o = arg5
                    
                    if (temp3_1 != 0)
                    label_140361805:
                        arg5.d = temp0_680[0]
                        var_928_1 = arg5
                        
                        if (temp3_1 == 0)
                            goto label_140362ad2_3
                        
                        goto label_140361814
                    
                label_140362ad2_2:
                    
                    if (temp3_1 != 0)
                    label_140361814:
                        arg10[0] = zmm8[0]
                        
                        if (temp3_1 != 0)
                        label_14036181f:
                            arg5 = temp0_682
                            arg9[0] = arg5.d
                            
                            if (temp3_1 == 0)
                                goto label_140362b0e
                            
                            goto label_140361831
                    else
                    label_140362ad2_3:
                        
                        if (temp3_1 != 0)
                            goto label_14036181f
                    
                    bool cond:117_1
                    bool cond:118_1
                    bool cond:137_1
                    bool cond:138_1
                    bool cond:157_1
                    bool cond:158_1
                    bool cond:174_1
                    bool cond:175_1
                    bool cond:190_1
                    bool cond:191_1
                    bool cond:206_1
                    bool cond:207_1
                    
                    if (temp3_1 == 0)
                    label_140362b0e:
                        char temp17_1 = temp0_745 & 2
                        cond:117_1 = temp17_1 != 0
                        cond:118_1 = temp17_1 == 0
                        cond:137_1 = temp17_1 == 0
                        cond:138_1 = temp17_1 != 0
                        cond:157_1 = temp17_1 != 0
                        cond:158_1 = temp17_1 == 0
                        cond:174_1 = temp17_1 == 0
                        cond:175_1 = temp17_1 != 0
                        cond:190_1 = temp17_1 != 0
                        cond:191_1 = temp17_1 == 0
                        cond:206_1 = temp17_1 == 0
                        cond:207_1 = temp17_1 != 0
                        
                        if (temp17_1 != 0)
                            goto label_140361851
                        
                        goto label_140362b18
                    
                label_140361831:
                    arg5 = 1
                    arg11[0] = 1
                    char temp16_1 = temp0_745 & 2
                    cond:117_1 = temp16_1 != 0
                    cond:118_1 = temp16_1 == 0
                    cond:137_1 = temp16_1 == 0
                    cond:138_1 = temp16_1 != 0
                    cond:157_1 = temp16_1 != 0
                    cond:158_1 = temp16_1 == 0
                    cond:174_1 = temp16_1 == 0
                    cond:175_1 = temp16_1 != 0
                    cond:190_1 = temp16_1 != 0
                    cond:191_1 = temp16_1 == 0
                    cond:206_1 = temp16_1 == 0
                    cond:207_1 = temp16_1 != 0
                    
                    if (temp16_1 != 0)
                    label_140361851:
                        arg5 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_677, arg12, 1), arg12, 0xe2)
                        arg12 = arg5
                        
                        if (cond:118_1)
                            goto label_140362b1e
                        
                        goto label_140361864
                    
                label_140362b18:
                    
                    if (not(cond:117_1))
                    label_140362b1e:
                        
                        if (cond:138_1)
                            goto label_140361882
                        
                        goto label_140362b24
                    
                label_140361864:
                    zmm2 = var_968
                    arg5 = _mm_shuffle_ps(_mm_shuffle_ps(arg14, zmm2, 1), zmm2, 0xe2)
                    var_968 = arg5
                    
                    if (not(cond:137_1))
                    label_140361882:
                        zmm2 = var_948.o
                        arg5 = _mm_shuffle_ps(_mm_shuffle_ps(var_8b8, zmm2, 1), zmm2, 0xe2)
                        var_948.o = arg5
                        
                        if (cond:158_1)
                            goto label_140362b2a
                        
                        goto label_1403618a8
                    
                label_140362b24:
                    
                    if (cond:157_1)
                    label_1403618a8:
                        arg5 =
                            _mm_shuffle_ps(_mm_shuffle_ps(temp0_680, var_928_1, 1), var_928_1, 0xe2)
                        var_928_1 = arg5
                        
                        if (not(cond:174_1))
                        label_1403618bf:
                            arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, arg10, 1), arg10, 0xe2)
                            arg10 = arg5
                            
                            if (cond:191_1)
                                goto label_140362b36
                            
                            goto label_1403618d8
                    else
                    label_140362b2a:
                        
                        if (cond:175_1)
                            goto label_1403618bf
                    
                    if (not(cond:190_1))
                    label_140362b36:
                        zmm2 = 1
                        
                        if (cond:207_1)
                            goto label_1403618f3
                        
                        goto label_140362b41
                    
                label_1403618d8:
                    arg5 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_682, arg9, 1), arg9, 0xe2)
                    arg9 = arg5
                    zmm2 = 1
                    bool cond:238_1
                    bool cond:239_1
                    bool cond:258_1
                    bool cond:259_1
                    bool cond:278_1
                    bool cond:279_1
                    bool cond:294_1
                    bool cond:295_1
                    bool cond:310_1
                    bool cond:311_1
                    bool cond:326_1
                    bool cond:327_1
                    
                    if (not(cond:206_1))
                    label_1403618f3:
                        arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg11, 0), arg11, 0xe2)
                        arg11 = arg5
                        char temp36_1 = temp0_745 & 4
                        cond:238_1 = temp36_1 == 0
                        cond:239_1 = temp36_1 != 0
                        cond:258_1 = temp36_1 != 0
                        cond:259_1 = temp36_1 == 0
                        cond:278_1 = temp36_1 == 0
                        cond:279_1 = temp36_1 != 0
                        cond:294_1 = temp36_1 != 0
                        cond:295_1 = temp36_1 == 0
                        cond:310_1 = temp36_1 == 0
                        cond:311_1 = temp36_1 != 0
                        cond:326_1 = temp36_1 != 0
                        cond:327_1 = temp36_1 == 0
                        
                        if (temp36_1 == 0)
                            goto label_140362b4b
                        
                        goto label_14036190a
                    
                label_140362b41:
                    char temp35_1 = temp0_745 & 4
                    cond:238_1 = temp35_1 == 0
                    cond:239_1 = temp35_1 != 0
                    cond:258_1 = temp35_1 != 0
                    cond:259_1 = temp35_1 == 0
                    cond:278_1 = temp35_1 == 0
                    cond:279_1 = temp35_1 != 0
                    cond:294_1 = temp35_1 != 0
                    cond:295_1 = temp35_1 == 0
                    cond:310_1 = temp35_1 == 0
                    cond:311_1 = temp35_1 != 0
                    cond:326_1 = temp35_1 != 0
                    cond:327_1 = temp35_1 == 0
                    
                    if (temp35_1 == 0)
                    label_140362b4b:
                        
                        if (cond:239_1)
                            goto label_14036191e
                        
                        goto label_140362b51
                    
                label_14036190a:
                    arg5 = _mm_shuffle_ps(temp0_677, arg12, 0x32)
                    arg12 = _mm_shuffle_ps(arg12, arg5, 0x84)
                    
                    if (not(cond:238_1))
                    label_14036191e:
                        arg6 = var_968
                        arg5 = _mm_shuffle_ps(arg14, arg6, 0x32)
                        var_968 = _mm_shuffle_ps(arg6, arg5, 0x84)
                        
                        if (cond:259_1)
                            goto label_140362b57
                        
                        goto label_14036193c
                    
                label_140362b51:
                    
                    if (not(cond:258_1))
                    label_140362b57:
                        
                        if (cond:279_1)
                            goto label_14036195e
                        
                        goto label_140362b5d
                    
                label_14036193c:
                    arg6 = var_948.o
                    arg5 = _mm_shuffle_ps(var_8b8, arg6, 0x32)
                    var_948.o = _mm_shuffle_ps(arg6, arg5, 0x84)
                    
                    if (not(cond:278_1))
                    label_14036195e:
                        arg5 = _mm_shuffle_ps(temp0_680, var_928_1, 0x32)
                        var_928_1 = _mm_shuffle_ps(var_928_1, arg5, 0x84)
                        
                        if (cond:295_1)
                            goto label_140362b63
                        
                        goto label_140361975
                    
                label_140362b5d:
                    
                    if (cond:294_1)
                    label_140361975:
                        arg5 = _mm_shuffle_ps(zmm8, arg10, 0x32)
                        arg10 = _mm_shuffle_ps(arg10, arg5, 0x84)
                        
                        if (not(cond:310_1))
                        label_14036198b:
                            arg5 = _mm_shuffle_ps(temp0_682, arg9, 0x32)
                            arg9 = _mm_shuffle_ps(arg9, arg5, 0x84)
                            
                            if (cond:327_1)
                                goto label_140362b6f
                            
                            goto label_14036199d
                    else
                    label_140362b63:
                        
                        if (cond:311_1)
                            goto label_14036198b
                    
                    bool cond:357_1
                    bool cond:358_1
                    bool cond:377_1
                    bool cond:378_1
                    bool cond:397_1
                    bool cond:398_1
                    bool cond:415_1
                    bool cond:416_1
                    bool cond:430_1
                    bool cond:445_1
                    bool cond:446_1
                    
                    if (not(cond:326_1))
                    label_140362b6f:
                        char temp56_1 = temp0_745 & 8
                        cond:357_1 = temp56_1 != 0
                        cond:358_1 = temp56_1 == 0
                        cond:377_1 = temp56_1 == 0
                        cond:378_1 = temp56_1 != 0
                        cond:397_1 = temp56_1 == 0
                        cond:398_1 = temp56_1 != 0
                        cond:415_1 = temp56_1 == 0
                        cond:416_1 = temp56_1 != 0
                        cond:430_1 = temp56_1 != 0
                        cond:445_1 = temp56_1 != 0
                        cond:446_1 = temp56_1 == 0
                        
                        if (temp56_1 != 0)
                            goto label_1403619b6
                        
                        goto label_140362b79
                    
                label_14036199d:
                    arg5 = _mm_shuffle_ps(zmm2, arg11, 0x30)
                    arg11 = _mm_shuffle_ps(arg11, arg5, 0x84)
                    char temp55_1 = temp0_745 & 8
                    cond:357_1 = temp55_1 != 0
                    cond:358_1 = temp55_1 == 0
                    cond:377_1 = temp55_1 == 0
                    cond:378_1 = temp55_1 != 0
                    cond:397_1 = temp55_1 == 0
                    cond:398_1 = temp55_1 != 0
                    cond:415_1 = temp55_1 == 0
                    cond:416_1 = temp55_1 != 0
                    cond:430_1 = temp55_1 != 0
                    cond:445_1 = temp55_1 != 0
                    cond:446_1 = temp55_1 == 0
                    
                    if (temp55_1 != 0)
                    label_1403619b6:
                        arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(temp0_677, arg12, 0x23), 0x24)
                        arg7 = var_968
                        arg6 = var_948.o
                        
                        if (cond:358_1)
                            goto label_140362b88
                        
                        goto label_1403619cf
                    
                label_140362b79:
                    arg7 = var_968
                    arg6 = var_948.o
                    
                    if (cond:357_1)
                    label_1403619cf:
                        arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(arg14, arg7, 0x23), 0x24)
                        
                        if (not(cond:377_1))
                        label_1403619e2:
                            arg5 = _mm_shuffle_ps(var_8b8, arg6, 0x23)
                            arg6 = _mm_shuffle_ps(arg6, arg5, 0x24)
                            
                            if (cond:398_1)
                                goto label_140362b94
                            
                            goto label_1403619f0
                    else
                    label_140362b88:
                        
                        if (cond:378_1)
                            goto label_1403619e2
                    
                    if (cond:397_1)
                    label_1403619f0:
                        zmm14 = var_8c8_2
                        arg14 = var_868_2
                        arg8 = var_928_1
                        
                        if (not(cond:415_1))
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm8, arg10, 0x23), 0x24)
                    else
                    label_140362b94:
                        arg8 = var_928_1
                        arg5 = _mm_shuffle_ps(temp0_680, arg8, 0x23)
                        arg8 = _mm_shuffle_ps(arg8, arg5, 0x24)
                        zmm14 = var_8c8_2
                        arg14 = var_868_2
                        
                        if (cond:416_1)
                            arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm8, arg10, 0x23), 0x24)
                    
                    zmm10 = var_898_2
                    zmm8 = var_878_2
                    
                    if (cond:430_1)
                        arg5 = _mm_shuffle_ps(temp0_682, arg9, 0x23)
                        arg9 = _mm_shuffle_ps(arg9, arg5, 0x24)
                        
                        if (cond:445_1)
                            arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(zmm2, arg11, 0x20), 0x24)
                    else if (not(cond:446_1))
                        arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(zmm2, arg11, 0x20), 0x24)
                    
                    zmm2 = zx.o(0)
                    _mm_movemask_ps(_mm_srai_epi32(zmm15, 0x1f) | zmm0)
                    rbp_4 = temp0_463
                    char temp70_1 = rbp_4 & 1
                    cond:18_1 = temp70_1 != 0
                    cond:27_1 = temp70_1 == 0
                    cond:28_1 = temp70_1 != 0
                    cond:40_1 = temp70_1 != 0
                    cond:41_1 = temp70_1 == 0
                    cond:53_1 = temp70_1 == 0
                    cond:54_1 = temp70_1 != 0
                    cond:68_1 = temp70_1 != 0
                    cond:69_1 = temp70_1 == 0
                    cond:83_1 = temp70_1 == 0
                    cond:84_1 = temp70_1 != 0
                    
                    if (temp70_1 != 0)
                        zmm8[0] = arg12[0]
                
                if (not(cond:18_1))
                    if (cond:28_1)
                        goto label_14036159b
                    
                    goto label_140362c2b
                
                zmm10[0] = arg7[0]
                
                if (not(cond:27_1))
                label_14036159b:
                    arg14[0] = arg6[0]
                    
                    if (cond:41_1)
                        goto label_140362c31
                    
                    goto label_1403615a6
                
            label_140362c2b:
                
                if (not(cond:40_1))
                label_140362c31:
                    
                    if (cond:54_1)
                        goto label_1403615b1
                    
                    goto label_140362c37
                
            label_1403615a6:
                arg13[0] = arg8[0]
                
                if (not(cond:53_1))
                label_1403615b1:
                    zmm14[0] = arg10[0]
                    
                    if (cond:69_1)
                        goto label_140362c3d
                    
                    goto label_1403615bc
                
            label_140362c37:
                
                if (not(cond:68_1))
                label_140362c3d:
                    
                    if (cond:84_1)
                        goto label_1403615d5
                    
                    goto label_140362c43
                
            label_1403615bc:
                zmm0 = var_908_1
                zmm0[0] = arg9[0]
                var_908_1 = zmm0
                bool cond:115_1
                bool cond:116_1
                bool cond:135_1
                bool cond:136_1
                bool cond:155_1
                bool cond:156_1
                bool cond:172_1
                bool cond:173_1
                bool cond:188_1
                bool cond:189_1
                bool cond:204_1
                bool cond:205_1
                
                if (not(cond:83_1))
                label_1403615d5:
                    var_958_2[0] = arg11[0]
                    char temp15_1 = rbp_4 & 2
                    cond:115_1 = temp15_1 == 0
                    cond:116_1 = temp15_1 != 0
                    cond:135_1 = temp15_1 != 0
                    cond:136_1 = temp15_1 == 0
                    cond:155_1 = temp15_1 == 0
                    cond:156_1 = temp15_1 != 0
                    cond:172_1 = temp15_1 != 0
                    cond:173_1 = temp15_1 == 0
                    cond:188_1 = temp15_1 == 0
                    cond:189_1 = temp15_1 != 0
                    cond:204_1 = temp15_1 != 0
                    cond:205_1 = temp15_1 == 0
                    
                    if (temp15_1 == 0)
                        goto label_140362c4d
                    
                    goto label_1403615f7
                
            label_140362c43:
                char temp14_1 = rbp_4 & 2
                cond:115_1 = temp14_1 == 0
                cond:116_1 = temp14_1 != 0
                cond:135_1 = temp14_1 != 0
                cond:136_1 = temp14_1 == 0
                cond:155_1 = temp14_1 == 0
                cond:156_1 = temp14_1 != 0
                cond:172_1 = temp14_1 != 0
                cond:173_1 = temp14_1 == 0
                cond:188_1 = temp14_1 == 0
                cond:189_1 = temp14_1 != 0
                cond:204_1 = temp14_1 != 0
                cond:205_1 = temp14_1 == 0
                
                if (temp14_1 == 0)
                label_140362c4d:
                    
                    if (cond:116_1)
                        goto label_14036160e
                    
                    goto label_140362c53
                
            label_1403615f7:
                zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(arg12, zmm8, 1), zmm8, 0xe2)
                
                if (not(cond:115_1))
                label_14036160e:
                    zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(arg7, zmm10, 1), zmm10, 0xe2)
                    
                    if (cond:136_1)
                        goto label_140362c59
                    
                    goto label_140361625
                
            label_140362c53:
                
                if (not(cond:135_1))
                label_140362c59:
                    
                    if (cond:156_1)
                        goto label_14036163c
                    
                    goto label_140362c5f
                
            label_140361625:
                arg14 = _mm_shuffle_ps(_mm_shuffle_ps(arg6, arg14, 1), arg14, 0xe2)
                
                if (not(cond:155_1))
                label_14036163c:
                    arg13 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, arg13, 1), arg13, 0xe2)
                    
                    if (cond:173_1)
                        goto label_140362c65
                    
                    goto label_140361653
                
            label_140362c5f:
                
                if (cond:172_1)
                label_140361653:
                    zmm14 = _mm_shuffle_ps(_mm_shuffle_ps(arg10, zmm14, 1), zmm14, 0xe2)
                    
                    if (not(cond:188_1))
                    label_140361660:
                        arg5 = var_908_1
                        var_908_1 = _mm_shuffle_ps(_mm_shuffle_ps(arg9, arg5, 1), arg5, 0xe2)
                        
                        if (cond:205_1)
                            goto label_140362c71
                        
                        goto label_14036167c
                else
                label_140362c65:
                    
                    if (cond:189_1)
                        goto label_140361660
                
                bool cond:236_1
                bool cond:237_1
                bool cond:256_1
                bool cond:257_1
                bool cond:276_1
                bool cond:277_1
                bool cond:292_1
                bool cond:293_1
                bool cond:308_1
                bool cond:309_1
                bool cond:324_1
                bool cond:325_1
                
                if (not(cond:204_1))
                label_140362c71:
                    char temp34_1 = rbp_4 & 4
                    cond:236_1 = temp34_1 != 0
                    cond:237_1 = temp34_1 == 0
                    cond:256_1 = temp34_1 == 0
                    cond:257_1 = temp34_1 != 0
                    cond:276_1 = temp34_1 != 0
                    cond:277_1 = temp34_1 == 0
                    cond:292_1 = temp34_1 == 0
                    cond:293_1 = temp34_1 != 0
                    cond:308_1 = temp34_1 != 0
                    cond:309_1 = temp34_1 == 0
                    cond:324_1 = temp34_1 == 0
                    cond:325_1 = temp34_1 != 0
                    
                    if (temp34_1 != 0)
                        goto label_1403616a1
                    
                    goto label_140362c7b
                
            label_14036167c:
                arg5 = var_958_2
                var_958_2 = _mm_shuffle_ps(_mm_shuffle_ps(arg11, arg5, 1), arg5, 0xe2)
                char temp33_1 = rbp_4 & 4
                cond:236_1 = temp33_1 != 0
                cond:237_1 = temp33_1 == 0
                cond:256_1 = temp33_1 == 0
                cond:257_1 = temp33_1 != 0
                cond:276_1 = temp33_1 != 0
                cond:277_1 = temp33_1 == 0
                cond:292_1 = temp33_1 == 0
                cond:293_1 = temp33_1 != 0
                cond:308_1 = temp33_1 != 0
                cond:309_1 = temp33_1 == 0
                cond:324_1 = temp33_1 == 0
                cond:325_1 = temp33_1 != 0
                
                if (temp33_1 != 0)
                label_1403616a1:
                    zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(arg12, zmm8, 0x32), 0x84)
                    
                    if (cond:237_1)
                        goto label_140362c81
                    
                    goto label_1403616b4
                
            label_140362c7b:
                
                if (not(cond:236_1))
                label_140362c81:
                    
                    if (cond:257_1)
                        goto label_1403616c7
                    
                    goto label_140362c87
                
            label_1403616b4:
                zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(arg7, zmm10, 0x32), 0x84)
                
                if (not(cond:256_1))
                label_1403616c7:
                    arg14 = _mm_shuffle_ps(arg14, _mm_shuffle_ps(arg6, arg14, 0x32), 0x84)
                    
                    if (cond:277_1)
                        goto label_140362c8d
                    
                    goto label_1403616da
                
            label_140362c87:
                
                if (not(cond:276_1))
                label_140362c8d:
                    
                    if (cond:293_1)
                        goto label_1403616ed
                    
                    goto label_140362c93
                
            label_1403616da:
                arg13 = _mm_shuffle_ps(arg13, _mm_shuffle_ps(arg8, arg13, 0x32), 0x84)
                
                if (not(cond:292_1))
                label_1403616ed:
                    zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(arg10, zmm14, 0x32), 0x84)
                    
                    if (cond:309_1)
                        goto label_140362c99
                    
                    goto label_140361704
                
            label_140362c93:
                
                if (not(cond:308_1))
                label_140362c99:
                    
                    if (cond:325_1)
                        goto label_140361717
                    
                    goto label_140362c9f
                
            label_140361704:
                arg5 = _mm_shuffle_ps(var_908_1, _mm_shuffle_ps(arg9, var_908_1, 0x32), 0x84)
                var_908_1 = arg5
                bool cond:355_1
                bool cond:356_1
                bool cond:375_1
                bool cond:376_1
                bool cond:395_1
                bool cond:396_1
                bool cond:413_1
                bool cond:414_1
                bool cond:428_1
                bool cond:429_1
                bool cond:443_1
                bool cond:444_1
                
                if (not(cond:324_1))
                label_140361717:
                    arg5 = var_958_2
                    arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(arg11, arg5, 0x32), 0x84)
                    var_958_2 = arg5
                    char temp54_1 = rbp_4 & 8
                    cond:355_1 = temp54_1 == 0
                    cond:356_1 = temp54_1 != 0
                    cond:375_1 = temp54_1 != 0
                    cond:376_1 = temp54_1 == 0
                    cond:395_1 = temp54_1 == 0
                    cond:396_1 = temp54_1 != 0
                    cond:413_1 = temp54_1 != 0
                    cond:414_1 = temp54_1 == 0
                    cond:428_1 = temp54_1 == 0
                    cond:429_1 = temp54_1 != 0
                    cond:443_1 = temp54_1 == 0
                    cond:444_1 = temp54_1 != 0
                    
                    if (temp54_1 == 0)
                        goto label_140362ca9
                    
                    goto label_14036173c
                
            label_140362c9f:
                char temp53_1 = rbp_4 & 8
                cond:355_1 = temp53_1 == 0
                cond:356_1 = temp53_1 != 0
                cond:375_1 = temp53_1 != 0
                cond:376_1 = temp53_1 == 0
                cond:395_1 = temp53_1 == 0
                cond:396_1 = temp53_1 != 0
                cond:413_1 = temp53_1 != 0
                cond:414_1 = temp53_1 == 0
                cond:428_1 = temp53_1 == 0
                cond:429_1 = temp53_1 != 0
                cond:443_1 = temp53_1 == 0
                cond:444_1 = temp53_1 != 0
                
                if (temp53_1 == 0)
                label_140362ca9:
                    
                    if (cond:356_1)
                        goto label_14036174f
                    
                    goto label_140362caf
                
            label_14036173c:
                zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(arg12, zmm8, 0x23), 0x24)
                
                if (not(cond:355_1))
                label_14036174f:
                    zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(arg7, zmm10, 0x23), 0x24)
                    
                    if (cond:376_1)
                        goto label_140362cb5
                    
                    goto label_140361762
                
            label_140362caf:
                
                if (not(cond:375_1))
                label_140362cb5:
                    
                    if (cond:396_1)
                        goto label_140361775
                    
                    goto label_140362cbb
                
            label_140361762:
                arg14 = _mm_shuffle_ps(arg14, _mm_shuffle_ps(arg6, arg14, 0x23), 0x24)
                
                if (not(cond:395_1))
                label_140361775:
                    arg13 = _mm_shuffle_ps(arg13, _mm_shuffle_ps(arg8, arg13, 0x23), 0x24)
                    
                    if (cond:414_1)
                        goto label_140362cc1
                    
                    goto label_140361788
                
            label_140362cbb:
                
                if (not(cond:413_1))
                label_140362cc1:
                    
                    if (cond:429_1)
                        goto label_14036179f
                    
                    goto label_140362cc7
                
            label_140361788:
                zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(arg10, zmm14, 0x23), 0x24)
                
                if (cond:428_1)
                label_140362cc7:
                    
                    if (not(cond:443_1))
                    label_140362ccd:
                        arg5 = var_958_2
                        arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(arg11, arg5, 0x23), 0x24)
                        var_958_2 = arg5
                else
                label_14036179f:
                    arg5 = _mm_shuffle_ps(var_908_1, _mm_shuffle_ps(arg9, var_908_1, 0x23), 0x24)
                    var_908_1 = arg5
                    
                    if (cond:444_1)
                        goto label_140362ccd
            
            rbx_6 = zx.q(rbx_6.d + 4)
        while (rbx_6.d s< i)
        
        rax_83 = arg17
        
        if (rbx_6.d s>= rax_83)
            goto label_140362e68
        
        goto label_140362d03
    
    rbx_6 = 0
    var_958_2 = zx.o(0)
    var_908_1 = zx.o(0)
    zmm14 = zx.o(0)
    arg13 = zx.o(0)
    arg14 = zx.o(0)
    zmm10 = zx.o(0)
    zmm8 = zx.o(0)
    rax_83 = arg17
    
    if (0 s< rax_83)
    label_140362d03:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbx_6.d), 0), data_142e11d00)
        arg7 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(rax_83), 0), zmm0)
        int64_t rcx_81 = sx.q(rbx_6.d << 2)
        uint32_t temp0_754 = _mm_movemask_ps(arg7)
        uint64_t rax_85 = zx.q(temp0_754) & 0xfffffff9
        float var_8c8_3[0x4] = zmm14
        float var_868_3[0x4] = arg14
        float var_898_3[0x4] = zmm10
        float var_878_3[0x4] = zmm8
        char var_5b0_1 = temp0_754.b
        
        if (rax_85 != 9)
            if ((temp0_754.b & 1) != 0)
                var_7b8 = *(arg2 + rcx_81)
            
            if ((temp0_754.b & 2) == 0)
                if ((temp0_754.b & 4) != 0)
                    goto label_140364cfd
                
                goto label_140362e9c
            
            int32_t var_7b4_1 = *(arg2 + rcx_81 + 4)
            int32_t var_7ac_1
            
            if ((temp0_754.b & 4) == 0)
            label_140362e9c:
                
                if ((temp0_754.b & 8) != 0)
                    var_7ac_1 = *(arg2 + rcx_81 + 0xc)
            else
            label_140364cfd:
                int32_t var_7b0_1 = *(arg2 + rcx_81 + 8)
                
                if ((temp0_754.b & 8) != 0)
                    var_7ac_1 = *(arg2 + rcx_81 + 0xc)
            arg11 = var_7b8.o
        else
            arg11 = *(arg2 + rcx_81)
        
        arg5 = _mm_sub_epi32(_mm_slli_epi32(zmm0, 3), zmm0) & arg7
        int64_t rax_92 = sx.q(arg5.d)
        void* rbp_12 = arg4 + (rax_92 << 2)
        float var_938_9[0x4] = *(arg4 + (rax_92 << 2))
        int64_t rax_94 = sx.q(_mm_shuffle_epi32(arg5, 0xe5)[0])
        void* rdi_12 = arg4 + (rax_94 << 2)
        float var_888_4[0x4] = *(arg4 + (rax_94 << 2))
        int64_t rax_96 = sx.q(_mm_shuffle_epi32(arg5, 0x4e)[0])
        void* rdx = arg4 + (rax_96 << 2)
        arg12 = *(arg4 + (rax_96 << 2))
        int64_t rax_98 = sx.q(_mm_shuffle_epi32(arg5, 0xe7)[0])
        void* rsi_10 = arg4 + (rax_98 << 2)
        zmm10 = *(arg4 + (rax_98 << 2))
        zmm0 = data_142fc95e0 & arg7
        var_968 = *(zx.q(zmm0[0]) + rbp_12)
        uint128_t var_848_4 = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rdi_12)
        zmm14 = *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rdx)
        uint64_t rax_102 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
        zmm0 = data_142fc95f0 & arg7
        zmm15 = zx.o(*(zx.q(zmm0[0]) + rbp_12))
        arg6 = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rdi_12)
        var_8b8[0].q = zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        var_858[0].q = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
        zmm0 = data_143442650 & arg7
        uint128_t var_8d8_4 = *(zx.q(zmm0[0]) + rbp_12)
        uint128_t var_7f8_4 = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rdi_12)
        var_828[0].q = zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        uint64_t r9_1 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
        zmm0 = data_143442660 & arg7
        arg14 = zx.o(*(zx.q(zmm0[0]) + rbp_12))
        uint128_t var_818_5 = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rdi_12)
        uint64_t r15_2 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        uint64_t r12_4 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
        zmm0 = data_143442670 & arg7
        uint128_t var_928_2 = *(zx.q(zmm0[0]) + rbp_12)
        uint64_t rax_110 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
        float (* rcx_85)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        float (* r13_2)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
        zmm0 = data_143442700 & arg7
        uint64_t r11_4 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
        uint64_t rbx_9 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
        arg5 = *(rax_110 + rdi_12)
        uint32_t rax_112 = zx.d(*(zx.q(zmm0[0]) + rbp_12))
        uint32_t rbp_13 = zx.d(*(r11_4 + rdi_12))
        uint64_t rdi_13 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
        arg9 = _mm_insert_epi16(
            _mm_insert_epi16(_mm_insert_epi16(zx.o(rax_112), rbp_13, 2), zx.d(*(rbx_9 + rdx)), 4), 
            zx.d(*(rdi_13 + rsi_10)), 6)
        float var_538_1[0x4] = *(rax_102 + rsi_10)
        arg8 = *(var_8b8[0].q + rdx)
        int32_t var_7d8_3[0x4] = *(var_858[0].q + rsi_10)
        zmm2 = *(var_828[0].q + rdx)
        int32_t var_858_2[0x4] = *(r9_1 + rsi_10)
        arg10 = *(r15_2 + rdx)
        float var_8b8_4[0x4] = *(r12_4 + rsi_10)
        zmm8 = *(rcx_85 + rdx)
        float var_918_2[0x4] = arg14
        var_948.o = zmm15
        float var_7c8_3[0x4] = arg6
        var_808.o = arg5
        uint64_t var_8e8_2
        var_8e8_2.o = *(r13_2 + rsi_10)
        int32_t i_6
        
        if (rax_85 != 9)
            zmm0 = arg12
            arg12 = zmm10
            zmm10 = zmm0
            zmm0 = var_888_4
            
            if ((var_5b0_1 & 1) == 0)
                arg6 = var_848_4
                
                if ((var_5b0_1 & 2) != 0)
                    goto label_140364d7d
                
                goto label_1403634ee
            
            var_7b8 = *(arg1 + rcx_81)
            arg6 = var_848_4
            
            if ((var_5b0_1 & 2) != 0)
            label_140364d7d:
                int32_t var_7b4_3 = *(arg1 + rcx_81 + 4)
                i_6 = i_5
                
                if ((var_5b0_1 & 4) == 0)
                    goto label_1403634fc
                
                goto label_140364da1
            
        label_1403634ee:
            i_6 = i_5
            int32_t var_7ac_3
            
            if ((var_5b0_1 & 4) != 0)
            label_140364da1:
                int32_t var_7b0_3 = *(arg1 + rcx_81 + 8)
                
                if ((var_5b0_1 & 8) != 0)
                    var_7ac_3 = *(arg1 + rcx_81 + 0xc)
            else
            label_1403634fc:
                
                if ((var_5b0_1 & 8) != 0)
                    var_7ac_3 = *(arg1 + rcx_81 + 0xc)
            arg5 = var_7b8.o
        else
            arg6 = var_848_4
            zmm0 = arg12
            arg12 = zmm10
            zmm10 = zmm0
            zmm0 = var_888_4
            arg5 = *(arg1 + rcx_81)
            i_6 = i_5
        
        arg14 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(arg14, arg14), arg5)
            & not.o(_mm_cmpeq_epi32(arg9 & data_142ed6810, zx.o(0)) & not.o(arg7))
        char temp0_815 = _mm_movemask_ps(arg14)
        
        if (temp0_815 == 0)
            zmm14 = var_8c8_3
            arg14 = var_868_3
            zmm10 = var_898_3
            zmm8 = var_878_3
            i_2 = zx.q(i_6)
            
            if ((i_2.b & 1) == 0)
                goto label_140365130
            
            goto label_1403655a6
        
        float var_888_5[0x4] = arg13
        float temp0_816[0x4] = _mm_unpacklo_ps(zmm10, arg12[0].q)
        float var_938_11[0x4] = _mm_unpacklo_ps(var_938_9, zmm0[0].q).q | temp0_816[0].q << 0x40
        float temp0_818[0x4] = __unpcklps_xmmps_memdq(zmm14, var_538_1)
        var_968 = _mm_unpacklo_ps(var_968, arg6[0].q)[0].q | temp0_818[0].q << 0x40
        arg8 = __unpcklps_xmmps_memdq(arg8, var_7d8_3)
        var_948.o = __unpcklps_xmmps_memdq(var_948.o, var_7c8_3)[0].q | arg8[0].q << 0x40
        float temp0_822[0x4] = __unpcklps_xmmps_memdq(zmm2, var_858_2)
        float var_8d8_6[0x4] =
            __unpcklps_xmmps_memdq(var_8d8_4, var_7f8_4)[0].q | temp0_822[0].q << 0x40
        float temp0_824[0x4] = __unpcklps_xmmps_memdq(arg10, var_8b8_4)
        float var_918_4[0x4] =
            __unpcklps_xmmps_memdq(var_918_2, var_818_5)[0].q | temp0_824[0].q << 0x40
        float temp0_826[0x4] = __unpcklps_xmmps_memdq(zmm8, var_8e8_2.o)
        uint32_t var_928_4[0x4] =
            __unpcklps_xmmps_memdq(var_928_2, var_808.o)[0].q | temp0_826[0].q << 0x40
        arg11 = _mm_slli_epi32(arg11, 6) & arg14
        int64_t rax_128 = sx.q(arg11[0])
        void* rdx_3 = arg3 + rax_128
        arg5 = *(arg3 + rax_128)
        int64_t rax_130 = sx.q(_mm_shuffle_epi32(arg11, 0xe5)[0])
        void* rbx_14 = arg3 + rax_130
        zmm2 = _mm_unpacklo_ps(arg5, (*(arg3 + rax_130))[0].q)
        int64_t rax_132 = sx.q(_mm_shuffle_epi32(arg11, 0x4e)[0])
        void* rbp_22 = arg3 + rax_132
        zmm0 = *(arg3 + rax_132)
        int64_t rax_134 = sx.q(_mm_shuffle_epi32(arg11, 0xe7).d)
        void* rdi_16 = arg3 + rax_134
        float temp0_833[0x4] = _mm_unpacklo_ps(zmm0, (*(arg3 + rax_134)).q)
        uint64_t var_8f8_1
        var_8f8_1.o = zmm2[0].q | temp0_833[0].q << 0x40
        zmm0 = data_142fc95e0 & arg14
        float temp0_835[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_3), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbx_14)).q)
        arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbp_22), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_16))[0].q)
        var_8e8_2.o = temp0_835[0].q | arg5.q << 0x40
        zmm0 = data_142fc95f0 & arg14
        float temp0_840[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_3), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbx_14)).q)
        arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbp_22), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_16))[0].q)
        var_8a8.o = temp0_840[0].q | arg5.q << 0x40
        zmm0 = data_143442650 & arg14
        float temp0_845[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_3), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbx_14)).q)
        arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbp_22), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_16))[0].q)
        float var_858_4[0x4] = temp0_845[0].q | arg5.q << 0x40
        zmm0 = data_143442660 & arg14
        float temp0_850[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_3), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbx_14)).q)
        arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbp_22), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_16))[0].q)
        float var_828_3[0x4] = temp0_850[0].q | arg5.q << 0x40
        zmm0 = data_143442670 & arg14
        float temp0_855[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_3), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbx_14)).q)
        arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbp_22), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_16))[0].q)
        zmm14 = temp0_855[0].q | arg5.q << 0x40
        zmm0 = data_143442700 & arg14
        float temp0_860[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_3), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbx_14)).q)
        arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbp_22), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_16))[0].q)
        arg13 = temp0_860[0].q | arg5.q << 0x40
        zmm0 = data_1434b2e20 & arg14
        float temp0_865[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_3), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbx_14)).q)
        arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbp_22), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_16))[0].q)
        arg9 = temp0_865[0].q | arg5.q << 0x40
        zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[0].o & arg14
        float temp0_870[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_3), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbx_14)).q)
        arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbp_22), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_16))[0].q)
        zmm8 = temp0_870[0].q | arg5.q << 0x40
        zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[4].o & arg14
        float temp0_875[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_3), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbx_14)).q)
        arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbp_22), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_16))[0].q)
        zmm10 = temp0_875[0].q | arg5.q << 0x40
        zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[8].o & arg14
        arg12 = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_3), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbx_14)).q)
        arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbp_22), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_16))[0].q)
        arg12 = arg12[0].q | arg5.q << 0x40
        zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[0xc].o & arg14
        arg5 = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_3), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbx_14))[0].q).q | _mm_unpacklo_ps(
            *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_22), 
            (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_16))[0].q)[0].q << 0x40
        zmm2 = (*U"    $$$$((((,,,,000044448888<<<<")[0x10].o & arg14
        float temp0_890[0x4] = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rdx_3), 
            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rbx_14))[0].q)
        float temp0_893[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rbp_22), 
            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rdi_16))[0].q)
        zmm0 = temp0_890[0].q | temp0_893[0].q << 0x40
        zmm2 = (*U"    $$$$((((,,,,000044448888<<<<")[0x14].o & arg14
        float temp0_895[0x4] = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rdx_3), 
            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rbx_14))[0].q)
        float temp0_898[0x4] = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rbp_22), 
            (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rdi_16))[0].q)
        arg10 = temp0_895[0].q | temp0_898[0].q << 0x40
        arg6 = (*U"    $$$$((((,,,,000044448888<<<<")[0x18].o & arg14
        float (* rax_187)[0x4] = zx.q(arg6[0])
        float (* rsi_12)[0x4] = zx.q(_mm_shuffle_epi32(arg6, 0xe5)[0])
        float temp0_900[0x4] = _mm_unpacklo_ps(*(rax_187 + rdx_3), (*(rsi_12 + rbx_14))[0].q)
        float (* rax_188)[0x4] = zx.q(_mm_shuffle_epi32(arg6, 0x4e)[0])
        float (* rsi_13)[0x4] = zx.q(_mm_shuffle_epi32(arg6, 0xe7)[0])
        float temp0_903[0x4] = _mm_unpacklo_ps(*(rax_188 + rbp_22), (*(rsi_13 + rdi_16))[0].q)
        zmm2 = temp0_900[0].q | temp0_903[0].q << 0x40
        float var_8b8_6[0x4] = arg14
        arg6 = (*U"    $$$$((((,,,,000044448888<<<<")[0x1c].o & arg14
        float (* rax_189)[0x4] = zx.q(_mm_shuffle_epi32(arg6, 0xe5)[0])
        float temp0_905[0x4] = _mm_unpacklo_ps(*(zx.q(arg6[0]) + rdx_3), (*(rax_189 + rbx_14))[0].q)
        float (* rax_190)[0x4] = zx.q(_mm_shuffle_epi32(arg6, 0x4e)[0])
        uint32_t (* rdx_4)[0x4] = zx.q(_mm_shuffle_epi32(arg6, 0xe7)[0])
        float temp0_908[0x4] = _mm_unpacklo_ps(*(rax_190 + rbp_22), (*(rdx_4 + rdi_16))[0].q)
        arg7 = temp0_905[0].q | temp0_908[0].q << 0x40
        float var_4e8[0x4] = var_8f8_1.o
        float var_4d8[0x4] = var_8e8_2.o
        float var_4c8[0x4] = var_8a8.o
        float var_4b8[0x4] = var_858_4
        float var_4a8_1[0x4] = var_828_3
        float var_498_1[0x4] = zmm14
        float var_488_1[0x4] = arg13
        float var_478_1[0x4] = arg9
        float var_468_1[0x4] = zmm8
        float var_458_1[0x4] = zmm10
        uint32_t var_448_1[0x4] = arg12
        uint128_t var_438_1 = arg5
        float var_428_1[0x4] = zmm0
        float var_418_1[0x4] = arg10
        float var_408_1[0x4] = zmm2
        float var_3f8_1[0x4] = arg7
        zmm8 = (*arg15)[9]
        zmm10 = (*arg15)[0xd]
        arg12 = (*arg15)[2]
        arg14 = (*arg15)[3]
        zmm14 = (*arg15)[6]
        arg10 = (*arg15)[0xa]
        zmm2 = (*arg15)[0xe]
        zmm0 = (*arg15)[7]
        arg6 = (*arg15)[0xb]
        
        for (int64_t i_1 = 0; i_1 != 0x100; i_1 += 0x40)
            arg9 = *arg15
            arg5 = arg15[1][0]
            float temp0_909[0x4] = _mm_shuffle_ps(arg9, arg9, 0)
            arg13 = *(&var_4e8 + i_1)
            arg11 = *(&var_4d8 + i_1)
            arg8 = *(&var_4c8 + i_1)
            arg7 = *(&var_4b8 + i_1)
            float temp0_911[0x4] = _mm_add_ps(_mm_mul_ps(temp0_909, arg13), zx.o(0))
            arg5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), arg11), temp0_911)
            arg9 = arg15[2][0]
            float temp0_917[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg9, arg9, 0), arg8), arg5)
            arg5 = arg15[3][0]
            *(&var_7b8 + i_1) =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), arg7), temp0_917)
            arg5 = (*arg15)[1]
            arg9 = (*arg15)[5]
            arg5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), arg13), zx.o(0))
            float temp0_926[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg9, arg9, 0), arg11), arg5)
            arg5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0), arg8), temp0_926)
            *(&var_7a8 + i_1) = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0), arg7), arg5)
            arg5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg12, arg12, 0), arg13), zx.o(0))
            float temp0_938[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), arg11), arg5)
            arg5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg10, arg10, 0), arg8), temp0_938)
            *(&var_798 + i_1) = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), arg7), arg5)
            arg5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg14, arg14, 0), arg13), zx.o(0))
            float temp0_950[0x4] =
                _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), arg11), arg5)
            arg5 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg6, arg6, 0), arg8), temp0_950)
            arg8 = (*arg15)[0xf]
            *(&var_788 + i_1) = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg8, arg8, 0), arg7), arg5)
        
        arg13 = var_7b8.o
        arg10 = var_7a8
        var_8a8.o = arg10
        arg9 = var_798
        var_8e8_2.o = arg9
        zmm14 = var_778
        float temp0_957[0x4] = _mm_add_ps(var_938_11, var_8d8_6)
        arg5 = data_142d3f640
        float temp0_958[0x4] = _mm_mul_ps(temp0_957, arg5)
        arg6 = arg5
        float temp0_959[0x4] = _mm_mul_ps(temp0_958, arg13)
        arg8 = _mm_mul_ps(temp0_958, arg10)
        arg5 = var_918_4
        float temp0_962[0x4] = _mm_mul_ps(_mm_add_ps(var_968, arg5), arg6)
        zmm15 = arg6
        float temp0_964[0x4] = _mm_add_ps(_mm_mul_ps(temp0_962, zmm14), temp0_959)
        float temp0_966[0x4] = _mm_add_ps(_mm_mul_ps(temp0_962, var_768), arg8)
        arg8 = _mm_mul_ps(temp0_958, arg9)
        var_8f8_1.o = var_758
        float temp0_969[0x4] = _mm_add_ps(_mm_mul_ps(temp0_962, var_758), arg8)
        arg6 = var_788
        float temp0_970[0x4] = _mm_mul_ps(temp0_958, arg6)
        float temp0_972[0x4] = _mm_add_ps(_mm_mul_ps(temp0_962, var_748), temp0_970)
        arg8 = _mm_mul_ps(_mm_add_ps(var_948.o, var_928_4), zmm15)
        arg11 = var_738
        float temp0_976[0x4] = _mm_add_ps(_mm_mul_ps(arg8, arg11), temp0_964)
        float temp0_978[0x4] = _mm_add_ps(_mm_mul_ps(arg8, var_728), temp0_966)
        float temp0_980[0x4] = _mm_add_ps(_mm_mul_ps(arg8, var_718), temp0_969)
        zmm8 = var_708
        arg8 = _mm_mul_ps(arg8, zmm8)
        float temp0_982[0x4] = __addps_xmmps_memps(temp0_976, var_6f8)
        float temp0_983[0x4] = __addps_xmmps_memps(temp0_978, var_6e8)
        float temp0_984[0x4] = __addps_xmmps_memps(temp0_980, var_6d8)
        arg8 = __addps_xmmps_memps(_mm_add_ps(arg8, temp0_972), var_6c8)
        var_7b8.o = arg13
        var_7a8 = var_8a8.o
        var_798 = var_8e8_2.o
        var_788 = arg6
        float var_5f8_3[0x4] = zmm14
        float var_5e8_3[0x4] = var_768
        float var_5d8_3[0x4] = var_8f8_1.o
        float var_5c8_3[0x4] = var_748
        float var_638_3[0x4] = arg11
        float var_628_3[0x4] = var_728
        float var_618_3[0x4] = var_718
        float var_608_3[0x4] = zmm8
        arg5 = __subps_xmmps_memps(arg5, var_968)
        arg12 = __subps_xmmps_memps(var_928_4, var_948.o)
        float temp0_989[0x4] = __subps_xmmps_memps(var_8d8_6, var_938_11)
        zmm0 = data_142d3f640
        arg5 = _mm_mul_ps(arg5, zmm0)
        float temp0_991[0x4] = _mm_mul_ps(temp0_989, zmm0)
        arg12 = _mm_mul_ps(arg12, zmm0)
        float var_528_1[0x4] = temp0_982
        float var_518_1[0x4] = temp0_983
        float var_508_1[0x4] = temp0_984
        uint32_t var_4f8_1[0x4] = arg8
        float temp0_993[0x4] = _mm_mul_ps(arg13, temp0_991)
        float temp0_994[0x4] = _mm_mul_ps(var_8a8.o, temp0_991)
        float temp0_995[0x4] = __mulps_xmmps_memps(temp0_991, var_8e8_2.o)
        float temp0_996[0x4] = _mm_mul_ps(zmm14, arg5)
        float temp0_997[0x4] = _mm_mul_ps(var_768, arg5)
        arg5 = __mulps_xmmps_memps(arg5, var_8f8_1.o)
        arg8 = data_142d3f770
        arg13 = _mm_and_ps(temp0_993, arg8)
        float temp0_1001[0x4] = _mm_add_ps(_mm_and_ps(temp0_996, arg8), arg13)
        zmm0 = _mm_and_ps(temp0_994, arg8)
        float temp0_1004[0x4] = _mm_add_ps(_mm_and_ps(temp0_997, arg8), zmm0)
        zmm2 = _mm_and_ps(temp0_995, arg8)
        arg5 = _mm_add_ps(_mm_and_ps(arg5, arg8), zmm2)
        float temp0_1008[0x4] = _mm_mul_ps(arg11, arg12)
        float temp0_1009[0x4] = _mm_mul_ps(var_728, arg12)
        arg12 = _mm_mul_ps(arg12, var_718)
        float temp0_1012[0x4] = _mm_add_ps(_mm_and_ps(temp0_1008, arg8), temp0_1001)
        float temp0_1014[0x4] = _mm_add_ps(_mm_and_ps(temp0_1009, arg8), temp0_1004)
        arg12 = _mm_add_ps(_mm_and_ps(arg12, arg8), arg5)
        float temp0_1017[0x4] = _mm_sub_ps(temp0_982, temp0_1012)
        zmm14 = _mm_sub_ps(temp0_983, temp0_1014)
        arg8 = _mm_sub_ps(temp0_984, arg12)
        float temp0_1020[0x4] = _mm_add_ps(temp0_1012, temp0_982)
        float temp0_1021[0x4] = _mm_add_ps(temp0_1014, temp0_983)
        arg12 = _mm_add_ps(arg12, temp0_984)
        arg14 = zx.o(0)
        zmm2 = _mm_cmpeq_epi32(data_142ed6810 & var_958_2, zx.o(0))
        arg10 = _mm_slli_epi32(zmm2 & not.o(var_8b8_6), 0x1f)
        char temp0_1025 = _mm_movemask_ps(arg10)
        char rax_274
        bool cond:65_1
        bool cond:79_1
        bool cond:80_1
        bool cond:99_1
        bool cond:100_1
        bool cond:111_1
        bool cond:112_1
        bool cond:131_1
        bool cond:132_1
        bool cond:151_1
        bool cond:152_1
        
        if (temp0_1025 == 0)
            var_8f8_1.o = temp0_1021
        label_140364e44:
            zmm15 = _mm_slli_epi32(var_8b8_6 & zmm2, 0x1f)
            
            if (_mm_movemask_ps(zmm15) == 0)
                zmm2 = var_958_2
                zmm14 = var_8c8_3
                arg13 = var_888_5
                arg14 = var_868_3
                zmm10 = var_898_3
                zmm8 = var_878_3
                goto label_140365050
            
            char temp0_1257 = _mm_movemask_ps(zmm2)
            char temp6_1 = temp0_1257 & 1
            arg13 = var_888_5
            
            if (temp6_1 == 0)
                if (temp6_1 != 0)
                    goto label_140365e5d
                
                goto label_140364e59
            
            arg5.d = temp0_1017[0]
            var_948.o = arg5
            
            if (temp6_1 != 0)
            label_140365e5d:
                arg5.d = zmm14[0]
                var_968 = arg5
                
                if (temp6_1 == 0)
                    goto label_140364e59_1
                
                goto label_140365e71
            
        label_140364e59:
            
            if (temp6_1 != 0)
            label_140365e71:
                arg5.d = arg8[0]
                var_938_11 = arg5
                
                if (temp6_1 != 0)
                label_140365e80:
                    zmm0 = var_928_4
                    zmm0[0] = temp0_1020[0]
                    var_928_4 = zmm0
                    
                    if (temp6_1 == 0)
                        goto label_140364e82
                    
                    goto label_140365e9f
            else
            label_140364e59_1:
                
                if (temp6_1 != 0)
                    goto label_140365e80
            
            float var_858_8[0x4]
            
            if (temp6_1 == 0)
            label_140364e82:
                var_858_8 = zmm14
                var_8a8.o = arg8
                var_8e8_2.o = temp0_1020
                
                if (temp6_1 == 0)
                    goto label_140365ec8
                
                goto label_140364ea2
            
        label_140365e9f:
            arg5.d = var_8f8_1.o[0]
            var_918_4 = arg5
            var_858_8 = zmm14
            var_8a8.o = arg8
            var_8e8_2.o = temp0_1020
            float var_8b8_9[0x4]
            
            if (temp6_1 != 0)
            label_140364ea2:
                zmm14 = var_8d8_6
                zmm14[0] = arg12[0]
                var_8b8_9 = zmm15
                zmm2 = var_958_2
                
                if (temp6_1 != 0)
                    zmm2 = var_958_2
                    zmm2[0] = 1
            else
            label_140365ec8:
                zmm14 = var_8d8_6
                var_8b8_9 = zmm15
                zmm2 = var_958_2
                
                if (temp6_1 != 0)
                    zmm2 = var_958_2
                    zmm2[0] = 1
            
            char temp22_1 = temp0_1257 & 2
            arg9 = arg12
            arg11 = var_918_4
            arg12 = var_928_4
            arg7 = var_948.o
            
            if (temp22_1 == 0)
                if (temp22_1 != 0)
                    goto label_140366256
                
                goto label_140365efa
            
            arg7 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_1017, arg7, 1), arg7, 0xe2)
            
            if (temp22_1 != 0)
            label_140366256:
                zmm0 = var_968
                var_968 = _mm_shuffle_ps(_mm_shuffle_ps(var_858_8, zmm0, 1), zmm0, 0xe2)
                
                if (temp22_1 == 0)
                    goto label_140365efa_1
                
                goto label_140366281
            
        label_140365efa:
            
            if (temp22_1 == 0)
            label_140365efa_1:
                
                if (temp22_1 != 0)
                    goto label_14036629e
                
                goto label_140365efa_2
            
        label_140366281:
            var_938_11 = _mm_shuffle_ps(_mm_shuffle_ps(var_8a8.o, var_938_11, 1), var_938_11, 0xe2)
            
            if (temp22_1 != 0)
            label_14036629e:
                arg12 = _mm_shuffle_ps(_mm_shuffle_ps(var_8e8_2.o, arg12, 1), arg12, 0xe2)
                
                if (temp22_1 == 0)
                    goto label_140365efa_3
                
                goto label_1403662b7
            
        label_140365efa_2:
            
            if (temp22_1 == 0)
            label_140365efa_3:
                
                if (temp22_1 != 0)
                    goto label_1403662d1
                
                goto label_140365f3a
            
        label_1403662b7:
            arg11 = _mm_shuffle_ps(_mm_shuffle_ps(var_8f8_1.o, arg11, 1), arg11, 0xe2)
            
            if (temp22_1 != 0)
            label_1403662d1:
                zmm14 = _mm_shuffle_ps(_mm_shuffle_ps(arg9, zmm14, 1), zmm14, 0xe2)
                zmm0 = 1
                
                if (temp22_1 == 0)
                    goto label_140365f44
                
                goto label_1403662f0
            
        label_140365f3a:
            zmm0 = 1
            bool cond:306_1
            bool cond:307_1
            bool cond:322_1
            bool cond:323_1
            bool cond:342_1
            bool cond:343_1
            bool cond:353_1
            bool cond:354_1
            bool cond:373_1
            bool cond:374_1
            bool cond:393_1
            bool cond:394_1
            
            if (temp22_1 == 0)
            label_140365f44:
                char temp42_1 = temp0_1257 & 4
                cond:306_1 = temp42_1 != 0
                cond:307_1 = temp42_1 == 0
                cond:322_1 = temp42_1 == 0
                cond:323_1 = temp42_1 != 0
                cond:342_1 = temp42_1 != 0
                cond:343_1 = temp42_1 == 0
                cond:353_1 = temp42_1 == 0
                cond:354_1 = temp42_1 != 0
                cond:373_1 = temp42_1 != 0
                cond:374_1 = temp42_1 == 0
                cond:393_1 = temp42_1 == 0
                cond:394_1 = temp42_1 != 0
                
                if (temp42_1 != 0)
                    goto label_140366302
                
                goto label_140365f4c
            
        label_1403662f0:
            zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, zmm2, 0), zmm2, 0xe2)
            char temp41_1 = temp0_1257 & 4
            cond:306_1 = temp41_1 != 0
            cond:307_1 = temp41_1 == 0
            cond:322_1 = temp41_1 == 0
            cond:323_1 = temp41_1 != 0
            cond:342_1 = temp41_1 != 0
            cond:343_1 = temp41_1 == 0
            cond:353_1 = temp41_1 == 0
            cond:354_1 = temp41_1 != 0
            cond:373_1 = temp41_1 != 0
            cond:374_1 = temp41_1 == 0
            cond:393_1 = temp41_1 == 0
            cond:394_1 = temp41_1 != 0
            
            if (temp41_1 != 0)
            label_140366302:
                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(temp0_1017, arg7, 0x32), 0x84)
                
                if (cond:307_1)
                    goto label_140365f52
                
                goto label_140366314
            
        label_140365f4c:
            
            if (not(cond:306_1))
            label_140365f52:
                
                if (cond:323_1)
                    goto label_140366332
                
                goto label_140365f58
            
        label_140366314:
            arg5 = var_968
            var_968 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(var_858_8, arg5, 0x32), 0x84)
            
            if (not(cond:322_1))
            label_140366332:
                arg5 = var_938_11
                var_938_11 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(var_8a8.o, arg5, 0x32), 0x84)
                
                if (cond:343_1)
                    goto label_140365f5e
                
                goto label_140366357
            
        label_140365f58:
            
            if (not(cond:342_1))
            label_140365f5e:
                
                if (cond:354_1)
                    goto label_14036636c
                
                goto label_140365f64
            
        label_140366357:
            arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(var_8e8_2.o, arg12, 0x32), 0x84)
            
            if (not(cond:353_1))
            label_14036636c:
                arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(var_8f8_1.o, arg11, 0x32), 0x84)
                
                if (cond:374_1)
                    goto label_140365f6a
                
                goto label_140366382
            
        label_140365f64:
            
            if (not(cond:373_1))
            label_140365f6a:
                
                if (cond:394_1)
                    goto label_140366395
                
                goto label_140365f70
            
        label_140366382:
            zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(arg9, zmm14, 0x32), 0x84)
            bool cond:426_1
            bool cond:427_1
            bool cond:441_1
            bool cond:442_1
            bool cond:457_1
            bool cond:464_1
            bool cond:465_1
            bool cond:472_1
            bool cond:473_1
            bool cond:480_1
            bool cond:481_1
            
            if (not(cond:393_1))
            label_140366395:
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm0, zmm2, 0x30), 0x84)
                char temp62_1 = temp0_1257 & 8
                cond:426_1 = temp62_1 != 0
                cond:427_1 = temp62_1 == 0
                cond:441_1 = temp62_1 != 0
                cond:442_1 = temp62_1 == 0
                cond:457_1 = temp62_1 != 0
                cond:464_1 = temp62_1 == 0
                cond:465_1 = temp62_1 != 0
                cond:472_1 = temp62_1 != 0
                cond:473_1 = temp62_1 == 0
                cond:480_1 = temp62_1 != 0
                cond:481_1 = temp62_1 == 0
                zmm10 = var_898_3
                zmm8 = var_878_3
                
                if (temp62_1 == 0)
                    goto label_140365f8a
                
                goto label_1403663b7
            
        label_140365f70:
            char temp61_1 = temp0_1257 & 8
            cond:426_1 = temp61_1 != 0
            cond:427_1 = temp61_1 == 0
            cond:441_1 = temp61_1 != 0
            cond:442_1 = temp61_1 == 0
            cond:457_1 = temp61_1 != 0
            cond:464_1 = temp61_1 == 0
            cond:465_1 = temp61_1 != 0
            cond:472_1 = temp61_1 != 0
            cond:473_1 = temp61_1 == 0
            cond:480_1 = temp61_1 != 0
            cond:481_1 = temp61_1 == 0
            zmm10 = var_898_3
            zmm8 = var_878_3
            
            if (temp61_1 == 0)
            label_140365f8a:
                arg6 = var_938_11
                
                if (cond:427_1)
                    goto label_1403663c6
                
                goto label_140365f95
            
        label_1403663b7:
            arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(temp0_1017, arg7, 0x23), 0x24)
            arg6 = var_938_11
            
            if (cond:426_1)
            label_140365f95:
                arg10 = var_968
                arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(var_858_8, arg10, 0x23), 0x24)
                
                if (cond:441_1)
                    arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(var_8a8.o, arg6, 0x23), 0x24)
            else
            label_1403663c6:
                arg10 = var_968
                
                if (not(cond:442_1))
                    arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(var_8a8.o, arg6, 0x23), 0x24)
            
            if (cond:457_1)
                arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(var_8e8_2.o, arg12, 0x23), 0x24)
                
                if (not(cond:464_1))
                label_14036644a:
                    arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(var_8f8_1.o, arg11, 0x23), 0x24)
                    
                    if (cond:473_1)
                        goto label_1403663e2
                    
                    goto label_14036645e
            else if (cond:465_1)
                goto label_14036644a
            
            if (cond:472_1)
            label_14036645e:
                arg9 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(arg9, zmm14, 0x23), 0x24)
                
                if (cond:480_1)
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm0, zmm2, 0x20), 0x24)
            else
            label_1403663e2:
                arg9 = zmm14
                
                if (not(cond:481_1))
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm0, zmm2, 0x20), 0x24)
            
            _mm_movemask_ps(_mm_srai_epi32(var_8b8_9, 0x1f) | arg14)
            zmm14 = var_8c8_3
            arg14 = var_868_3
            rax_274 = temp0_815
            char temp72_1 = rax_274 & 1
            cond:65_1 = temp72_1 != 0
            cond:79_1 = temp72_1 == 0
            cond:80_1 = temp72_1 != 0
            cond:99_1 = temp72_1 != 0
            cond:100_1 = temp72_1 == 0
            cond:111_1 = temp72_1 == 0
            cond:112_1 = temp72_1 != 0
            cond:131_1 = temp72_1 != 0
            cond:132_1 = temp72_1 == 0
            cond:151_1 = temp72_1 == 0
            cond:152_1 = temp72_1 != 0
            
            if (temp72_1 != 0)
                zmm8[0] = arg7[0]
        else
            zmm8 = var_878_3
            var_948.o = _mm_min_ps(zmm8, temp0_1017)
            zmm10 = var_898_3
            var_968 = _mm_min_ps(zmm10, zmm14)
            arg14 = var_868_3
            var_938_11 = _mm_min_ps(arg14, arg8)
            arg13 = var_888_5
            var_928_4 = _mm_max_ps(arg13, temp0_1020)
            arg7 = zmm14
            zmm14 = var_8c8_3
            var_918_4 = _mm_max_ps(zmm14, temp0_1021)
            var_8d8_6 = _mm_max_ps(var_908_1, arg12)
            
            if (temp0_815 != temp0_1025)
                var_8f8_1.o = temp0_1021
                arg14 = _mm_srai_epi32(arg10, 0x1f)
                zmm14 = arg7
                goto label_140364e44
            
            zmm2 = var_958_2
        label_140365050:
            arg11 = var_918_4
            arg12 = var_928_4
            arg6 = var_938_11
            arg10 = var_968
            arg7 = var_948.o
            arg9 = var_8d8_6
            rax_274 = temp0_815
            char temp7_1 = rax_274 & 1
            cond:65_1 = temp7_1 != 0
            cond:79_1 = temp7_1 == 0
            cond:80_1 = temp7_1 != 0
            cond:99_1 = temp7_1 != 0
            cond:100_1 = temp7_1 == 0
            cond:111_1 = temp7_1 == 0
            cond:112_1 = temp7_1 != 0
            cond:131_1 = temp7_1 != 0
            cond:132_1 = temp7_1 == 0
            cond:151_1 = temp7_1 == 0
            cond:152_1 = temp7_1 != 0
            
            if (temp7_1 != 0)
                zmm8[0] = arg7[0]
        
        if (not(cond:65_1))
            if (cond:80_1)
                goto label_140365390
            
            goto label_140365089
        
        zmm10[0] = arg10[0]
        
        if (not(cond:79_1))
        label_140365390:
            arg14[0] = arg6[0]
            
            if (cond:100_1)
                goto label_14036508f
            
            goto label_14036539b
        
    label_140365089:
        
        if (not(cond:99_1))
        label_14036508f:
            
            if (cond:112_1)
                goto label_1403653a6
            
            goto label_140365095
        
    label_14036539b:
        arg13[0] = arg12[0]
        
        if (not(cond:111_1))
        label_1403653a6:
            zmm14[0] = arg11[0]
            
            if (cond:132_1)
                goto label_14036509b
            
            goto label_1403653b1
        
    label_140365095:
        
        if (not(cond:131_1))
        label_14036509b:
            
            if (cond:152_1)
                goto label_1403653ca
            
            goto label_1403650a1
        
    label_1403653b1:
        zmm0 = var_908_1
        zmm0[0] = arg9[0]
        var_908_1 = zmm0
        bool cond:184_1
        bool cond:185_1
        bool cond:200_1
        bool cond:201_1
        bool cond:220_1
        bool cond:221_1
        bool cond:232_1
        bool cond:233_1
        bool cond:252_1
        bool cond:253_1
        bool cond:272_1
        bool cond:273_1
        
        if (not(cond:151_1))
        label_1403653ca:
            var_958_2[0] = zmm2[0]
            char temp24_1 = rax_274 & 2
            cond:184_1 = temp24_1 == 0
            cond:185_1 = temp24_1 != 0
            cond:200_1 = temp24_1 != 0
            cond:201_1 = temp24_1 == 0
            cond:220_1 = temp24_1 == 0
            cond:221_1 = temp24_1 != 0
            cond:232_1 = temp24_1 != 0
            cond:233_1 = temp24_1 == 0
            cond:252_1 = temp24_1 == 0
            cond:253_1 = temp24_1 != 0
            cond:272_1 = temp24_1 != 0
            cond:273_1 = temp24_1 == 0
            
            if (temp24_1 == 0)
                goto label_1403650a9
            
            goto label_1403653e8
        
    label_1403650a1:
        char temp23_1 = rax_274 & 2
        cond:184_1 = temp23_1 == 0
        cond:185_1 = temp23_1 != 0
        cond:200_1 = temp23_1 != 0
        cond:201_1 = temp23_1 == 0
        cond:220_1 = temp23_1 == 0
        cond:221_1 = temp23_1 != 0
        cond:232_1 = temp23_1 != 0
        cond:233_1 = temp23_1 == 0
        cond:252_1 = temp23_1 == 0
        cond:253_1 = temp23_1 != 0
        cond:272_1 = temp23_1 != 0
        cond:273_1 = temp23_1 == 0
        
        if (temp23_1 == 0)
        label_1403650a9:
            
            if (cond:185_1)
                goto label_1403653ff
            
            goto label_1403650af
        
    label_1403653e8:
        zmm8 = _mm_shuffle_ps(_mm_shuffle_ps(arg7, zmm8, 1), zmm8, 0xe2)
        
        if (not(cond:184_1))
        label_1403653ff:
            zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(arg10, zmm10, 1), zmm10, 0xe2)
            
            if (cond:201_1)
                goto label_1403650b5
            
            goto label_140365416
        
    label_1403650af:
        
        if (not(cond:200_1))
        label_1403650b5:
            
            if (cond:221_1)
                goto label_14036542e
            
            goto label_1403650bb
        
    label_140365416:
        arg14 = _mm_shuffle_ps(_mm_shuffle_ps(arg6, arg14, 1), arg14, 0xe2)
        
        if (not(cond:220_1))
        label_14036542e:
            arg13 = _mm_shuffle_ps(_mm_shuffle_ps(arg12, arg13, 1), arg13, 0xe2)
            
            if (cond:233_1)
                goto label_1403650c1
            
            goto label_140365446
        
    label_1403650bb:
        
        if (cond:232_1)
        label_140365446:
            zmm14 = _mm_shuffle_ps(_mm_shuffle_ps(arg11, zmm14, 1), zmm14, 0xe2)
            
            if (not(cond:252_1))
            label_140365460:
                var_908_1 = _mm_shuffle_ps(_mm_shuffle_ps(arg9, var_908_1, 1), var_908_1, 0xe2)
                
                if (cond:273_1)
                    goto label_1403650cd
                
                goto label_14036546e
        else
        label_1403650c1:
            
            if (cond:253_1)
                goto label_140365460
        
        bool cond:304_1
        bool cond:305_1
        bool cond:320_1
        bool cond:321_1
        bool cond:340_1
        bool cond:341_1
        bool cond:351_1
        bool cond:352_1
        bool cond:371_1
        bool cond:372_1
        bool cond:391_1
        bool cond:392_1
        
        if (not(cond:272_1))
        label_1403650cd:
            char temp44_1 = rax_274 & 4
            cond:304_1 = temp44_1 != 0
            cond:305_1 = temp44_1 == 0
            cond:320_1 = temp44_1 == 0
            cond:321_1 = temp44_1 != 0
            cond:340_1 = temp44_1 != 0
            cond:341_1 = temp44_1 == 0
            cond:351_1 = temp44_1 == 0
            cond:352_1 = temp44_1 != 0
            cond:371_1 = temp44_1 != 0
            cond:372_1 = temp44_1 == 0
            cond:391_1 = temp44_1 == 0
            cond:392_1 = temp44_1 != 0
            
            if (temp44_1 != 0)
                goto label_140365490
            
            goto label_1403650d5
        
    label_14036546e:
        arg5 = var_958_2
        var_958_2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg5, 1), arg5, 0xe2)
        char temp43_1 = rax_274 & 4
        cond:304_1 = temp43_1 != 0
        cond:305_1 = temp43_1 == 0
        cond:320_1 = temp43_1 == 0
        cond:321_1 = temp43_1 != 0
        cond:340_1 = temp43_1 != 0
        cond:341_1 = temp43_1 == 0
        cond:351_1 = temp43_1 == 0
        cond:352_1 = temp43_1 != 0
        cond:371_1 = temp43_1 != 0
        cond:372_1 = temp43_1 == 0
        cond:391_1 = temp43_1 == 0
        cond:392_1 = temp43_1 != 0
        
        if (temp43_1 != 0)
        label_140365490:
            zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(arg7, zmm8, 0x32), 0x84)
            
            if (cond:305_1)
                goto label_1403650db
            
            goto label_1403654a3
        
    label_1403650d5:
        
        if (not(cond:304_1))
        label_1403650db:
            
            if (cond:321_1)
                goto label_1403654b6
            
            goto label_1403650e1
        
    label_1403654a3:
        zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(arg10, zmm10, 0x32), 0x84)
        
        if (not(cond:320_1))
        label_1403654b6:
            arg14 = _mm_shuffle_ps(arg14, _mm_shuffle_ps(arg6, arg14, 0x32), 0x84)
            
            if (cond:341_1)
                goto label_1403650e7
            
            goto label_1403654ca
        
    label_1403650e1:
        
        if (not(cond:340_1))
        label_1403650e7:
            
            if (cond:352_1)
                goto label_1403654de
            
            goto label_1403650ed
        
    label_1403654ca:
        arg13 = _mm_shuffle_ps(arg13, _mm_shuffle_ps(arg12, arg13, 0x32), 0x84)
        
        if (not(cond:351_1))
        label_1403654de:
            zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(arg11, zmm14, 0x32), 0x84)
            
            if (cond:372_1)
                goto label_1403650f3
            
            goto label_1403654f9
        
    label_1403650ed:
        
        if (not(cond:371_1))
        label_1403650f3:
            
            if (cond:392_1)
                goto label_140365507
            
            goto label_1403650f9
        
    label_1403654f9:
        var_908_1 = _mm_shuffle_ps(var_908_1, _mm_shuffle_ps(arg9, var_908_1, 0x32), 0x84)
        bool cond:424_1
        bool cond:425_1
        bool cond:439_1
        bool cond:440_1
        bool cond:455_1
        bool cond:456_1
        bool cond:462_1
        bool cond:463_1
        bool cond:470_1
        bool cond:471_1
        bool cond:478_1
        bool cond:479_1
        
        if (not(cond:391_1))
        label_140365507:
            arg5 = var_958_2
            var_958_2 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm2, arg5, 0x32), 0x84)
            char temp64_1 = rax_274 & 8
            cond:424_1 = temp64_1 == 0
            cond:425_1 = temp64_1 != 0
            cond:439_1 = temp64_1 != 0
            cond:440_1 = temp64_1 == 0
            cond:455_1 = temp64_1 == 0
            cond:456_1 = temp64_1 != 0
            cond:462_1 = temp64_1 != 0
            cond:463_1 = temp64_1 == 0
            cond:470_1 = temp64_1 == 0
            cond:471_1 = temp64_1 != 0
            cond:478_1 = temp64_1 != 0
            cond:479_1 = temp64_1 == 0
            
            if (temp64_1 == 0)
                goto label_140365101
            
            goto label_140365526
        
    label_1403650f9:
        char temp63_1 = rax_274 & 8
        cond:424_1 = temp63_1 == 0
        cond:425_1 = temp63_1 != 0
        cond:439_1 = temp63_1 != 0
        cond:440_1 = temp63_1 == 0
        cond:455_1 = temp63_1 == 0
        cond:456_1 = temp63_1 != 0
        cond:462_1 = temp63_1 != 0
        cond:463_1 = temp63_1 == 0
        cond:470_1 = temp63_1 == 0
        cond:471_1 = temp63_1 != 0
        cond:478_1 = temp63_1 != 0
        cond:479_1 = temp63_1 == 0
        
        if (temp63_1 == 0)
        label_140365101:
            
            if (cond:425_1)
                goto label_140365536
            
            goto label_140365107
        
    label_140365526:
        zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(arg7, zmm8, 0x23), 0x24)
        
        if (not(cond:424_1))
        label_140365536:
            zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(arg10, zmm10, 0x23), 0x24)
            
            if (cond:440_1)
                goto label_14036510d
            
            goto label_140365546
        
    label_140365107:
        
        if (not(cond:439_1))
        label_14036510d:
            
            if (cond:456_1)
                goto label_140365556
            
            goto label_140365113
        
    label_140365546:
        arg14 = _mm_shuffle_ps(arg14, _mm_shuffle_ps(arg6, arg14, 0x23), 0x24)
        
        if (not(cond:455_1))
        label_140365556:
            arg13 = _mm_shuffle_ps(arg13, _mm_shuffle_ps(arg12, arg13, 0x23), 0x24)
            
            if (cond:463_1)
                goto label_140365119
            
            goto label_140365566
        
    label_140365113:
        
        if (cond:462_1)
        label_140365566:
            zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(arg11, zmm14, 0x23), 0x24)
            
            if (not(cond:470_1))
            label_140365571:
                zmm0 = var_908_1
                var_908_1 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg9, zmm0, 0x23), 0x24)
                
                if (cond:479_1)
                    goto label_140365125
                
                goto label_140365596
        else
        label_140365119:
            
            if (cond:471_1)
                goto label_140365571
        
        if (cond:478_1)
        label_140365596:
            var_958_2 = _mm_shuffle_ps(var_958_2, _mm_shuffle_ps(zmm2, var_958_2, 0x23), 0x24)
            i_2 = zx.q(i_6)
            
            if ((i_2.b & 1) != 0)
                goto label_1403655a6
        else
        label_140365125:
            i_2 = zx.q(i_6)
            
            if ((i_2.b & 1) != 0)
                goto label_1403655a6
    else
    label_140362e68:
        i_2 = zx.q(i_5)
        
        if ((i_2.b & 1) != 0)
        label_1403655a6:
            float var_6b8_1 = zmm8[0]
            
            if ((i_2.b & 2) == 0)
                goto label_140365138
            
            goto label_1403655c1
    
label_140365130:
    
    if ((i_2.b & 2) == 0)
    label_140365138:
        
        if ((i_2.b & 4) != 0)
            goto label_1403655db
        
        goto label_140365140
    
label_1403655c1:
    float var_69c_1 = _mm_shuffle_ps(zmm8, zmm8, 0xe5)[0]
    
    if ((i_2.b & 4) != 0)
    label_1403655db:
        float var_680_1 = _mm_unpackhi_pd(zmm8, zmm8[0].q)[0]
        
        if ((i_2.b & 8) == 0)
            goto label_140365148
        
        goto label_1403655f1
    
label_140365140:
    
    if ((i_2.b & 8) == 0)
    label_140365148:
        
        if ((i_2.b & 1) != 0)
            goto label_140365603
        
        goto label_140365150
    
label_1403655f1:
    float var_664_1 = _mm_shuffle_ps(zmm8, zmm8, 0xe7)[0]
    float var_6b4
    
    if ((i_2.b & 1) != 0)
    label_140365603:
        var_6b4 = zmm10[0]
        
        if ((i_2.b & 2) == 0)
            goto label_140365158
        
        goto label_14036561e
    
label_140365150:
    
    if ((i_2.b & 2) == 0)
    label_140365158:
        
        if ((i_2.b & 4) != 0)
            goto label_140365638
        
        goto label_140365160
    
label_14036561e:
    float var_698_1 = _mm_shuffle_ps(zmm10, zmm10, 0xe5)[0]
    
    if ((i_2.b & 4) != 0)
    label_140365638:
        float var_67c_1 = _mm_unpackhi_pd(zmm10, zmm10[0].q)[0]
        
        if ((i_2.b & 8) == 0)
            goto label_140365168
        
        goto label_14036564e
    
label_140365160:
    
    if ((i_2.b & 8) == 0)
    label_140365168:
        
        if ((i_2.b & 1) != 0)
            goto label_140365660
        
        goto label_140365170
    
label_14036564e:
    float var_660_1 = _mm_shuffle_ps(zmm10, zmm10, 0xe7)[0]
    float var_6b0
    
    if ((i_2.b & 1) != 0)
    label_140365660:
        var_6b0 = arg14[0]
        
        if ((i_2.b & 2) == 0)
            goto label_140365178
        
        goto label_14036567b
    
label_140365170:
    
    if ((i_2.b & 2) == 0)
    label_140365178:
        
        if ((i_2.b & 4) != 0)
            goto label_140365695
        
        goto label_140365180
    
label_14036567b:
    float var_694_1 = _mm_shuffle_ps(arg14, arg14, 0xe5)[0]
    
    if ((i_2.b & 4) != 0)
    label_140365695:
        float var_678_1 = _mm_unpackhi_pd(arg14, arg14[0].q)[0]
        
        if ((i_2.b & 8) == 0)
            goto label_140365188
        
        goto label_1403656ab
    
label_140365180:
    
    if ((i_2.b & 8) == 0)
    label_140365188:
        
        if ((i_2.b & 1) != 0)
            goto label_1403656bd
        
        goto label_140365190
    
label_1403656ab:
    float var_65c_1 = _mm_shuffle_ps(arg14, arg14, 0xe7)[0]
    float var_6ac
    
    if ((i_2.b & 1) != 0)
    label_1403656bd:
        var_6ac = arg13[0]
        
        if ((i_2.b & 2) == 0)
            goto label_140365198
        
        goto label_1403656d8
    
label_140365190:
    
    if ((i_2.b & 2) == 0)
    label_140365198:
        
        if ((i_2.b & 4) != 0)
            goto label_1403656f2
        
        goto label_1403651a0
    
label_1403656d8:
    float var_690_1 = _mm_shuffle_ps(arg13, arg13, 0xe5)[0]
    
    if ((i_2.b & 4) != 0)
    label_1403656f2:
        float var_674_1 = _mm_unpackhi_pd(arg13, arg13[0].q)[0]
        
        if ((i_2.b & 8) == 0)
            goto label_1403651a8
        
        goto label_140365708
    
label_1403651a0:
    
    if ((i_2.b & 8) == 0)
    label_1403651a8:
        
        if ((i_2.b & 1) != 0)
            goto label_14036571a
        
        goto label_1403651b0
    
label_140365708:
    float var_658_1 = _mm_shuffle_ps(arg13, arg13, 0xe7)[0]
    float var_6a8
    
    if ((i_2.b & 1) != 0)
    label_14036571a:
        var_6a8 = zmm14[0]
        
        if ((i_2.b & 2) == 0)
            goto label_1403651b8
        
        goto label_140365735
    
label_1403651b0:
    
    if ((i_2.b & 2) == 0)
    label_1403651b8:
        
        if ((i_2.b & 4) != 0)
            goto label_14036574f
        
        goto label_1403651c0
    
label_140365735:
    float var_68c_1 = _mm_shuffle_ps(zmm14, zmm14, 0xe5)[0]
    
    if ((i_2.b & 4) != 0)
    label_14036574f:
        float var_670_1 = _mm_unpackhi_pd(zmm14, zmm14[0].q)[0]
        
        if ((i_2.b & 8) == 0)
            goto label_1403651c8
        
        goto label_140365765
    
label_1403651c0:
    
    if ((i_2.b & 8) == 0)
    label_1403651c8:
        
        if ((i_2.b & 1) != 0)
            goto label_14036577c
        
        goto label_1403651d0
    
label_140365765:
    float var_654_1 = _mm_shuffle_ps(zmm14, zmm14, 0xe7)[0]
    float var_6a4
    
    if ((i_2.b & 1) != 0)
    label_14036577c:
        var_6a4 = var_908_1[0]
        
        if ((i_2.b & 2) == 0)
            goto label_1403651d8
        
        goto label_14036578d
    
label_1403651d0:
    
    if ((i_2.b & 2) == 0)
    label_1403651d8:
        
        if ((i_2.b & 4) != 0)
            goto label_1403657a7
        
        goto label_1403651e0
    
label_14036578d:
    zmm0 = var_908_1
    float var_688_1 = _mm_shuffle_ps(zmm0, zmm0, 0xe5)[0]
    
    if ((i_2.b & 4) != 0)
    label_1403657a7:
        zmm0 = var_908_1
        zmm0[0].q = zmm0 u>> 0x40
        float var_66c_1 = zmm0[0]
        
        if ((i_2.b & 8) == 0)
            goto label_1403651e8
        
        goto label_1403657c0
    
label_1403651e0:
    
    if ((i_2.b & 8) == 0)
    label_1403651e8:
        
        if ((i_2.b & 1) != 0)
            goto label_1403657e4
        
        goto label_1403651f0
    
label_1403657c0:
    zmm0 = var_908_1
    float var_650_1 = _mm_shuffle_ps(zmm0, zmm0, 0xe7)[0]
    char var_6a0[0x4]
    
    if ((i_2.b & 1) != 0)
    label_1403657e4:
        var_6a0[0] = var_958_2[0].b
        
        if ((i_2.b & 2) == 0)
            goto label_1403651f8
        
        goto label_1403657fe
    
label_1403651f0:
    
    if ((i_2.b & 2) == 0)
    label_1403651f8:
        
        if ((i_2.b & 4) != 0)
            goto label_140365818
        
        goto label_140365200
    
label_1403657fe:
    char var_684_1 = _mm_extract_epi16(var_958_2, 2)
    char var_64c_1
    
    if ((i_2.b & 4) == 0)
    label_140365200:
        
        if ((i_2.b & 8) != 0)
            var_64c_1 = _mm_extract_epi16(var_958_2, 6)
    else
    label_140365818:
        char var_668_1 = _mm_extract_epi16(var_958_2, 4)
        
        if ((i_2.b & 8) != 0)
            var_64c_1 = _mm_extract_epi16(var_958_2, 6)
    
    do
        uint64_t rcx_111
        uint64_t rflags_1
        
        if (i_2 == 0)
            rcx_111 = 0x40
        else
            rcx_111, rflags_1 = _bit_scan_forward(i_2)
        i_2 &= not.q(1 << (rcx_111 u% 0x40))
        uint64_t rdx_10 = rcx_111 * 0x1c
        char rbx_16 = arg16[6].b
        char rcx_112 = var_6a0[rdx_10]
        
        if (rbx_16 != 0 && rcx_112 != 0)
            arg5 = arg16[2]
            float temp0_1267[0x4] =
                _mm_unpacklo_ps(var_968[rcx_111 * 7 + 0xac], (&var_6b4)[rcx_111 * 7][0].q)
            zmm0 = _mm_min_ps(zx.o(*arg16)[0].q | arg5.q << 0x40, 
                temp0_1267[0].q | (&var_6b0)[rcx_111 * 7][0].q << 0x40)
            arg5 = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
            zmm2 = _mm_unpackhi_pd(zmm0, zmm0[0].q)
            float temp0_1271[0x4] = _mm_max_ps(zx.o(*(arg16 + 0xc))[0].q | arg16[5][0].q << 0x40, 
                zx.o(*(&var_6ac + rdx_10))[0].q | (&var_6a4)[rcx_111 * 7][0].q << 0x40)
            arg6 = temp0_1271
            arg7 = _mm_shuffle_ps(arg6, arg6, 0xe5)
            arg8 = _mm_unpackhi_pd(arg6, arg6[0].q)
        else if (rcx_112 == 0)
            rbx_16 = arg16[6].b
            arg8 = arg16[5]
            arg7 = arg16[4]
            arg6 = arg16[3]
            zmm2 = arg16[2]
            zmm0 = *arg16
            arg5 = arg16[1]
        else
            zmm0 = var_968[rcx_111 * 7 + 0xac]
            arg5 = (&var_6b4)[rcx_111 * 7]
            zmm2 = (&var_6b0)[rcx_111 * 7]
            arg6 = (&var_6ac)[rcx_111 * 7]
            arg7 = (&var_6a8)[rcx_111 * 7]
            arg8 = (&var_6a4)[rcx_111 * 7]
            rbx_16 = rcx_112
        
        *arg16 = zmm0[0]
        arg16[1] = arg5.d
        arg16[2] = zmm2[0]
        arg16[3] = arg6[0]
        arg16[4] = arg7[0]
        arg16[5] = arg8[0]
        arg16[6].b = rbx_16
    while (i_2 != 0)
else
    uint64_t r11_1 = 0
    float var_908[0x4]
    uint64_t rax_86
    float var_928[0x4]
    float var_918[0x4]
    float var_8d8[0x4]
    
    if (i s<= 0)
        arg10 = zx.o(0)
        var_908 = zx.o(0)
        zmm2 = zx.o(0)
        arg11 = zx.o(0)
        zmm10 = zx.o(0)
        arg6 = zx.o(0)
        arg12 = zx.o(0)
        rax_86 = zx.q(arg17)
        
        if (0 s< rax_86.d)
        label_140362da1:
            float var_898_4[0x4] = arg6
            zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(r11_1.d), 0), data_142e11d00)
            arg5 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(rax_86.d), 0), zmm0)
            int64_t rbp_11 = sx.q(r11_1.d << 2)
            uint32_t temp0_759 = _mm_movemask_ps(arg5)
            uint64_t rax_88 = zx.q(temp0_759) & 0xfffffff9
            float var_8c8_4[0x4] = arg10
            float var_888_3[0x4] = zmm2
            float var_848_3[0x4] = zmm10
            float var_868_4[0x4] = arg11
            uint32_t var_878_4[0x4] = arg12
            char var_808_1 = temp0_759.b
            
            if (rax_88 != 9)
                if ((temp0_759.b & 1) == 0)
                    if ((temp0_759.b & 2) != 0)
                        goto label_140364d2a
                    
                    goto label_1403631c7
                
                var_7b8 = *(arg2 + rbp_11)
                
                if ((temp0_759.b & 2) != 0)
                label_140364d2a:
                    int32_t var_7b4_2 = *(arg2 + rbp_11 + 4)
                    
                    if ((temp0_759.b & 4) == 0)
                        goto label_1403631d0
                    
                    goto label_140364d3e
                
            label_1403631c7:
                int32_t var_7ac_2
                
                if ((temp0_759.b & 4) != 0)
                label_140364d3e:
                    int32_t var_7b0_2 = *(arg2 + rbp_11 + 8)
                    
                    if ((temp0_759.b & 8) != 0)
                        var_7ac_2 = *(arg2 + rbp_11 + 0xc)
                else
                label_1403631d0:
                    
                    if ((temp0_759.b & 8) != 0)
                        var_7ac_2 = *(arg2 + rbp_11 + 0xc)
                arg6 = var_7b8.o
            else
                arg6 = *(arg2 + rbp_11)
            
            zmm2 = _mm_sub_epi32(_mm_slli_epi32(zmm0, 3), zmm0) & arg5
            int64_t rcx_88 = sx.q(zmm2[0])
            void* rbp_14 = arg4 + (rcx_88 << 2)
            zmm15 = zx.o(*(arg4 + (rcx_88 << 2)))
            int64_t rcx_90 = sx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
            void* rdi_14 = arg4 + (rcx_90 << 2)
            arg12 = zx.o(*(arg4 + (rcx_90 << 2)))
            int64_t rcx_92 = sx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
            void* rdx_1 = arg4 + (rcx_92 << 2)
            arg14 = zx.o(*(arg4 + (rcx_92 << 2)))
            int64_t rcx_94 = sx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
            void* rsi_11 = arg4 + (rcx_94 << 2)
            zmm14 = zx.o(*(arg4 + (rcx_94 << 2)))
            zmm0 = data_142fc95e0 & arg5
            zmm8 = zx.o(*(zx.q(zmm0[0]) + rbp_14))
            float var_8b8_5[0x4] = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_14)
            float var_858_3[0x4] = *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rdx_1)
            var_928[0].q = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
            zmm0 = data_142fc95f0 & arg5
            zmm10 = *(zx.q(zmm0[0]) + rbp_14)
            float var_828_2[0x4] = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_14)
            var_918[0].q = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            var_8d8[0].q = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
            zmm0 = data_143442650 & arg5
            arg10 = *(zx.q(zmm0[0]) + rbp_14)
            var_7e8.o = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_14)
            uint64_t rax_124 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            uint64_t r9_2 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
            zmm0 = data_143442660 & arg5
            arg7 = *(zx.q(zmm0[0]) + rbp_14)
            float var_7c8_4[0x4] = *(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rdi_14)
            rax_86 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            uint64_t rcx_104 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
            zmm0 = data_143442670 & arg5
            float var_958_3[0x4] = *(zx.q(zmm0[0]) + rbp_14)
            uint64_t rbx_11 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            uint32_t (* r15_3)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            float (* r13_3)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
            zmm0 = data_143442700 & arg5
            uint64_t r11_5 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
            uint64_t r12_5 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
            float var_7f8_5[0x4] = *(rbx_11 + rdi_14)
            uint32_t rbx_13 = zx.d(*(zx.q(zmm0[0]) + rbp_14))
            uint32_t rbp_15 = zx.d(*(r11_5 + rdi_14))
            uint64_t rdi_15 = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
            arg9 = _mm_insert_epi16(
                _mm_insert_epi16(_mm_insert_epi16(zx.o(rbx_13), rbp_15, 2), zx.d(*(r12_5 + rdx_1)), 
                    4), 
                zx.d(*(rdi_15 + rsi_11)), 6)
            float var_928_3[0x4] = *(var_928[0].q + rsi_11)
            arg13 = *(var_918[0].q + rdx_1)
            int32_t var_818_6[0x4] = *(var_8d8[0].q + rsi_11)
            zmm2 = *(rax_124 + rdx_1)
            uint64_t var_8f8_2
            var_8f8_2.o = *(r9_2 + rsi_11)
            arg11 = *(rax_86 + rdx_1)
            float var_8d8_5[0x4] = *(rcx_104 + rsi_11)
            arg8 = *(r15_3 + rdx_1)
            zmm0 = *(r13_3 + rsi_11)
            var_968 = arg7
            float var_938_10[0x4] = zmm10
            float var_918_3[0x4] = zmm0
            
            if (rax_88 != 9)
                if ((var_808_1 & 1) == 0)
                    zmm0 = zmm14
                    
                    if ((var_808_1 & 2) != 0)
                        goto label_140364de3
                    
                    goto label_1403640dd
                
                var_7b8 = *(arg1 + rbp_11)
                zmm0 = zmm14
                
                if ((var_808_1 & 2) != 0)
                label_140364de3:
                    int32_t var_7b4_4 = *(arg1 + rbp_11 + 4)
                    zmm14 = arg14
                    zmm10 = zmm8
                    
                    if ((var_808_1 & 4) == 0)
                        goto label_1403640f1
                    
                    goto label_140364e0a
                
            label_1403640dd:
                zmm14 = arg14
                zmm10 = zmm8
                int32_t var_7ac_4
                
                if ((var_808_1 & 4) != 0)
                label_140364e0a:
                    int32_t var_7b0_4 = *(arg1 + rbp_11 + 8)
                    
                    if ((var_808_1 & 8) != 0)
                        var_7ac_4 = *(arg1 + rbp_11 + 0xc)
                else
                label_1403640f1:
                    
                    if ((var_808_1 & 8) != 0)
                        var_7ac_4 = *(arg1 + rbp_11 + 0xc)
                arg7 = var_7b8.o
            else
                zmm0 = zmm14
                zmm14 = arg14
                zmm10 = zmm8
                arg7 = *(arg1 + rbp_11)
            
            zmm8 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(zmm8, zmm8), arg7)
                & not.o(_mm_cmpeq_epi32(arg9 & data_142ed6810, zx.o(0)) & not.o(arg5))
            rcx_1 = zx.q(_mm_movemask_ps(zmm8))
            
            if (rcx_1.b == 0)
                arg10 = var_8c8_4
                zmm2 = var_888_3
                zmm10 = var_848_3
                arg11 = var_868_4
                arg6 = var_898_4
                arg12 = var_878_4
            else
                zmm14 = _mm_unpacklo_epi32(zmm14, zmm0[0].q)
                uint64_t var_948_1
                var_948_1.o = _mm_unpacklo_epi64(_mm_unpacklo_epi32(zmm15, arg12[0].q), zmm14[0].q)
                zmm0 = __punpckldq_xmmdq_memdq(var_858_3, var_928_3)
                float var_928_5[0x4] =
                    _mm_unpacklo_epi64(__punpckldq_xmmdq_memdq(zmm10, var_8b8_5), zmm0[0].q)
                float temp0_1042[0x4] = __unpcklps_xmmps_memdq(arg13, var_818_6)
                uint32_t var_938_12[0x4] =
                    __unpcklps_xmmps_memdq(var_938_10, var_828_2)[0].q | temp0_1042[0].q << 0x40
                float temp0_1044[0x4] = __unpcklps_xmmps_memdq(zmm2, var_8f8_2.o)
                int64_t var_8e8_1
                var_8e8_1.o =
                    __unpcklps_xmmps_memdq(arg10, var_7e8.o)[0].q | temp0_1044[0].q << 0x40
                float temp0_1046[0x4] = __unpcklps_xmmps_memdq(arg11, var_8d8_5)
                var_968 = __unpcklps_xmmps_memdq(var_968, var_7c8_4)[0].q | temp0_1046[0].q << 0x40
                arg8 = __unpcklps_xmmps_memdq(arg8, var_918_3)
                float var_958_4[0x4] =
                    __unpcklps_xmmps_memdq(var_958_3, var_7f8_5)[0].q | arg8[0].q << 0x40
                arg6 = _mm_slli_epi32(arg6, 6) & zmm8
                int64_t rax_194 = sx.q(arg6[0])
                void* rdx_6 = arg3 + rax_194
                arg5 = *(arg3 + rax_194)
                int64_t rax_196 = sx.q(_mm_shuffle_epi32(arg6, 0xe5)[0])
                void* rbx_15 = arg3 + rax_196
                zmm2 = _mm_unpacklo_ps(arg5, (*(arg3 + rax_196))[0].q)
                int64_t rax_198 = sx.q(_mm_shuffle_epi32(arg6, 0x4e)[0])
                void* rbp_24 = arg3 + rax_198
                zmm0 = *(arg3 + rax_198)
                int64_t rax_200 = sx.q(_mm_shuffle_epi32(arg6, 0xe7).d)
                void* rdi_17 = arg3 + rax_200
                float temp0_1055[0x4] = _mm_unpacklo_ps(zmm0, (*(arg3 + rax_200)).q)
                float var_918_5[0x4] = zmm2[0].q | temp0_1055[0].q << 0x40
                zmm0 = data_142fc95e0 & zmm8
                float temp0_1057[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_6), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbx_15)).q)
                arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbp_24), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_17))[0].q)
                float var_8d8_7[0x4] = temp0_1057[0].q | arg5.q << 0x40
                zmm0 = data_142fc95f0 & zmm8
                float temp0_1062[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_6), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbx_15)).q)
                arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbp_24), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_17))[0].q)
                var_8a8.o = temp0_1062[0].q | arg5.q << 0x40
                zmm0 = data_143442650 & zmm8
                float temp0_1067[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_6), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbx_15)).q)
                arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rbp_24), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_17))[0].q)
                float var_8b8_7[0x4] = temp0_1067[0].q | arg5.q << 0x40
                zmm0 = data_143442660 & zmm8
                uint128_t var_858_6 = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_6), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbx_15))[0].q).q | _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_24), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_17))[0].q)[0].q << 0x40
                zmm0 = data_143442670 & zmm8
                float temp0_1077[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_6), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbx_15))[0].q)
                float temp0_1080[0x4] = _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_24), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_17))[0].q)
                arg13 = temp0_1077[0].q | temp0_1080[0].q << 0x40
                zmm0 = data_143442700 & zmm8
                float temp0_1082[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_6), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbx_15))[0].q)
                float temp0_1085[0x4] = _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_24), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_17))[0].q)
                arg7 = temp0_1082[0].q | temp0_1085[0].q << 0x40
                zmm0 = data_1434b2e20 & zmm8
                float temp0_1087[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_6), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbx_15))[0].q)
                float temp0_1090[0x4] = _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_24), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_17))[0].q)
                arg9 = temp0_1087[0].q | temp0_1090[0].q << 0x40
                zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[0].o & zmm8
                float temp0_1092[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_6), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbx_15))[0].q)
                float temp0_1095[0x4] = _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_24), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_17))[0].q)
                arg6 = temp0_1092[0].q | temp0_1095[0].q << 0x40
                zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[4].o & zmm8
                float temp0_1097[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_6), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbx_15))[0].q)
                float temp0_1100[0x4] = _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_24), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_17))[0].q)
                zmm10 = temp0_1097[0].q | temp0_1100[0].q << 0x40
                zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[8].o & zmm8
                arg12 = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_6), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbx_15))[0].q)
                float temp0_1105[0x4] = _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_24), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_17))[0].q)
                arg12 = arg12[0].q | temp0_1105[0].q << 0x40
                zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[0xc].o & zmm8
                float temp0_1107[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rdx_6), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbx_15))[0].q)
                float temp0_1110[0x4] = _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rbp_24), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_17))[0].q)
                arg11 = temp0_1107[0].q | temp0_1110[0].q << 0x40
                zmm2 = (*U"    $$$$((((,,,,000044448888<<<<")[0x10].o & zmm8
                float temp0_1112[0x4] = _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rdx_6), 
                    (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0]) + rbx_15))[0].q)
                float temp0_1115[0x4] = _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0]) + rbp_24), 
                    (*(zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0]) + rdi_17))[0].q)
                zmm0 = temp0_1112[0].q | temp0_1115[0].q << 0x40
                arg10 = (*U"    $$$$((((,,,,000044448888<<<<")[0x14].o & zmm8
                float temp0_1117[0x4] = _mm_unpacklo_ps(*(zx.q(arg10[0]) + rdx_6), 
                    (*(zx.q(_mm_shuffle_epi32(arg10, 0xe5)[0]) + rbx_15))[0].q)
                arg8 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(arg10, 0x4e)[0]) + rbp_24), 
                    (*(zx.q(_mm_shuffle_epi32(arg10, 0xe7)[0]) + rdi_17))[0].q)
                zmm2 = temp0_1117[0].q | arg8[0].q << 0x40
                arg8 = (*U"    $$$$((((,,,,000044448888<<<<")[0x18].o & zmm8
                uint64_t rax_253 = zx.q(arg8[0])
                uint64_t rsi_15 = zx.q(_mm_shuffle_epi32(arg8, 0xe5)[0])
                float temp0_1122[0x4] =
                    _mm_unpacklo_ps(*(rax_253 + rdx_6), (*(rsi_15 + rbx_15))[0].q)
                uint32_t (* rax_254)[0x4] = zx.q(_mm_shuffle_epi32(arg8, 0x4e)[0])
                float (* rsi_16)[0x4] = zx.q(_mm_shuffle_epi32(arg8, 0xe7)[0])
                arg8 = _mm_unpacklo_ps(*(rax_254 + rbp_24), (*(rsi_16 + rdi_17))[0].q)
                zmm14 = temp0_1122[0].q | arg8[0].q << 0x40
                var_8f8_2.o = zmm8
                arg8 = (*U"    $$$$((((,,,,000044448888<<<<")[0x1c].o & zmm8
                float (* rax_255)[0x4] = zx.q(_mm_shuffle_epi32(arg8, 0xe5)[0])
                float temp0_1127[0x4] =
                    _mm_unpacklo_ps(*(zx.q(arg8[0]) + rdx_6), (*(rax_255 + rbx_15))[0].q)
                uint128_t* rax_256 = zx.q(_mm_shuffle_epi32(arg8, 0x4e).d)
                uint32_t (* rdx_7)[0x4] = zx.q(_mm_shuffle_epi32(arg8, 0xe7).d)
                arg5 = _mm_unpacklo_ps(*(rax_256 + rbp_24), (*(rdx_7 + rdi_17))[0].q)
                arg10 = temp0_1127[0].q | arg5.q << 0x40
                uint128_t var_2e8 = var_918_5
                uint128_t var_2d8 = var_8d8_7
                uint128_t var_2c8 = var_8a8.o
                uint128_t var_2b8 = var_8b8_7
                uint128_t var_2a8_1 = var_858_6
                float var_298_1[0x4] = arg13
                float var_288_1[0x4] = arg7
                float var_278_1[0x4] = arg9
                float var_268_1[0x4] = arg6
                float var_258_1[0x4] = zmm10
                uint32_t var_248_1[0x4] = arg12
                float var_238_1[0x4] = arg11
                float var_228_1[0x4] = zmm0
                float var_218_1[0x4] = zmm2
                float var_208_1[0x4] = zmm14
                float var_1f8_1[0x4] = arg10
                zmm8 = (*arg15)[9]
                arg11 = (*arg15)[0xd]
                zmm10 = (*arg15)[2]
                arg12 = (*arg15)[3]
                zmm14 = (*arg15)[6]
                zmm15 = (*arg15)[0xa]
                arg8 = (*arg15)[0xe]
                zmm0 = (*arg15)[7]
                arg5 = (*arg15)[0xb]
                
                for (int64_t i_3 = 0; i_3 != 0x100; i_3 += 0x40)
                    zmm2 = *arg15
                    arg10 = arg15[1][0]
                    float temp0_1131[0x4] = _mm_shuffle_ps(zmm2, zmm2, 0)
                    arg13 = *(&var_2e8 + i_3)
                    arg9 = *(&var_2d8 + i_3)
                    arg7 = *(&var_2c8 + i_3)
                    arg6 = *(&var_2b8 + i_3)
                    float temp0_1133[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1131, arg13), zx.o(0))
                    float temp0_1136[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg10, arg10, 0), arg9), temp0_1133)
                    zmm2 = arg15[2][0]
                    float temp0_1139[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), arg7), temp0_1136)
                    arg10 = arg15[3][0]
                    *(&var_7b8 + i_3) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg10, arg10, 0), arg6), temp0_1139)
                    zmm2 = (*arg15)[1]
                    arg10 = (*arg15)[5]
                    float temp0_1145[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), arg13), zx.o(0))
                    float temp0_1148[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg10, arg10, 0), arg9), temp0_1145)
                    float temp0_1151[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm8, zmm8, 0), arg7), temp0_1148)
                    *(&var_7a8 + i_3) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg11, arg11, 0), arg6), temp0_1151)
                    float temp0_1157[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm10, zmm10, 0), arg13), zx.o(0))
                    float temp0_1160[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), arg9), temp0_1157)
                    float temp0_1163[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0), arg7), temp0_1160)
                    *(&var_798 + i_3) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg8, arg8, 0), arg6), temp0_1163)
                    float temp0_1169[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg12, arg12, 0), arg13), zx.o(0))
                    float temp0_1172[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), arg9), temp0_1169)
                    float temp0_1175[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), arg7), temp0_1172)
                    arg7 = (*arg15)[0xf]
                    *(&var_788 + i_3) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), arg6), temp0_1175)
                
                arg13 = var_7b8.o
                zmm14 = var_7a8
                arg9 = var_798
                zmm10 = var_778
                arg12 = var_768
                arg6 = var_8e8_1.o
                float temp0_1179[0x4] = _mm_add_ps(var_948_1.o, arg6)
                arg5 = data_142d3f640
                float temp0_1180[0x4] = _mm_mul_ps(temp0_1179, arg5)
                arg10 = arg5
                float temp0_1181[0x4] = _mm_mul_ps(temp0_1180, arg13)
                arg8 = _mm_mul_ps(temp0_1180, zmm14)
                arg5 = var_968
                float temp0_1184[0x4] = _mm_mul_ps(_mm_add_ps(var_928_5, arg5), arg10)
                float temp0_1186[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1184, zmm10), temp0_1181)
                float temp0_1188[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1184, arg12), arg8)
                arg8 = _mm_mul_ps(temp0_1180, arg9)
                float temp0_1191[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1184, var_758), arg8)
                arg8 = var_788
                uint32_t var_858_7[0x4] = arg8
                float temp0_1192[0x4] = _mm_mul_ps(temp0_1180, arg8)
                arg8 = var_748
                uint32_t var_8b8_8[0x4] = arg8
                float temp0_1194[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1184, arg8), temp0_1192)
                arg8 = _mm_mul_ps(_mm_add_ps(var_938_12, var_958_4), arg10)
                zmm15 = var_738
                float temp0_1198[0x4] = _mm_add_ps(_mm_mul_ps(arg8, zmm15), temp0_1186)
                float temp0_1200[0x4] = _mm_add_ps(_mm_mul_ps(arg8, var_728), temp0_1188)
                var_8a8.o = var_718
                float temp0_1202[0x4] = _mm_add_ps(_mm_mul_ps(arg8, var_718), temp0_1191)
                arg14 = var_708
                arg8 = _mm_mul_ps(arg8, arg14)
                float temp0_1204[0x4] = __addps_xmmps_memps(temp0_1198, var_6f8)
                float temp0_1205[0x4] = __addps_xmmps_memps(temp0_1200, var_6e8)
                float temp0_1206[0x4] = __addps_xmmps_memps(temp0_1202, var_6d8)
                arg8 = __addps_xmmps_memps(_mm_add_ps(arg8, temp0_1194), var_6c8)
                var_7b8.o = arg13
                var_7a8 = zmm14
                var_798 = arg9
                var_788 = var_858_7
                float var_5f8_4[0x4] = zmm10
                uint32_t var_5e8_4[0x4] = arg12
                float var_5d8_4[0x4] = var_758
                float var_5c8_4[0x4] = var_8b8_8
                float var_638_4[0x4] = zmm15
                float var_628_4[0x4] = var_728
                float var_618_4[0x4] = var_718
                float var_608_4[0x4] = arg14
                arg5 = __subps_xmmps_memps(arg5, var_928_5)
                float temp0_1210[0x4] = __subps_xmmps_memps(var_958_4, var_938_12)
                float temp0_1211[0x4] = __subps_xmmps_memps(arg6, var_948_1.o)
                zmm0 = data_142d3f640
                arg5 = _mm_mul_ps(arg5, zmm0)
                float temp0_1213[0x4] = _mm_mul_ps(temp0_1211, zmm0)
                arg11 = _mm_mul_ps(temp0_1210, zmm0)
                float var_528_2[0x4] = temp0_1204
                float var_518_2[0x4] = temp0_1205
                float var_508_2[0x4] = temp0_1206
                uint32_t var_4f8_2[0x4] = arg8
                float temp0_1215[0x4] = _mm_mul_ps(arg13, temp0_1213)
                float temp0_1216[0x4] = _mm_mul_ps(zmm14, temp0_1213)
                float temp0_1217[0x4] = __mulps_xmmps_memps(temp0_1213, arg9)
                float temp0_1218[0x4] = _mm_mul_ps(zmm10, arg5)
                arg12 = _mm_mul_ps(arg12, arg5)
                arg5 = __mulps_xmmps_memps(arg5, var_758)
                zmm2 = data_142d3f770
                arg13 = _mm_and_ps(temp0_1215, zmm2)
                float temp0_1223[0x4] = _mm_add_ps(_mm_and_ps(temp0_1218, zmm2), arg13)
                zmm14 = _mm_and_ps(temp0_1216, zmm2)
                arg12 = _mm_add_ps(_mm_and_ps(arg12, zmm2), zmm14)
                arg6 = _mm_and_ps(temp0_1217, zmm2)
                arg5 = _mm_add_ps(_mm_and_ps(arg5, zmm2), arg6)
                float temp0_1230[0x4] = _mm_mul_ps(zmm15, arg11)
                float temp0_1231[0x4] = _mm_mul_ps(var_728, arg11)
                float temp0_1232[0x4] = __mulps_xmmps_memps(arg11, var_8a8.o)
                float temp0_1234[0x4] = _mm_add_ps(_mm_and_ps(temp0_1230, zmm2), temp0_1223)
                float temp0_1236[0x4] = _mm_add_ps(_mm_and_ps(temp0_1231, zmm2), arg12)
                float temp0_1238[0x4] = _mm_add_ps(_mm_and_ps(temp0_1232, zmm2), arg5)
                float temp0_1239[0x4] = _mm_sub_ps(temp0_1204, temp0_1234)
                arg5 = _mm_sub_ps(temp0_1205, temp0_1236)
                arg12 = _mm_sub_ps(temp0_1206, temp0_1238)
                float temp0_1242[0x4] = _mm_add_ps(temp0_1234, temp0_1204)
                float temp0_1243[0x4] = _mm_add_ps(temp0_1236, temp0_1205)
                float temp0_1244[0x4] = _mm_add_ps(temp0_1238, temp0_1206)
                zmm10 = zx.o(0)
                arg8 = _mm_cmpeq_epi32(data_142ed6810 & var_8c8_4, zx.o(0))
                arg10 = var_8f8_2.o
                zmm0 = _mm_slli_epi32(arg8 & not.o(arg10), 0x1f)
                char temp0_1247 = _mm_movemask_ps(zmm0)
                
                if (temp0_1247 == 0)
                    goto label_140364edc
                
                arg13 = _mm_min_ps(var_878_4, temp0_1239)
                zmm15 = _mm_min_ps(var_898_4, arg5)
                zmm10 = var_848_3
                var_958_4 = _mm_min_ps(zmm10, arg12)
                var_938_12 = _mm_max_ps(var_868_4, temp0_1242)
                zmm2 = var_888_3
                arg11 = _mm_max_ps(zmm2, temp0_1243)
                var_968 = _mm_max_ps(var_908, temp0_1244)
                bool cond:72_1
                bool cond:89_1
                bool cond:90_1
                bool cond:105_1
                bool cond:106_1
                bool cond:121_1
                bool cond:122_1
                bool cond:141_1
                bool cond:142_1
                bool cond:161_1
                bool cond:162_1
                
                if (rcx_1.b != temp0_1247)
                    zmm10 = _mm_srai_epi32(zmm0, 0x1f)
                label_140364edc:
                    arg10 = _mm_slli_epi32(arg10 & arg8, 0x1f)
                    
                    if (_mm_movemask_ps(arg10) == 0)
                        zmm14 = var_8c8_4
                        zmm2 = var_888_3
                        zmm10 = var_848_3
                        goto label_140365846
                    
                    char temp0_1261 = _mm_movemask_ps(arg8)
                    char temp8_1 = temp0_1261 & 1
                    
                    if (temp8_1 == 0)
                        if (temp8_1 != 0)
                            goto label_140365fbf
                        
                        goto label_140364eef
                    
                    arg13[0] = temp0_1239[0]
                    
                    if (temp8_1 != 0)
                    label_140365fbf:
                        zmm15[0] = arg5.d
                        
                        if (temp8_1 == 0)
                            goto label_140364eef_1
                        
                        goto label_140365fcf
                    
                label_140364eef:
                    
                    if (temp8_1 == 0)
                    label_140364eef_1:
                        
                        if (temp8_1 != 0)
                            goto label_140365fdf
                        
                        goto label_140364eef_2
                    
                label_140365fcf:
                    var_958_4[0] = arg12[0]
                    
                    if (temp8_1 != 0)
                    label_140365fdf:
                        zmm0 = var_938_12
                        zmm0[0] = temp0_1242[0]
                        var_938_12 = zmm0
                        
                        if (temp8_1 == 0)
                            goto label_140364eef_3
                        
                        goto label_140365ff4
                    
                label_140364eef_2:
                    
                    if (temp8_1 == 0)
                    label_140364eef_3:
                        
                        if (temp8_1 != 0)
                            goto label_140365fff
                        
                        goto label_140364f15
                    
                label_140365ff4:
                    arg11[0] = temp0_1243[0]
                    
                    if (temp8_1 != 0)
                    label_140365fff:
                        zmm0 = var_968
                        zmm0[0] = temp0_1244[0]
                        var_968 = zmm0
                        var_948_1.o = temp0_1242
                        arg7 = var_8c8_4
                        zmm14 = arg7
                        
                        if (temp8_1 == 0)
                            goto label_140364f2d
                        
                        goto label_14036602c
                    
                label_140364f15:
                    var_948_1.o = temp0_1242
                    arg7 = var_8c8_4
                    zmm14 = arg7
                    bool cond:194_1
                    bool cond:195_1
                    bool cond:212_1
                    bool cond:213_1
                    bool cond:228_1
                    bool cond:229_1
                    bool cond:244_1
                    bool cond:245_1
                    bool cond:264_1
                    bool cond:265_1
                    bool cond:284_1
                    bool cond:285_1
                    
                    if (temp8_1 == 0)
                    label_140364f2d:
                        char temp26_1 = temp0_1261 & 2
                        cond:194_1 = temp26_1 != 0
                        cond:195_1 = temp26_1 == 0
                        cond:212_1 = temp26_1 == 0
                        cond:213_1 = temp26_1 != 0
                        cond:228_1 = temp26_1 != 0
                        cond:229_1 = temp26_1 == 0
                        cond:244_1 = temp26_1 == 0
                        cond:245_1 = temp26_1 != 0
                        cond:264_1 = temp26_1 != 0
                        cond:265_1 = temp26_1 == 0
                        cond:284_1 = temp26_1 == 0
                        cond:285_1 = temp26_1 != 0
                        
                        if (temp26_1 != 0)
                            goto label_14036604a
                        
                        goto label_140364f35
                    
                label_14036602c:
                    zmm14 = arg7
                    zmm14[0] = 1
                    char temp25_1 = temp0_1261 & 2
                    cond:194_1 = temp25_1 != 0
                    cond:195_1 = temp25_1 == 0
                    cond:212_1 = temp25_1 == 0
                    cond:213_1 = temp25_1 != 0
                    cond:228_1 = temp25_1 != 0
                    cond:229_1 = temp25_1 == 0
                    cond:244_1 = temp25_1 == 0
                    cond:245_1 = temp25_1 != 0
                    cond:264_1 = temp25_1 != 0
                    cond:265_1 = temp25_1 == 0
                    cond:284_1 = temp25_1 == 0
                    cond:285_1 = temp25_1 != 0
                    
                    if (temp25_1 != 0)
                    label_14036604a:
                        arg13 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_1239, arg13, 1), arg13, 0xe2)
                        
                        if (cond:195_1)
                            goto label_140364f3b
                        
                        goto label_140366061
                    
                label_140364f35:
                    
                    if (not(cond:194_1))
                    label_140364f3b:
                        
                        if (cond:213_1)
                            goto label_14036607c
                        
                        goto label_140364f41
                    
                label_140366061:
                    zmm15 = _mm_shuffle_ps(_mm_shuffle_ps(arg5, zmm15, 1), zmm15, 0xe2)
                    
                    if (not(cond:212_1))
                    label_14036607c:
                        var_958_4 =
                            _mm_shuffle_ps(_mm_shuffle_ps(arg12, var_958_4, 1), var_958_4, 0xe2)
                        
                        if (cond:229_1)
                            goto label_140364f47
                        
                        goto label_14036608c
                    
                label_140364f41:
                    
                    if (cond:228_1)
                    label_14036608c:
                        zmm2 = var_938_12
                        var_938_12 =
                            _mm_shuffle_ps(_mm_shuffle_ps(var_948_1.o, zmm2, 1), zmm2, 0xe2)
                        
                        if (not(cond:244_1))
                        label_1403660b2:
                            arg11 =
                                _mm_shuffle_ps(_mm_shuffle_ps(temp0_1243, arg11, 1), arg11, 0xe2)
                            
                            if (cond:265_1)
                                goto label_140364f58
                            
                            goto label_1403660c0
                    else
                    label_140364f47:
                        
                        if (cond:245_1)
                            goto label_1403660b2
                    
                    if (not(cond:264_1))
                    label_140364f58:
                        arg8 = 1
                        
                        if (cond:285_1)
                            goto label_1403660ed
                        
                        goto label_140364f62
                    
                label_1403660c0:
                    zmm2 = var_968
                    var_968 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_1244, zmm2, 1), zmm2, 0xe2)
                    arg8 = 1
                    bool cond:314_1
                    bool cond:315_1
                    bool cond:332_1
                    bool cond:333_1
                    bool cond:347_1
                    bool cond:348_1
                    bool cond:363_1
                    bool cond:364_1
                    bool cond:383_1
                    bool cond:384_1
                    bool cond:403_1
                    bool cond:404_1
                    
                    if (not(cond:284_1))
                    label_1403660ed:
                        zmm14 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, zmm14, 0), zmm14, 0xe2)
                        char temp46_1 = temp0_1261 & 4
                        cond:314_1 = temp46_1 == 0
                        cond:315_1 = temp46_1 != 0
                        cond:332_1 = temp46_1 != 0
                        cond:333_1 = temp46_1 == 0
                        cond:347_1 = temp46_1 == 0
                        cond:348_1 = temp46_1 != 0
                        cond:363_1 = temp46_1 != 0
                        cond:364_1 = temp46_1 == 0
                        cond:383_1 = temp46_1 == 0
                        cond:384_1 = temp46_1 != 0
                        cond:403_1 = temp46_1 != 0
                        cond:404_1 = temp46_1 == 0
                        
                        if (temp46_1 == 0)
                            goto label_140364f6a
                        
                        goto label_140366101
                    
                label_140364f62:
                    char temp45_1 = temp0_1261 & 4
                    cond:314_1 = temp45_1 == 0
                    cond:315_1 = temp45_1 != 0
                    cond:332_1 = temp45_1 != 0
                    cond:333_1 = temp45_1 == 0
                    cond:347_1 = temp45_1 == 0
                    cond:348_1 = temp45_1 != 0
                    cond:363_1 = temp45_1 != 0
                    cond:364_1 = temp45_1 == 0
                    cond:383_1 = temp45_1 == 0
                    cond:384_1 = temp45_1 != 0
                    cond:403_1 = temp45_1 != 0
                    cond:404_1 = temp45_1 == 0
                    
                    if (temp45_1 == 0)
                    label_140364f6a:
                        
                        if (cond:315_1)
                            goto label_140366114
                        
                        goto label_140364f70
                    
                label_140366101:
                    arg13 = _mm_shuffle_ps(arg13, _mm_shuffle_ps(temp0_1239, arg13, 0x32), 0x84)
                    
                    if (not(cond:314_1))
                    label_140366114:
                        zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg5, zmm15, 0x32), 0x84)
                        
                        if (cond:333_1)
                            goto label_140364f76
                        
                        goto label_140366130
                    
                label_140364f70:
                    
                    if (not(cond:332_1))
                    label_140364f76:
                        
                        if (cond:348_1)
                            goto label_140366140
                        
                        goto label_140364f7c
                    
                label_140366130:
                    var_958_4 =
                        _mm_shuffle_ps(var_958_4, _mm_shuffle_ps(arg12, var_958_4, 0x32), 0x84)
                    
                    if (not(cond:347_1))
                    label_140366140:
                        zmm2 = var_938_12
                        var_938_12 =
                            _mm_shuffle_ps(zmm2, _mm_shuffle_ps(var_948_1.o, zmm2, 0x32), 0x84)
                        
                        if (cond:364_1)
                            goto label_140364f82
                        
                        goto label_140366161
                    
                label_140364f7c:
                    
                    if (cond:363_1)
                    label_140366161:
                        arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(temp0_1243, arg11, 0x32), 0x84)
                        
                        if (not(cond:383_1))
                        label_140366170:
                            zmm2 = var_968
                            var_968 =
                                _mm_shuffle_ps(zmm2, _mm_shuffle_ps(temp0_1244, zmm2, 0x32), 0x84)
                            
                            if (cond:404_1)
                                goto label_140364f8e
                            
                            goto label_14036618f
                    else
                    label_140364f82:
                        
                        if (cond:384_1)
                            goto label_140366170
                    
                    bool cond:433_1
                    bool cond:434_1
                    bool cond:449_1
                    bool cond:450_1
                    bool cond:460_1
                    bool cond:461_1
                    bool cond:468_1
                    bool cond:469_1
                    bool cond:476_1
                    bool cond:477_1
                    bool cond:484_1
                    bool cond:485_1
                    
                    if (not(cond:403_1))
                    label_140364f8e:
                        zmm2 = temp0_1243
                        char temp66_1 = temp0_1261 & 8
                        cond:433_1 = temp66_1 != 0
                        cond:434_1 = temp66_1 == 0
                        cond:449_1 = temp66_1 == 0
                        cond:450_1 = temp66_1 != 0
                        cond:460_1 = temp66_1 != 0
                        cond:461_1 = temp66_1 == 0
                        cond:468_1 = temp66_1 == 0
                        cond:469_1 = temp66_1 != 0
                        cond:476_1 = temp66_1 != 0
                        cond:477_1 = temp66_1 == 0
                        cond:484_1 = temp66_1 != 0
                        cond:485_1 = temp66_1 == 0
                        
                        if (temp66_1 != 0)
                            goto label_1403661a5
                        
                        goto label_140364f9a
                    
                label_14036618f:
                    zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(arg8, zmm14, 0x30), 0x84)
                    zmm2 = temp0_1243
                    char temp65_1 = temp0_1261 & 8
                    cond:433_1 = temp65_1 != 0
                    cond:434_1 = temp65_1 == 0
                    cond:449_1 = temp65_1 == 0
                    cond:450_1 = temp65_1 != 0
                    cond:460_1 = temp65_1 != 0
                    cond:461_1 = temp65_1 == 0
                    cond:468_1 = temp65_1 == 0
                    cond:469_1 = temp65_1 != 0
                    cond:476_1 = temp65_1 != 0
                    cond:477_1 = temp65_1 == 0
                    cond:484_1 = temp65_1 != 0
                    cond:485_1 = temp65_1 == 0
                    
                    if (temp65_1 != 0)
                    label_1403661a5:
                        arg13 = _mm_shuffle_ps(arg13, _mm_shuffle_ps(temp0_1239, arg13, 0x23), 0x24)
                        arg7 = var_868_4
                        arg14 = arg11
                        
                        if (cond:434_1)
                            goto label_140364fac
                        
                        goto label_1403661c1
                    
                label_140364f9a:
                    arg7 = var_868_4
                    arg14 = arg11
                    
                    if (not(cond:433_1))
                    label_140364fac:
                        
                        if (cond:450_1)
                            goto label_1403661db
                        
                        goto label_140364fb2
                    
                label_1403661c1:
                    zmm15 = _mm_shuffle_ps(zmm15, _mm_shuffle_ps(arg5, zmm15, 0x23), 0x24)
                    
                    if (not(cond:449_1))
                    label_1403661db:
                        var_958_4 =
                            _mm_shuffle_ps(var_958_4, _mm_shuffle_ps(arg12, var_958_4, 0x23), 0x24)
                        arg6 = var_898_4
                        arg12 = var_968
                        
                        if (cond:461_1)
                            goto label_140364fc5
                        
                        goto label_1403661f3
                    
                label_140364fb2:
                    arg6 = var_898_4
                    arg12 = var_968
                    
                    if (cond:460_1)
                    label_1403661f3:
                        zmm0 = var_938_12
                        var_938_12 =
                            _mm_shuffle_ps(zmm0, _mm_shuffle_ps(var_948_1.o, zmm0, 0x23), 0x24)
                        
                        if (not(cond:468_1))
                        label_140366215:
                            arg14 = _mm_shuffle_ps(arg14, _mm_shuffle_ps(zmm2, arg14, 0x23), 0x24)
                            
                            if (cond:477_1)
                                goto label_140364fd1
                            
                            goto label_140366225
                    else
                    label_140364fc5:
                        
                        if (cond:469_1)
                            goto label_140366215
                    
                    if (cond:476_1)
                    label_140366225:
                        arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(temp0_1244, arg12, 0x23), 0x24)
                        arg9 = var_938_12
                        
                        if (cond:484_1)
                            zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(arg8, zmm14, 0x20), 0x24)
                    else
                    label_140364fd1:
                        arg9 = var_938_12
                        
                        if (not(cond:485_1))
                            zmm14 = _mm_shuffle_ps(zmm14, _mm_shuffle_ps(arg8, zmm14, 0x20), 0x24)
                    
                    arg8 = var_878_4
                    _mm_movemask_ps(_mm_srai_epi32(arg10, 0x1f) | zmm10)
                    zmm2 = var_888_3
                    zmm10 = var_848_3
                    arg10 = var_958_4
                    rax_86 = zx.q(rcx_1.d)
                    char temp73_1 = rax_86.b & 1
                    cond:72_1 = temp73_1 != 0
                    cond:89_1 = temp73_1 == 0
                    cond:90_1 = temp73_1 != 0
                    cond:105_1 = temp73_1 != 0
                    cond:106_1 = temp73_1 == 0
                    cond:121_1 = temp73_1 == 0
                    cond:122_1 = temp73_1 != 0
                    cond:141_1 = temp73_1 != 0
                    cond:142_1 = temp73_1 == 0
                    cond:161_1 = temp73_1 == 0
                    cond:162_1 = temp73_1 != 0
                    
                    if (temp73_1 != 0)
                        arg8[0] = arg13[0]
                else
                    zmm14 = var_8c8_4
                label_140365846:
                    arg7 = var_868_4
                    arg6 = var_898_4
                    arg8 = var_878_4
                    arg14 = arg11
                    arg9 = var_938_12
                    arg12 = var_968
                    arg10 = var_958_4
                    rax_86 = zx.q(rcx_1.d)
                    char temp9_1 = rax_86.b & 1
                    cond:72_1 = temp9_1 != 0
                    cond:89_1 = temp9_1 == 0
                    cond:90_1 = temp9_1 != 0
                    cond:105_1 = temp9_1 != 0
                    cond:106_1 = temp9_1 == 0
                    cond:121_1 = temp9_1 == 0
                    cond:122_1 = temp9_1 != 0
                    cond:141_1 = temp9_1 != 0
                    cond:142_1 = temp9_1 == 0
                    cond:161_1 = temp9_1 == 0
                    cond:162_1 = temp9_1 != 0
                    
                    if (temp9_1 != 0)
                        arg8[0] = arg13[0]
                
                if (not(cond:72_1))
                    if (cond:90_1)
                        goto label_140365c37
                    
                    goto label_140365888
                
                arg6[0] = zmm15[0]
                
                if (not(cond:89_1))
                label_140365c37:
                    zmm10[0] = arg10[0]
                    
                    if (cond:106_1)
                        goto label_14036588e
                    
                    goto label_140365c42
                
            label_140365888:
                
                if (not(cond:105_1))
                label_14036588e:
                    
                    if (cond:122_1)
                        goto label_140365c4c
                    
                    goto label_140365894
                
            label_140365c42:
                arg7[0] = arg9[0]
                
                if (not(cond:121_1))
                label_140365c4c:
                    zmm2[0] = arg14[0]
                    
                    if (cond:142_1)
                        goto label_14036589a
                    
                    goto label_140365c5c
                
            label_140365894:
                
                if (not(cond:141_1))
                label_14036589a:
                    
                    if (cond:162_1)
                        goto label_140365c74
                    
                    goto label_1403658a0
                
            label_140365c5c:
                var_908[0] = arg12[0]
                bool cond:192_1
                bool cond:193_1
                bool cond:210_1
                bool cond:211_1
                bool cond:226_1
                bool cond:227_1
                bool cond:242_1
                bool cond:243_1
                bool cond:262_1
                bool cond:263_1
                bool cond:282_1
                bool cond:283_1
                
                if (not(cond:161_1))
                label_140365c74:
                    var_8c8_4[0] = zmm14[0]
                    char temp28_1 = rax_86.b & 2
                    cond:192_1 = temp28_1 == 0
                    cond:193_1 = temp28_1 != 0
                    cond:210_1 = temp28_1 != 0
                    cond:211_1 = temp28_1 == 0
                    cond:226_1 = temp28_1 == 0
                    cond:227_1 = temp28_1 != 0
                    cond:242_1 = temp28_1 != 0
                    cond:243_1 = temp28_1 == 0
                    cond:262_1 = temp28_1 == 0
                    cond:263_1 = temp28_1 != 0
                    cond:282_1 = temp28_1 != 0
                    cond:283_1 = temp28_1 == 0
                    
                    if (temp28_1 == 0)
                        goto label_1403658a8
                    
                    goto label_140365c95
                
            label_1403658a0:
                char temp27_1 = rax_86.b & 2
                cond:192_1 = temp27_1 == 0
                cond:193_1 = temp27_1 != 0
                cond:210_1 = temp27_1 != 0
                cond:211_1 = temp27_1 == 0
                cond:226_1 = temp27_1 == 0
                cond:227_1 = temp27_1 != 0
                cond:242_1 = temp27_1 != 0
                cond:243_1 = temp27_1 == 0
                cond:262_1 = temp27_1 == 0
                cond:263_1 = temp27_1 != 0
                cond:282_1 = temp27_1 != 0
                cond:283_1 = temp27_1 == 0
                
                if (temp27_1 == 0)
                label_1403658a8:
                    
                    if (cond:193_1)
                        goto label_140365caa
                    
                    goto label_1403658ae
                
            label_140365c95:
                arg8 = _mm_shuffle_ps(_mm_shuffle_ps(arg13, arg8, 1), arg8, 0xe2)
                
                if (not(cond:192_1))
                label_140365caa:
                    arg6 = _mm_shuffle_ps(_mm_shuffle_ps(zmm15, arg6, 1), arg6, 0xe2)
                    
                    if (cond:211_1)
                        goto label_1403658b4
                    
                    goto label_140365cc0
                
            label_1403658ae:
                
                if (not(cond:210_1))
                label_1403658b4:
                    
                    if (cond:227_1)
                        goto label_140365cd5
                    
                    goto label_1403658ba
                
            label_140365cc0:
                zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(arg10, zmm10, 1), zmm10, 0xe2)
                
                if (not(cond:226_1))
                label_140365cd5:
                    arg7 = _mm_shuffle_ps(_mm_shuffle_ps(arg9, arg7, 1), arg7, 0xe2)
                    
                    if (cond:243_1)
                        goto label_1403658c0
                    
                    goto label_140365cea
                
            label_1403658ba:
                
                if (cond:242_1)
                label_140365cea:
                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(arg14, zmm2, 1), zmm2, 0xe2)
                    
                    if (not(cond:262_1))
                    label_140365cf7:
                        arg5 = var_908
                        var_908 = _mm_shuffle_ps(_mm_shuffle_ps(arg12, arg5, 1), arg5, 0xe2)
                        
                        if (cond:283_1)
                            goto label_1403658cc
                        
                        goto label_140365d26
                else
                label_1403658c0:
                    
                    if (cond:263_1)
                        goto label_140365cf7
                
                bool cond:312_1
                bool cond:313_1
                bool cond:330_1
                bool cond:331_1
                bool cond:345_1
                bool cond:346_1
                bool cond:361_1
                bool cond:362_1
                bool cond:381_1
                bool cond:382_1
                bool cond:401_1
                bool cond:402_1
                
                if (not(cond:282_1))
                label_1403658cc:
                    char temp48_1 = rax_86.b & 4
                    cond:312_1 = temp48_1 != 0
                    cond:313_1 = temp48_1 == 0
                    cond:330_1 = temp48_1 == 0
                    cond:331_1 = temp48_1 != 0
                    cond:345_1 = temp48_1 != 0
                    cond:346_1 = temp48_1 == 0
                    cond:361_1 = temp48_1 == 0
                    cond:362_1 = temp48_1 != 0
                    cond:381_1 = temp48_1 != 0
                    cond:382_1 = temp48_1 == 0
                    cond:401_1 = temp48_1 == 0
                    cond:402_1 = temp48_1 != 0
                    
                    if (temp48_1 != 0)
                        goto label_140365d3e
                    
                    goto label_1403658d4
                
            label_140365d26:
                var_8c8_4 = _mm_shuffle_ps(_mm_shuffle_ps(zmm14, var_8c8_4, 1), var_8c8_4, 0xe2)
                char temp47_1 = rax_86.b & 4
                cond:312_1 = temp47_1 != 0
                cond:313_1 = temp47_1 == 0
                cond:330_1 = temp47_1 == 0
                cond:331_1 = temp47_1 != 0
                cond:345_1 = temp47_1 != 0
                cond:346_1 = temp47_1 == 0
                cond:361_1 = temp47_1 == 0
                cond:362_1 = temp47_1 != 0
                cond:381_1 = temp47_1 != 0
                cond:382_1 = temp47_1 == 0
                cond:401_1 = temp47_1 == 0
                cond:402_1 = temp47_1 != 0
                
                if (temp47_1 != 0)
                label_140365d3e:
                    arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(arg13, arg8, 0x32), 0x84)
                    
                    if (cond:313_1)
                        goto label_1403658da
                    
                    goto label_140365d50
                
            label_1403658d4:
                
                if (not(cond:312_1))
                label_1403658da:
                    
                    if (cond:331_1)
                        goto label_140365d62
                    
                    goto label_1403658e0
                
            label_140365d50:
                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm15, arg6, 0x32), 0x84)
                
                if (not(cond:330_1))
                label_140365d62:
                    zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(arg10, zmm10, 0x32), 0x84)
                    
                    if (cond:346_1)
                        goto label_1403658e6
                    
                    goto label_140365d74
                
            label_1403658e0:
                
                if (not(cond:345_1))
                label_1403658e6:
                    
                    if (cond:362_1)
                        goto label_140365d86
                    
                    goto label_1403658ec
                
            label_140365d74:
                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(arg9, arg7, 0x32), 0x84)
                
                if (not(cond:361_1))
                label_140365d86:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg14, zmm2, 0x32), 0x84)
                    
                    if (cond:382_1)
                        goto label_1403658f2
                    
                    goto label_140365d94
                
            label_1403658ec:
                
                if (not(cond:381_1))
                label_1403658f2:
                    
                    if (cond:402_1)
                        goto label_140365db0
                    
                    goto label_1403658f8
                
            label_140365d94:
                arg5 = var_908
                var_908 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(arg12, arg5, 0x32), 0x84)
                bool cond:431_1
                bool cond:432_1
                bool cond:447_1
                bool cond:448_1
                bool cond:458_1
                bool cond:459_1
                bool cond:466_1
                bool cond:467_1
                bool cond:474_1
                bool cond:475_1
                bool cond:482_1
                bool cond:483_1
                
                if (not(cond:401_1))
                label_140365db0:
                    arg5 = var_8c8_4
                    var_8c8_4 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(zmm14, arg5, 0x32), 0x84)
                    char temp68_1 = rax_86.b & 8
                    cond:431_1 = temp68_1 == 0
                    cond:432_1 = temp68_1 != 0
                    cond:447_1 = temp68_1 != 0
                    cond:448_1 = temp68_1 == 0
                    cond:458_1 = temp68_1 == 0
                    cond:459_1 = temp68_1 != 0
                    cond:466_1 = temp68_1 != 0
                    cond:467_1 = temp68_1 == 0
                    cond:474_1 = temp68_1 == 0
                    cond:475_1 = temp68_1 != 0
                    cond:482_1 = temp68_1 == 0
                    cond:483_1 = temp68_1 != 0
                    
                    if (temp68_1 == 0)
                        goto label_140365900
                    
                    goto label_140365dd5
                
            label_1403658f8:
                char temp67_1 = rax_86.b & 8
                cond:431_1 = temp67_1 == 0
                cond:432_1 = temp67_1 != 0
                cond:447_1 = temp67_1 != 0
                cond:448_1 = temp67_1 == 0
                cond:458_1 = temp67_1 == 0
                cond:459_1 = temp67_1 != 0
                cond:466_1 = temp67_1 != 0
                cond:467_1 = temp67_1 == 0
                cond:474_1 = temp67_1 == 0
                cond:475_1 = temp67_1 != 0
                cond:482_1 = temp67_1 == 0
                cond:483_1 = temp67_1 != 0
                
                if (temp67_1 != 0)
                label_140365dd5:
                    arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(arg13, arg8, 0x23), 0x24)
                    
                    if (not(cond:431_1))
                    label_140365de5:
                        arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(zmm15, arg6, 0x23), 0x24)
                        
                        if (cond:448_1)
                            goto label_14036590c
                        
                        goto label_140365df5
                else
                label_140365900:
                    
                    if (cond:432_1)
                        goto label_140365de5
                
                if (not(cond:447_1))
                label_14036590c:
                    arg10 = var_8c8_4
                    
                    if (cond:459_1)
                        goto label_140365e0c
                    
                    goto label_14036591a
                
            label_140365df5:
                zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(arg10, zmm10, 0x23), 0x24)
                arg10 = var_8c8_4
                
                if (not(cond:458_1))
                label_140365e0c:
                    arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(arg9, arg7, 0x23), 0x24)
                    
                    if (cond:467_1)
                        goto label_140365920
                    
                    goto label_140365e1b
                
            label_14036591a:
                
                if (not(cond:466_1))
                label_140365920:
                    
                    if (cond:475_1)
                        goto label_140365e35
                    
                    goto label_140365926
                
            label_140365e1b:
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg14, zmm2, 0x23), 0x24)
                
                if (cond:474_1)
                label_140365926:
                    
                    if (not(cond:482_1))
                        arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm14, arg10, 0x23), 0x24)
                else
                label_140365e35:
                    var_908 = _mm_shuffle_ps(var_908, _mm_shuffle_ps(arg12, var_908, 0x23), 0x24)
                    
                    if (cond:483_1)
                        arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(zmm14, arg10, 0x23), 0x24)
                
                arg11 = arg7
                arg12 = arg8
    else
        arg12 = zx.o(0)
        arg6 = zx.o(0)
        zmm10 = zx.o(0)
        arg11 = zx.o(0)
        zmm2 = zx.o(0)
        var_908 = zx.o(0)
        arg10 = zx.o(0)
        
        while (true)
            zmm15 = arg10
            int64_t rcx_4 = sx.q((r11_1 << 3).d - r11_1.d)
            zmm0 = _mm_insert_epi16(
                _mm_insert_epi16(
                    _mm_insert_epi16(zx.o(*(arg4 + (rcx_4 << 2) + 0x18)), 
                        zx.d(*(arg4 + (rcx_4 << 2) + 0x34)), 2), 
                    zx.d(*(arg4 + (rcx_4 << 2) + 0x50)), 4), 
                zx.d(*(arg4 + (rcx_4 << 2) + 0x6c)), 6)
            int64_t rsi_3 = sx.q((r11_1 << 2).d)
            arg10 = *(arg1 + rsi_3)
            arg5 = _mm_cmpeq_epi32(arg5, arg5)
            arg10 = _mm_cmpeq_epi32(arg10, arg5) & not.o(_mm_cmpeq_epi32(zmm0, zx.o(0)) ^ arg5)
            char temp0_87 = _mm_movemask_ps(arg10)
            
            if (temp0_87 == 0)
                arg10 = zmm15
                zmm10 = zmm10
                r11_1 = zx.q(r11_1.d + 4)
                
                if (r11_1.d s>= i)
                    break
            else
                var_928 = arg14
                var_948.o = arg13
                var_968 = zmm8
                float var_958_1[0x4] = arg7
                var_8e8.o = arg8
                var_918 = arg9
                uint32_t var_878_1[0x4] = arg12
                float var_898_1[0x4] = arg6
                float var_868_1[0x4] = arg11
                float var_848_1[0x4] = zmm10
                float var_888_1[0x4] = zmm2
                float var_8c8_1[0x4] = zmm15
                int64_t rdi_2 = sx.q((r11_1 * 9).d * 3 + r11_1.d)
                arg8 = *(arg4 + rdi_2)
                zmm0 = *(arg4 + rdi_2 + 0x1c)
                arg5 = *(arg4 + rdi_2 + 0x38)
                zmm2 = *(arg4 + rdi_2 + 0x54)
                float temp0_90[0x4] = _mm_shuffle_ps(_mm_unpacklo_ps(arg8, zmm0[0].q), 
                    _mm_shuffle_ps(zmm2, arg5, 0), 0x24)
                arg9 = _mm_unpacklo_epi32(_mm_shuffle_epi32(arg8, 0xe5), 
                    _mm_shuffle_epi32(zmm0, 0xe5)[0].q)
                float temp0_96[0x4] = _mm_shuffle_ps(arg9, 
                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg9, arg5, 0xd4), 0x21), 0x24)
                arg7 = _mm_shuffle_epi32(arg8, 0xe7)
                uint32_t var_858_1[0x4] = _mm_shuffle_ps(_mm_unpackhi_ps(arg8, zmm0), 
                    _mm_shuffle_ps(zmm2, arg5, 0x22), 0x24)
                arg7 = _mm_unpacklo_epi32(arg7, _mm_shuffle_epi32(zmm0, 0xe7)[0].q)
                float temp0_105[0x4] = _mm_shuffle_ps(arg7, 
                    _mm_shuffle_ps(zmm2, _mm_shuffle_ps(arg7, arg5, 0xf4), 0x23), 0x24)
                int64_t rcx_9 = *(arg4 + rdi_2 + 0x10)
                int64_t rbx_2 = *(arg4 + rdi_2 + 0x2c)
                int64_t rbp_1 = *(arg4 + rdi_2 + 0x48)
                int64_t rdi_3 = *(arg4 + rdi_2 + 0x64)
                arg5 = _mm_unpacklo_epi32(zx.o(rbp_1.d), zx.o(rdi_3.d)[0].q)
                float var_7f8_1[0x4] = _mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(zx.o(rcx_9.d), zx.o(rbx_2.d)[0].q), arg5.q)
                arg5 = _mm_unpacklo_epi32(zx.o((rbp_1 u>> 0x20).d), zx.o((rdi_3 u>> 0x20).d)[0].q)
                float var_8d8_1[0x4] = _mm_unpacklo_epi64(
                    _mm_unpacklo_epi32(zx.o((rcx_9 u>> 0x20).d), zx.o((rbx_2 u>> 0x20).d)[0].q), 
                    arg5.q)
                zmm0 = _mm_slli_epi32(*(arg2 + rsi_3), 6) & arg10
                int64_t rcx_12 = sx.q(zmm0[0])
                void* rbx_4 = arg3 + rcx_12
                arg12 = *(arg3 + rcx_12)
                int64_t rcx_14 = sx.q(_mm_shuffle_epi32(zmm0, 0xe5).d)
                void* rbp_3 = arg3 + rcx_14
                arg12 = _mm_unpacklo_ps(arg12, (*(arg3 + rcx_14)).q)
                int64_t rcx_16 = sx.q(_mm_shuffle_epi32(zmm0, 0x4e).d)
                void* rsi_4 = arg3 + rcx_16
                arg5 = *(arg3 + rcx_16)
                int64_t rcx_18 = sx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                void* rdi_5 = arg3 + rcx_18
                arg5 = _mm_unpacklo_ps(arg5, (*(arg3 + rcx_18))[0].q)
                arg12 = arg12[0].q | arg5.q << 0x40
                zmm0 = arg10 & data_142fc95e0
                float temp0_119[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbx_4), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbp_3)).q)
                arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rsi_4), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_5))[0].q)
                zmm15 = temp0_119[0].q | arg5.q << 0x40
                zmm0 = arg10 & data_142fc95f0
                float temp0_124[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbx_4), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbp_3)).q)
                arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rsi_4), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_5))[0].q)
                float var_938_1[0x4] = temp0_124[0].q | arg5.q << 0x40
                zmm0 = arg10 & data_143442650
                float temp0_129[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbx_4), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbp_3)).q)
                arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rsi_4), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_5))[0].q)
                float var_818_1[0x4] = temp0_129[0].q | arg5.q << 0x40
                zmm0 = arg10 & data_143442660
                float temp0_134[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbx_4), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbp_3)).q)
                arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rsi_4), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_5))[0].q)
                var_808.o = temp0_134[0].q | arg5.q << 0x40
                zmm0 = arg10 & data_143442670
                float temp0_139[0x4] = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbx_4), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5).d) + rbp_3)).q)
                arg5 = _mm_unpacklo_ps(*(zx.q(_mm_shuffle_epi32(zmm0, 0x4e).d) + rsi_4), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_5))[0].q)
                arg11 = temp0_139[0].q | arg5.q << 0x40
                zmm0 = arg10 & data_143442700
                arg5 = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbx_4), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbp_3))[0].q).q | _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rsi_4), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_5))[0].q)[0].q << 0x40
                zmm0 = arg10 & data_1434b2e20
                arg8 = _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbx_4), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0]) + rbp_3))[0].q)
                float temp0_152[0x4] = _mm_unpacklo_ps(
                    *(zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0]) + rsi_4), 
                    (*(zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0]) + rdi_5))[0].q)
                arg8 = arg8[0].q | temp0_152[0].q << 0x40
                zmm0 = arg10 & (*U"    $$$$((((,,,,000044448888<<<<")[0].o
                uint64_t rcx_47 = zx.q(zmm0[0])
                uint64_t rax_2 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                float temp0_154[0x4] = _mm_unpacklo_ps(*(rcx_47 + rbx_4), (*(rax_2 + rbp_3))[0].q)
                uint64_t rax_3 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                float (* rcx_48)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                float temp0_157[0x4] = _mm_unpacklo_ps(*(rax_3 + rsi_4), (*(rcx_48 + rdi_5))[0].q)
                zmm14 = temp0_154[0].q | temp0_157[0].q << 0x40
                zmm0 = arg10 & (*U"    $$$$((((,,,,000044448888<<<<")[4].o
                uint64_t rax_4 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                float temp0_159[0x4] =
                    _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbx_4), (*(rax_4 + rbp_3))[0].q)
                uint64_t rax_5 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                float (* rcx_50)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                float temp0_162[0x4] = _mm_unpacklo_ps(*(rax_5 + rsi_4), (*(rcx_50 + rdi_5))[0].q)
                arg13 = temp0_159[0].q | temp0_162[0].q << 0x40
                zmm0 = arg10 & (*U"    $$$$((((,,,,000044448888<<<<")[8].o
                uint64_t rax_6 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                arg6 = arg10
                float temp0_164[0x4] =
                    _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbx_4), (*(rax_6 + rbp_3))[0].q)
                uint64_t rax_7 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                float (* rcx_52)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                float temp0_167[0x4] = _mm_unpacklo_ps(*(rax_7 + rsi_4), (*(rcx_52 + rdi_5))[0].q)
                zmm8 = temp0_164[0].q | temp0_167[0].q << 0x40
                zmm0 = arg10 & (*U"    $$$$((((,,,,000044448888<<<<")[0xc].o
                uint64_t rax_8 = zx.q(_mm_shuffle_epi32(zmm0, 0xe5)[0])
                float temp0_169[0x4] =
                    _mm_unpacklo_ps(*(zx.q(zmm0[0]) + rbx_4), (*(rax_8 + rbp_3))[0].q)
                uint64_t rax_9 = zx.q(_mm_shuffle_epi32(zmm0, 0x4e)[0])
                float (* rcx_54)[0x4] = zx.q(_mm_shuffle_epi32(zmm0, 0xe7)[0])
                float temp0_172[0x4] = _mm_unpacklo_ps(*(rax_9 + rsi_4), (*(rcx_54 + rdi_5))[0].q)
                arg10 = temp0_169[0].q | temp0_172[0].q << 0x40
                arg7 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[0x10].o
                uint64_t rax_10 = zx.q(_mm_shuffle_epi32(arg7, 0xe5)[0])
                float temp0_174[0x4] =
                    _mm_unpacklo_ps(*(zx.q(arg7[0]) + rbx_4), (*(rax_10 + rbp_3))[0].q)
                uint64_t rax_11 = zx.q(_mm_shuffle_epi32(arg7, 0x4e)[0])
                float (* rcx_56)[0x4] = zx.q(_mm_shuffle_epi32(arg7, 0xe7)[0])
                float temp0_177[0x4] = _mm_unpacklo_ps(*(rax_11 + rsi_4), (*(rcx_56 + rdi_5))[0].q)
                zmm0 = temp0_174[0].q | temp0_177[0].q << 0x40
                zmm2 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[0x14].o
                uint64_t rax_12 = zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
                float temp0_179[0x4] =
                    _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rbx_4), (*(rax_12 + rbp_3))[0].q)
                uint64_t rax_13 = zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
                float (* rcx_58)[0x4] = zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
                float temp0_182[0x4] = _mm_unpacklo_ps(*(rax_13 + rsi_4), (*(rcx_58 + rdi_5))[0].q)
                arg7 = temp0_179[0].q | temp0_182[0].q << 0x40
                zmm2 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[0x18].o
                uint64_t rax_14 = zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
                float temp0_184[0x4] =
                    _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rbx_4), (*(rax_14 + rbp_3))[0].q)
                uint64_t rax_15 = zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
                float (* rcx_60)[0x4] = zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
                float temp0_187[0x4] = _mm_unpacklo_ps(*(rax_15 + rsi_4), (*(rcx_60 + rdi_5))[0].q)
                arg14 = temp0_184[0].q | temp0_187[0].q << 0x40
                var_7e8.o = arg6
                zmm2 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[0x1c].o
                float (* rax_16)[0x4] = zx.q(_mm_shuffle_epi32(zmm2, 0xe5)[0])
                float temp0_189[0x4] =
                    _mm_unpacklo_ps(*(zx.q(zmm2[0]) + rbx_4), (*(rax_16 + rbp_3))[0].q)
                float (* rax_17)[0x4] = zx.q(_mm_shuffle_epi32(zmm2, 0x4e)[0])
                rcx_1 = zx.q(_mm_shuffle_epi32(zmm2, 0xe7)[0])
                float temp0_192[0x4] = _mm_unpacklo_ps(*(rax_17 + rsi_4), (*(rcx_1 + rdi_5))[0].q)
                arg9 = temp0_189[0].q | temp0_192[0].q << 0x40
                uint32_t var_1e8[0x4] = arg12
                float var_1d8[0x4] = zmm15
                float var_1c8[0x4] = var_938_1
                float var_1b8[0x4] = var_818_1
                float var_1a8_1[0x4] = var_808.o
                float var_198_1[0x4] = arg11
                uint128_t var_188_1 = arg5
                uint32_t var_178_1[0x4] = arg8
                float var_168_1[0x4] = zmm14
                float var_158_1[0x4] = arg13
                float var_148_1[0x4] = zmm8
                float var_138_1[0x4] = arg10
                float var_128_1[0x4] = zmm0
                float var_118_1[0x4] = arg7
                float var_108_1[0x4] = arg14
                float var_f8_1[0x4] = arg9
                float var_938_2[0x4] = (*arg15)[9]
                arg11 = (*arg15)[0xd]
                arg13 = (*arg15)[2]
                zmm14 = (*arg15)[3]
                arg14 = (*arg15)[6]
                zmm15 = (*arg15)[0xa]
                arg9 = (*arg15)[0xe]
                arg10 = (*arg15)[7]
                zmm0 = (*arg15)[0xb]
                
                for (int64_t i_4 = 0; i_4 != 0x100; i_4 += 0x40)
                    arg8 = *arg15
                    arg12 = arg15[1][0]
                    arg8 = _mm_shuffle_ps(arg8, arg8, 0)
                    zmm10 = *(&var_1e8 + i_4)
                    arg7 = *(&var_1d8 + i_4)
                    arg6 = *(&var_1c8 + i_4)
                    arg5 = *(&var_1b8 + i_4)
                    zmm8 = zx.o(0)
                    arg8 = _mm_add_ps(_mm_mul_ps(arg8, zmm10), zmm8)
                    arg12 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg12, arg12, 0), arg7), arg8)
                    arg8 = arg15[2][0]
                    arg8 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg8, arg8, 0), arg6), arg12)
                    zmm2 = arg15[3][0]
                    *(&var_7b8 + i_4) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), arg5), arg8)
                    zmm2 = (*arg15)[1]
                    arg8 = (*arg15)[5]
                    float temp0_207[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), zmm10), zmm8)
                    arg8 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg8, arg8, 0), arg7), temp0_207)
                    float temp0_213[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(var_938_2, var_938_2, 0), arg6), arg8)
                    *(&var_7a8 + i_4) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg11, arg11, 0), arg5), temp0_213)
                    float temp0_219[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg13, arg13, 0), zmm10), zmm8)
                    arg8 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg14, arg14, 0), arg7), temp0_219)
                    float temp0_225[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0), arg6), arg8)
                    *(&var_798 + i_4) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg9, arg9, 0), arg5), temp0_225)
                    float temp0_231[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm10), zmm8)
                    arg8 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg10, arg10, 0), arg7), temp0_231)
                    float temp0_237[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), arg6), arg8)
                    arg6 = (*arg15)[0xf]
                    *(&var_788 + i_4) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg6, arg6, 0), arg5), temp0_237)
                
                zmm2 = var_7b8.o
                float var_818_2[0x4] = zmm2
                zmm0 = var_7a8
                arg8 = var_798
                var_808.o = arg8
                arg5 = __addps_xmmps_memps(temp0_105, temp0_90)
                arg11 = data_142d3f640
                arg5 = _mm_mul_ps(arg5, arg11)
                float temp0_243[0x4] = _mm_mul_ps(arg5, zmm2)
                float temp0_244[0x4] = _mm_mul_ps(arg5, zmm0)
                float temp0_246[0x4] = _mm_mul_ps(_mm_add_ps(temp0_96, var_7f8_1), arg11)
                float temp0_248[0x4] = _mm_add_ps(_mm_mul_ps(temp0_246, var_778), temp0_243)
                float temp0_250[0x4] = _mm_add_ps(_mm_mul_ps(temp0_246, var_768), temp0_244)
                float temp0_251[0x4] = _mm_mul_ps(arg5, arg8)
                arg8 = _mm_add_ps(_mm_mul_ps(temp0_246, var_758), temp0_251)
                arg5 = __mulps_xmmps_memps(arg5, var_788)
                float temp0_256[0x4] = _mm_add_ps(_mm_mul_ps(temp0_246, var_748), arg5)
                float temp0_258[0x4] = _mm_mul_ps(_mm_add_ps(var_858_1, var_8d8_1), arg11)
                float temp0_260[0x4] = _mm_add_ps(_mm_mul_ps(temp0_258, var_738), temp0_248)
                float temp0_262[0x4] = _mm_add_ps(_mm_mul_ps(temp0_258, var_728), temp0_250)
                float temp0_264[0x4] = _mm_add_ps(_mm_mul_ps(temp0_258, var_718), arg8)
                float temp0_266[0x4] = _mm_add_ps(_mm_mul_ps(temp0_258, var_708), temp0_256)
                float temp0_267[0x4] = __addps_xmmps_memps(temp0_260, var_6f8)
                float temp0_268[0x4] = __addps_xmmps_memps(temp0_262, var_6e8)
                float temp0_269[0x4] = __addps_xmmps_memps(temp0_264, var_6d8)
                float temp0_270[0x4] = __addps_xmmps_memps(temp0_266, var_6c8)
                var_7b8.o = var_778
                var_7a8 = var_768
                var_798 = var_758
                var_788 = var_748
                uint128_t var_5f8_1 = var_738
                float var_5e8_1[0x4] = var_728
                float var_5d8_1[0x4] = var_718
                uint32_t var_5c8_1[0x4] = var_708
                float temp0_271[0x4] = __subps_xmmps_memps(var_7f8_1, temp0_96)
                float temp0_272[0x4] = __subps_xmmps_memps(var_8d8_1, var_858_1)
                float temp0_273[0x4] = __subps_xmmps_memps(temp0_105, temp0_90)
                float var_638_1[0x4] = temp0_267
                float var_628_1[0x4] = temp0_268
                float var_618_1[0x4] = temp0_269
                float var_608_1[0x4] = temp0_270
                zmm2 = data_142d3f640
                float temp0_274[0x4] = _mm_mul_ps(temp0_273, zmm2)
                float temp0_275[0x4] = _mm_mul_ps(var_818_2, temp0_274)
                arg8 = _mm_mul_ps(zmm0, temp0_274)
                float temp0_277[0x4] = __mulps_xmmps_memps(temp0_274, var_808.o)
                float temp0_278[0x4] = _mm_mul_ps(temp0_271, zmm2)
                zmm14 = zmm2
                arg12 = _mm_mul_ps(var_778, temp0_278)
                float temp0_280[0x4] = _mm_mul_ps(var_768, temp0_278)
                float temp0_281[0x4] = _mm_mul_ps(temp0_278, var_758)
                zmm2 = data_142d3f770
                arg9 = _mm_and_ps(temp0_275, zmm2)
                arg12 = _mm_add_ps(_mm_and_ps(arg12, zmm2), arg9)
                uint32_t temp0_285[0x4] = _mm_and_ps(arg8, zmm2)
                float temp0_287[0x4] = _mm_add_ps(_mm_and_ps(temp0_280, zmm2), temp0_285)
                zmm10 = _mm_and_ps(temp0_277, zmm2)
                float temp0_290[0x4] = _mm_add_ps(_mm_and_ps(temp0_281, zmm2), zmm10)
                float temp0_291[0x4] = _mm_mul_ps(temp0_272, zmm14)
                arg5 = _mm_mul_ps(var_738, temp0_291)
                float temp0_293[0x4] = _mm_mul_ps(var_728, temp0_291)
                float temp0_294[0x4] = _mm_mul_ps(temp0_291, var_718)
                arg5 = _mm_add_ps(_mm_and_ps(arg5, zmm2), arg12)
                float temp0_298[0x4] = _mm_add_ps(_mm_and_ps(temp0_293, zmm2), temp0_287)
                float temp0_300[0x4] = _mm_add_ps(_mm_and_ps(temp0_294, zmm2), temp0_290)
                arg8 = _mm_sub_ps(temp0_267, arg5)
                float temp0_302[0x4] = _mm_sub_ps(temp0_268, temp0_298)
                arg13 = _mm_sub_ps(temp0_269, temp0_300)
                zmm2 = _mm_add_ps(arg5, temp0_267)
                zmm15 = _mm_add_ps(temp0_298, temp0_268)
                var_8d8 = _mm_add_ps(temp0_300, temp0_269)
                arg10 = var_8c8_1
                zmm14 = arg10 & data_142ed6810
                zmm0 = zx.o(0)
                arg9 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm14, zx.o(0)) & not.o(var_7e8.o), 0x1f)
                char temp0_309 = _mm_movemask_ps(arg9)
                uint32_t var_938_4[0x4] = arg8
                char rsi_1
                bool cond:33_1
                bool cond:34_1
                bool cond:35_1
                bool cond:46_1
                bool cond:47_1
                bool cond:59_1
                bool cond:60_1
                bool cond:75_1
                bool cond:76_1
                bool cond:93_1
                bool cond:94_1
                
                if (temp0_309 == 0)
                    arg6 = zx.o(0)
                    arg11 = var_8f8.o
                    arg8 = var_8e8.o
                    zmm8 = zmm2
                label_1403612fe:
                    zmm14 = _mm_cmpeq_epi32(zmm14, arg6)
                    arg5 = _mm_slli_epi32(var_7e8.o & zmm14, 0x1f)
                    
                    if (_mm_movemask_ps(arg5) == 0)
                        var_8f8.o = arg11
                        zmm2 = var_888_1
                        zmm10 = var_848_1
                        arg11 = var_868_1
                        arg6 = var_898_1
                        arg12 = var_878_1
                        arg9 = var_918
                        arg7 = var_958_1
                        zmm8 = var_968
                        arg13 = var_948.o
                        arg14 = var_928
                        arg10 = var_8c8_1
                        rsi_1 = temp0_87
                        char temp4_1 = rsi_1 & 1
                        cond:33_1 = temp4_1 == 0
                        cond:34_1 = temp4_1 != 0
                        cond:35_1 = temp4_1 != 0
                        cond:46_1 = temp4_1 != 0
                        cond:47_1 = temp4_1 == 0
                        cond:59_1 = temp4_1 == 0
                        cond:60_1 = temp4_1 != 0
                        cond:75_1 = temp4_1 != 0
                        cond:76_1 = temp4_1 == 0
                        cond:93_1 = temp4_1 == 0
                        cond:94_1 = temp4_1 != 0
                        
                        if (temp4_1 != 0)
                            arg12[0] = var_8f8.o[0]
                    else
                        arg10 = arg5
                        char temp0_368 = _mm_movemask_ps(zmm14)
                        char temp5_1 = temp0_368 & 1
                        
                        if (temp5_1 == 0)
                            arg12 = var_878_1
                            arg9 = var_918
                            
                            if (temp5_1 != 0)
                                goto label_14035ffd1
                            
                            goto label_140361347
                        
                        arg5 = var_938_4
                        arg11[0] = arg5.d
                        arg12 = var_878_1
                        arg9 = var_918
                        
                        if (temp5_1 != 0)
                        label_14035ffd1:
                            arg9[0] = temp0_302[0]
                            arg6 = var_868_1
                            
                            if (temp5_1 == 0)
                                goto label_140361329
                            
                            goto label_14035ffe4
                        
                    label_140361347:
                        arg6 = var_868_1
                        
                        if (temp5_1 == 0)
                        label_140361329:
                            
                            if (temp5_1 != 0)
                                goto label_14035fff4
                            
                            goto label_140361329_1
                        
                    label_14035ffe4:
                        arg8[0] = arg13[0]
                        
                        if (temp5_1 != 0)
                        label_14035fff4:
                            arg5.d = zmm8[0]
                            var_958_1 = arg5
                            
                            if (temp5_1 == 0)
                                goto label_140361329_2
                            
                            goto label_140360008
                        
                    label_140361329_1:
                        
                        if (temp5_1 != 0)
                        label_140360008:
                            arg5.d = zmm15[0]
                            var_968 = arg5
                            
                            if (temp5_1 != 0)
                            label_140360024:
                                arg5.d = var_8d8[0]
                                var_948.o = arg5
                                
                                if (temp5_1 == 0)
                                    goto label_14036136d
                                
                                goto label_140360033
                        else
                        label_140361329_2:
                            
                            if (temp5_1 != 0)
                                goto label_140360024
                        
                        bool cond:127_1
                        bool cond:128_1
                        bool cond:147_1
                        bool cond:148_1
                        bool cond:167_1
                        bool cond:168_1
                        bool cond:180_1
                        bool cond:181_1
                        bool cond:198_1
                        bool cond:199_1
                        bool cond:216_1
                        bool cond:217_1
                        
                        if (temp5_1 == 0)
                        label_14036136d:
                            char temp19_1 = temp0_368 & 2
                            cond:127_1 = temp19_1 != 0
                            cond:128_1 = temp19_1 == 0
                            cond:147_1 = temp19_1 == 0
                            cond:148_1 = temp19_1 != 0
                            cond:167_1 = temp19_1 != 0
                            cond:168_1 = temp19_1 == 0
                            cond:180_1 = temp19_1 == 0
                            cond:181_1 = temp19_1 != 0
                            cond:198_1 = temp19_1 != 0
                            cond:199_1 = temp19_1 == 0
                            cond:216_1 = temp19_1 == 0
                            cond:217_1 = temp19_1 != 0
                            
                            if (temp19_1 != 0)
                                goto label_14036005d
                            
                            goto label_140361377
                        
                    label_140360033:
                        arg5 = 1
                        var_928[0] = 1
                        char temp18_1 = temp0_368 & 2
                        cond:127_1 = temp18_1 != 0
                        cond:128_1 = temp18_1 == 0
                        cond:147_1 = temp18_1 == 0
                        cond:148_1 = temp18_1 != 0
                        cond:167_1 = temp18_1 != 0
                        cond:168_1 = temp18_1 == 0
                        cond:180_1 = temp18_1 == 0
                        cond:181_1 = temp18_1 != 0
                        cond:198_1 = temp18_1 != 0
                        cond:199_1 = temp18_1 == 0
                        cond:216_1 = temp18_1 == 0
                        cond:217_1 = temp18_1 != 0
                        
                        if (temp18_1 != 0)
                        label_14036005d:
                            arg5 = _mm_shuffle_ps(_mm_shuffle_ps(var_938_4, arg11, 1), arg11, 0xe2)
                            arg11 = arg5
                            
                            if (cond:128_1)
                                goto label_14036137d
                            
                            goto label_140360074
                        
                    label_140361377:
                        
                        if (not(cond:127_1))
                        label_14036137d:
                            
                            if (cond:148_1)
                                goto label_140360089
                            
                            goto label_140361383
                        
                    label_140360074:
                        arg5 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_302, arg9, 1), arg9, 0xe2)
                        arg9 = arg5
                        
                        if (not(cond:147_1))
                        label_140360089:
                            arg5 = _mm_shuffle_ps(_mm_shuffle_ps(arg13, arg8, 1), arg8, 0xe2)
                            arg8 = arg5
                            
                            if (cond:168_1)
                                goto label_140361389
                            
                            goto label_1403600a3
                        
                    label_140361383:
                        
                        if (not(cond:167_1))
                        label_140361389:
                            
                            if (cond:181_1)
                                goto label_1403600b6
                            
                            goto label_14036138f
                        
                    label_1403600a3:
                        arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, var_958_1, 1), var_958_1, 0xe2)
                        var_958_1 = arg5
                        
                        if (not(cond:180_1))
                        label_1403600b6:
                            zmm2 = var_968
                            arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm15, zmm2, 1), zmm2, 0xe2)
                            var_968 = arg5
                            zmm14 = zmm0
                            
                            if (cond:199_1)
                                goto label_14036139a
                            
                            goto label_1403600d9
                        
                    label_14036138f:
                        zmm14 = zmm0
                        
                        if (not(cond:198_1))
                        label_14036139a:
                            zmm0 = 1
                            
                            if (cond:217_1)
                                goto label_140360103
                            
                            goto label_1403613a5
                        
                    label_1403600d9:
                        zmm2 = var_948.o
                        arg5 = _mm_shuffle_ps(_mm_shuffle_ps(var_8d8, zmm2, 1), zmm2, 0xe2)
                        var_948.o = arg5
                        zmm0 = 1
                        bool cond:248_1
                        bool cond:249_1
                        bool cond:268_1
                        bool cond:269_1
                        bool cond:288_1
                        bool cond:289_1
                        bool cond:300_1
                        bool cond:301_1
                        bool cond:318_1
                        bool cond:319_1
                        bool cond:336_1
                        bool cond:337_1
                        
                        if (not(cond:216_1))
                        label_140360103:
                            arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm0, var_928, 0), var_928, 0xe2)
                            var_928 = arg5
                            char temp38_1 = temp0_368 & 4
                            cond:248_1 = temp38_1 == 0
                            cond:249_1 = temp38_1 != 0
                            cond:268_1 = temp38_1 != 0
                            cond:269_1 = temp38_1 == 0
                            cond:288_1 = temp38_1 == 0
                            cond:289_1 = temp38_1 != 0
                            cond:300_1 = temp38_1 != 0
                            cond:301_1 = temp38_1 == 0
                            cond:318_1 = temp38_1 == 0
                            cond:319_1 = temp38_1 != 0
                            cond:336_1 = temp38_1 != 0
                            cond:337_1 = temp38_1 == 0
                            
                            if (temp38_1 == 0)
                                goto label_1403613af
                            
                            goto label_14036011b
                        
                    label_1403613a5:
                        char temp37_1 = temp0_368 & 4
                        cond:248_1 = temp37_1 == 0
                        cond:249_1 = temp37_1 != 0
                        cond:268_1 = temp37_1 != 0
                        cond:269_1 = temp37_1 == 0
                        cond:288_1 = temp37_1 == 0
                        cond:289_1 = temp37_1 != 0
                        cond:300_1 = temp37_1 != 0
                        cond:301_1 = temp37_1 == 0
                        cond:318_1 = temp37_1 == 0
                        cond:319_1 = temp37_1 != 0
                        cond:336_1 = temp37_1 != 0
                        cond:337_1 = temp37_1 == 0
                        
                        if (temp37_1 == 0)
                        label_1403613af:
                            
                            if (cond:249_1)
                                goto label_14036012f
                            
                            goto label_1403613b5
                        
                    label_14036011b:
                        arg5 = _mm_shuffle_ps(var_938_4, arg11, 0x32)
                        arg11 = _mm_shuffle_ps(arg11, arg5, 0x84)
                        
                        if (not(cond:248_1))
                        label_14036012f:
                            arg5 = _mm_shuffle_ps(temp0_302, arg9, 0x32)
                            arg9 = _mm_shuffle_ps(arg9, arg5, 0x84)
                            
                            if (cond:269_1)
                                goto label_1403613bb
                            
                            goto label_140360141
                        
                    label_1403613b5:
                        
                        if (not(cond:268_1))
                        label_1403613bb:
                            
                            if (cond:289_1)
                                goto label_140360158
                            
                            goto label_1403613c1
                        
                    label_140360141:
                        arg5 = _mm_shuffle_ps(arg13, arg8, 0x32)
                        arg8 = _mm_shuffle_ps(arg8, arg5, 0x84)
                        
                        if (not(cond:288_1))
                        label_140360158:
                            arg5 = _mm_shuffle_ps(zmm8, var_958_1, 0x32)
                            var_958_1 = _mm_shuffle_ps(var_958_1, arg5, 0x84)
                            
                            if (cond:301_1)
                                goto label_1403613c7
                            
                            goto label_14036016f
                        
                    label_1403613c1:
                        
                        if (cond:300_1)
                        label_14036016f:
                            zmm2 = var_968
                            arg5 = _mm_shuffle_ps(zmm15, zmm2, 0x32)
                            var_968 = _mm_shuffle_ps(zmm2, arg5, 0x84)
                            
                            if (not(cond:318_1))
                            label_14036018d:
                                zmm2 = var_948.o
                                arg5 = _mm_shuffle_ps(var_8d8, zmm2, 0x32)
                                var_948.o = _mm_shuffle_ps(zmm2, arg5, 0x84)
                                
                                if (cond:337_1)
                                    goto label_1403613d3
                                
                                goto label_1403601ae
                        else
                        label_1403613c7:
                            
                            if (cond:319_1)
                                goto label_14036018d
                        
                        bool cond:367_1
                        bool cond:387_1
                        bool cond:388_1
                        bool cond:407_1
                        bool cond:408_1
                        bool cond:421_1
                        bool cond:437_1
                        bool cond:438_1
                        bool cond:453_1
                        bool cond:454_1
                        bool cond:368_1
                        
                        if (cond:336_1)
                        label_1403601ae:
                            arg5 = _mm_shuffle_ps(zmm0, var_928, 0x30)
                            var_928 = _mm_shuffle_ps(var_928, arg5, 0x84)
                            char temp57_1 = temp0_368 & 8
                            cond:367_1 = temp57_1 != 0
                            cond:368_1 = temp57_1 == 0
                            cond:387_1 = temp57_1 == 0
                            cond:388_1 = temp57_1 != 0
                            cond:407_1 = temp57_1 == 0
                            cond:408_1 = temp57_1 != 0
                            cond:421_1 = temp57_1 != 0
                            cond:437_1 = temp57_1 == 0
                            cond:438_1 = temp57_1 != 0
                            cond:453_1 = temp57_1 == 0
                            cond:454_1 = temp57_1 != 0
                            
                            if (temp57_1 != 0)
                            label_1403601ca:
                                arg5 = _mm_shuffle_ps(var_938_4, arg11, 0x23)
                                arg11 = _mm_shuffle_ps(arg11, arg5, 0x24)
                                
                                if (cond:368_1)
                                    goto label_1403613e3
                                
                                goto label_1403601df
                        else
                        label_1403613d3:
                            char temp58_1 = temp0_368 & 8
                            cond:367_1 = temp58_1 != 0
                            cond:368_1 = temp58_1 == 0
                            cond:387_1 = temp58_1 == 0
                            cond:388_1 = temp58_1 != 0
                            cond:407_1 = temp58_1 == 0
                            cond:408_1 = temp58_1 != 0
                            cond:421_1 = temp58_1 != 0
                            cond:437_1 = temp58_1 == 0
                            cond:438_1 = temp58_1 != 0
                            cond:453_1 = temp58_1 == 0
                            cond:454_1 = temp58_1 != 0
                            
                            if (temp58_1 != 0)
                                goto label_1403601ca
                        
                        if (not(cond:367_1))
                        label_1403613e3:
                            arg7 = var_958_1
                            
                            if (cond:388_1)
                                goto label_1403601f4
                            
                            goto label_1403613ee
                        
                    label_1403601df:
                        arg9 = _mm_shuffle_ps(arg9, _mm_shuffle_ps(temp0_302, arg9, 0x23), 0x24)
                        arg7 = var_958_1
                        
                        if (cond:387_1)
                        label_1403613ee:
                            zmm2 = var_888_1
                            zmm10 = var_848_1
                            var_8f8.o = arg11
                            
                            if (not(cond:407_1))
                                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm8, arg7, 0x23), 0x24)
                        else
                        label_1403601f4:
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(arg13, arg8, 0x23), 0x24)
                            zmm2 = var_888_1
                            zmm10 = var_848_1
                            var_8f8.o = arg11
                            
                            if (cond:408_1)
                                arg7 = _mm_shuffle_ps(arg7, _mm_shuffle_ps(zmm8, arg7, 0x23), 0x24)
                        
                        zmm8 = var_968
                        arg13 = var_948.o
                        arg14 = var_928
                        arg11 = arg6
                        
                        if (not(cond:421_1))
                            if (cond:438_1)
                                goto label_140360233
                            
                            goto label_140361432
                        
                        zmm8 = _mm_shuffle_ps(zmm8, _mm_shuffle_ps(zmm15, zmm8, 0x23), 0x24)
                        
                        if (cond:437_1)
                        label_140361432:
                            
                            if (not(cond:453_1))
                                arg14 =
                                    _mm_shuffle_ps(arg14, _mm_shuffle_ps(zmm0, arg14, 0x20), 0x24)
                        else
                        label_140360233:
                            arg5 = _mm_shuffle_ps(var_8d8, arg13, 0x23)
                            arg13 = _mm_shuffle_ps(arg13, arg5, 0x24)
                            
                            if (cond:454_1)
                                arg14 =
                                    _mm_shuffle_ps(arg14, _mm_shuffle_ps(zmm0, arg14, 0x20), 0x24)
                        
                        arg6 = var_898_1
                        _mm_movemask_ps(_mm_srai_epi32(arg10, 0x1f) | zmm14)
                        arg10 = var_8c8_1
                        rsi_1 = temp0_87
                        char temp71_1 = rsi_1 & 1
                        cond:33_1 = temp71_1 == 0
                        cond:34_1 = temp71_1 != 0
                        cond:35_1 = temp71_1 != 0
                        cond:46_1 = temp71_1 != 0
                        cond:47_1 = temp71_1 == 0
                        cond:59_1 = temp71_1 == 0
                        cond:60_1 = temp71_1 != 0
                        cond:75_1 = temp71_1 != 0
                        cond:76_1 = temp71_1 == 0
                        cond:93_1 = temp71_1 == 0
                        cond:94_1 = temp71_1 != 0
                        
                        if (temp71_1 != 0)
                            arg12[0] = var_8f8.o[0]
                else
                    arg12 = _mm_min_ps(var_878_1, arg8)
                    arg5 = zx.o(0)
                    char temp0_312 =
                        _mm_movemask_ps(_mm_cmpeq_epi32(zmm14, zx.o(0)) ^ data_142d3f800)
                    char temp1_1 = temp0_312 & 1
                    
                    if (temp1_1 == 0)
                        arg11 = var_8f8.o
                        zmm8 = zmm2
                        arg6 = _mm_min_ps(var_898_1, temp0_302)
                        
                        if (temp1_1 != 0)
                            var_918[0] = arg6[0]
                    else
                        arg11 = var_8f8.o
                        arg11[0] = arg12[0]
                        zmm8 = zmm2
                        arg6 = _mm_min_ps(var_898_1, temp0_302)
                        
                        if (temp1_1 != 0)
                            var_918[0] = arg6[0]
                    
                    float temp0_315[0x4] = _mm_min_ps(var_848_1, arg13)
                    float var_8b8_2[0x4] = arg13
                    
                    if (temp1_1 == 0)
                        arg13 = _mm_max_ps(var_868_1, zmm8)
                        
                        if (temp1_1 != 0)
                            goto label_14036104b
                        
                        goto label_140360ef6
                    
                    arg5.d = temp0_315[0]
                    var_8e8.o = arg5
                    arg13 = _mm_max_ps(var_868_1, zmm8)
                    
                    if (temp1_1 != 0)
                    label_14036104b:
                        arg5.d = arg13[0]
                        var_958_1 = arg5
                        arg7 = _mm_max_ps(var_888_1, zmm15)
                        
                        if (temp1_1 == 0)
                            goto label_140360f05
                        
                        goto label_14036106b
                    
                label_140360ef6:
                    arg7 = _mm_max_ps(var_888_1, zmm15)
                    
                    if (temp1_1 != 0)
                    label_14036106b:
                        arg5.d = arg7[0]
                        var_968 = arg5
                        zmm2 = __maxps_xmmps_memps(var_908, var_8d8)
                        
                        if (temp1_1 != 0)
                        label_14036108b:
                            arg5.d = zmm2[0]
                            var_948.o = arg5
                            
                            if (temp1_1 == 0)
                                goto label_140360f19
                            
                            goto label_14036109f
                    else
                    label_140360f05:
                        zmm2 = __maxps_xmmps_memps(var_908, var_8d8)
                        
                        if (temp1_1 != 0)
                            goto label_14036108b
                    
                    bool cond:97_1
                    bool cond:98_1
                    bool cond:109_1
                    bool cond:110_1
                    bool cond:129_1
                    bool cond:130_1
                    bool cond:149_1
                    bool cond:150_1
                    bool cond:169_1
                    bool cond:170_1
                    bool cond:182_1
                    bool cond:183_1
                    
                    if (temp1_1 == 0)
                    label_140360f19:
                        char temp13_1 = temp0_312 & 2
                        cond:97_1 = temp13_1 != 0
                        cond:98_1 = temp13_1 == 0
                        cond:109_1 = temp13_1 == 0
                        cond:110_1 = temp13_1 != 0
                        cond:129_1 = temp13_1 != 0
                        cond:130_1 = temp13_1 == 0
                        cond:149_1 = temp13_1 == 0
                        cond:150_1 = temp13_1 != 0
                        cond:169_1 = temp13_1 != 0
                        cond:170_1 = temp13_1 == 0
                        cond:182_1 = temp13_1 == 0
                        cond:183_1 = temp13_1 != 0
                        
                        if (temp13_1 != 0)
                            goto label_1403610bb
                        
                        goto label_140360f23
                    
                label_14036109f:
                    arg5.d = arg10[0]
                    var_928 = arg5
                    char temp12_1 = temp0_312 & 2
                    cond:97_1 = temp12_1 != 0
                    cond:98_1 = temp12_1 == 0
                    cond:109_1 = temp12_1 == 0
                    cond:110_1 = temp12_1 != 0
                    cond:129_1 = temp12_1 != 0
                    cond:130_1 = temp12_1 == 0
                    cond:149_1 = temp12_1 == 0
                    cond:150_1 = temp12_1 != 0
                    cond:169_1 = temp12_1 != 0
                    cond:170_1 = temp12_1 == 0
                    cond:182_1 = temp12_1 == 0
                    cond:183_1 = temp12_1 != 0
                    
                    if (temp12_1 != 0)
                    label_1403610bb:
                        arg5 = _mm_shuffle_ps(_mm_shuffle_ps(arg12, arg11, 1), arg11, 0xe2)
                        arg11 = arg5
                        
                        if (cond:98_1)
                            goto label_140360f29
                        
                        goto label_1403610dc
                    
                label_140360f23:
                    
                    if (not(cond:97_1))
                    label_140360f29:
                        
                        if (cond:110_1)
                            goto label_1403610f3
                        
                        goto label_140360f2f
                    
                label_1403610dc:
                    arg5 = _mm_shuffle_ps(_mm_shuffle_ps(arg6, var_918, 1), var_918, 0xe2)
                    var_918 = arg5
                    
                    if (not(cond:109_1))
                    label_1403610f3:
                        arg8 = var_8e8.o
                        arg5 = _mm_shuffle_ps(_mm_shuffle_ps(temp0_315, arg8, 1), arg8, 0xe2)
                        var_8e8.o = arg5
                        
                        if (cond:130_1)
                            goto label_140360f35
                        
                        goto label_140361115
                    
                label_140360f2f:
                    
                    if (not(cond:129_1))
                    label_140360f35:
                        
                        if (cond:150_1)
                            goto label_140361130
                        
                        goto label_140360f3b
                    
                label_140361115:
                    arg8 = var_958_1
                    arg5 = _mm_shuffle_ps(_mm_shuffle_ps(arg13, arg8, 1), arg8, 0xe2)
                    var_958_1 = arg5
                    
                    if (not(cond:149_1))
                    label_140361130:
                        arg8 = var_968
                        arg5 = _mm_shuffle_ps(_mm_shuffle_ps(arg7, arg8, 1), arg8, 0xe2)
                        var_968 = arg5
                        
                        if (cond:170_1)
                            goto label_140360f41
                        
                        goto label_140361149
                    
                label_140360f3b:
                    
                    if (not(cond:169_1))
                    label_140360f41:
                        
                        if (cond:183_1)
                            goto label_140361164
                        
                        goto label_140360f47
                    
                label_140361149:
                    arg8 = var_948.o
                    arg5 = _mm_shuffle_ps(_mm_shuffle_ps(zmm2, arg8, 1), arg8, 0xe2)
                    var_948.o = arg5
                    bool cond:218_1
                    bool cond:219_1
                    bool cond:230_1
                    bool cond:231_1
                    bool cond:250_1
                    bool cond:251_1
                    bool cond:270_1
                    bool cond:271_1
                    bool cond:290_1
                    bool cond:291_1
                    bool cond:302_1
                    bool cond:303_1
                    
                    if (not(cond:182_1))
                    label_140361164:
                        arg8 = var_928
                        arg5 = _mm_shuffle_ps(_mm_shuffle_ps(arg10, arg8, 1), arg8, 0xe2)
                        var_928 = arg5
                        char temp32_1 = temp0_312 & 4
                        cond:218_1 = temp32_1 == 0
                        cond:219_1 = temp32_1 != 0
                        cond:230_1 = temp32_1 != 0
                        cond:231_1 = temp32_1 == 0
                        cond:250_1 = temp32_1 == 0
                        cond:251_1 = temp32_1 != 0
                        cond:270_1 = temp32_1 != 0
                        cond:271_1 = temp32_1 == 0
                        cond:290_1 = temp32_1 == 0
                        cond:291_1 = temp32_1 != 0
                        cond:302_1 = temp32_1 != 0
                        cond:303_1 = temp32_1 == 0
                        
                        if (temp32_1 == 0)
                            goto label_140360f51
                        
                        goto label_140361184
                    
                label_140360f47:
                    char temp31_1 = temp0_312 & 4
                    cond:218_1 = temp31_1 == 0
                    cond:219_1 = temp31_1 != 0
                    cond:230_1 = temp31_1 != 0
                    cond:231_1 = temp31_1 == 0
                    cond:250_1 = temp31_1 == 0
                    cond:251_1 = temp31_1 != 0
                    cond:270_1 = temp31_1 != 0
                    cond:271_1 = temp31_1 == 0
                    cond:290_1 = temp31_1 == 0
                    cond:291_1 = temp31_1 != 0
                    cond:302_1 = temp31_1 != 0
                    cond:303_1 = temp31_1 == 0
                    
                    if (temp31_1 == 0)
                    label_140360f51:
                        
                        if (cond:219_1)
                            goto label_14036119f
                        
                        goto label_140360f57
                    
                label_140361184:
                    arg5 = _mm_shuffle_ps(arg12, arg11, 0x32)
                    arg11 = _mm_shuffle_ps(arg11, arg5, 0x84)
                    
                    if (not(cond:218_1))
                    label_14036119f:
                        arg5 = _mm_shuffle_ps(arg6, var_918, 0x32)
                        var_918 = _mm_shuffle_ps(var_918, arg5, 0x84)
                        
                        if (cond:231_1)
                            goto label_140360f5d
                        
                        goto label_1403611b8
                    
                label_140360f57:
                    
                    if (not(cond:230_1))
                    label_140360f5d:
                        
                        if (cond:251_1)
                            goto label_1403611da
                        
                        goto label_140360f63
                    
                label_1403611b8:
                    arg8 = var_8e8.o
                    arg5 = _mm_shuffle_ps(temp0_315, arg8, 0x32)
                    var_8e8.o = _mm_shuffle_ps(arg8, arg5, 0x84)
                    
                    if (not(cond:250_1))
                    label_1403611da:
                        arg8 = var_958_1
                        arg5 = _mm_shuffle_ps(arg13, arg8, 0x32)
                        var_958_1 = _mm_shuffle_ps(arg8, arg5, 0x84)
                        
                        if (cond:271_1)
                            goto label_140360f69
                        
                        goto label_1403611f5
                    
                label_140360f63:
                    
                    if (cond:270_1)
                    label_1403611f5:
                        arg8 = var_968
                        arg5 = _mm_shuffle_ps(arg7, arg8, 0x32)
                        var_968 = _mm_shuffle_ps(arg8, arg5, 0x84)
                        
                        if (not(cond:290_1))
                        label_14036120e:
                            arg8 = var_948.o
                            arg5 = _mm_shuffle_ps(zmm2, arg8, 0x32)
                            var_948.o = _mm_shuffle_ps(arg8, arg5, 0x84)
                            
                            if (cond:303_1)
                                goto label_140360f75
                            
                            goto label_140361229
                    else
                    label_140360f69:
                        
                        if (cond:291_1)
                            goto label_14036120e
                    
                    bool cond:338_1
                    bool cond:339_1
                    bool cond:349_1
                    bool cond:350_1
                    bool cond:369_1
                    bool cond:370_1
                    bool cond:389_1
                    bool cond:390_1
                    bool cond:409_1
                    bool cond:410_1
                    bool cond:422_1
                    bool cond:423_1
                    
                    if (not(cond:302_1))
                    label_140360f75:
                        char temp52_1 = temp0_312 & 8
                        cond:338_1 = temp52_1 != 0
                        cond:339_1 = temp52_1 == 0
                        cond:349_1 = temp52_1 == 0
                        cond:350_1 = temp52_1 != 0
                        cond:369_1 = temp52_1 != 0
                        cond:370_1 = temp52_1 == 0
                        cond:389_1 = temp52_1 == 0
                        cond:390_1 = temp52_1 != 0
                        cond:409_1 = temp52_1 != 0
                        cond:410_1 = temp52_1 == 0
                        cond:422_1 = temp52_1 == 0
                        cond:423_1 = temp52_1 != 0
                        
                        if (temp52_1 != 0)
                            goto label_14036124a
                        
                        goto label_140360f7f
                    
                label_140361229:
                    arg8 = var_928
                    arg5 = _mm_shuffle_ps(arg10, arg8, 0x32)
                    var_928 = _mm_shuffle_ps(arg8, arg5, 0x84)
                    char temp51_1 = temp0_312 & 8
                    cond:338_1 = temp51_1 != 0
                    cond:339_1 = temp51_1 == 0
                    cond:349_1 = temp51_1 == 0
                    cond:350_1 = temp51_1 != 0
                    cond:369_1 = temp51_1 != 0
                    cond:370_1 = temp51_1 == 0
                    cond:389_1 = temp51_1 == 0
                    cond:390_1 = temp51_1 != 0
                    cond:409_1 = temp51_1 != 0
                    cond:410_1 = temp51_1 == 0
                    cond:422_1 = temp51_1 == 0
                    cond:423_1 = temp51_1 != 0
                    
                    if (temp51_1 != 0)
                    label_14036124a:
                        arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(arg12, arg11, 0x23), 0x24)
                        arg8 = var_8e8.o
                        
                        if (cond:339_1)
                            goto label_140360f8d
                        
                        goto label_14036125d
                    
                label_140360f7f:
                    arg8 = var_8e8.o
                    
                    if (cond:338_1)
                    label_14036125d:
                        arg5 = var_918
                        arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(arg6, arg5, 0x23), 0x24)
                        var_918 = arg5
                        
                        if (not(cond:349_1))
                        label_140361279:
                            arg8 = _mm_shuffle_ps(arg8, _mm_shuffle_ps(temp0_315, arg8, 0x23), 0x24)
                            
                            if (cond:370_1)
                                goto label_140360f99
                            
                            goto label_140361292
                    else
                    label_140360f8d:
                        
                        if (cond:350_1)
                            goto label_140361279
                    
                    if (not(cond:369_1))
                    label_140360f99:
                        arg6 = zx.o(0)
                        arg13 = var_8b8_2
                        
                        if (cond:390_1)
                            goto label_1403612a9
                        
                        goto label_140360fab
                    
                label_140361292:
                    var_958_1 =
                        _mm_shuffle_ps(var_958_1, _mm_shuffle_ps(arg13, var_958_1, 0x23), 0x24)
                    arg6 = zx.o(0)
                    arg13 = var_8b8_2
                    
                    if (not(cond:389_1))
                    label_1403612a9:
                        zmm0 = var_968
                        var_968 = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(arg7, zmm0, 0x23), 0x24)
                        
                        if (cond:410_1)
                            goto label_140360fb1
                        
                        goto label_1403612bf
                    
                label_140360fab:
                    
                    if (not(cond:409_1))
                    label_140360fb1:
                        
                        if (cond:423_1)
                            goto label_1403612da
                        
                        goto label_140360fb7
                    
                label_1403612bf:
                    zmm0 = var_948.o
                    var_948.o = _mm_shuffle_ps(zmm0, _mm_shuffle_ps(zmm2, zmm0, 0x23), 0x24)
                    
                    if (cond:422_1)
                    label_140360fb7:
                        
                        if (temp0_87 != temp0_309)
                            zmm0 = _mm_srai_epi32(arg9, 0x1f)
                            goto label_1403612fe
                    else
                    label_1403612da:
                        arg5 = var_928
                        arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(arg10, arg5, 0x23), 0x24)
                        var_928 = arg5
                        
                        if (temp0_87 != temp0_309)
                            zmm0 = _mm_srai_epi32(arg9, 0x1f)
                            goto label_1403612fe
                    
                    var_8f8.o = arg11
                    zmm2 = var_888_1
                    zmm10 = var_848_1
                    arg11 = var_868_1
                    arg6 = var_898_1
                    arg12 = var_878_1
                    arg9 = var_918
                    arg7 = var_958_1
                    zmm8 = var_968
                    arg13 = var_948.o
                    arg14 = var_928
                    rsi_1 = temp0_87
                    char temp69_1 = rsi_1 & 1
                    cond:33_1 = temp69_1 == 0
                    cond:34_1 = temp69_1 != 0
                    cond:35_1 = temp69_1 != 0
                    cond:46_1 = temp69_1 != 0
                    cond:47_1 = temp69_1 == 0
                    cond:59_1 = temp69_1 == 0
                    cond:60_1 = temp69_1 != 0
                    cond:75_1 = temp69_1 != 0
                    cond:76_1 = temp69_1 == 0
                    cond:93_1 = temp69_1 == 0
                    cond:94_1 = temp69_1 != 0
                    
                    if (temp69_1 != 0)
                        arg12[0] = var_8f8.o[0]
                
                if (not(cond:35_1))
                    if (cond:34_1)
                        goto label_14035fd3a
                    
                    goto label_140361482
                
                arg6[0] = arg9[0]
                
                if (not(cond:33_1))
                label_14035fd3a:
                    zmm10[0] = arg8[0]
                    
                    if (cond:47_1)
                        goto label_140361488
                    
                    goto label_14035fd45
                
            label_140361482:
                
                if (not(cond:46_1))
                label_140361488:
                    
                    if (cond:60_1)
                        goto label_14035fd50
                    
                    goto label_14036148e
                
            label_14035fd45:
                arg11[0] = arg7[0]
                
                if (not(cond:59_1))
                label_14035fd50:
                    zmm2[0] = zmm8[0]
                    
                    if (cond:76_1)
                        goto label_140361494
                    
                    goto label_14035fd60
                
            label_14036148e:
                
                if (not(cond:75_1))
                label_140361494:
                    
                    if (cond:94_1)
                        goto label_14035fd70
                    
                    goto label_14036149a
                
            label_14035fd60:
                var_908[0] = arg13[0]
                bool cond:125_1
                bool cond:126_1
                bool cond:145_1
                bool cond:146_1
                bool cond:165_1
                bool cond:166_1
                bool cond:178_1
                bool cond:179_1
                bool cond:196_1
                bool cond:197_1
                bool cond:214_1
                bool cond:215_1
                
                if (not(cond:93_1))
                label_14035fd70:
                    arg10[0] = arg14[0]
                    char temp21_1 = rsi_1 & 2
                    cond:125_1 = temp21_1 == 0
                    cond:126_1 = temp21_1 != 0
                    cond:145_1 = temp21_1 != 0
                    cond:146_1 = temp21_1 == 0
                    cond:165_1 = temp21_1 == 0
                    cond:166_1 = temp21_1 != 0
                    cond:178_1 = temp21_1 != 0
                    cond:179_1 = temp21_1 == 0
                    cond:196_1 = temp21_1 == 0
                    cond:197_1 = temp21_1 != 0
                    cond:214_1 = temp21_1 != 0
                    cond:215_1 = temp21_1 == 0
                    
                    if (temp21_1 == 0)
                        goto label_1403614a4
                    
                    goto label_14035fd8e
                
            label_14036149a:
                char temp20_1 = rsi_1 & 2
                cond:125_1 = temp20_1 == 0
                cond:126_1 = temp20_1 != 0
                cond:145_1 = temp20_1 != 0
                cond:146_1 = temp20_1 == 0
                cond:165_1 = temp20_1 == 0
                cond:166_1 = temp20_1 != 0
                cond:178_1 = temp20_1 != 0
                cond:179_1 = temp20_1 == 0
                cond:196_1 = temp20_1 == 0
                cond:197_1 = temp20_1 != 0
                cond:214_1 = temp20_1 != 0
                cond:215_1 = temp20_1 == 0
                
                if (temp20_1 == 0)
                label_1403614a4:
                    
                    if (cond:126_1)
                        goto label_14035fda3
                    
                    goto label_1403614aa
                
            label_14035fd8e:
                arg12 = _mm_shuffle_ps(_mm_shuffle_ps(var_8f8.o, arg12, 1), arg12, 0xe2)
                
                if (not(cond:125_1))
                label_14035fda3:
                    arg6 = _mm_shuffle_ps(_mm_shuffle_ps(arg9, arg6, 1), arg6, 0xe2)
                    
                    if (cond:146_1)
                        goto label_1403614b0
                    
                    goto label_14035fdb9
                
            label_1403614aa:
                
                if (not(cond:145_1))
                label_1403614b0:
                    
                    if (cond:166_1)
                        goto label_14035fdd0
                    
                    goto label_1403614b6
                
            label_14035fdb9:
                zmm10 = _mm_shuffle_ps(_mm_shuffle_ps(arg8, zmm10, 1), zmm10, 0xe2)
                
                if (not(cond:165_1))
                label_14035fdd0:
                    arg11 = _mm_shuffle_ps(_mm_shuffle_ps(arg7, arg11, 1), arg11, 0xe2)
                    
                    if (cond:179_1)
                        goto label_1403614bc
                    
                    goto label_14035fde6
                
            label_1403614b6:
                
                if (cond:178_1)
                label_14035fde6:
                    zmm2 = _mm_shuffle_ps(_mm_shuffle_ps(zmm8, zmm2, 1), zmm2, 0xe2)
                    
                    if (not(cond:196_1))
                    label_14035fdf3:
                        arg5 = var_908
                        var_908 = _mm_shuffle_ps(_mm_shuffle_ps(arg13, arg5, 1), arg5, 0xe2)
                        
                        if (cond:215_1)
                            goto label_1403614c8
                        
                        goto label_14035fe17
                else
                label_1403614bc:
                    
                    if (cond:197_1)
                        goto label_14035fdf3
                
                bool cond:246_1
                bool cond:247_1
                bool cond:266_1
                bool cond:267_1
                bool cond:286_1
                bool cond:287_1
                bool cond:298_1
                bool cond:299_1
                bool cond:316_1
                bool cond:317_1
                bool cond:334_1
                bool cond:335_1
                
                if (not(cond:214_1))
                label_1403614c8:
                    char temp40_1 = rsi_1 & 4
                    cond:246_1 = temp40_1 != 0
                    cond:247_1 = temp40_1 == 0
                    cond:266_1 = temp40_1 == 0
                    cond:267_1 = temp40_1 != 0
                    cond:286_1 = temp40_1 != 0
                    cond:287_1 = temp40_1 == 0
                    cond:298_1 = temp40_1 == 0
                    cond:299_1 = temp40_1 != 0
                    cond:316_1 = temp40_1 != 0
                    cond:317_1 = temp40_1 == 0
                    cond:334_1 = temp40_1 == 0
                    cond:335_1 = temp40_1 != 0
                    
                    if (temp40_1 != 0)
                        goto label_14035fe2e
                    
                    goto label_1403614d2
                
            label_14035fe17:
                arg10 = _mm_shuffle_ps(_mm_shuffle_ps(arg14, arg10, 1), arg10, 0xe2)
                char temp39_1 = rsi_1 & 4
                cond:246_1 = temp39_1 != 0
                cond:247_1 = temp39_1 == 0
                cond:266_1 = temp39_1 == 0
                cond:267_1 = temp39_1 != 0
                cond:286_1 = temp39_1 != 0
                cond:287_1 = temp39_1 == 0
                cond:298_1 = temp39_1 == 0
                cond:299_1 = temp39_1 != 0
                cond:316_1 = temp39_1 != 0
                cond:317_1 = temp39_1 == 0
                cond:334_1 = temp39_1 == 0
                cond:335_1 = temp39_1 != 0
                
                if (temp39_1 != 0)
                label_14035fe2e:
                    arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(var_8f8.o, arg12, 0x32), 0x84)
                    
                    if (cond:247_1)
                        goto label_1403614d8
                    
                    goto label_14035fe40
                
            label_1403614d2:
                
                if (not(cond:246_1))
                label_1403614d8:
                    
                    if (cond:267_1)
                        goto label_14035fe52
                    
                    goto label_1403614de
                
            label_14035fe40:
                arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg9, arg6, 0x32), 0x84)
                
                if (not(cond:266_1))
                label_14035fe52:
                    zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(arg8, zmm10, 0x32), 0x84)
                    
                    if (cond:287_1)
                        goto label_1403614e4
                    
                    goto label_14035fe65
                
            label_1403614de:
                
                if (not(cond:286_1))
                label_1403614e4:
                    
                    if (cond:299_1)
                        goto label_14035fe78
                    
                    goto label_1403614ea
                
            label_14035fe65:
                arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(arg7, arg11, 0x32), 0x84)
                
                if (not(cond:298_1))
                label_14035fe78:
                    zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x32), 0x84)
                    
                    if (cond:317_1)
                        goto label_1403614f0
                    
                    goto label_14035fe86
                
            label_1403614ea:
                
                if (not(cond:316_1))
                label_1403614f0:
                    
                    if (cond:335_1)
                        goto label_14035fea6
                    
                    goto label_1403614f6
                
            label_14035fe86:
                arg5 = var_908
                arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(arg13, arg5, 0x32), 0x84)
                var_908 = arg5
                bool cond:365_1
                bool cond:366_1
                bool cond:385_1
                bool cond:386_1
                bool cond:405_1
                bool cond:406_1
                bool cond:419_1
                bool cond:420_1
                bool cond:435_1
                bool cond:436_1
                bool cond:451_1
                bool cond:452_1
                
                if (not(cond:334_1))
                label_14035fea6:
                    arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(arg14, arg10, 0x32), 0x84)
                    char temp60_1 = rsi_1 & 8
                    cond:365_1 = temp60_1 == 0
                    cond:366_1 = temp60_1 != 0
                    cond:385_1 = temp60_1 != 0
                    cond:386_1 = temp60_1 == 0
                    cond:405_1 = temp60_1 == 0
                    cond:406_1 = temp60_1 != 0
                    cond:419_1 = temp60_1 != 0
                    cond:420_1 = temp60_1 == 0
                    cond:435_1 = temp60_1 == 0
                    cond:436_1 = temp60_1 != 0
                    cond:451_1 = temp60_1 != 0
                    cond:452_1 = temp60_1 == 0
                    
                    if (temp60_1 == 0)
                        goto label_140361500
                    
                    goto label_14035febe
                
            label_1403614f6:
                char temp59_1 = rsi_1 & 8
                cond:365_1 = temp59_1 == 0
                cond:366_1 = temp59_1 != 0
                cond:385_1 = temp59_1 != 0
                cond:386_1 = temp59_1 == 0
                cond:405_1 = temp59_1 == 0
                cond:406_1 = temp59_1 != 0
                cond:419_1 = temp59_1 != 0
                cond:420_1 = temp59_1 == 0
                cond:435_1 = temp59_1 == 0
                cond:436_1 = temp59_1 != 0
                cond:451_1 = temp59_1 != 0
                cond:452_1 = temp59_1 == 0
                
                if (temp59_1 == 0)
                label_140361500:
                    
                    if (cond:366_1)
                        goto label_14035fed0
                    
                    goto label_140361506
                
            label_14035febe:
                arg12 = _mm_shuffle_ps(arg12, _mm_shuffle_ps(var_8f8.o, arg12, 0x23), 0x24)
                
                if (not(cond:365_1))
                label_14035fed0:
                    arg6 = _mm_shuffle_ps(arg6, _mm_shuffle_ps(arg9, arg6, 0x23), 0x24)
                    
                    if (cond:386_1)
                        goto label_14036150c
                    
                    goto label_14035fee2
                
            label_140361506:
                
                if (not(cond:385_1))
                label_14036150c:
                    
                    if (cond:406_1)
                        goto label_14035fef5
                    
                    goto label_140361512
                
            label_14035fee2:
                zmm10 = _mm_shuffle_ps(zmm10, _mm_shuffle_ps(arg8, zmm10, 0x23), 0x24)
                
                if (not(cond:405_1))
                label_14035fef5:
                    arg11 = _mm_shuffle_ps(arg11, _mm_shuffle_ps(arg7, arg11, 0x23), 0x24)
                    
                    if (cond:420_1)
                        goto label_140361518
                    
                    goto label_14035ff08
                
            label_140361512:
                
                if (not(cond:419_1))
                label_140361518:
                    
                    if (cond:436_1)
                        goto label_14035ff16
                    
                    goto label_14036151e
                
            label_14035ff08:
                zmm2 = _mm_shuffle_ps(zmm2, _mm_shuffle_ps(zmm8, zmm2, 0x23), 0x24)
                
                if (cond:435_1)
                label_14036151e:
                    
                    if (not(cond:451_1))
                    label_140361524:
                        r11_1 = zx.q(r11_1.d + 4)
                        
                        if (r11_1.d s>= i)
                            break
                        
                        continue
                else
                label_14035ff16:
                    arg5 = var_908
                    arg5 = _mm_shuffle_ps(arg5, _mm_shuffle_ps(arg13, arg5, 0x23), 0x24)
                    var_908 = arg5
                    
                    if (cond:452_1)
                        goto label_140361524
                
                arg10 = _mm_shuffle_ps(arg10, _mm_shuffle_ps(arg14, arg10, 0x23), 0x24)
                r11_1 = zx.q(r11_1.d + 4)
                
                if (r11_1.d s>= i)
                    break
        
        rax_86 = zx.q(arg17)
        
        if (r11_1.d s< rax_86.d)
            goto label_140362da1
    float temp0_1337[0x4] = _mm_shuffle_ps(arg11, zmm10, 0)
    uint128_t var_5a8 = _mm_shuffle_ps(_mm_unpacklo_ps(arg12, arg6[0].q), temp0_1337, 0x24)
    float var_58c_1 = _mm_shuffle_ps(arg12, arg12, 0xe5)[0]
    float var_570_1 = _mm_unpackhi_pd(arg12, arg12[0].q)[0]
    uint32_t var_554_1 = _mm_shuffle_ps(arg12, arg12, 0xe7)[0]
    float temp0_1343[0x4] = _mm_unpacklo_ps(arg11, zmm2[0].q)
    uint128_t var_588_1 = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, arg6, 0x11), temp0_1343, 0xe2)
    float temp0_1346[0x4] = _mm_shuffle_ps(zmm2, arg11, 0x22)
    uint128_t var_56c_1 = _mm_shuffle_ps(_mm_unpackhi_ps(arg6, zmm10), temp0_1346, 0x24)
    float temp0_1349[0x4] = _mm_unpackhi_ps(arg11, zmm2)
    float var_550_1[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm10, arg6, 0x33), temp0_1349, 0xe2)
    float var_598 = zmm2[0]
    arg5 = var_908
    int32_t var_594 = arg5.d
    float var_578_1 = _mm_shuffle_ps(arg5, arg5, 0xe5)[0]
    float var_55c_1 = _mm_unpackhi_pd(arg5, arg5.q)[0]
    int32_t var_540_1 = _mm_shuffle_ps(arg5, arg5, 0xe7).d
    int104_t var_648_1 = arg10[0].13
    rax_86.b = var_648_1.b
    rcx_1.b = var_648_1:4.b
    char var_590[0x4]
    var_590[0] = rax_86.b
    char var_574_1 = rcx_1.b
    rax_86.b = var_648_1:8.b
    char var_558_1 = rax_86.b
    rax_86.b = var_648_1:0xc.b
    char var_53c_1 = rax_86.b
    
    for (i_2 = 0xf; i_2 != 0; )
        uint64_t rcx_116
        uint64_t rflags_2
        
        if (i_2 == 0)
            rcx_116 = 0x40
        else
            rcx_116, rflags_2 = _bit_scan_forward(i_2)
        i_2 &= not.q(1 << (rcx_116 u% 0x40))
        uint64_t rdx_13 = rcx_116 * 0x1c
        char rbx_17 = arg16[6].b
        char rcx_117 = var_590[rdx_13]
        
        if (rbx_17 != 0 && rcx_117 != 0)
            arg5 = arg16[2]
            float temp0_1355[0x4] =
                _mm_unpacklo_ps(var_968[rcx_116 * 7 + 0xf0], (*(&var_5a8:4 + rdx_13))[0].q)
            zmm0 = _mm_min_ps(zx.o(*arg16)[0].q | arg5.q << 0x40, 
                temp0_1355[0].q | (*(&var_5a8:8 + rdx_13))[0].q << 0x40)
            arg5 = _mm_shuffle_ps(zmm0, zmm0, 0xe5)
            zmm2 = _mm_unpackhi_pd(zmm0, zmm0[0].q)
            float temp0_1359[0x4] = _mm_max_ps(zx.o(*(arg16 + 0xc))[0].q | arg16[5][0].q << 0x40, 
                zx.o(*(&var_5a8:0xc + rdx_13))[0].q | (&var_594)[rcx_116 * 7][0].q << 0x40)
            arg6 = temp0_1359
            arg7 = _mm_shuffle_ps(arg6, arg6, 0xe5)
            arg8 = _mm_unpackhi_pd(arg6, arg6[0].q)
        else if (rcx_117 == 0)
            rbx_17 = arg16[6].b
            arg8 = arg16[5]
            arg7 = arg16[4]
            arg6 = arg16[3]
            zmm2 = arg16[2]
            zmm0 = *arg16
            arg5 = arg16[1]
        else
            zmm0 = var_968[rcx_116 * 7 + 0xf0]
            arg5 = *(&var_5a8:4 + rdx_13)
            zmm2 = *(&var_5a8:8 + rdx_13)
            arg6 = *(&var_5a8:0xc + rdx_13)
            arg7 = (&var_598)[rcx_116 * 7]
            arg8 = (&var_594)[rcx_116 * 7]
            rbx_17 = rcx_117
        
        *arg16 = zmm0[0]
        arg16[1] = arg5.d
        arg16[2] = zmm2[0]
        arg16[3] = arg6[0]
        arg16[4] = arg7[0]
        arg16[5] = arg8[0]
        arg16[6].b = rbx_17
return i_2
