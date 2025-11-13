// 函数: sub_140356ff0
// 地址: 0x140356ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t zmm15[0x4]
int32_t var_58[0x4] = zmm15
float var_78[0x4] = arg13
float var_98[0x4] = arg12
int32_t var_a8[0x4] = arg11
uint32_t var_b8[0x4] = arg10
float var_c8[0x4] = arg9
float var_d8[0x4] = arg8
float zmm6[0x4]
float var_e8[0x4] = zmm6
int32_t r10 = arg16
uint32_t i_6 = _mm_movemask_ps(*arg17)
int32_t rdx_4 = ((r10 s>> 0x1f u>> 0x1e) + r10) & 0xfffffffc
float (* var_870)[0x4] = arg4
int32_t var_914 = rdx_4
uint64_t i_2
float var_9c8[0x4]
uint64_t var_968
float var_948[0x4]
int32_t* var_898
int32_t var_7b8
float var_7a8[0x4]
float var_798[0x4]
float var_788[0x4]
float var_778[0x4]
float var_768[0x4]
float var_758[0x4]
int32_t var_748[0x4]
float var_738[0x4]
float var_728[0x4]
float var_718[0x4]
float var_708[0x4]
float var_6f8[0x4]
float var_6e8[0x4]
float var_6d8[0x4]
float var_6c8[0x4]
float zmm0[0x4]
float zmm2[0x4]
float zmm4[0x4]
float zmm12[0x4]
float zmm14[0x4]

if (i_6 != 0xf)
    uint64_t rbx_10 = 0
    float var_998_2[0x4]
    int32_t var_958[0x4]
    int32_t var_8f8[0x4]
    
    if (rdx_4 s> 0)
        zmm14 = zx.o(0)
        zmm6 = zx.o(0)
        zmm12 = zx.o(0)
        arg9 = zx.o(0)
        zmm2 = zx.o(0)
        var_998_2 = zx.o(0)
        zmm15 = zx.o(0)
        
        while (true)
            arg10 = arg9
            arg9 = zmm2
            int64_t rax_33 = sx.q((rbx_10 << 3).d - rbx_10.d)
            int32_t temp0_411[0x4] = __pinsrb_xmmdq_memb_immb(
                __pinsrb_xmmdq_memb_immb(
                    __pinsrb_xmmdq_memb_immb(
                        __pinsrb_xmmdq_memb_immb(zx.o(0), (*arg4)[rax_33 + 6].b, 0), 
                        (*arg4)[rax_33 + 0xd].b, 4), 
                    (*arg4)[rax_33 + 0x14].b, 8), 
                (*arg4)[rax_33 + 0x1b].b, 0xc)
            int64_t rcx_32 = sx.q((rbx_10 << 2).d)
            zmm4 = *(arg1 + rcx_32)
            zmm2 = _mm_cmpeq_epi32(zmm2, zmm2)
            zmm4 = _mm_cmpeq_epi32(zmm4, zmm2) & not.o(_mm_cmpeq_epi32(temp0_411, zx.o(0)) ^ zmm2)
            char temp0_415 = _mm_movemask_ps(zmm4)
            
            if (temp0_415 == 0)
                zmm14 = zmm14
                zmm2 = arg9
                arg9 = arg10
                rbx_10 = zx.q(rbx_10.d + 4)
                
                if (rbx_10.d s>= rdx_4)
                    break
            else
                float var_838_2[0x4] = arg12
                var_9c8 = arg11
                var_958 = arg7
                int32_t var_888_1[0x4] = arg5
                var_8f8 = arg6
                int32_t var_938_1[0x4] = arg8
                float var_8e8_2[0x4] = zmm14
                float var_868_2[0x4] = zmm6
                float var_928_2[0x4] = zmm12
                uint32_t var_978_2[0x4] = arg10
                int32_t var_8b8_2[0x4] = arg9
                int32_t var_8c8_2[0x4] = zmm15
                int32_t var_878_2 = rbx_10.d
                int64_t rdx_26 = sx.q((rbx_10 * 9).d * 3 + rbx_10.d)
                arg5 = *(arg4 + rdx_26)
                zmm0 = *(arg4 + rdx_26 + 0x1c)
                arg9 = *(arg4 + rdx_26 + 0x38)
                zmm6 = *(arg4 + rdx_26 + 0x54)
                arg6 = _mm_shuffle_epi32(arg5, 0xe5)
                zmm2 = _mm_shuffle_epi32(arg5, 0x4e)
                uint32_t temp0_418[0x4] = _mm_shuffle_epi32(arg5, 0xe7)
                arg5 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(arg5, zmm0[0].q), arg9[0].q)
                int32_t temp0_422[0x4] = _mm_blend_epi16(_mm_shuffle_epi32(zmm6, 0x24), arg5, 0x3f)
                float temp0_424[0x4] = _mm_insert_ps(_mm_blend_epi16(arg6, zmm0, 0xc), arg9, 0x68)
                float var_8d8_2[0x4] =
                    _mm_blend_epi16(_mm_shuffle_epi32(zmm6, 0x44), temp0_424, 0x3f)
                arg6 = _mm_shuffle_epi32(zmm0, 0xfa)
                int64_t rax_40 = *(arg4 + rdx_26 + 0x10)
                int64_t rbp_7 = *(arg4 + rdx_26 + 0x2c)
                arg5 = _mm_insert_epi32(zx.o(rax_40.d), rbp_7.d, 1)
                int64_t rbx_11 = *(arg4 + rdx_26 + 0x48)
                arg5 = _mm_insert_epi32(arg5, rbx_11.d, 2)
                int64_t rdx_27 = *(arg4 + rdx_26 + 0x64)
                float var_628_2[0x4] = _mm_insert_epi32(arg5, rdx_27.d, 3)
                float var_948_1[0x4] = _mm_insert_epi32(
                    _mm_insert_epi32(
                        _mm_insert_epi32(zx.o((rax_40 u>> 0x20).d), (rbp_7 u>> 0x20).d, 1), 
                        (rbx_11 u>> 0x20).d, 2), 
                    (rdx_27 u>> 0x20).d, 3)
                arg5 = _mm_slli_epi32(*(arg2 + rcx_32), 6)
                float var_6b8_2[0x4] = zmm4
                zmm4 = _mm_srai_epi32(_mm_slli_epi32(zmm4, 0x1f), 0x1f)
                arg5 &= zmm4
                int64_t rax_44 = sx.q(arg5[0])
                void* rbp_9 = arg3 + rax_44
                int32_t temp0_437 = _mm_extract_epi32(arg5, 1)
                arg7 = *(arg3 + rax_44)
                int64_t rax_45 = sx.q(temp0_437)
                void* rsi_5 = arg3 + rax_45
                int64_t rcx_35 = sx.q(_mm_extract_epi32(arg5, 2))
                void* rdi_7 = arg3 + rcx_35
                int64_t rdx_30 = sx.q(_mm_extract_epi32(arg5, 3))
                arg7 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(arg7, *(arg3 + rax_45), 0x10), *(arg3 + rcx_35), 
                        0x20), 
                    *(arg3 + rdx_30), 0x30)
                void* r11_3 = arg3 + rdx_30
                arg8 = zmm4 & data_142fc95e0
                arg5 = *(zx.q(arg8[0]) + rbp_9)
                int32_t* rax_47 = zx.q(_mm_extract_epi32(arg8, 1))
                int32_t* rcx_36 = zx.q(_mm_extract_epi32(arg8, 2))
                int32_t* rdx_31 = zx.q(_mm_extract_epi32(arg8, 3))
                float temp0_448[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(arg5, *(rax_47 + rsi_5), 0x10), 
                        *(rcx_36 + rdi_7), 0x20), 
                    *(rdx_31 + r11_3), 0x30)
                arg6 = _mm_blend_epi16(arg6, zmm2, 0xf3)
                zmm2 = zmm4 & data_142fc95f0
                zmm15 = *(zx.q(zmm2[0]) + rbp_9)
                int32_t* rax_49 = zx.q(_mm_extract_epi32(zmm2, 1))
                int32_t* rcx_37 = zx.q(_mm_extract_epi32(zmm2, 2))
                int32_t* rdx_32 = zx.q(_mm_extract_epi32(zmm2, 3))
                zmm15 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm15, *(rax_49 + rsi_5), 0x10), 
                        *(rcx_37 + rdi_7), 0x20), 
                    *(rdx_32 + r11_3), 0x30)
                arg6 = _mm_blend_epi16(arg6, arg9, 0xf0)
                zmm2 = zmm4 & data_143442650
                zmm12 = *(zx.q(zmm2[0]) + rbp_9)
                int32_t* rax_51 = zx.q(_mm_extract_epi32(zmm2, 1))
                int32_t* rcx_38 = zx.q(_mm_extract_epi32(zmm2, 2))
                int32_t* rdx_33 = zx.q(_mm_extract_epi32(zmm2, 3))
                float temp0_462[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm12, *(rax_51 + rsi_5), 0x10), 
                        *(rcx_38 + rdi_7), 0x20), 
                    *(rdx_33 + r11_3), 0x30)
                arg8 = _mm_shuffle_epi32(zmm6, 0xa4)
                zmm2 = zmm4 & data_143442660
                int32_t* rax_52 = zx.q(_mm_extract_epi32(zmm2, 1))
                int32_t* rcx_39 = zx.q(_mm_extract_epi32(zmm2, 2))
                int32_t* rdx_34 = zx.q(_mm_extract_epi32(zmm2, 3))
                float temp0_469[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(zx.q(zmm2[0]) + rbp_9), *(rax_52 + rsi_5), 
                            0x10), 
                        *(rcx_39 + rdi_7), 0x20), 
                    *(rdx_34 + r11_3), 0x30)
                float var_8a8_2[0x4] = _mm_blend_epi16(arg8, arg6, 0x3f)
                arg6 = zmm4 & data_143442670
                int32_t* r15_2 = zx.q(_mm_extract_epi32(arg6, 1))
                int32_t* r9_2 = zx.q(_mm_extract_epi32(arg6, 2))
                int32_t* r10_3 = zx.q(_mm_extract_epi32(arg6, 3))
                float (* r14_3)[0x4] = zx.q(arg6[0])
                arg6 = zmm4 & data_143442700
                int32_t* rax_53 = zx.q(_mm_extract_epi32(arg6, 1))
                int32_t* rcx_40 = zx.q(_mm_extract_epi32(arg6, 2))
                int32_t* rdx_35 = zx.q(_mm_extract_epi32(arg6, 3))
                float (* rbx_15)[0x4] = zx.q(arg6[0])
                float temp0_479[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(r14_3 + rbp_9), *(r15_2 + rsi_5), 0x10), 
                        *(r9_2 + rdi_7), 0x20), 
                    *(r10_3 + r11_3), 0x30)
                arg8 = _mm_shuffle_epi32(zmm0, 0x4e)
                float temp0_483[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rbx_15 + rbp_9), *(rax_53 + rsi_5), 0x10), 
                        *(rcx_40 + rdi_7), 0x20), 
                    *(rdx_35 + r11_3), 0x30)
                arg8 = _mm_blend_epi16(arg8, temp0_418, 0xf3)
                arg6 = zmm4 & data_1434b2e20
                int32_t* rax_54 = zx.q(_mm_extract_epi32(arg6, 1))
                int32_t* rcx_41 = zx.q(_mm_extract_epi32(arg6, 2))
                int32_t* rdx_36 = zx.q(_mm_extract_epi32(arg6, 3))
                arg11 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(zx.q(arg6[0]) + rbp_9), *(rax_54 + rsi_5), 
                            0x10), 
                        *(rcx_41 + rdi_7), 0x20), 
                    *(rdx_36 + r11_3), 0x30)
                float temp0_491[0x4] = _mm_insert_ps(arg8, arg9, 0xe8)
                arg6 = zmm4 & (*U"    $$$$((((,,,,000044448888<<<<")[0].o
                int32_t* rax_55 = zx.q(_mm_extract_epi32(arg6, 1))
                int32_t* rcx_42 = zx.q(_mm_extract_epi32(arg6, 2))
                int32_t* rdx_37 = zx.q(_mm_extract_epi32(arg6, 3))
                float temp0_497[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(zx.q(arg6[0]) + rbp_9), *(rax_55 + rsi_5), 
                            0x10), 
                        *(rcx_42 + rdi_7), 0x20), 
                    *(rdx_37 + r11_3), 0x30)
                float temp0_498[0x4] = _mm_blend_ps(temp0_491, zmm6, 8)
                zmm6 = zmm4 & (*U"    $$$$((((,,,,000044448888<<<<")[4].o
                int32_t* r15_3 = zx.q(_mm_extract_epi32(zmm6, 1))
                int32_t* rax_56 = zx.q(_mm_extract_epi32(zmm6, 2))
                int32_t* rax_57 = zx.q(_mm_extract_epi32(zmm6, 3))
                float (* rax_58)[0x4] = zx.q(zmm6[0])
                zmm6 = zmm4 & (*U"    $$$$((((,,,,000044448888<<<<")[8].o
                int32_t* rax_59 = zx.q(_mm_extract_epi32(zmm6, 1))
                int32_t* rax_60 = zx.q(_mm_extract_epi32(zmm6, 2))
                int32_t* rcx_43 = zx.q(_mm_extract_epi32(zmm6, 3))
                uint64_t rcx_44 = zx.q(zmm6[0])
                zmm6 = zmm4 & (*U"    $$$$((((,,,,000044448888<<<<")[0xc].o
                int32_t* rax_61 = zx.q(_mm_extract_epi32(zmm6, 1))
                int32_t* rax_62 = zx.q(_mm_extract_epi32(zmm6, 2))
                int32_t* rax_63 = zx.q(_mm_extract_epi32(zmm6, 3))
                float (* rax_64)[0x4] = zx.q(zmm6[0])
                zmm6 = zmm4 & (*U"    $$$$((((,,,,000044448888<<<<")[0x10].o
                int32_t* rax_65 = zx.q(_mm_extract_epi32(zmm6, 1))
                int32_t* rax_66 = zx.q(_mm_extract_epi32(zmm6, 2))
                int32_t* r13_4 = zx.q(_mm_extract_epi32(zmm6, 3))
                float (* r12_2)[0x4] = zx.q(zmm6[0])
                zmm6 = zmm4 & (*U"    $$$$((((,,,,000044448888<<<<")[0x14].o
                int32_t* rax_67 = zx.q(_mm_extract_epi32(zmm6, 1))
                int32_t* rax_68 = zx.q(_mm_extract_epi32(zmm6, 2))
                int32_t* r14_4 = zx.q(_mm_extract_epi32(zmm6, 3))
                float (* rbx_18)[0x4] = zx.q(zmm6[0])
                zmm6 = zmm4 & (*U"    $$$$((((,,,,000044448888<<<<")[0x18].o
                int32_t* r10_4 = zx.q(_mm_extract_epi32(zmm6, 1))
                int32_t* r9_3 = zx.q(_mm_extract_epi32(zmm6, 2))
                int32_t* rdx_38 = zx.q(_mm_extract_epi32(zmm6, 3))
                float (* rcx_45)[0x4] = zx.q(zmm6[0])
                float temp0_519[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rax_58 + rbp_9), *(r15_3 + rsi_5), 0x10), 
                        *(rax_56 + rdi_7), 0x20), 
                    *(rax_57 + r11_3), 0x30)
                int32_t var_3e8[0x4] = arg7
                arg7 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rcx_44 + rbp_9), *(rax_59 + rsi_5), 0x10), 
                        *(rax_60 + rdi_7), 0x20), 
                    *(rcx_43 + r11_3), 0x30)
                float var_3d8[0x4] = temp0_448
                float temp0_525[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rax_64 + rbp_9), *(rax_61 + rsi_5), 0x10), 
                        *(rax_62 + rdi_7), 0x20), 
                    *(rax_63 + r11_3), 0x30)
                int32_t var_3c8[0x4] = zmm15
                float temp0_528[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(r12_2 + rbp_9), *(rax_65 + rsi_5), 0x10), 
                        *(rax_66 + rdi_7), 0x20), 
                    *(r13_4 + r11_3), 0x30)
                float var_3b8[0x4] = temp0_462
                zmm4 &= (*U"    $$$$((((,,,,000044448888<<<<")[0x1c].o
                int32_t* r12_3 = zx.q(_mm_extract_epi32(zmm4, 1))
                int32_t* r13_5 = zx.q(_mm_extract_epi32(zmm4, 2))
                int32_t* rax_81 = zx.q(_mm_extract_epi32(zmm4, 3))
                float (* r15_5)[0x4] = zx.q(zmm4[0])
                float var_3a8_1[0x4] = temp0_469
                float var_398_1[0x4] = temp0_479
                float var_388_1[0x4] = temp0_483
                int32_t var_378_1[0x4] = arg11
                float var_368_1[0x4] = temp0_497
                float var_358_1[0x4] = temp0_519
                int32_t var_348_1[0x4] = arg7
                float var_338_1[0x4] = temp0_525
                float var_328_1[0x4] = temp0_528
                float var_318_1[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rbx_18 + rbp_9), *(rax_67 + rsi_5), 0x10), 
                        *(rax_68 + rdi_7), 0x20), 
                    *(r14_4 + r11_3), 0x30)
                float var_308_1[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rcx_45 + rbp_9), *(r10_4 + rsi_5), 0x10), 
                        *(r9_3 + rdi_7), 0x20), 
                    *(rdx_38 + r11_3), 0x30)
                float var_2f8_1[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(r15_5 + rbp_9), *(r12_3 + rsi_5), 0x10), 
                        *(r13_5 + rdi_7), 0x20), 
                    *(rax_81 + r11_3), 0x30)
                int32_t* var_9a8_2
                var_9a8_2.o = (*arg14)[9]
                var_968.o = (*arg14)[0xd]
                zmm12 = (*arg14)[2]
                zmm14 = (*arg14)[3]
                zmm15 = (*arg14)[6]
                arg13 = (*arg14)[0xa]
                arg9 = (*arg14)[0xe]
                arg8 = (*arg14)[7]
                zmm0 = (*arg14)[0xb]
                
                for (int64_t i = 0; i != 0x100; i += 0x40)
                    arg10 = *arg14
                    arg12 = arg14[1][0]
                    arg10 = _mm_shuffle_ps(arg10, arg10, 0)
                    zmm4 = *(&var_3e8 + i)
                    arg6 = *(&var_3d8 + i)
                    zmm2 = *(&var_3c8 + i)
                    arg5 = *(&var_3b8 + i)
                    arg11 = zx.o(0)
                    arg10 = _mm_add_ps(_mm_mul_ps(arg10, zmm4), arg11)
                    float temp0_546[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg12, arg12, 0), arg6), arg10)
                    arg7 = arg14[2][0]
                    arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), zmm2), temp0_546)
                    zmm6 = arg14[3][0]
                    *(&var_7b8 + i) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), arg5), arg7)
                    arg7 = (*arg14)[1]
                    zmm6 = (*arg14)[5]
                    arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), zmm4), arg11)
                    float temp0_558[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), arg6), arg7)
                    arg7 = var_9a8_2.o
                    arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), zmm2), temp0_558)
                    zmm6 = var_968.o
                    *(&var_7a8 + i) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), arg5), arg7)
                    arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), zmm4), arg11)
                    float temp0_570[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0), arg6), arg7)
                    arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg13, arg13, 0), zmm2), temp0_570)
                    *(&var_798 + i) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg9, arg9, 0), arg5), arg7)
                    arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm4), arg11)
                    float temp0_582[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg8, arg8, 0), arg6), arg7)
                    float temp0_585[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm2), temp0_582)
                    zmm2 = (*arg14)[0xf]
                    *(&var_788 + i) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), arg5), temp0_585)
                
                zmm15 = var_7b8.o
                zmm0 = var_7a8
                var_9a8_2.o = zmm0
                zmm2 = var_798
                var_968.o = zmm2
                int32_t* var_828_2
                var_828_2.o = var_758
                float temp0_589[0x4] = __addps_xmmps_memps(temp0_498, temp0_422)
                arg13 = data_142d3f640
                float temp0_590[0x4] = _mm_mul_ps(temp0_589, arg13)
                arg7 = _mm_mul_ps(temp0_590, zmm15)
                float temp0_592[0x4] = _mm_mul_ps(temp0_590, zmm0)
                arg11 = _mm_mul_ps(_mm_add_ps(var_8d8_2, var_628_2), arg13)
                zmm0 = arg13
                float temp0_596[0x4] = _mm_add_ps(_mm_mul_ps(arg11, var_778), arg7)
                arg7 = _mm_add_ps(_mm_mul_ps(arg11, var_768), temp0_592)
                float temp0_599[0x4] = _mm_mul_ps(temp0_590, zmm2)
                float temp0_601[0x4] = _mm_add_ps(_mm_mul_ps(arg11, var_758), temp0_599)
                float temp0_602[0x4] = __mulps_xmmps_memps(temp0_590, var_788)
                arg13 = var_748
                arg11 = _mm_add_ps(_mm_mul_ps(arg11, arg13), temp0_602)
                float temp0_606[0x4] = _mm_mul_ps(_mm_add_ps(var_8a8_2, var_948_1), zmm0)
                arg10 = var_738
                float temp0_608[0x4] = _mm_add_ps(_mm_mul_ps(temp0_606, arg10), temp0_596)
                float temp0_610[0x4] = _mm_add_ps(_mm_mul_ps(temp0_606, var_728), arg7)
                arg7 = _mm_add_ps(_mm_mul_ps(temp0_606, var_718), temp0_601)
                float temp0_614[0x4] = _mm_add_ps(_mm_mul_ps(temp0_606, var_708), arg11)
                float temp0_615[0x4] = __addps_xmmps_memps(temp0_608, var_6f8)
                float temp0_616[0x4] = __addps_xmmps_memps(temp0_610, var_6e8)
                arg7 = __addps_xmmps_memps(arg7, var_6d8)
                float temp0_618[0x4] = __addps_xmmps_memps(temp0_614, var_6c8)
                var_7b8.o = var_778
                var_7a8 = var_768
                arg11 = var_828_2.o
                var_798 = arg11
                var_788 = arg13
                uint32_t var_5d8_2[0x4] = arg10
                float var_5c8_2[0x4] = var_728
                float var_5b8_2[0x4] = var_718
                float var_5a8_2[0x4] = var_708
                float temp0_619[0x4] = __subps_xmmps_memps(var_628_2, var_8d8_2)
                float temp0_620[0x4] = __subps_xmmps_memps(var_948_1, var_8a8_2)
                float temp0_621[0x4] = __subps_xmmps_memps(temp0_498, temp0_422)
                float var_618_2[0x4] = temp0_615
                float var_608_2[0x4] = temp0_616
                int32_t var_5f8_2[0x4] = arg7
                float var_5e8_2[0x4] = temp0_618
                zmm2 = data_142d3f640
                float temp0_622[0x4] = _mm_mul_ps(temp0_621, zmm2)
                zmm15 = _mm_mul_ps(zmm15, temp0_622)
                float temp0_624[0x4] = _mm_mul_ps(var_9a8_2.o, temp0_622)
                float temp0_625[0x4] = __mulps_xmmps_memps(temp0_622, var_968.o)
                float temp0_626[0x4] = _mm_mul_ps(temp0_619, zmm2)
                arg13 = zmm2
                float temp0_627[0x4] = _mm_mul_ps(var_778, temp0_626)
                float temp0_628[0x4] = _mm_mul_ps(var_768, temp0_626)
                float temp0_629[0x4] = _mm_mul_ps(temp0_626, arg11)
                zmm2 = data_142d3f770
                zmm15 = _mm_and_ps(zmm15, zmm2)
                float temp0_632[0x4] = _mm_add_ps(_mm_and_ps(temp0_627, zmm2), zmm15)
                zmm6 = _mm_and_ps(temp0_624, zmm2)
                float temp0_635[0x4] = _mm_add_ps(_mm_and_ps(temp0_628, zmm2), zmm6)
                arg9 = _mm_and_ps(temp0_625, zmm2)
                float temp0_638[0x4] = _mm_add_ps(_mm_and_ps(temp0_629, zmm2), arg9)
                float temp0_639[0x4] = _mm_mul_ps(temp0_620, arg13)
                arg10 = _mm_mul_ps(arg10, temp0_639)
                float temp0_641[0x4] = _mm_mul_ps(var_728, temp0_639)
                float temp0_642[0x4] = _mm_mul_ps(temp0_639, var_718)
                arg10 = _mm_add_ps(_mm_and_ps(arg10, zmm2), temp0_632)
                float temp0_646[0x4] = _mm_add_ps(_mm_and_ps(temp0_641, zmm2), temp0_635)
                float temp0_648[0x4] = _mm_add_ps(_mm_and_ps(temp0_642, zmm2), temp0_638)
                zmm6 = _mm_sub_ps(temp0_615, arg10)
                float temp0_650[0x4] = _mm_sub_ps(temp0_616, temp0_646)
                var_968.o = _mm_sub_ps(arg7, temp0_648)
                arg10 = _mm_add_ps(arg10, temp0_615)
                var_9a8_2.o = _mm_add_ps(temp0_646, temp0_616)
                var_948 = _mm_add_ps(temp0_648, arg7)
                zmm14 = var_8c8_2 & data_142ed6810
                arg9 = zx.o(0)
                arg5 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm14, zx.o(0)) & not.o(var_6b8_2), 0x1f)
                char temp0_657 = _mm_movemask_ps(arg5)
                int32_t var_9b8[0x4]
                int32_t rbx_21
                char rsi_6
                
                if (temp0_657 != 0)
                    float temp0_658[0x4] = _mm_min_ps(var_8e8_2, zmm6)
                    char temp0_660 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(zmm14, data_142d8f750)
                        ^ data_142d3f800)
                    char temp1_1 = temp0_660 & 1
                    float var_8d8_3[0x4] = zmm6
                    
                    if (temp1_1 != 0)
                        var_958 = _mm_blend_ps(var_958, temp0_658, 1)
                    
                    zmm6 = var_978_2
                    arg12 = var_838_2
                    arg6 = temp0_650
                    float temp0_662[0x4] = _mm_min_ps(var_868_2, temp0_650)
                    
                    if (temp1_1 != 0)
                        var_9c8 = _mm_blend_ps(var_9c8, temp0_662, 1)
                    
                    arg4 = var_870
                    r10 = arg16
                    rdx_4 = var_914
                    rbx_21 = var_878_2
                    rsi_6 = temp0_415
                    zmm15 = __minps_xmmps_memps(var_928_2, var_968.o)
                    uint32_t var_908_3[0x4]
                    
                    if (temp1_1 == 0)
                        zmm0 = _mm_max_ps(zmm6, arg10)
                        var_908_3 = arg10
                        
                        if (temp1_1 != 0)
                            goto label_140359ae9
                        
                        goto label_140359938
                    
                    var_9b8 = _mm_blend_ps(var_9b8, zmm15, 1)
                    zmm0 = _mm_max_ps(zmm6, arg10)
                    var_908_3 = arg10
                    
                    if (temp1_1 != 0)
                    label_140359ae9:
                        arg12 = _mm_blend_ps(arg12, zmm0, 1)
                        zmm2 = __maxps_xmmps_memps(var_8b8_2, var_9a8_2.o)
                        
                        if (temp1_1 == 0)
                            goto label_140359948
                        
                        goto label_140359b0c
                    
                label_140359938:
                    zmm2 = __maxps_xmmps_memps(var_8b8_2, var_9a8_2.o)
                    
                    if (temp1_1 != 0)
                    label_140359b0c:
                        var_888_1 = _mm_blend_ps(var_888_1, zmm2, 1)
                        zmm6 = __maxps_xmmps_memps(var_998_2, var_948)
                        
                        if (temp1_1 != 0)
                        label_140359b35:
                            var_8f8 = _mm_blend_ps(var_8f8, zmm6, 1)
                            
                            if (temp1_1 == 0)
                                goto label_14035995c
                            
                            goto label_140359b58
                    else
                    label_140359948:
                        zmm6 = __maxps_xmmps_memps(var_998_2, var_948)
                        
                        if (temp1_1 != 0)
                            goto label_140359b35
                    
                    bool cond:86_1
                    bool cond:87_1
                    bool cond:98_1
                    bool cond:99_1
                    bool cond:118_1
                    bool cond:119_1
                    bool cond:138_1
                    bool cond:139_1
                    bool cond:157_1
                    bool cond:158_1
                    bool cond:174_1
                    bool cond:175_1
                    
                    if (temp1_1 == 0)
                    label_14035995c:
                        char temp10_1 = temp0_660 & 2
                        cond:86_1 = temp10_1 != 0
                        cond:87_1 = temp10_1 == 0
                        cond:98_1 = temp10_1 == 0
                        cond:99_1 = temp10_1 != 0
                        cond:118_1 = temp10_1 != 0
                        cond:119_1 = temp10_1 == 0
                        cond:138_1 = temp10_1 == 0
                        cond:139_1 = temp10_1 != 0
                        cond:157_1 = temp10_1 != 0
                        cond:158_1 = temp10_1 == 0
                        cond:174_1 = temp10_1 == 0
                        cond:175_1 = temp10_1 != 0
                        
                        if (temp10_1 != 0)
                            goto label_140359b7b
                        
                        goto label_140359966
                    
                label_140359b58:
                    var_938_1 = _mm_blend_epi16(var_938_1, var_8c8_2, 3)
                    char temp9_1 = temp0_660 & 2
                    cond:86_1 = temp9_1 != 0
                    cond:87_1 = temp9_1 == 0
                    cond:98_1 = temp9_1 == 0
                    cond:99_1 = temp9_1 != 0
                    cond:118_1 = temp9_1 != 0
                    cond:119_1 = temp9_1 == 0
                    cond:138_1 = temp9_1 == 0
                    cond:139_1 = temp9_1 != 0
                    cond:157_1 = temp9_1 != 0
                    cond:158_1 = temp9_1 == 0
                    cond:174_1 = temp9_1 == 0
                    cond:175_1 = temp9_1 != 0
                    
                    if (temp9_1 != 0)
                    label_140359b7b:
                        var_958 = _mm_blend_ps(var_958, temp0_658, 2)
                        
                        if (cond:87_1)
                            goto label_14035996c
                        
                        goto label_140359b91
                    
                label_140359966:
                    
                    if (not(cond:86_1))
                    label_14035996c:
                        
                        if (cond:99_1)
                            goto label_140359ba7
                        
                        goto label_140359972
                    
                label_140359b91:
                    var_9c8 = _mm_blend_ps(var_9c8, temp0_662, 2)
                    
                    if (not(cond:98_1))
                    label_140359ba7:
                        var_9b8 = _mm_blend_ps(var_9b8, zmm15, 2)
                        
                        if (cond:119_1)
                            goto label_140359978
                        
                        goto label_140359bb2
                    
                label_140359972:
                    
                    if (not(cond:118_1))
                    label_140359978:
                        
                        if (cond:139_1)
                            goto label_140359bcd
                        
                        goto label_14035997e
                    
                label_140359bb2:
                    arg12 = _mm_blend_ps(arg12, zmm0, 2)
                    
                    if (not(cond:138_1))
                    label_140359bcd:
                        var_888_1 = _mm_blend_ps(var_888_1, zmm2, 2)
                        
                        if (cond:158_1)
                            goto label_140359984
                        
                        goto label_140359be9
                    
                label_14035997e:
                    
                    if (not(cond:157_1))
                    label_140359984:
                        
                        if (cond:175_1)
                            goto label_140359c07
                        
                        goto label_14035998a
                    
                label_140359be9:
                    var_8f8 = _mm_blend_ps(var_8f8, zmm6, 2)
                    bool cond:206_1
                    bool cond:207_1
                    bool cond:218_1
                    bool cond:219_1
                    bool cond:238_1
                    bool cond:239_1
                    bool cond:258_1
                    bool cond:259_1
                    bool cond:278_1
                    bool cond:279_1
                    bool cond:294_1
                    bool cond:295_1
                    
                    if (not(cond:174_1))
                    label_140359c07:
                        var_938_1 = _mm_blend_epi16(var_938_1, var_8c8_2, 0xc)
                        char temp27_1 = temp0_660 & 4
                        cond:206_1 = temp27_1 == 0
                        cond:207_1 = temp27_1 != 0
                        cond:218_1 = temp27_1 != 0
                        cond:219_1 = temp27_1 == 0
                        cond:238_1 = temp27_1 == 0
                        cond:239_1 = temp27_1 != 0
                        cond:258_1 = temp27_1 != 0
                        cond:259_1 = temp27_1 == 0
                        cond:278_1 = temp27_1 == 0
                        cond:279_1 = temp27_1 != 0
                        cond:294_1 = temp27_1 != 0
                        cond:295_1 = temp27_1 == 0
                        
                        if (temp27_1 == 0)
                            goto label_140359994
                        
                        goto label_140359c25
                    
                label_14035998a:
                    char temp26_1 = temp0_660 & 4
                    cond:206_1 = temp26_1 == 0
                    cond:207_1 = temp26_1 != 0
                    cond:218_1 = temp26_1 != 0
                    cond:219_1 = temp26_1 == 0
                    cond:238_1 = temp26_1 == 0
                    cond:239_1 = temp26_1 != 0
                    cond:258_1 = temp26_1 != 0
                    cond:259_1 = temp26_1 == 0
                    cond:278_1 = temp26_1 == 0
                    cond:279_1 = temp26_1 != 0
                    cond:294_1 = temp26_1 != 0
                    cond:295_1 = temp26_1 == 0
                    
                    if (temp26_1 == 0)
                    label_140359994:
                        
                        if (cond:207_1)
                            goto label_140359c3b
                        
                        goto label_14035999a
                    
                label_140359c25:
                    var_958 = _mm_blend_ps(var_958, temp0_658, 4)
                    
                    if (not(cond:206_1))
                    label_140359c3b:
                        var_9c8 = _mm_blend_ps(var_9c8, temp0_662, 4)
                        
                        if (cond:219_1)
                            goto label_1403599a0
                        
                        goto label_140359c51
                    
                label_14035999a:
                    
                    if (not(cond:218_1))
                    label_1403599a0:
                        
                        if (cond:239_1)
                            goto label_140359c5c
                        
                        goto label_1403599a6
                    
                label_140359c51:
                    var_9b8 = _mm_blend_ps(var_9b8, zmm15, 4)
                    
                    if (not(cond:238_1))
                    label_140359c5c:
                        arg12 = _mm_blend_ps(arg12, zmm0, 4)
                        
                        if (cond:259_1)
                            goto label_1403599ac
                        
                        goto label_140359c77
                    
                label_1403599a6:
                    
                    if (cond:258_1)
                    label_140359c77:
                        var_888_1 = _mm_blend_ps(var_888_1, zmm2, 4)
                        
                        if (not(cond:278_1))
                        label_140359c93:
                            var_8f8 = _mm_blend_ps(var_8f8, zmm6, 4)
                            
                            if (cond:295_1)
                                goto label_1403599b8
                            
                            goto label_140359cb1
                    else
                    label_1403599ac:
                        
                        if (cond:279_1)
                            goto label_140359c93
                    
                    bool cond:326_1
                    bool cond:327_1
                    bool cond:338_1
                    bool cond:356_1
                    bool cond:357_1
                    bool cond:375_1
                    bool cond:376_1
                    bool cond:395_1
                    bool cond:396_1
                    bool cond:411_1
                    bool cond:412_1
                    
                    if (not(cond:294_1))
                    label_1403599b8:
                        char temp47_1 = temp0_660 & 8
                        cond:326_1 = temp47_1 == 0
                        cond:327_1 = temp47_1 != 0
                        cond:338_1 = temp47_1 != 0
                        cond:356_1 = temp47_1 == 0
                        cond:357_1 = temp47_1 != 0
                        cond:375_1 = temp47_1 != 0
                        cond:376_1 = temp47_1 == 0
                        cond:395_1 = temp47_1 == 0
                        cond:396_1 = temp47_1 != 0
                        cond:411_1 = temp47_1 != 0
                        cond:412_1 = temp47_1 == 0
                        
                        if (temp47_1 != 0)
                            goto label_140359ccf
                        
                        goto label_1403599c2
                    
                label_140359cb1:
                    var_938_1 = _mm_blend_epi16(var_938_1, var_8c8_2, 0x30)
                    char temp46_1 = temp0_660 & 8
                    cond:326_1 = temp46_1 == 0
                    cond:327_1 = temp46_1 != 0
                    cond:338_1 = temp46_1 != 0
                    cond:356_1 = temp46_1 == 0
                    cond:357_1 = temp46_1 != 0
                    cond:375_1 = temp46_1 != 0
                    cond:376_1 = temp46_1 == 0
                    cond:395_1 = temp46_1 == 0
                    cond:396_1 = temp46_1 != 0
                    cond:411_1 = temp46_1 != 0
                    cond:412_1 = temp46_1 == 0
                    
                    if (temp46_1 == 0)
                    label_1403599c2:
                        
                        if (not(cond:326_1))
                            var_9c8 = _mm_blend_ps(var_9c8, temp0_662, 8)
                    else
                    label_140359ccf:
                        var_958 = _mm_blend_ps(var_958, temp0_658, 8)
                        
                        if (cond:327_1)
                            var_9c8 = _mm_blend_ps(var_9c8, temp0_662, 8)
                    
                    arg8 = var_938_1
                    zmm12 = var_8f8
                    arg13 = var_888_1
                    arg7 = var_958
                    
                    if (cond:338_1)
                        var_9b8 = _mm_blend_ps(var_9b8, zmm15, 8)
                        zmm15 = var_868_2
                        
                        if (not(cond:356_1))
                        label_140359d09:
                            arg12 = _mm_blend_ps(arg12, zmm0, 8)
                            
                            if (cond:376_1)
                                goto label_140359a0e
                            
                            goto label_140359d16
                    else
                        zmm15 = var_868_2
                        
                        if (cond:357_1)
                            goto label_140359d09
                    
                    if (not(cond:375_1))
                    label_140359a0e:
                        arg10 = var_908_3
                        
                        if (cond:396_1)
                            goto label_140359d2c
                        
                        goto label_140359a1d
                    
                label_140359d16:
                    arg13 = _mm_blend_ps(arg13, zmm2, 8)
                    arg10 = var_908_3
                    
                    if (not(cond:395_1))
                    label_140359d2c:
                        zmm12 = _mm_blend_ps(zmm12, zmm6, 8)
                        arg9 = var_978_2
                        
                        if (cond:412_1)
                            goto label_140359a29
                        
                        goto label_140359d3f
                    
                label_140359a1d:
                    arg9 = var_978_2
                    
                    if (cond:411_1)
                    label_140359d3f:
                        arg8 = __pblendw_xmmdq_memdq_immb(arg8, var_8c8_2, 0xc0)
                        
                        if (rsi_6 == temp0_657)
                            goto label_140359db4
                    else
                    label_140359a29:
                        
                        if (rsi_6 == temp0_657)
                            goto label_140359db4
                    
                    arg9 = _mm_srai_epi32(arg5, 0x1f)
                    zmm6 = var_8d8_3
                    goto label_140359d64
                
                arg4 = var_870
                r10 = arg16
                rdx_4 = var_914
                zmm15 = var_868_2
                rbx_21 = var_878_2
                arg8 = var_938_1
                zmm12 = var_8f8
                arg13 = var_888_1
                arg7 = var_958
                arg12 = var_838_2
                rsi_6 = temp0_415
                arg6 = temp0_650
            label_140359d64:
                zmm14 = _mm_cmpeq_epi32(zmm14, zx.o(0))
                zmm0 = _mm_slli_epi32(var_6b8_2 & zmm14, 0x1f)
                char rbp_6
                bool cond:14_1
                bool cond:27_1
                bool cond:28_1
                bool cond:38_1
                bool cond:39_1
                bool cond:51_1
                bool cond:52_1
                bool cond:65_1
                bool cond:66_1
                bool cond:82_1
                bool cond:83_1
                
                if (_mm_movemask_ps(zmm0) == 0)
                    arg9 = var_978_2
                label_140359db4:
                    zmm14 = var_8e8_2
                    arg11 = var_9c8
                    zmm0 = zmm15
                    zmm2 = var_8b8_2
                    arg6 = zmm12
                    arg5 = arg13
                    zmm15 = var_8c8_2
                    rbp_6 = rsi_6
                    char temp6_1 = rbp_6 & 1
                    cond:14_1 = temp6_1 != 0
                    cond:27_1 = temp6_1 == 0
                    cond:28_1 = temp6_1 != 0
                    cond:38_1 = temp6_1 != 0
                    cond:39_1 = temp6_1 == 0
                    cond:51_1 = temp6_1 == 0
                    cond:52_1 = temp6_1 != 0
                    cond:65_1 = temp6_1 != 0
                    cond:66_1 = temp6_1 == 0
                    cond:82_1 = temp6_1 == 0
                    cond:83_1 = temp6_1 != 0
                    
                    if (temp6_1 != 0)
                        zmm14 = _mm_blend_ps(zmm14, arg7, 1)
                else
                    zmm4 = zmm0
                    char temp0_701 = _mm_movemask_ps(zmm14)
                    char temp3_1 = temp0_701 & 1
                    
                    if (temp3_1 == 0)
                        arg5 = zmm6
                        zmm6 = var_978_2
                        
                        if (temp3_1 != 0)
                            var_9c8 = _mm_blend_ps(var_9c8, arg6, 1)
                    else
                        arg5 = zmm6
                        arg7 = _mm_blend_ps(arg7, zmm6, 1)
                        zmm6 = var_978_2
                        
                        if (temp3_1 != 0)
                            var_9c8 = _mm_blend_ps(var_9c8, arg6, 1)
                    
                    if (temp3_1 == 0)
                        if (temp3_1 != 0)
                            goto label_140358a93
                        
                        goto label_140359d8b
                    
                    var_9b8 = __blendps_xmmdq_memdq_immb(var_9b8, var_968.o, 1)
                    
                    if (temp3_1 != 0)
                    label_140358a93:
                        arg12 = _mm_blend_ps(arg12, arg10, 1)
                        
                        if (temp3_1 == 0)
                            goto label_140359d8b_1
                        
                        goto label_140358aa0
                    
                label_140359d8b:
                    
                    if (temp3_1 != 0)
                    label_140358aa0:
                        arg13 = __blendps_xmmdq_memdq_immb(arg13, var_9a8_2.o, 1)
                        
                        if (temp3_1 != 0)
                        label_140358aaf:
                            zmm12 = __blendps_xmmdq_memdq_immb(zmm12, var_948, 1)
                            
                            if (temp3_1 == 0)
                                goto label_140358993
                            
                            goto label_140358ac6
                    else
                    label_140359d8b_1:
                        
                        if (temp3_1 != 0)
                            goto label_140358aaf
                    
                    bool cond:116_1
                    bool cond:117_1
                    bool cond:136_1
                    bool cond:137_1
                    bool cond:155_1
                    bool cond:156_1
                    bool cond:172_1
                    bool cond:173_1
                    bool cond:186_1
                    bool cond:187_1
                    bool cond:204_1
                    bool cond:205_1
                    
                    if (temp3_1 == 0)
                    label_140358993:
                        char temp16_1 = temp0_701 & 2
                        cond:116_1 = temp16_1 != 0
                        cond:117_1 = temp16_1 == 0
                        cond:136_1 = temp16_1 == 0
                        cond:137_1 = temp16_1 != 0
                        cond:155_1 = temp16_1 != 0
                        cond:156_1 = temp16_1 == 0
                        cond:172_1 = temp16_1 == 0
                        cond:173_1 = temp16_1 != 0
                        cond:186_1 = temp16_1 != 0
                        cond:187_1 = temp16_1 == 0
                        cond:204_1 = temp16_1 == 0
                        cond:205_1 = temp16_1 != 0
                        
                        if (temp16_1 != 0)
                            goto label_140358ad6
                        
                        goto label_14035899d
                    
                label_140358ac6:
                    arg8 = _mm_insert_epi32(arg8, 1, 0)
                    char temp15_1 = temp0_701 & 2
                    cond:116_1 = temp15_1 != 0
                    cond:117_1 = temp15_1 == 0
                    cond:136_1 = temp15_1 == 0
                    cond:137_1 = temp15_1 != 0
                    cond:155_1 = temp15_1 != 0
                    cond:156_1 = temp15_1 == 0
                    cond:172_1 = temp15_1 == 0
                    cond:173_1 = temp15_1 != 0
                    cond:186_1 = temp15_1 != 0
                    cond:187_1 = temp15_1 == 0
                    cond:204_1 = temp15_1 == 0
                    cond:205_1 = temp15_1 != 0
                    
                    if (temp15_1 != 0)
                    label_140358ad6:
                        arg7 = _mm_blend_ps(arg7, arg5, 2)
                        
                        if (cond:117_1)
                            goto label_1403589a3
                        
                        goto label_140358aec
                    
                label_14035899d:
                    
                    if (not(cond:116_1))
                    label_1403589a3:
                        
                        if (cond:137_1)
                            goto label_140358b03
                        
                        goto label_1403589a9
                    
                label_140358aec:
                    var_9c8 = _mm_blend_ps(var_9c8, arg6, 2)
                    
                    if (not(cond:136_1))
                    label_140358b03:
                        var_9b8 = __blendps_xmmdq_memdq_immb(var_9b8, var_968.o, 2)
                        
                        if (cond:156_1)
                            goto label_1403589af
                        
                        goto label_140358b0e
                    
                label_1403589a9:
                    
                    if (not(cond:155_1))
                    label_1403589af:
                        
                        if (cond:173_1)
                            goto label_140358b1b
                        
                        goto label_1403589b5
                    
                label_140358b0e:
                    arg12 = _mm_blend_ps(arg12, arg10, 2)
                    
                    if (not(cond:172_1))
                    label_140358b1b:
                        arg13 = __blendps_xmmdq_memdq_immb(arg13, var_9a8_2.o, 2)
                        
                        if (cond:187_1)
                            goto label_1403589bb
                        
                        goto label_140358b2a
                    
                label_1403589b5:
                    
                    if (not(cond:186_1))
                    label_1403589bb:
                        
                        if (cond:205_1)
                            goto label_140358b41
                        
                        goto label_1403589c1
                    
                label_140358b2a:
                    zmm12 = __blendps_xmmdq_memdq_immb(zmm12, var_948, 2)
                    bool cond:236_1
                    bool cond:237_1
                    bool cond:256_1
                    bool cond:257_1
                    bool cond:276_1
                    bool cond:277_1
                    bool cond:292_1
                    bool cond:293_1
                    bool cond:306_1
                    bool cond:307_1
                    bool cond:324_1
                    bool cond:325_1
                    
                    if (not(cond:204_1))
                    label_140358b41:
                        arg8 = _mm_insert_epi32(arg8, 1, 1)
                        char temp35_1 = temp0_701 & 4
                        cond:236_1 = temp35_1 == 0
                        cond:237_1 = temp35_1 != 0
                        cond:256_1 = temp35_1 != 0
                        cond:257_1 = temp35_1 == 0
                        cond:276_1 = temp35_1 == 0
                        cond:277_1 = temp35_1 != 0
                        cond:292_1 = temp35_1 != 0
                        cond:293_1 = temp35_1 == 0
                        cond:306_1 = temp35_1 == 0
                        cond:307_1 = temp35_1 != 0
                        cond:324_1 = temp35_1 != 0
                        cond:325_1 = temp35_1 == 0
                        
                        if (temp35_1 == 0)
                            goto label_1403589cb
                        
                        goto label_140358b51
                    
                label_1403589c1:
                    char temp34_1 = temp0_701 & 4
                    cond:236_1 = temp34_1 == 0
                    cond:237_1 = temp34_1 != 0
                    cond:256_1 = temp34_1 != 0
                    cond:257_1 = temp34_1 == 0
                    cond:276_1 = temp34_1 == 0
                    cond:277_1 = temp34_1 != 0
                    cond:292_1 = temp34_1 != 0
                    cond:293_1 = temp34_1 == 0
                    cond:306_1 = temp34_1 == 0
                    cond:307_1 = temp34_1 != 0
                    cond:324_1 = temp34_1 != 0
                    cond:325_1 = temp34_1 == 0
                    
                    if (temp34_1 == 0)
                    label_1403589cb:
                        
                        if (cond:237_1)
                            goto label_140358b67
                        
                        goto label_1403589d1
                    
                label_140358b51:
                    arg7 = _mm_blend_ps(arg7, arg5, 4)
                    
                    if (not(cond:236_1))
                    label_140358b67:
                        var_9c8 = _mm_blend_ps(var_9c8, arg6, 4)
                        
                        if (cond:257_1)
                            goto label_1403589d7
                        
                        goto label_140358b7e
                    
                label_1403589d1:
                    
                    if (not(cond:256_1))
                    label_1403589d7:
                        
                        if (cond:277_1)
                            goto label_140358b89
                        
                        goto label_1403589dd
                    
                label_140358b7e:
                    var_9b8 = __blendps_xmmdq_memdq_immb(var_9b8, var_968.o, 4)
                    
                    if (not(cond:276_1))
                    label_140358b89:
                        arg12 = _mm_blend_ps(arg12, arg10, 4)
                        
                        if (cond:293_1)
                            goto label_1403589e3
                        
                        goto label_140358b96
                    
                label_1403589dd:
                    
                    if (cond:292_1)
                    label_140358b96:
                        arg13 = __blendps_xmmdq_memdq_immb(arg13, var_9a8_2.o, 4)
                        
                        if (not(cond:306_1))
                        label_140358ba5:
                            zmm12 = __blendps_xmmdq_memdq_immb(zmm12, var_948, 4)
                            
                            if (cond:325_1)
                                goto label_1403589ef
                            
                            goto label_140358bbc
                    else
                    label_1403589e3:
                        
                        if (cond:307_1)
                            goto label_140358ba5
                    
                    bool cond:354_1
                    bool cond:355_1
                    bool cond:373_1
                    bool cond:374_1
                    bool cond:393_1
                    bool cond:394_1
                    bool cond:409_1
                    bool cond:410_1
                    bool cond:423_1
                    bool cond:424_1
                    bool cond:439_1
                    bool cond:440_1
                    
                    if (not(cond:324_1))
                    label_1403589ef:
                        char temp55_1 = temp0_701 & 8
                        cond:354_1 = temp55_1 != 0
                        cond:355_1 = temp55_1 == 0
                        cond:373_1 = temp55_1 == 0
                        cond:374_1 = temp55_1 != 0
                        cond:393_1 = temp55_1 != 0
                        cond:394_1 = temp55_1 == 0
                        cond:409_1 = temp55_1 == 0
                        cond:410_1 = temp55_1 != 0
                        cond:423_1 = temp55_1 != 0
                        cond:424_1 = temp55_1 == 0
                        cond:439_1 = temp55_1 != 0
                        cond:440_1 = temp55_1 == 0
                        
                        if (temp55_1 != 0)
                            goto label_140358bcc
                        
                        goto label_1403589f9
                    
                label_140358bbc:
                    arg8 = _mm_insert_epi32(arg8, 1, 2)
                    char temp54_1 = temp0_701 & 8
                    cond:354_1 = temp54_1 != 0
                    cond:355_1 = temp54_1 == 0
                    cond:373_1 = temp54_1 == 0
                    cond:374_1 = temp54_1 != 0
                    cond:393_1 = temp54_1 != 0
                    cond:394_1 = temp54_1 == 0
                    cond:409_1 = temp54_1 == 0
                    cond:410_1 = temp54_1 != 0
                    cond:423_1 = temp54_1 != 0
                    cond:424_1 = temp54_1 == 0
                    cond:439_1 = temp54_1 != 0
                    cond:440_1 = temp54_1 == 0
                    
                    if (temp54_1 != 0)
                    label_140358bcc:
                        arg7 = _mm_blend_ps(arg7, arg5, 8)
                        arg11 = var_9c8
                        zmm0 = zmm15
                        
                        if (cond:355_1)
                            goto label_140358a08
                        
                        goto label_140358be1
                    
                label_1403589f9:
                    arg11 = var_9c8
                    zmm0 = zmm15
                    
                    if (not(cond:354_1))
                    label_140358a08:
                        zmm14 = var_8e8_2
                        
                        if (cond:374_1)
                            goto label_140358c04
                        
                        goto label_140358a17
                    
                label_140358be1:
                    arg11 = _mm_blend_ps(arg11, arg6, 8)
                    zmm14 = var_8e8_2
                    
                    if (not(cond:373_1))
                    label_140358c04:
                        var_9b8 = __blendps_xmmdq_memdq_immb(var_9b8, var_968.o, 8)
                        arg6 = zmm12
                        arg5 = arg13
                        zmm15 = var_8c8_2
                        
                        if (cond:394_1)
                            goto label_140358a2f
                        
                        goto label_140358c21
                    
                label_140358a17:
                    arg6 = zmm12
                    arg5 = arg13
                    zmm15 = var_8c8_2
                    
                    if (not(cond:393_1))
                    label_140358a2f:
                        zmm2 = var_8b8_2
                        
                        if (cond:410_1)
                            goto label_140358c36
                        
                        goto label_140358a3d
                    
                label_140358c21:
                    arg12 = _mm_blend_ps(arg12, arg10, 8)
                    zmm2 = var_8b8_2
                    
                    if (not(cond:409_1))
                    label_140358c36:
                        arg5 = __blendps_xmmdq_memdq_immb(arg5, var_9a8_2.o, 8)
                        
                        if (cond:424_1)
                            goto label_140358a43
                        
                        goto label_140358c44
                    
                label_140358a3d:
                    
                    if (cond:423_1)
                    label_140358c44:
                        arg6 = __blendps_xmmdq_memdq_immb(arg6, var_948, 8)
                        
                        if (cond:439_1)
                            arg8 = _mm_insert_epi32(arg8, 1, 3)
                    else
                    label_140358a43:
                        
                        if (not(cond:440_1))
                            arg8 = _mm_insert_epi32(arg8, 1, 3)
                    
                    _mm_movemask_ps(_mm_srai_epi32(zmm4, 0x1f) | arg9)
                    arg9 = zmm6
                    rbp_6 = rsi_6
                    char temp70_1 = rbp_6 & 1
                    cond:14_1 = temp70_1 != 0
                    cond:27_1 = temp70_1 == 0
                    cond:28_1 = temp70_1 != 0
                    cond:38_1 = temp70_1 != 0
                    cond:39_1 = temp70_1 == 0
                    cond:51_1 = temp70_1 == 0
                    cond:52_1 = temp70_1 != 0
                    cond:65_1 = temp70_1 != 0
                    cond:66_1 = temp70_1 == 0
                    cond:82_1 = temp70_1 == 0
                    cond:83_1 = temp70_1 != 0
                    
                    if (temp70_1 != 0)
                        zmm14 = _mm_blend_ps(zmm14, arg7, 1)
                
                zmm12 = var_928_2
                zmm6 = zmm0
                
                if (not(cond:14_1))
                    if (cond:28_1)
                        goto label_1403587cd
                    
                    goto label_140359e09
                
                zmm6 = _mm_blend_ps(zmm6, arg11, 1)
                
                if (not(cond:27_1))
                label_1403587cd:
                    zmm12 = __blendps_xmmdq_memdq_immb(zmm12, var_9b8, 1)
                    
                    if (cond:39_1)
                        goto label_140359e0f
                    
                    goto label_1403587dc
                
            label_140359e09:
                
                if (not(cond:38_1))
                label_140359e0f:
                    
                    if (cond:52_1)
                        goto label_1403587e9
                    
                    goto label_140359e15
                
            label_1403587dc:
                arg9 = _mm_blend_ps(arg9, arg12, 1)
                
                if (not(cond:51_1))
                label_1403587e9:
                    zmm2 = _mm_blend_ps(zmm2, arg5, 1)
                    
                    if (cond:66_1)
                        goto label_140359e1b
                    
                    goto label_140358800
                
            label_140359e15:
                
                if (not(cond:65_1))
                label_140359e1b:
                    
                    if (cond:83_1)
                        goto label_14035880b
                    
                    goto label_140359e21
                
            label_140358800:
                var_998_2 = _mm_blend_ps(var_998_2, arg6, 1)
                bool cond:114_1
                bool cond:115_1
                bool cond:134_1
                bool cond:135_1
                bool cond:153_1
                bool cond:154_1
                bool cond:170_1
                bool cond:171_1
                bool cond:184_1
                bool cond:185_1
                bool cond:202_1
                bool cond:203_1
                
                if (not(cond:82_1))
                label_14035880b:
                    zmm15 = _mm_blend_epi16(zmm15, arg8, 3)
                    char temp20_1 = rbp_6 & 2
                    cond:114_1 = temp20_1 == 0
                    cond:115_1 = temp20_1 != 0
                    cond:134_1 = temp20_1 != 0
                    cond:135_1 = temp20_1 == 0
                    cond:153_1 = temp20_1 == 0
                    cond:154_1 = temp20_1 != 0
                    cond:170_1 = temp20_1 != 0
                    cond:171_1 = temp20_1 == 0
                    cond:184_1 = temp20_1 == 0
                    cond:185_1 = temp20_1 != 0
                    cond:202_1 = temp20_1 != 0
                    cond:203_1 = temp20_1 == 0
                    
                    if (temp20_1 == 0)
                        goto label_140359e2b
                    
                    goto label_14035881c
                
            label_140359e21:
                char temp19_1 = rbp_6 & 2
                cond:114_1 = temp19_1 == 0
                cond:115_1 = temp19_1 != 0
                cond:134_1 = temp19_1 != 0
                cond:135_1 = temp19_1 == 0
                cond:153_1 = temp19_1 == 0
                cond:154_1 = temp19_1 != 0
                cond:170_1 = temp19_1 != 0
                cond:171_1 = temp19_1 == 0
                cond:184_1 = temp19_1 == 0
                cond:185_1 = temp19_1 != 0
                cond:202_1 = temp19_1 != 0
                cond:203_1 = temp19_1 == 0
                
                if (temp19_1 == 0)
                label_140359e2b:
                    
                    if (cond:115_1)
                        goto label_140358829
                    
                    goto label_140359e31
                
            label_14035881c:
                zmm14 = _mm_blend_ps(zmm14, arg7, 2)
                
                if (not(cond:114_1))
                label_140358829:
                    zmm6 = _mm_blend_ps(zmm6, arg11, 2)
                    
                    if (cond:135_1)
                        goto label_140359e37
                    
                    goto label_140358836
                
            label_140359e31:
                
                if (not(cond:134_1))
                label_140359e37:
                    
                    if (cond:154_1)
                        goto label_140358845
                    
                    goto label_140359e3d
                
            label_140358836:
                zmm12 = __blendps_xmmdq_memdq_immb(zmm12, var_9b8, 2)
                
                if (not(cond:153_1))
                label_140358845:
                    arg9 = _mm_blend_ps(arg9, arg12, 2)
                    
                    if (cond:171_1)
                        goto label_140359e43
                    
                    goto label_140358852
                
            label_140359e3d:
                
                if (cond:170_1)
                label_140358852:
                    zmm2 = _mm_blend_ps(zmm2, arg5, 2)
                    
                    if (not(cond:184_1))
                    label_140358869:
                        var_998_2 = _mm_blend_ps(var_998_2, arg6, 2)
                        
                        if (cond:203_1)
                            goto label_140359e4f
                        
                        goto label_140358874
                else
                label_140359e43:
                    
                    if (cond:185_1)
                        goto label_140358869
                
                bool cond:234_1
                bool cond:235_1
                bool cond:254_1
                bool cond:255_1
                bool cond:274_1
                bool cond:275_1
                bool cond:290_1
                bool cond:291_1
                bool cond:304_1
                bool cond:305_1
                bool cond:322_1
                bool cond:323_1
                
                if (not(cond:202_1))
                label_140359e4f:
                    char temp39_1 = rbp_6 & 4
                    cond:234_1 = temp39_1 != 0
                    cond:235_1 = temp39_1 == 0
                    cond:254_1 = temp39_1 == 0
                    cond:255_1 = temp39_1 != 0
                    cond:274_1 = temp39_1 != 0
                    cond:275_1 = temp39_1 == 0
                    cond:290_1 = temp39_1 == 0
                    cond:291_1 = temp39_1 != 0
                    cond:304_1 = temp39_1 != 0
                    cond:305_1 = temp39_1 == 0
                    cond:322_1 = temp39_1 == 0
                    cond:323_1 = temp39_1 != 0
                    
                    if (temp39_1 != 0)
                        goto label_140358885
                    
                    goto label_140359e59
                
            label_140358874:
                zmm15 = _mm_blend_epi16(zmm15, arg8, 0xc)
                char temp38_1 = rbp_6 & 4
                cond:234_1 = temp38_1 != 0
                cond:235_1 = temp38_1 == 0
                cond:254_1 = temp38_1 == 0
                cond:255_1 = temp38_1 != 0
                cond:274_1 = temp38_1 != 0
                cond:275_1 = temp38_1 == 0
                cond:290_1 = temp38_1 == 0
                cond:291_1 = temp38_1 != 0
                cond:304_1 = temp38_1 != 0
                cond:305_1 = temp38_1 == 0
                cond:322_1 = temp38_1 == 0
                cond:323_1 = temp38_1 != 0
                
                if (temp38_1 != 0)
                label_140358885:
                    zmm14 = _mm_blend_ps(zmm14, arg7, 4)
                    
                    if (cond:235_1)
                        goto label_140359e5f
                    
                    goto label_140358892
                
            label_140359e59:
                
                if (not(cond:234_1))
                label_140359e5f:
                    
                    if (cond:255_1)
                        goto label_14035889f
                    
                    goto label_140359e65
                
            label_140358892:
                zmm6 = _mm_blend_ps(zmm6, arg11, 4)
                
                if (not(cond:254_1))
                label_14035889f:
                    zmm12 = __blendps_xmmdq_memdq_immb(zmm12, var_9b8, 4)
                    
                    if (cond:275_1)
                        goto label_140359e6b
                    
                    goto label_1403588ae
                
            label_140359e65:
                
                if (not(cond:274_1))
                label_140359e6b:
                    
                    if (cond:291_1)
                        goto label_1403588bb
                    
                    goto label_140359e71
                
            label_1403588ae:
                arg9 = _mm_blend_ps(arg9, arg12, 4)
                
                if (not(cond:290_1))
                label_1403588bb:
                    zmm2 = _mm_blend_ps(zmm2, arg5, 4)
                    
                    if (cond:305_1)
                        goto label_140359e77
                    
                    goto label_1403588d2
                
            label_140359e71:
                
                if (not(cond:304_1))
                label_140359e77:
                    
                    if (cond:323_1)
                        goto label_1403588dd
                    
                    goto label_140359e7d
                
            label_1403588d2:
                var_998_2 = _mm_blend_ps(var_998_2, arg6, 4)
                bool cond:352_1
                bool cond:353_1
                bool cond:371_1
                bool cond:372_1
                bool cond:391_1
                bool cond:392_1
                bool cond:407_1
                bool cond:408_1
                bool cond:421_1
                bool cond:422_1
                bool cond:437_1
                bool cond:438_1
                
                if (not(cond:322_1))
                label_1403588dd:
                    zmm15 = _mm_blend_epi16(zmm15, arg8, 0x30)
                    char temp59_1 = rbp_6 & 8
                    cond:352_1 = temp59_1 == 0
                    cond:353_1 = temp59_1 != 0
                    cond:371_1 = temp59_1 != 0
                    cond:372_1 = temp59_1 == 0
                    cond:391_1 = temp59_1 == 0
                    cond:392_1 = temp59_1 != 0
                    cond:407_1 = temp59_1 != 0
                    cond:408_1 = temp59_1 == 0
                    cond:421_1 = temp59_1 == 0
                    cond:422_1 = temp59_1 != 0
                    cond:437_1 = temp59_1 != 0
                    cond:438_1 = temp59_1 == 0
                    
                    if (temp59_1 == 0)
                        goto label_140359e87
                    
                    goto label_1403588ee
                
            label_140359e7d:
                char temp58_1 = rbp_6 & 8
                cond:352_1 = temp58_1 == 0
                cond:353_1 = temp58_1 != 0
                cond:371_1 = temp58_1 != 0
                cond:372_1 = temp58_1 == 0
                cond:391_1 = temp58_1 == 0
                cond:392_1 = temp58_1 != 0
                cond:407_1 = temp58_1 != 0
                cond:408_1 = temp58_1 == 0
                cond:421_1 = temp58_1 == 0
                cond:422_1 = temp58_1 != 0
                cond:437_1 = temp58_1 != 0
                cond:438_1 = temp58_1 == 0
                
                if (temp58_1 == 0)
                label_140359e87:
                    
                    if (cond:353_1)
                        goto label_1403588fb
                    
                    goto label_140359e8d
                
            label_1403588ee:
                zmm14 = _mm_blend_ps(zmm14, arg7, 8)
                
                if (not(cond:352_1))
                label_1403588fb:
                    zmm6 = _mm_blend_ps(zmm6, arg11, 8)
                    
                    if (cond:372_1)
                        goto label_140359e93
                    
                    goto label_140358908
                
            label_140359e8d:
                
                if (not(cond:371_1))
                label_140359e93:
                    
                    if (cond:392_1)
                        goto label_140358917
                    
                    goto label_140359e99
                
            label_140358908:
                zmm12 = __blendps_xmmdq_memdq_immb(zmm12, var_9b8, 8)
                
                if (not(cond:391_1))
                label_140358917:
                    arg9 = _mm_blend_ps(arg9, arg12, 8)
                    
                    if (cond:408_1)
                        goto label_140359e9f
                    
                    goto label_140358924
                
            label_140359e99:
                
                if (not(cond:407_1))
                label_140359e9f:
                    
                    if (cond:422_1)
                        goto label_14035893b
                    
                    goto label_140359ea5
                
            label_140358924:
                zmm2 = _mm_blend_ps(zmm2, arg5, 8)
                
                if (cond:421_1)
                label_140359ea5:
                    
                    if (not(cond:437_1))
                    label_140359eab:
                        rbx_10 = zx.q(rbx_21 + 4)
                        
                        if (rbx_10.d s>= rdx_4)
                            break
                        
                        continue
                else
                label_14035893b:
                    var_998_2 = _mm_blend_ps(var_998_2, arg6, 8)
                    
                    if (cond:438_1)
                        goto label_140359eab
                
                zmm15 = _mm_blend_epi16(zmm15, arg8, 0xc0)
                rbx_10 = zx.q(rbx_21 + 4)
                
                if (rbx_10.d s>= rdx_4)
                    break
        
        if (rbx_10.d s>= r10)
            goto label_140359fe1
        
        goto label_140359ec8
    
    zmm15 = zx.o(0)
    var_998_2 = zx.o(0)
    zmm2 = zx.o(0)
    arg9 = zx.o(0)
    zmm12 = zx.o(0)
    zmm6 = zx.o(0)
    zmm14 = zx.o(0)
    int64_t* rdi_10
    float var_698_1
    
    if (0 s< r10)
    label_140359ec8:
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbx_10.d), 0), data_142e11d00)
        int64_t r11_4 = sx.q(rbx_10.d << 2)
        arg12 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(r10), 0), zmm0)
        uint32_t temp0_708 = _mm_movemask_ps(arg12)
        uint64_t r10_6 = zx.q(temp0_708) & 0xfffffff9
        float var_8e8_3[0x4] = zmm14
        
        if (r10_6 != 9)
            if ((temp0_708.b & 1) != 0)
                var_7b8 = *(arg2 + r11_4)
            
            if ((temp0_708.b & 2) == 0)
                if ((temp0_708.b & 4) != 0)
                    goto label_14035bebb
                
                goto label_14035a45a
            
            int32_t var_7b4_1 = *(arg2 + r11_4 + 4)
            int32_t var_7ac_1
            
            if ((temp0_708.b & 4) == 0)
            label_14035a45a:
                
                if ((temp0_708.b & 8) != 0)
                    var_7ac_1 = *(arg2 + r11_4 + 0xc)
            else
            label_14035bebb:
                int32_t var_7b0_1 = *(arg2 + r11_4 + 8)
                
                if ((temp0_708.b & 8) != 0)
                    var_7ac_1 = *(arg2 + r11_4 + 0xc)
            arg10 = var_7b8.o
        else
            arg10 = *(arg2 + r11_4)
        
        zmm0 = __pmulld_xmmdq_memdq(zmm0, data_143442c00) & arg12
        int64_t rcx_52 = sx.q(zmm0[0])
        void* rdx_44 = &(*arg4)[rcx_52]
        arg11 = (*arg4)[rcx_52]
        int64_t rcx_54 = sx.q(_mm_extract_epi32(zmm0, 1))
        void* rsi_7 = &(*arg4)[rcx_54]
        int64_t rax_88 = sx.q(_mm_extract_epi32(zmm0, 2))
        void* rbp_15 = &(*arg4)[rax_88]
        int64_t rbx_24 = sx.q(_mm_extract_epi32(zmm0, 3))
        void* rdi_12 = &(*arg4)[rbx_24]
        arg11 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg11, (*arg4)[rcx_54], 0x10), 
                (*arg4)[rax_88], 0x20), 
            (*arg4)[rbx_24], 0x30)
        zmm0 = data_142fc95e0 & arg12
        arg13 = *(zx.q(zmm0[0]) + rdx_44)
        int32_t* rax_90 = zx.q(_mm_extract_epi32(zmm0, 1))
        int32_t* rcx_55 = zx.q(_mm_extract_epi32(zmm0, 2))
        int32_t* rbx_25 = zx.q(_mm_extract_epi32(zmm0, 3))
        float temp0_759[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg13, *(rax_90 + rsi_7), 0x10), 
                *(rcx_55 + rbp_15), 0x20), 
            *(rbx_25 + rdi_12), 0x30)
        zmm0 = data_142fc95f0 & arg12
        zmm14 = *(zx.q(zmm0[0]) + rdx_44)
        int32_t* rax_92 = zx.q(_mm_extract_epi32(zmm0, 1))
        int32_t* rcx_56 = zx.q(_mm_extract_epi32(zmm0, 2))
        int32_t* rbx_26 = zx.q(_mm_extract_epi32(zmm0, 3))
        float temp0_765[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm14, *(rax_92 + rsi_7), 0x10), 
                *(rcx_56 + rbp_15), 0x20), 
            *(rbx_26 + rdi_12), 0x30)
        zmm0 = data_143442650 & arg12
        arg6 = *(zx.q(zmm0[0]) + rdx_44)
        int32_t* rax_94 = zx.q(_mm_extract_epi32(zmm0, 1))
        int32_t* rcx_57 = zx.q(_mm_extract_epi32(zmm0, 2))
        int32_t* rbx_27 = zx.q(_mm_extract_epi32(zmm0, 3))
        float temp0_771[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg6, *(rax_94 + rsi_7), 0x10), 
                *(rcx_57 + rbp_15), 0x20), 
            *(rbx_27 + rdi_12), 0x30)
        zmm0 = data_143442660 & arg12
        arg8 = *(zx.q(zmm0[0]) + rdx_44)
        int32_t* rax_96 = zx.q(_mm_extract_epi32(zmm0, 1))
        int32_t* rcx_58 = zx.q(_mm_extract_epi32(zmm0, 2))
        int32_t* rbx_28 = zx.q(_mm_extract_epi32(zmm0, 3))
        float temp0_777[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg8, *(rax_96 + rsi_7), 0x10), 
                *(rcx_58 + rbp_15), 0x20), 
            *(rbx_28 + rdi_12), 0x30)
        zmm0 = data_143442670 & arg12
        zmm4 = *(zx.q(zmm0[0]) + rdx_44)
        int32_t* rax_98 = zx.q(_mm_extract_epi32(zmm0, 1))
        int32_t* rcx_59 = zx.q(_mm_extract_epi32(zmm0, 2))
        int32_t* rbx_29 = zx.q(_mm_extract_epi32(zmm0, 3))
        float temp0_783[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm4, *(rax_98 + rsi_7), 0x10), 
                *(rcx_59 + rbp_15), 0x20), 
            *(rbx_29 + rdi_12), 0x30)
        zmm0 = data_143442700 & arg12
        uint64_t rax_99 = zx.q(zmm0[0])
        uint8_t* rcx_60 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint8_t* rbx_30 = zx.q(_mm_extract_epi32(zmm0, 2))
        uint32_t rax_100 = zx.d(*(rax_99 + rdx_44))
        uint8_t* rdx_45 = zx.q(_mm_extract_epi32(zmm0, 3))
        zmm0 = __pinsrb_xmmdq_memb_immb(
            __pinsrb_xmmdq_memb_immb(__pinsrb_xmmdq_memb_immb(zx.o(rax_100), *(rcx_60 + rsi_7), 4), 
                *(rbx_30 + rbp_15), 8), 
            *(rdx_45 + rdi_12), 0xc)
        int32_t var_8c8_3[0x4] = zmm15
        float var_8b8_3[0x4] = zmm2
        
        if (r10_6 != 9)
            if ((temp0_708.b & 1) == 0)
                if ((temp0_708.b & 2) != 0)
                    goto label_14035bf38
                
                goto label_14035a8fa
            
            var_7b8 = *(arg1 + r11_4)
            
            if ((temp0_708.b & 2) != 0)
            label_14035bf38:
                int32_t var_7b4_3 = *(arg1 + r11_4 + 4)
                
                if ((temp0_708.b & 4) == 0)
                    goto label_14035a904
                
                goto label_14035bf56
            
        label_14035a8fa:
            int32_t var_7ac_3
            
            if ((temp0_708.b & 4) != 0)
            label_14035bf56:
                int32_t var_7b0_3 = *(arg1 + r11_4 + 8)
                
                if ((temp0_708.b & 8) != 0)
                    var_7ac_3 = *(arg1 + r11_4 + 0xc)
            else
            label_14035a904:
                
                if ((temp0_708.b & 8) != 0)
                    var_7ac_3 = *(arg1 + r11_4 + 0xc)
            arg5 = var_7b8.o
        else
            arg5 = *(arg1 + r11_4)
        
        arg7 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(arg7, arg7), arg5)
            & not.o(_mm_cmpeq_epi32(zmm0 & data_142ed6810, zx.o(0)) & not.o(arg12))
        uint32_t temp0_836 = _mm_movemask_ps(arg7)
        
        if (temp0_836.b == 0)
            rdi_10 = arg15
            zmm15 = var_8c8_3
            zmm2 = var_8b8_3
            zmm14 = var_8e8_3
            i_2 = zx.q(i_6)
            
            if ((i_2.b & 1) != 0)
                var_698_1 = zmm14[0]
        else
            var_9c8 = temp0_765
            float var_9b8_2[0x4] = temp0_759
            var_898.o = temp0_771
            var_968.o = arg11
            var_8f8[0] = temp0_836
            float var_868_3[0x4] = zmm6
            float var_928_4[0x4] = zmm12
            float var_978_4[0x4] = arg9
            uint32_t temp0_837[0x4] = _mm_slli_epi32(arg10, 6)
            int32_t var_938_2[0x4] = arg7
            zmm6 = _mm_srai_epi32(_mm_slli_epi32(arg7, 0x1f), 0x1f)
            arg10 = temp0_837 & zmm6
            int64_t rax_107 = sx.q(arg10[0])
            void* rdx_53 = arg3 + rax_107
            zmm12 = *(arg3 + rax_107)
            int64_t r9_4 = sx.q(_mm_extract_epi32(arg10, 1))
            void* rbp_18 = arg3 + r9_4
            int64_t rcx_82 = sx.q(_mm_extract_epi32(arg10, 2))
            void* rbx_38 = arg3 + rcx_82
            int64_t rax_109 = sx.q(_mm_extract_epi32(arg10, 3))
            void* rdi_16 = arg3 + rax_109
            float temp0_845[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm12, *(arg3 + r9_4), 0x10), 
                    *(arg3 + rcx_82), 0x20), 
                *(arg3 + rax_109), 0x30)
            zmm0 = data_142fc95e0 & zmm6
            zmm15 = *(zx.q(zmm0[0]) + rdx_53)
            int32_t* rax_111 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_83 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_11 = zx.q(_mm_extract_epi32(zmm0, 3))
            zmm15 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm15, *(rax_111 + rbp_18), 0x10), 
                    *(rcx_83 + rbx_38), 0x20), 
                *(rsi_11 + rdi_16), 0x30)
            zmm0 = data_142fc95f0 & zmm6
            zmm14 = *(zx.q(zmm0[0]) + rdx_53)
            int32_t* rax_113 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_84 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_12 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_857[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm14, *(rax_113 + rbp_18), 0x10), 
                    *(rcx_84 + rbx_38), 0x20), 
                *(rsi_12 + rdi_16), 0x30)
            zmm0 = data_143442650 & zmm6
            arg6 = *(zx.q(zmm0[0]) + rdx_53)
            int32_t* rax_115 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_85 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_13 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_863[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg6, *(rax_115 + rbp_18), 0x10), 
                    *(rcx_85 + rbx_38), 0x20), 
                *(rsi_13 + rdi_16), 0x30)
            zmm0 = data_143442660 & zmm6
            arg7 = *(zx.q(zmm0[0]) + rdx_53)
            int32_t* rax_117 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_86 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_14 = zx.q(_mm_extract_epi32(zmm0, 3))
            arg7 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg7, *(rax_117 + rbp_18), 0x10), 
                    *(rcx_86 + rbx_38), 0x20), 
                *(rsi_14 + rdi_16), 0x30)
            zmm0 = data_143442670 & zmm6
            arg5 = *(zx.q(zmm0[0]) + rdx_53)
            int32_t* rax_119 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_87 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_15 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_875[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg5, *(rax_119 + rbp_18), 0x10), 
                    *(rcx_87 + rbx_38), 0x20), 
                *(rsi_15 + rdi_16), 0x30)
            zmm0 = data_143442700 & zmm6
            zmm2 = *(zx.q(zmm0[0]) + rdx_53)
            int32_t* rax_121 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_88 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_16 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_881[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rax_121 + rbp_18), 0x10), 
                    *(rcx_88 + rbx_38), 0x20), 
                *(rsi_16 + rdi_16), 0x30)
            zmm0 = data_1434b2e20 & zmm6
            arg9 = *(zx.q(zmm0[0]) + rdx_53)
            int32_t* rax_123 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_89 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_17 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_887[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg9, *(rax_123 + rbp_18), 0x10), 
                    *(rcx_89 + rbx_38), 0x20), 
                *(rsi_17 + rdi_16), 0x30)
            zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[0].o & zmm6
            arg10 = *(zx.q(zmm0[0]) + rdx_53)
            int32_t* rax_125 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_90 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_18 = zx.q(_mm_extract_epi32(zmm0, 3))
            arg10 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg10, *(rax_125 + rbp_18), 0x10), 
                    *(rcx_90 + rbx_38), 0x20), 
                *(rsi_18 + rdi_16), 0x30)
            zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[4].o & zmm6
            arg11 = *(zx.q(zmm0[0]) + rdx_53)
            int32_t* rax_127 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_91 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_19 = zx.q(_mm_extract_epi32(zmm0, 3))
            arg11 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg11, *(rax_127 + rbp_18), 0x10), 
                    *(rcx_91 + rbx_38), 0x20), 
                *(rsi_19 + rdi_16), 0x30)
            zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[8].o & zmm6
            arg8 = *(zx.q(zmm0[0]) + rdx_53)
            int32_t* rax_129 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_92 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_20 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_905[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg8, *(rax_129 + rbp_18), 0x10), 
                    *(rcx_92 + rbx_38), 0x20), 
                *(rsi_20 + rdi_16), 0x30)
            zmm4 = (*U"    $$$$((((,,,,000044448888<<<<")[0xc].o & zmm6
            zmm0 = *(zx.q(zmm4[0]) + rdx_53)
            int32_t* rax_131 = zx.q(_mm_extract_epi32(zmm4, 1))
            int32_t* rcx_93 = zx.q(_mm_extract_epi32(zmm4, 2))
            int32_t* rsi_21 = zx.q(_mm_extract_epi32(zmm4, 3))
            float temp0_911[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm0, *(rax_131 + rbp_18), 0x10), 
                    *(rcx_93 + rbx_38), 0x20), 
                *(rsi_21 + rdi_16), 0x30)
            arg12 = (*U"    $$$$((((,,,,000044448888<<<<")[0x10].o & zmm6
            zmm4 = *(zx.q(arg12[0]) + rdx_53)
            int32_t* rax_133 = zx.q(_mm_extract_epi32(arg12, 1))
            int32_t* rcx_94 = zx.q(_mm_extract_epi32(arg12, 2))
            int32_t* rsi_22 = zx.q(_mm_extract_epi32(arg12, 3))
            float temp0_917[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm4, *(rax_133 + rbp_18), 0x10), 
                    *(rcx_94 + rbx_38), 0x20), 
                *(rsi_22 + rdi_16), 0x30)
            arg12 = (*U"    $$$$((((,,,,000044448888<<<<")[0x14].o & zmm6
            int32_t* rax_134 = zx.q(_mm_extract_epi32(arg12, 1))
            var_958[0].q = zx.q(_mm_extract_epi32(arg12, 2))
            float (* rax_136)[0x4] = zx.q(arg12[0])
            var_948[0].q = zx.q(_mm_extract_epi32(arg12, 3))
            arg12 = (*U"    $$$$((((,,,,000044448888<<<<")[0x18].o & zmm6
            float (* r14_8)[0x4] = zx.q(arg12[0])
            int32_t* r12_4 = zx.q(_mm_extract_epi32(arg12, 1))
            int32_t* r13_6 = zx.q(_mm_extract_epi32(arg12, 2))
            int32_t* r11_6 = zx.q(_mm_extract_epi32(arg12, 3))
            arg12 = *(rax_136 + rdx_53)
            zmm6 &= (*U"    $$$$((((,,,,000044448888<<<<")[0x1c].o
            float (* r9_5)[0x4] = zx.q(zmm6[0])
            int32_t* rcx_96 = zx.q(_mm_extract_epi32(zmm6, 1))
            int32_t* r15_6 = zx.q(_mm_extract_epi32(zmm6, 2))
            int32_t* rax_137 = zx.q(_mm_extract_epi32(zmm6, 3))
            float var_4e8[0x4] = temp0_845
            int32_t var_4d8[0x4] = zmm15
            float var_4c8[0x4] = temp0_857
            float var_4b8[0x4] = temp0_863
            int32_t var_4a8_1[0x4] = arg7
            float var_498_1[0x4] = temp0_875
            float var_488_1[0x4] = temp0_881
            float var_478_1[0x4] = temp0_887
            uint32_t var_468_1[0x4] = arg10
            int32_t var_458_1[0x4] = arg11
            float var_448_1[0x4] = temp0_905
            float var_438_1[0x4] = temp0_911
            float var_428_1[0x4] = temp0_917
            float var_418_1[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg12, *(rax_134 + rbp_18), 0x10), 
                    *(var_958[0].q + rbx_38), 0x20), 
                *(var_948[0].q + rdi_16), 0x30)
            float var_408_1[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r14_8 + rdx_53), *(r12_4 + rbp_18), 0x10), 
                    *(r13_6 + rbx_38), 0x20), 
                *(r11_6 + rdi_16), 0x30)
            float var_3f8_1[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r9_5 + rdx_53), *(rcx_96 + rbp_18), 0x10), 
                    *(r15_6 + rbx_38), 0x20), 
                *(rax_137 + rdi_16), 0x30)
            int32_t* var_9a8_3
            var_9a8_3.o = (*arg14)[9]
            arg10 = (*arg14)[0xd]
            arg11 = (*arg14)[2]
            zmm14 = (*arg14)[3]
            arg12 = (*arg14)[6]
            arg13 = (*arg14)[0xa]
            arg8 = (*arg14)[0xe]
            zmm0 = (*arg14)[7]
            arg5 = (*arg14)[0xb]
            
            for (int64_t i_1 = 0; i_1 != 0x100; i_1 += 0x40)
                zmm6 = *arg14
                zmm12 = arg14[1][0]
                float temp0_936[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0)
                zmm15 = *(&var_4e8 + i_1)
                arg7 = *(&var_4d8 + i_1)
                arg6 = *(&var_4c8 + i_1)
                zmm2 = *(&var_4b8 + i_1)
                float temp0_938[0x4] = _mm_add_ps(_mm_mul_ps(temp0_936, zmm15), zx.o(0))
                float temp0_941[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), arg7), temp0_938)
                zmm6 = arg14[2][0]
                float temp0_944[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), arg6), temp0_941)
                zmm4 = arg14[3][0]
                *(&var_7b8 + i_1) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm2), temp0_944)
                zmm4 = (*arg14)[1]
                zmm6 = (*arg14)[5]
                float temp0_950[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), zmm15), zx.o(0))
                float temp0_953[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), arg7), temp0_950)
                zmm4 = var_9a8_3.o
                float temp0_956[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm4, zmm4, 0), arg6), temp0_953)
                *(&var_7a8 + i_1) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg10, arg10, 0), zmm2), temp0_956)
                float temp0_962[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg11, arg11, 0), zmm15), zx.o(0))
                float temp0_965[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg12, arg12, 0), arg7), temp0_962)
                float temp0_968[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg13, arg13, 0), arg6), temp0_965)
                *(&var_798 + i_1) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg8, arg8, 0), zmm2), temp0_968)
                float temp0_974[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm15), zx.o(0))
                float temp0_977[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), arg7), temp0_974)
                float temp0_980[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), arg6), temp0_977)
                arg6 = (*arg14)[0xf]
                *(&var_788 + i_1) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg6, arg6, 0), zmm2), temp0_980)
            
            zmm15 = var_7b8.o
            arg5 = var_7a8
            int32_t var_948_2[0x4] = arg5
            zmm2 = var_798
            int32_t var_958_2[0x4] = zmm2
            arg11 = var_898.o
            float temp0_984[0x4] = _mm_add_ps(var_968.o, arg11)
            zmm0 = data_142d3f640
            float temp0_985[0x4] = _mm_mul_ps(temp0_984, zmm0)
            float temp0_986[0x4] = _mm_mul_ps(temp0_985, zmm15)
            arg7 = _mm_mul_ps(temp0_985, arg5)
            float temp0_989[0x4] = _mm_mul_ps(_mm_add_ps(var_9b8_2, temp0_777), zmm0)
            arg12 = zmm0
            float temp0_991[0x4] = _mm_add_ps(_mm_mul_ps(temp0_989, var_778), temp0_986)
            float temp0_993[0x4] = _mm_add_ps(_mm_mul_ps(temp0_989, var_768), arg7)
            arg7 = _mm_mul_ps(temp0_985, zmm2)
            var_9a8_3.o = var_758
            arg10 = _mm_add_ps(_mm_mul_ps(temp0_989, var_758), arg7)
            zmm0 = var_788
            int32_t var_8a8_4[0x4] = zmm0
            float temp0_997[0x4] = _mm_mul_ps(temp0_985, zmm0)
            zmm0 = var_748
            int32_t var_8d8_4[0x4] = zmm0
            float temp0_999[0x4] = _mm_add_ps(_mm_mul_ps(temp0_989, zmm0), temp0_997)
            float temp0_1001[0x4] = _mm_mul_ps(_mm_add_ps(var_9c8, temp0_783), arg12)
            float temp0_1003[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1001, var_738), temp0_991)
            float temp0_1005[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1001, var_728), temp0_993)
            float temp0_1007[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1001, var_718), arg10)
            arg10 = var_708
            float temp0_1008[0x4] = _mm_mul_ps(temp0_1001, arg10)
            zmm12 = __addps_xmmps_memps(temp0_1003, var_6f8)
            float temp0_1010[0x4] = __addps_xmmps_memps(temp0_1005, var_6e8)
            float temp0_1011[0x4] = __addps_xmmps_memps(temp0_1007, var_6d8)
            float temp0_1013[0x4] = __addps_xmmps_memps(_mm_add_ps(temp0_1008, temp0_999), var_6c8)
            var_7b8.o = zmm15
            var_7a8 = var_948_2
            var_798 = var_958_2
            var_788 = var_8a8_4
            float var_5d8_3[0x4] = var_778
            float var_5c8_3[0x4] = var_768
            float var_5b8_3[0x4] = var_9a8_3.o
            int32_t var_5a8_3[0x4] = var_8d8_4
            float var_618_3[0x4] = var_738
            float var_608_3[0x4] = var_728
            float var_5f8_3[0x4] = var_718
            uint32_t var_5e8_3[0x4] = arg10
            float temp0_1014[0x4] = __subps_xmmps_memps(temp0_777, var_9b8_2)
            float temp0_1015[0x4] = __subps_xmmps_memps(temp0_783, var_9c8)
            arg11 = __subps_xmmps_memps(arg11, var_968.o)
            zmm0 = data_142d3f640
            float temp0_1017[0x4] = _mm_mul_ps(temp0_1014, zmm0)
            arg11 = _mm_mul_ps(arg11, zmm0)
            float temp0_1019[0x4] = _mm_mul_ps(temp0_1015, zmm0)
            float var_528_1[0x4] = zmm12
            float var_518_1[0x4] = temp0_1010
            float var_508_1[0x4] = temp0_1011
            float var_4f8_1[0x4] = temp0_1013
            zmm15 = _mm_mul_ps(zmm15, arg11)
            float temp0_1021[0x4] = _mm_mul_ps(var_948_2, arg11)
            arg11 = __mulps_xmmps_memps(arg11, var_958_2)
            float temp0_1023[0x4] = _mm_mul_ps(var_778, temp0_1017)
            float temp0_1024[0x4] = _mm_mul_ps(var_768, temp0_1017)
            float temp0_1025[0x4] = __mulps_xmmps_memps(temp0_1017, var_9a8_3.o)
            arg8 = data_142d3f770
            zmm15 = _mm_and_ps(zmm15, arg8)
            float temp0_1028[0x4] = _mm_add_ps(_mm_and_ps(temp0_1023, arg8), zmm15)
            zmm0 = _mm_and_ps(temp0_1021, arg8)
            float temp0_1031[0x4] = _mm_add_ps(_mm_and_ps(temp0_1024, arg8), zmm0)
            arg11 = _mm_and_ps(arg11, arg8)
            float temp0_1034[0x4] = _mm_add_ps(_mm_and_ps(temp0_1025, arg8), arg11)
            float temp0_1035[0x4] = _mm_mul_ps(var_738, temp0_1019)
            float temp0_1036[0x4] = _mm_mul_ps(var_728, temp0_1019)
            arg10 = _mm_mul_ps(temp0_1019, var_718)
            float temp0_1039[0x4] = _mm_add_ps(_mm_and_ps(temp0_1035, arg8), temp0_1028)
            float temp0_1041[0x4] = _mm_add_ps(_mm_and_ps(temp0_1036, arg8), temp0_1031)
            arg10 = _mm_add_ps(_mm_and_ps(arg10, arg8), temp0_1034)
            arg11 = _mm_sub_ps(zmm12, temp0_1039)
            float temp0_1045[0x4] = _mm_sub_ps(temp0_1010, temp0_1041)
            float temp0_1046[0x4] = _mm_sub_ps(temp0_1011, arg10)
            arg12 = _mm_add_ps(temp0_1039, zmm12)
            float temp0_1048[0x4] = _mm_add_ps(temp0_1041, temp0_1010)
            arg10 = _mm_add_ps(arg10, temp0_1011)
            zmm2 = zx.o(0)
            arg6 = _mm_cmpeq_epi32(data_142ed6810 & var_8c8_3, zx.o(0))
            zmm4 = var_938_2
            arg7 = _mm_slli_epi32(arg6 & not.o(zmm4), 0x1f)
            char temp0_1052 = _mm_movemask_ps(arg7)
            char rbp_19 = var_8f8[0].b
            char rax_187
            uint32_t i_5
            bool cond:62_1
            bool cond:78_1
            bool cond:79_1
            bool cond:94_1
            bool cond:95_1
            bool cond:110_1
            bool cond:111_1
            bool cond:130_1
            bool cond:131_1
            bool cond:150_1
            bool cond:151_1
            
            if (temp0_1052 == 0)
                rdi_10 = arg15
                arg7 = var_8c8_3
                i_5 = i_6
            label_14035c006:
                zmm4 = _mm_slli_epi32(zmm4 & arg6, 0x1f)
                
                if (_mm_movemask_ps(zmm4) == 0)
                    zmm4 = arg7
                    arg12 = var_8b8_3
                    arg8 = var_868_3
                    goto label_14035c270
                
                float var_948_4[0x4] = zmm2
                char temp0_1288 = _mm_movemask_ps(arg6)
                char temp7_1 = temp0_1288 & 1
                arg8 = var_868_3
                float var_958_4[0x4]
                
                if (temp7_1 == 0)
                    var_958_4 = temp0_1048
                    zmm14 = var_8e8_3
                    
                    if (temp7_1 != 0)
                        goto label_14035cb37
                    
                    goto label_14035c021
                
                var_968.o = _mm_blend_ps(var_968.o, arg11, 1)
                var_958_4 = temp0_1048
                zmm14 = var_8e8_3
                
                if (temp7_1 != 0)
                label_14035cb37:
                    var_9a8_3.o = _mm_blend_ps(var_9a8_3.o, temp0_1045, 1)
                    
                    if (temp7_1 == 0)
                        goto label_14035c021_1
                    
                    goto label_14035cb4e
                
            label_14035c021:
                
                if (temp7_1 == 0)
                label_14035c021_1:
                    
                    if (temp7_1 != 0)
                        goto label_14035cb64
                    
                    goto label_14035c021_2
                
            label_14035cb4e:
                var_9b8_2 = _mm_blend_ps(var_9b8_2, temp0_1046, 1)
                
                if (temp7_1 != 0)
                label_14035cb64:
                    var_9c8 = _mm_blend_ps(var_9c8, arg12, 1)
                    
                    if (temp7_1 == 0)
                        goto label_14035c021_3
                    
                    goto label_14035cb6e
                
            label_14035c021_2:
                
                if (temp7_1 != 0)
                label_14035cb6e:
                    zmm12 = __blendps_xmmdq_memdq_immb(zmm12, var_958_4, 1)
                    
                    if (temp7_1 != 0)
                        zmm15 = _mm_blend_ps(zmm15, arg10, 1)
                else
                label_14035c021_3:
                    
                    if (temp7_1 != 0)
                        zmm15 = _mm_blend_ps(zmm15, arg10, 1)
                
                float var_938_4[0x4] = zmm4
                zmm0 = arg10
                zmm4 = arg7
                
                if (temp7_1 != 0)
                    zmm4 = _mm_insert_epi32(arg7, 1, 0)
                
                char temp23_1 = temp0_1288 & 2
                arg10 = zmm12
                zmm12 = var_9c8
                zmm6 = var_9b8_2
                zmm2 = var_9a8_3.o
                arg6 = var_968.o
                
                if (temp23_1 == 0)
                    if (temp23_1 != 0)
                        goto label_14035cb8f
                    
                    goto label_14035c085
                
                arg6 = _mm_blend_ps(arg6, arg11, 2)
                
                if (temp23_1 != 0)
                label_14035cb8f:
                    zmm2 = _mm_blend_ps(zmm2, temp0_1045, 2)
                    
                    if (temp23_1 == 0)
                        goto label_14035c085_1
                    
                    goto label_14035cb9c
                
            label_14035c085:
                
                if (temp23_1 == 0)
                label_14035c085_1:
                    
                    if (temp23_1 != 0)
                        goto label_14035cba9
                    
                    goto label_14035c085_2
                
            label_14035cb9c:
                zmm6 = _mm_blend_ps(zmm6, temp0_1046, 2)
                
                if (temp23_1 != 0)
                label_14035cba9:
                    zmm12 = _mm_blend_ps(zmm12, arg12, 2)
                    
                    if (temp23_1 == 0)
                        goto label_14035c085_3
                    
                    goto label_14035cbb6
                
            label_14035c085_2:
                
                if (temp23_1 != 0)
                label_14035cbb6:
                    arg10 = __blendps_xmmdq_memdq_immb(arg10, var_958_4, 2)
                    
                    if (temp23_1 != 0)
                    label_14035cbc5:
                        zmm15 = _mm_blend_ps(zmm15, zmm0, 2)
                        
                        if (temp23_1 == 0)
                            goto label_14035c0c9
                        
                        goto label_14035cbd2
                else
                label_14035c085_3:
                    
                    if (temp23_1 != 0)
                        goto label_14035cbc5
                
                bool cond:302_1
                bool cond:303_1
                bool cond:320_1
                bool cond:321_1
                bool cond:336_1
                bool cond:337_1
                bool cond:350_1
                bool cond:351_1
                bool cond:369_1
                bool cond:370_1
                bool cond:389_1
                bool cond:390_1
                
                if (temp23_1 == 0)
                label_14035c0c9:
                    char temp43_1 = temp0_1288 & 4
                    cond:302_1 = temp43_1 != 0
                    cond:303_1 = temp43_1 == 0
                    cond:320_1 = temp43_1 == 0
                    cond:321_1 = temp43_1 != 0
                    cond:336_1 = temp43_1 != 0
                    cond:337_1 = temp43_1 == 0
                    cond:350_1 = temp43_1 == 0
                    cond:351_1 = temp43_1 != 0
                    cond:369_1 = temp43_1 != 0
                    cond:370_1 = temp43_1 == 0
                    cond:389_1 = temp43_1 == 0
                    cond:390_1 = temp43_1 != 0
                    
                    if (temp43_1 != 0)
                        goto label_14035cbe0
                    
                    goto label_14035c0d1
                
            label_14035cbd2:
                zmm4 = _mm_insert_epi32(zmm4, 1, 1)
                char temp42_1 = temp0_1288 & 4
                cond:302_1 = temp42_1 != 0
                cond:303_1 = temp42_1 == 0
                cond:320_1 = temp42_1 == 0
                cond:321_1 = temp42_1 != 0
                cond:336_1 = temp42_1 != 0
                cond:337_1 = temp42_1 == 0
                cond:350_1 = temp42_1 == 0
                cond:351_1 = temp42_1 != 0
                cond:369_1 = temp42_1 != 0
                cond:370_1 = temp42_1 == 0
                cond:389_1 = temp42_1 == 0
                cond:390_1 = temp42_1 != 0
                
                if (temp42_1 != 0)
                label_14035cbe0:
                    arg6 = _mm_blend_ps(arg6, arg11, 4)
                    
                    if (cond:303_1)
                        goto label_14035c0d7
                    
                    goto label_14035cbed
                
            label_14035c0d1:
                
                if (not(cond:302_1))
                label_14035c0d7:
                    
                    if (cond:321_1)
                        goto label_14035cbfa
                    
                    goto label_14035c0dd
                
            label_14035cbed:
                zmm2 = _mm_blend_ps(zmm2, temp0_1045, 4)
                
                if (not(cond:320_1))
                label_14035cbfa:
                    zmm6 = _mm_blend_ps(zmm6, temp0_1046, 4)
                    
                    if (cond:337_1)
                        goto label_14035c0e3
                    
                    goto label_14035cc07
                
            label_14035c0dd:
                
                if (not(cond:336_1))
                label_14035c0e3:
                    
                    if (cond:351_1)
                        goto label_14035cc14
                    
                    goto label_14035c0e9
                
            label_14035cc07:
                zmm12 = _mm_blend_ps(zmm12, arg12, 4)
                
                if (not(cond:350_1))
                label_14035cc14:
                    arg10 = __blendps_xmmdq_memdq_immb(arg10, var_958_4, 4)
                    
                    if (cond:370_1)
                        goto label_14035c0ef
                    
                    goto label_14035cc23
                
            label_14035c0e9:
                
                if (not(cond:369_1))
                label_14035c0ef:
                    
                    if (cond:390_1)
                        goto label_14035cc30
                    
                    goto label_14035c0f5
                
            label_14035cc23:
                zmm15 = _mm_blend_ps(zmm15, zmm0, 4)
                bool cond:419_1
                bool cond:420_1
                bool cond:435_1
                bool cond:436_1
                bool cond:447_1
                bool cond:448_1
                bool cond:454_1
                bool cond:455_1
                bool cond:462_1
                bool cond:463_1
                bool cond:469_1
                bool cond:470_1
                
                if (not(cond:389_1))
                label_14035cc30:
                    zmm4 = _mm_insert_epi32(zmm4, 1, 2)
                    char temp63_1 = temp0_1288 & 8
                    cond:419_1 = temp63_1 == 0
                    cond:420_1 = temp63_1 != 0
                    cond:435_1 = temp63_1 != 0
                    cond:436_1 = temp63_1 == 0
                    cond:447_1 = temp63_1 == 0
                    cond:448_1 = temp63_1 != 0
                    cond:454_1 = temp63_1 != 0
                    cond:455_1 = temp63_1 == 0
                    cond:462_1 = temp63_1 == 0
                    cond:463_1 = temp63_1 != 0
                    cond:469_1 = temp63_1 == 0
                    cond:470_1 = temp63_1 != 0
                    
                    if (temp63_1 == 0)
                        goto label_14035c0fd
                    
                    goto label_14035cc3e
                
            label_14035c0f5:
                char temp62_1 = temp0_1288 & 8
                cond:419_1 = temp62_1 == 0
                cond:420_1 = temp62_1 != 0
                cond:435_1 = temp62_1 != 0
                cond:436_1 = temp62_1 == 0
                cond:447_1 = temp62_1 == 0
                cond:448_1 = temp62_1 != 0
                cond:454_1 = temp62_1 != 0
                cond:455_1 = temp62_1 == 0
                cond:462_1 = temp62_1 == 0
                cond:463_1 = temp62_1 != 0
                cond:469_1 = temp62_1 == 0
                cond:470_1 = temp62_1 != 0
                
                if (temp62_1 == 0)
                label_14035c0fd:
                    
                    if (cond:420_1)
                        goto label_14035cc4b
                    
                    goto label_14035c103
                
            label_14035cc3e:
                arg6 = _mm_blend_ps(arg6, arg11, 8)
                
                if (not(cond:419_1))
                label_14035cc4b:
                    zmm2 = _mm_blend_ps(zmm2, temp0_1045, 8)
                    
                    if (cond:436_1)
                        goto label_14035c109
                    
                    goto label_14035cc58
                
            label_14035c103:
                
                if (not(cond:435_1))
                label_14035c109:
                    
                    if (cond:448_1)
                        goto label_14035cc65
                    
                    goto label_14035c10f
                
            label_14035cc58:
                zmm6 = _mm_blend_ps(zmm6, temp0_1046, 8)
                
                if (not(cond:447_1))
                label_14035cc65:
                    zmm12 = _mm_blend_ps(zmm12, arg12, 8)
                    
                    if (cond:455_1)
                        goto label_14035c115
                    
                    goto label_14035cc72
                
            label_14035c10f:
                
                if (not(cond:454_1))
                label_14035c115:
                    
                    if (cond:463_1)
                        goto label_14035cc81
                    
                    goto label_14035c11b
                
            label_14035cc72:
                arg10 = __blendps_xmmdq_memdq_immb(arg10, var_958_4, 8)
                
                if (cond:462_1)
                label_14035c11b:
                    
                    if (not(cond:469_1))
                        zmm4 = _mm_insert_epi32(zmm4, 1, 3)
                else
                label_14035cc81:
                    zmm15 = _mm_blend_ps(zmm15, zmm0, 8)
                    
                    if (cond:470_1)
                        zmm4 = _mm_insert_epi32(zmm4, 1, 3)
                
                _mm_movemask_ps(_mm_srai_epi32(var_938_4, 0x1f) | var_948_4)
                arg12 = var_8b8_3
                rax_187 = rbp_19
                char temp73_1 = rax_187 & 1
                cond:62_1 = temp73_1 != 0
                cond:78_1 = temp73_1 == 0
                cond:79_1 = temp73_1 != 0
                cond:94_1 = temp73_1 != 0
                cond:95_1 = temp73_1 == 0
                cond:110_1 = temp73_1 == 0
                cond:111_1 = temp73_1 != 0
                cond:130_1 = temp73_1 != 0
                cond:131_1 = temp73_1 == 0
                cond:150_1 = temp73_1 == 0
                cond:151_1 = temp73_1 != 0
                
                if (temp73_1 != 0)
                    zmm14 = _mm_blend_ps(zmm14, arg6, 1)
            else
                var_968.o = _mm_min_ps(var_8e8_3, arg11)
                arg8 = var_868_3
                var_9a8_3.o = _mm_min_ps(arg8, temp0_1045)
                var_9b8_2 = _mm_min_ps(var_928_4, temp0_1046)
                var_9c8 = _mm_max_ps(var_978_4, arg12)
                zmm0 = arg12
                arg12 = var_8b8_3
                zmm12 = _mm_max_ps(arg12, temp0_1048)
                zmm15 = _mm_max_ps(var_998_2, arg10)
                
                if (rbp_19 != temp0_1052)
                    zmm2 = _mm_srai_epi32(arg7, 0x1f)
                    rdi_10 = arg15
                    arg7 = var_8c8_3
                    i_5 = i_6
                    arg12 = zmm0
                    goto label_14035c006
                
                arg13 = var_8c8_3
                arg7 = arg13
                zmm4 = arg13
                rdi_10 = arg15
                i_5 = i_6
            label_14035c270:
                zmm14 = var_8e8_3
                arg10 = zmm12
                zmm12 = var_9c8
                zmm6 = var_9b8_2
                zmm2 = var_9a8_3.o
                arg6 = var_968.o
                rax_187 = rbp_19
                char temp8_1 = rax_187 & 1
                cond:62_1 = temp8_1 != 0
                cond:78_1 = temp8_1 == 0
                cond:79_1 = temp8_1 != 0
                cond:94_1 = temp8_1 != 0
                cond:95_1 = temp8_1 == 0
                cond:110_1 = temp8_1 == 0
                cond:111_1 = temp8_1 != 0
                cond:130_1 = temp8_1 != 0
                cond:131_1 = temp8_1 == 0
                cond:150_1 = temp8_1 == 0
                cond:151_1 = temp8_1 != 0
                
                if (temp8_1 != 0)
                    zmm14 = _mm_blend_ps(zmm14, arg6, 1)
            
            if (not(cond:62_1))
                if (cond:79_1)
                    goto label_14035c391
                
                goto label_14035c2aa
            
            arg8 = _mm_blend_ps(arg8, zmm2, 1)
            
            if (not(cond:78_1))
            label_14035c391:
                var_928_4 = _mm_blend_ps(var_928_4, zmm6, 1)
                
                if (cond:95_1)
                    goto label_14035c2b0
                
                goto label_14035c3ab
            
        label_14035c2aa:
            
            if (not(cond:94_1))
            label_14035c2b0:
                
                if (cond:111_1)
                    goto label_14035c3b6
                
                goto label_14035c2b6
            
        label_14035c3ab:
            var_978_4 = _mm_blend_ps(var_978_4, zmm12, 1)
            
            if (not(cond:110_1))
            label_14035c3b6:
                arg12 = _mm_blend_ps(arg12, arg10, 1)
                
                if (cond:131_1)
                    goto label_14035c2bc
                
                goto label_14035c3cf
            
        label_14035c2b6:
            
            if (not(cond:130_1))
            label_14035c2bc:
                
                if (cond:151_1)
                    goto label_14035c3da
                
                goto label_14035c2c2
            
        label_14035c3cf:
            var_998_2 = _mm_blend_ps(var_998_2, zmm15, 1)
            bool cond:180_1
            bool cond:181_1
            bool cond:198_1
            bool cond:199_1
            bool cond:214_1
            bool cond:215_1
            bool cond:230_1
            bool cond:231_1
            bool cond:250_1
            bool cond:251_1
            bool cond:270_1
            bool cond:271_1
            
            if (not(cond:150_1))
            label_14035c3da:
                arg7 = _mm_blend_epi16(arg7, zmm4, 3)
                char temp25_1 = rax_187 & 2
                cond:180_1 = temp25_1 == 0
                cond:181_1 = temp25_1 != 0
                cond:198_1 = temp25_1 != 0
                cond:199_1 = temp25_1 == 0
                cond:214_1 = temp25_1 == 0
                cond:215_1 = temp25_1 != 0
                cond:230_1 = temp25_1 != 0
                cond:231_1 = temp25_1 == 0
                cond:250_1 = temp25_1 == 0
                cond:251_1 = temp25_1 != 0
                cond:270_1 = temp25_1 != 0
                cond:271_1 = temp25_1 == 0
                
                if (temp25_1 == 0)
                    goto label_14035c2ca
                
                goto label_14035c3e8
            
        label_14035c2c2:
            char temp24_1 = rax_187 & 2
            cond:180_1 = temp24_1 == 0
            cond:181_1 = temp24_1 != 0
            cond:198_1 = temp24_1 != 0
            cond:199_1 = temp24_1 == 0
            cond:214_1 = temp24_1 == 0
            cond:215_1 = temp24_1 != 0
            cond:230_1 = temp24_1 != 0
            cond:231_1 = temp24_1 == 0
            cond:250_1 = temp24_1 == 0
            cond:251_1 = temp24_1 != 0
            cond:270_1 = temp24_1 != 0
            cond:271_1 = temp24_1 == 0
            
            if (temp24_1 == 0)
            label_14035c2ca:
                
                if (cond:181_1)
                    goto label_14035c3f5
                
                goto label_14035c2d0
            
        label_14035c3e8:
            zmm14 = _mm_blend_ps(zmm14, arg6, 2)
            
            if (not(cond:180_1))
            label_14035c3f5:
                arg8 = _mm_blend_ps(arg8, zmm2, 2)
                
                if (cond:199_1)
                    goto label_14035c2d6
                
                goto label_14035c40f
            
        label_14035c2d0:
            
            if (not(cond:198_1))
            label_14035c2d6:
                
                if (cond:215_1)
                    goto label_14035c429
                
                goto label_14035c2dc
            
        label_14035c40f:
            var_928_4 = _mm_blend_ps(var_928_4, zmm6, 2)
            
            if (not(cond:214_1))
            label_14035c429:
                var_978_4 = _mm_blend_ps(var_978_4, zmm12, 2)
                
                if (cond:231_1)
                    goto label_14035c2e2
                
                goto label_14035c434
            
        label_14035c2dc:
            
            if (cond:230_1)
            label_14035c434:
                arg12 = _mm_blend_ps(arg12, arg10, 2)
                
                if (not(cond:250_1))
                label_14035c44d:
                    var_998_2 = _mm_blend_ps(var_998_2, zmm15, 2)
                    
                    if (cond:271_1)
                        goto label_14035c2ee
                    
                    goto label_14035c458
            else
            label_14035c2e2:
                
                if (cond:251_1)
                    goto label_14035c44d
            
            bool cond:300_1
            bool cond:301_1
            bool cond:318_1
            bool cond:319_1
            bool cond:334_1
            bool cond:335_1
            bool cond:348_1
            bool cond:349_1
            bool cond:367_1
            bool cond:368_1
            bool cond:387_1
            bool cond:388_1
            
            if (not(cond:270_1))
            label_14035c2ee:
                char temp45_1 = rax_187 & 4
                cond:300_1 = temp45_1 != 0
                cond:301_1 = temp45_1 == 0
                cond:318_1 = temp45_1 == 0
                cond:319_1 = temp45_1 != 0
                cond:334_1 = temp45_1 != 0
                cond:335_1 = temp45_1 == 0
                cond:348_1 = temp45_1 == 0
                cond:349_1 = temp45_1 != 0
                cond:367_1 = temp45_1 != 0
                cond:368_1 = temp45_1 == 0
                cond:387_1 = temp45_1 == 0
                cond:388_1 = temp45_1 != 0
                
                if (temp45_1 != 0)
                    goto label_14035c466
                
                goto label_14035c2f6
            
        label_14035c458:
            arg7 = _mm_blend_epi16(arg7, zmm4, 0xc)
            char temp44_1 = rax_187 & 4
            cond:300_1 = temp44_1 != 0
            cond:301_1 = temp44_1 == 0
            cond:318_1 = temp44_1 == 0
            cond:319_1 = temp44_1 != 0
            cond:334_1 = temp44_1 != 0
            cond:335_1 = temp44_1 == 0
            cond:348_1 = temp44_1 == 0
            cond:349_1 = temp44_1 != 0
            cond:367_1 = temp44_1 != 0
            cond:368_1 = temp44_1 == 0
            cond:387_1 = temp44_1 == 0
            cond:388_1 = temp44_1 != 0
            
            if (temp44_1 != 0)
            label_14035c466:
                zmm14 = _mm_blend_ps(zmm14, arg6, 4)
                
                if (cond:301_1)
                    goto label_14035c2fc
                
                goto label_14035c473
            
        label_14035c2f6:
            
            if (not(cond:300_1))
            label_14035c2fc:
                
                if (cond:319_1)
                    goto label_14035c48d
                
                goto label_14035c302
            
        label_14035c473:
            arg8 = _mm_blend_ps(arg8, zmm2, 4)
            
            if (not(cond:318_1))
            label_14035c48d:
                var_928_4 = _mm_blend_ps(var_928_4, zmm6, 4)
                
                if (cond:335_1)
                    goto label_14035c308
                
                goto label_14035c4a7
            
        label_14035c302:
            
            if (not(cond:334_1))
            label_14035c308:
                
                if (cond:349_1)
                    goto label_14035c4b2
                
                goto label_14035c30e
            
        label_14035c4a7:
            var_978_4 = _mm_blend_ps(var_978_4, zmm12, 4)
            
            if (not(cond:348_1))
            label_14035c4b2:
                arg12 = _mm_blend_ps(arg12, arg10, 4)
                
                if (cond:368_1)
                    goto label_14035c314
                
                goto label_14035c4cb
            
        label_14035c30e:
            
            if (not(cond:367_1))
            label_14035c314:
                
                if (cond:388_1)
                    goto label_14035c4d6
                
                goto label_14035c31a
            
        label_14035c4cb:
            var_998_2 = _mm_blend_ps(var_998_2, zmm15, 4)
            bool cond:417_1
            bool cond:418_1
            bool cond:433_1
            bool cond:434_1
            bool cond:445_1
            bool cond:446_1
            bool cond:452_1
            bool cond:453_1
            bool cond:460_1
            bool cond:461_1
            bool cond:467_1
            bool cond:468_1
            
            if (not(cond:387_1))
            label_14035c4d6:
                arg7 = _mm_blend_epi16(arg7, zmm4, 0x30)
                char temp65_1 = rax_187 & 8
                cond:417_1 = temp65_1 == 0
                cond:418_1 = temp65_1 != 0
                cond:433_1 = temp65_1 != 0
                cond:434_1 = temp65_1 == 0
                cond:445_1 = temp65_1 == 0
                cond:446_1 = temp65_1 != 0
                cond:452_1 = temp65_1 != 0
                cond:453_1 = temp65_1 == 0
                cond:460_1 = temp65_1 == 0
                cond:461_1 = temp65_1 != 0
                cond:467_1 = temp65_1 == 0
                cond:468_1 = temp65_1 != 0
                
                if (temp65_1 == 0)
                    goto label_14035c322
                
                goto label_14035c4e4
            
        label_14035c31a:
            char temp64_1 = rax_187 & 8
            cond:417_1 = temp64_1 == 0
            cond:418_1 = temp64_1 != 0
            cond:433_1 = temp64_1 != 0
            cond:434_1 = temp64_1 == 0
            cond:445_1 = temp64_1 == 0
            cond:446_1 = temp64_1 != 0
            cond:452_1 = temp64_1 != 0
            cond:453_1 = temp64_1 == 0
            cond:460_1 = temp64_1 == 0
            cond:461_1 = temp64_1 != 0
            cond:467_1 = temp64_1 == 0
            cond:468_1 = temp64_1 != 0
            
            if (temp64_1 == 0)
            label_14035c322:
                
                if (cond:418_1)
                    goto label_14035c4f1
                
                goto label_14035c328
            
        label_14035c4e4:
            zmm14 = _mm_blend_ps(zmm14, arg6, 8)
            
            if (not(cond:417_1))
            label_14035c4f1:
                arg8 = _mm_blend_ps(arg8, zmm2, 8)
                
                if (cond:434_1)
                    goto label_14035c32e
                
                goto label_14035c50b
            
        label_14035c328:
            
            if (not(cond:433_1))
            label_14035c32e:
                
                if (cond:446_1)
                    goto label_14035c525
                
                goto label_14035c334
            
        label_14035c50b:
            var_928_4 = _mm_blend_ps(var_928_4, zmm6, 8)
            
            if (not(cond:445_1))
            label_14035c525:
                var_978_4 = _mm_blend_ps(var_978_4, zmm12, 8)
                zmm2 = arg12
                zmm6 = arg8
                
                if (cond:453_1)
                    goto label_14035c341
                
                goto label_14035c537
            
        label_14035c334:
            zmm2 = arg12
            zmm6 = arg8
            
            if (cond:452_1)
            label_14035c537:
                zmm2 = _mm_blend_ps(zmm2, arg10, 8)
                arg9 = var_978_4
                
                if (not(cond:460_1))
                label_14035c556:
                    var_998_2 = _mm_blend_ps(var_998_2, zmm15, 8)
                    
                    if (cond:468_1)
                        goto label_14035c358
                    
                    goto label_14035c561
            else
            label_14035c341:
                arg9 = var_978_4
                
                if (cond:461_1)
                    goto label_14035c556
            
            if (cond:467_1)
            label_14035c561:
                zmm12 = var_928_4
                zmm15 = arg7
                i_2 = zx.q(i_5)
                
                if ((i_2.b & 1) != 0)
                    var_698_1 = zmm14[0]
            else
            label_14035c358:
                zmm15 = _mm_blend_epi16(arg7, zmm4, 0xc0)
                zmm12 = var_928_4
                i_2 = zx.q(i_5)
                
                if ((i_2.b & 1) != 0)
                    var_698_1 = zmm14[0]
    else
    label_140359fe1:
        rdi_10 = arg15
        i_2 = zx.q(i_6)
        
        if ((i_2.b & 1) != 0)
            var_698_1 = zmm14[0]
    
    if ((i_2.b & 2) == 0)
        if ((i_2.b & 4) != 0)
            goto label_14035a232
        
        goto label_14035a00d
    
    int32_t var_67c_1 = __extractps_memd_xmmps_immb(zmm14, 1)
    
    if ((i_2.b & 4) != 0)
    label_14035a232:
        int32_t var_660_1 = __extractps_memd_xmmps_immb(zmm14, 2)
        
        if ((i_2.b & 8) == 0)
            goto label_14035a015
        
        goto label_14035a246
    
label_14035a00d:
    
    if ((i_2.b & 8) == 0)
    label_14035a015:
        
        if ((i_2.b & 1) != 0)
            goto label_14035a25a
        
        goto label_14035a01d
    
label_14035a246:
    int32_t var_644_1 = __extractps_memd_xmmps_immb(zmm14, 3)
    float var_694
    
    if ((i_2.b & 1) != 0)
    label_14035a25a:
        var_694 = zmm6[0]
        
        if ((i_2.b & 2) == 0)
            goto label_14035a025
        
        goto label_14035a26b
    
label_14035a01d:
    
    if ((i_2.b & 2) == 0)
    label_14035a025:
        
        if ((i_2.b & 4) != 0)
            goto label_14035a27e
        
        goto label_14035a02d
    
label_14035a26b:
    int32_t var_678_1 = __extractps_memd_xmmps_immb(zmm6, 1)
    
    if ((i_2.b & 4) != 0)
    label_14035a27e:
        int32_t var_65c_1 = __extractps_memd_xmmps_immb(zmm6, 2)
        
        if ((i_2.b & 8) == 0)
            goto label_14035a035
        
        goto label_14035a291
    
label_14035a02d:
    
    if ((i_2.b & 8) == 0)
    label_14035a035:
        
        if ((i_2.b & 1) != 0)
            goto label_14035a2a4
        
        goto label_14035a03d
    
label_14035a291:
    int32_t var_640_1 = __extractps_memd_xmmps_immb(zmm6, 3)
    float var_690
    
    if ((i_2.b & 1) != 0)
    label_14035a2a4:
        var_690 = zmm12[0]
        
        if ((i_2.b & 2) == 0)
            goto label_14035a045
        
        goto label_14035a2b6
    
label_14035a03d:
    
    if ((i_2.b & 2) == 0)
    label_14035a045:
        
        if ((i_2.b & 4) != 0)
            goto label_14035a2ca
        
        goto label_14035a04d
    
label_14035a2b6:
    int32_t var_674_1 = __extractps_memd_xmmps_immb(zmm12, 1)
    
    if ((i_2.b & 4) != 0)
    label_14035a2ca:
        int32_t var_658_1 = __extractps_memd_xmmps_immb(zmm12, 2)
        
        if ((i_2.b & 8) == 0)
            goto label_14035a055
        
        goto label_14035a2de
    
label_14035a04d:
    
    if ((i_2.b & 8) == 0)
    label_14035a055:
        
        if ((i_2.b & 1) != 0)
            goto label_14035a2f2
        
        goto label_14035a05d
    
label_14035a2de:
    int32_t var_63c_1 = __extractps_memd_xmmps_immb(zmm12, 3)
    float var_68c
    
    if ((i_2.b & 1) != 0)
    label_14035a2f2:
        var_68c = arg9[0]
        
        if ((i_2.b & 2) == 0)
            goto label_14035a065
        
        goto label_14035a304
    
label_14035a05d:
    
    if ((i_2.b & 2) == 0)
    label_14035a065:
        
        if ((i_2.b & 4) != 0)
            goto label_14035a318
        
        goto label_14035a06d
    
label_14035a304:
    int32_t var_670_1 = __extractps_memd_xmmps_immb(arg9, 1)
    
    if ((i_2.b & 4) != 0)
    label_14035a318:
        int32_t var_654_1 = __extractps_memd_xmmps_immb(arg9, 2)
        
        if ((i_2.b & 8) == 0)
            goto label_14035a075
        
        goto label_14035a32c
    
label_14035a06d:
    
    if ((i_2.b & 8) == 0)
    label_14035a075:
        
        if ((i_2.b & 1) != 0)
            goto label_14035a340
        
        goto label_14035a07d
    
label_14035a32c:
    int32_t var_638_1 = __extractps_memd_xmmps_immb(arg9, 3)
    float var_688
    
    if ((i_2.b & 1) != 0)
    label_14035a340:
        var_688 = zmm2[0]
        
        if ((i_2.b & 2) == 0)
            goto label_14035a085
        
        goto label_14035a351
    
label_14035a07d:
    
    if ((i_2.b & 2) == 0)
    label_14035a085:
        
        if ((i_2.b & 4) != 0)
            goto label_14035a364
        
        goto label_14035a08d
    
label_14035a351:
    int32_t var_66c_1 = __extractps_memd_xmmps_immb(zmm2, 1)
    
    if ((i_2.b & 4) != 0)
    label_14035a364:
        int32_t var_650_1 = __extractps_memd_xmmps_immb(zmm2, 2)
        
        if ((i_2.b & 8) == 0)
            goto label_14035a095
        
        goto label_14035a377
    
label_14035a08d:
    
    if ((i_2.b & 8) == 0)
    label_14035a095:
        
        if ((i_2.b & 1) != 0)
            goto label_14035a390
        
        goto label_14035a09d
    
label_14035a377:
    int32_t var_634_1 = __extractps_memd_xmmps_immb(zmm2, 3)
    float var_684
    
    if ((i_2.b & 1) != 0)
    label_14035a390:
        var_684 = var_998_2[0]
        
        if ((i_2.b & 2) == 0)
            goto label_14035a0a5
        
        goto label_14035a3a7
    
label_14035a09d:
    
    if ((i_2.b & 2) == 0)
    label_14035a0a5:
        
        if ((i_2.b & 4) != 0)
            goto label_14035a3c0
        
        goto label_14035a0ad
    
label_14035a3a7:
    int32_t var_668_1 = __pextrd_memd_xmmdq_immb(var_998_2, 1)
    
    if ((i_2.b & 4) != 0)
    label_14035a3c0:
        int32_t var_64c_1 = __pextrd_memd_xmmdq_immb(var_998_2, 2)
        
        if ((i_2.b & 8) == 0)
            goto label_14035a0b5
        
        goto label_14035a3d9
    
label_14035a0ad:
    
    if ((i_2.b & 8) == 0)
    label_14035a0b5:
        
        if ((i_2.b & 1) != 0)
            goto label_14035a3ec
        
        goto label_14035a0bd
    
label_14035a3d9:
    int32_t var_630_1 = __pextrd_memd_xmmdq_immb(var_998_2, 3)
    char var_680[0x4]
    
    if ((i_2.b & 1) != 0)
    label_14035a3ec:
        var_680[0] = __pextrb_memb_xmmdq_immb(zmm15, 0)
        
        if ((i_2.b & 2) == 0)
            goto label_14035a0c5
        
        goto label_14035a400
    
label_14035a0bd:
    
    if ((i_2.b & 2) == 0)
    label_14035a0c5:
        
        if ((i_2.b & 4) != 0)
            goto label_14035a414
        
        goto label_14035a0cd
    
label_14035a400:
    uint8_t var_664_1 = __pextrb_memb_xmmdq_immb(zmm15, 4)
    uint8_t var_62c_1
    
    if ((i_2.b & 4) == 0)
    label_14035a0cd:
        
        if ((i_2.b & 8) != 0)
            var_62c_1 = __pextrb_memb_xmmdq_immb(zmm15, 0xc)
    else
    label_14035a414:
        uint8_t var_648_1 = __pextrb_memb_xmmdq_immb(zmm15, 8)
        
        if ((i_2.b & 8) != 0)
            var_62c_1 = __pextrb_memb_xmmdq_immb(zmm15, 0xc)
    
    do
        uint64_t rcx_48
        uint64_t rflags_1
        
        if (i_2 == 0)
            rcx_48 = 0x40
        else
            rcx_48, rflags_1 = _bit_scan_forward(i_2)
        i_2 &= not.q(1 << (rcx_48 u% 0x40))
        uint64_t rdx_43 = rcx_48 * 0x1c
        char rbx_23 = rdi_10[3].b
        char rcx_49 = var_680[rdx_43]
        
        if (rbx_23 != 0 && rcx_49 != 0)
            zmm2 = var_9c8[rcx_48 * 7 + 0xcc]
            float temp0_715[0x4] = __insertps_xmmps_memd_immb(zx.o(*rdi_10), rdi_10[1].d, 0x20)
            float temp0_717[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm2, (&var_694)[rcx_48 * 7], 0x10), 
                (&var_690)[rcx_48 * 7], 0x20)
            arg5 = zx.o(*(rdi_10 + 0xc))
            zmm0 = _mm_min_ps(temp0_715, temp0_717)
            float temp0_719[0x4] = __insertps_xmmps_memd_immb(arg5, *(rdi_10 + 0x14), 0x20)
            arg6 = _mm_movehdup_ps(zmm0)
            float temp0_721[0x4] =
                __insertps_xmmps_memd_immb(zx.o(*(&var_68c + rdx_43)), (&var_684)[rcx_48 * 7], 0x20)
            zmm2 = _mm_unpackhi_pd(zmm0, zmm0[0].q)
            arg5 = _mm_max_ps(temp0_719, temp0_721)
            zmm4 = _mm_movehdup_ps(arg5)
            arg7 = _mm_unpackhi_pd(arg5, arg5[0].q)
        else if (rcx_49 == 0)
            rbx_23 = rdi_10[3].b
            arg7 = *(rdi_10 + 0x14)
            zmm4 = rdi_10[2].d
            arg5 = *(rdi_10 + 0xc)
            zmm2 = rdi_10[1].d
            zmm0 = *rdi_10
            arg6 = *(rdi_10 + 4)
        else
            zmm0 = var_9c8[rcx_48 * 7 + 0xcc]
            arg6 = (&var_694)[rcx_48 * 7]
            zmm2 = (&var_690)[rcx_48 * 7]
            arg5 = (&var_68c)[rcx_48 * 7]
            zmm4 = (&var_688)[rcx_48 * 7]
            arg7 = (&var_684)[rcx_48 * 7]
            rbx_23 = rcx_49
        
        *rdi_10 = zmm0[0]
        *(rdi_10 + 4) = arg6[0]
        rdi_10[1].d = zmm2[0]
        *(rdi_10 + 0xc) = arg5[0]
        rdi_10[2].d = zmm4[0]
        *(rdi_10 + 0x14) = arg7[0]
        rdi_10[3].b = rbx_23
    while (i_2 != 0)
else
    uint64_t rbp_1 = 0
    float var_9b8_1[0x4]
    int32_t var_938[0x4]
    int32_t var_8d8_1[0x4]
    float var_888[0x4]
    
    if (rdx_4 s<= 0)
        var_9b8_1 = zx.o(0)
        var_8d8_1 = zx.o(0)
        zmm2 = zx.o(0)
        arg8 = zx.o(0)
        zmm4 = zx.o(0)
        zmm14 = zx.o(0)
        zmm12 = zx.o(0)
    else
        zmm12 = zx.o(0)
        zmm14 = zx.o(0)
        zmm4 = zx.o(0)
        arg8 = zx.o(0)
        zmm2 = zx.o(0)
        var_8d8_1 = zx.o(0)
        var_9b8_1 = zx.o(0)
        
        while (true)
            zmm15 = zmm14
            int64_t rcx_3 = sx.q((rbp_1 << 3).d - rbp_1.d)
            int32_t temp0_3[0x4] = __pinsrb_xmmdq_memb_immb(
                __pinsrb_xmmdq_memb_immb(
                    __pinsrb_xmmdq_memb_immb(
                        __pinsrb_xmmdq_memb_immb(zx.o(0), (*arg4)[rcx_3 + 6].b, 0), 
                        (*arg4)[rcx_3 + 0xd].b, 4), 
                    (*arg4)[rcx_3 + 0x14].b, 8), 
                (*arg4)[rcx_3 + 0x1b].b, 0xc)
            int64_t rcx_5 = sx.q((rbp_1 << 2).d)
            zmm6 = *(arg1 + rcx_5)
            arg7 = _mm_cmpeq_epi32(arg7, arg7)
            zmm6 = _mm_cmpeq_epi32(zmm6, arg7) & not.o(_mm_cmpeq_epi32(temp0_3, zx.o(0)) ^ arg7)
            char temp0_7 = _mm_movemask_ps(zmm6)
            
            if (temp0_7 == 0)
                zmm14 = zmm15
                rbp_1 = zx.q(rbp_1.d + 4)
                
                if (rbp_1.d s>= rdx_4)
                    break
            else
                int32_t var_998_1[0x4] = arg10
                var_938 = arg11
                var_948 = arg6
                int32_t var_848
                var_848.o = arg12
                float var_838_1[0x4] = arg9
                float var_958_1[0x4] = arg13
                float var_8a8_1[0x4] = zmm12
                float var_908_1[0x4] = arg8
                int32_t var_8e8_1[0x4] = zmm15
                float var_978_1[0x4] = zmm4
                float var_928_1[0x4] = zmm2
                int32_t var_878_1 = rbp_1.d
                int64_t rdx_8 = sx.q((rbp_1 * 9).d * 3 + rbp_1.d)
                arg5 = *(arg4 + rdx_8)
                zmm0 = *(arg4 + rdx_8 + 0x1c)
                arg9 = *(arg4 + rdx_8 + 0x38)
                arg7 = *(arg4 + rdx_8 + 0x54)
                arg6 = _mm_shuffle_epi32(arg5, 0xe5)
                zmm2 = _mm_shuffle_epi32(arg5, 0x4e)
                uint32_t temp0_10[0x4] = _mm_shuffle_epi32(arg5, 0xe7)
                arg5 = _mm_unpacklo_epi64(_mm_unpacklo_epi32(arg5, zmm0[0].q), arg9[0].q)
                float var_8f8_1[0x4] = _mm_blend_epi16(_mm_shuffle_epi32(arg7, 0x24), arg5, 0x3f)
                float temp0_16[0x4] = _mm_insert_ps(_mm_blend_epi16(arg6, zmm0, 0xc), arg9, 0x68)
                var_888 = _mm_blend_epi16(_mm_shuffle_epi32(arg7, 0x44), temp0_16, 0x3f)
                zmm4 = _mm_shuffle_epi32(zmm0, 0xfa)
                int64_t rbp_2 = *(arg4 + rdx_8 + 0x10)
                int64_t rbx_1 = *(arg4 + rdx_8 + 0x2c)
                arg5 = _mm_insert_epi32(zx.o(rbp_2.d), rbx_1.d, 1)
                int64_t rdi_1 = *(arg4 + rdx_8 + 0x48)
                arg5 = _mm_insert_epi32(arg5, rdi_1.d, 2)
                int64_t rdx_9 = *(arg4 + rdx_8 + 0x64)
                float var_868_1[0x4] = _mm_insert_epi32(arg5, rdx_9.d, 3)
                float var_6b8_1[0x4] = _mm_insert_epi32(
                    _mm_insert_epi32(
                        _mm_insert_epi32(zx.o((rbp_2 u>> 0x20).d), (rbx_1 u>> 0x20).d, 1), 
                        (rdi_1 u>> 0x20).d, 2), 
                    (rdx_9 u>> 0x20).d, 3)
                arg5 = _mm_slli_epi32(*(arg2 + rcx_5), 6)
                float var_8b8_1[0x4] = zmm6
                arg6 = _mm_srai_epi32(_mm_slli_epi32(zmm6, 0x1f), 0x1f)
                arg5 &= arg6
                int64_t rcx_7 = sx.q(arg5[0])
                void* r12_1 = arg3 + rcx_7
                int32_t temp0_29 = _mm_extract_epi32(arg5, 1)
                zmm6 = *(arg3 + rcx_7)
                int64_t rcx_8 = sx.q(temp0_29)
                void* rsi_1 = arg3 + rcx_8
                int64_t rdx_13 = sx.q(_mm_extract_epi32(arg5, 2))
                void* rbp_4 = arg3 + rdx_13
                int64_t rdi_4 = sx.q(_mm_extract_epi32(arg5, 3))
                float temp0_34[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm6, *(arg3 + rcx_8), 0x10), *(arg3 + rdx_13), 
                        0x20), 
                    *(arg3 + rdi_4), 0x30)
                void* rdi_5 = arg3 + rdi_4
                arg8 = arg6 & data_142fc95e0
                arg5 = *(zx.q(arg8[0]) + r12_1)
                uint64_t rcx_10 = zx.q(_mm_extract_epi32(arg8, 1))
                uint64_t rdx_14 = zx.q(_mm_extract_epi32(arg8, 2))
                uint64_t rax_5 = zx.q(_mm_extract_epi32(arg8, 3))
                float temp0_40[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(arg5, *(rcx_10 + rsi_1), 0x10), 
                        *(rdx_14 + rbp_4), 0x20), 
                    *(rax_5 + rdi_5), 0x30)
                zmm4 = _mm_blend_epi16(zmm4, zmm2, 0xf3)
                zmm2 = arg6 & data_142fc95f0
                zmm15 = *(zx.q(zmm2[0]) + r12_1)
                uint64_t rax_7 = zx.q(_mm_extract_epi32(zmm2, 1))
                uint64_t rcx_11 = zx.q(_mm_extract_epi32(zmm2, 2))
                uint64_t rdx_15 = zx.q(_mm_extract_epi32(zmm2, 3))
                zmm15 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm15, *(rax_7 + rsi_1), 0x10), 
                        *(rcx_11 + rbp_4), 0x20), 
                    *(rdx_15 + rdi_5), 0x30)
                zmm4 = _mm_blend_epi16(zmm4, arg9, 0xf0)
                zmm2 = arg6 & data_143442650
                zmm12 = *(zx.q(zmm2[0]) + r12_1)
                uint64_t rax_9 = zx.q(_mm_extract_epi32(zmm2, 1))
                uint64_t rcx_12 = zx.q(_mm_extract_epi32(zmm2, 2))
                uint64_t rdx_16 = zx.q(_mm_extract_epi32(zmm2, 3))
                float temp0_54[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(zmm12, *(rax_9 + rsi_1), 0x10), 
                        *(rcx_12 + rbp_4), 0x20), 
                    *(rdx_16 + rdi_5), 0x30)
                arg8 = _mm_shuffle_epi32(arg7, 0xa4)
                zmm2 = arg6 & data_143442660
                uint64_t rax_10 = zx.q(_mm_extract_epi32(zmm2, 1))
                uint64_t rcx_13 = zx.q(_mm_extract_epi32(zmm2, 2))
                uint64_t rdx_17 = zx.q(_mm_extract_epi32(zmm2, 3))
                float temp0_61[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(zx.q(zmm2[0]) + r12_1), *(rax_10 + rsi_1), 
                            0x10), 
                        *(rcx_13 + rbp_4), 0x20), 
                    *(rdx_17 + rdi_5), 0x30)
                float var_8c8_1[0x4] = _mm_blend_epi16(arg8, zmm4, 0x3f)
                zmm4 = arg6 & data_143442670
                uint64_t r14_1 = zx.q(_mm_extract_epi32(zmm4, 1))
                uint64_t r9 = zx.q(_mm_extract_epi32(zmm4, 2))
                uint64_t r10_1 = zx.q(_mm_extract_epi32(zmm4, 3))
                uint64_t r11_1 = zx.q(zmm4[0])
                zmm4 = arg6 & data_143442700
                uint64_t rax_11 = zx.q(_mm_extract_epi32(zmm4, 1))
                uint64_t rcx_14 = zx.q(_mm_extract_epi32(zmm4, 2))
                uint64_t rdx_18 = zx.q(_mm_extract_epi32(zmm4, 3))
                uint64_t rbx_4 = zx.q(zmm4[0])
                float temp0_71[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(r11_1 + r12_1), *(r14_1 + rsi_1), 0x10), 
                        *(r9 + rbp_4), 0x20), 
                    *(r10_1 + rdi_5), 0x30)
                arg8 = _mm_shuffle_epi32(zmm0, 0x4e)
                float temp0_75[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rbx_4 + r12_1), *(rax_11 + rsi_1), 0x10), 
                        *(rcx_14 + rbp_4), 0x20), 
                    *(rdx_18 + rdi_5), 0x30)
                arg8 = _mm_blend_epi16(arg8, temp0_10, 0xf3)
                zmm4 = arg6 & data_1434b2e20
                uint64_t rax_12 = zx.q(_mm_extract_epi32(zmm4, 1))
                uint64_t rcx_15 = zx.q(_mm_extract_epi32(zmm4, 2))
                uint64_t rdx_19 = zx.q(_mm_extract_epi32(zmm4, 3))
                arg11 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(zx.q(zmm4[0]) + r12_1), *(rax_12 + rsi_1), 
                            0x10), 
                        *(rcx_15 + rbp_4), 0x20), 
                    *(rdx_19 + rdi_5), 0x30)
                float temp0_83[0x4] = _mm_insert_ps(arg8, arg9, 0xe8)
                zmm4 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[0].o
                uint64_t rax_13 = zx.q(_mm_extract_epi32(zmm4, 1))
                uint64_t rcx_16 = zx.q(_mm_extract_epi32(zmm4, 2))
                uint64_t rdx_20 = zx.q(_mm_extract_epi32(zmm4, 3))
                float temp0_89[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(zx.q(zmm4[0]) + r12_1), *(rax_13 + rsi_1), 
                            0x10), 
                        *(rcx_16 + rbp_4), 0x20), 
                    *(rdx_20 + rdi_5), 0x30)
                float temp0_90[0x4] = _mm_blend_ps(temp0_83, arg7, 8)
                arg7 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[4].o
                uint64_t rax_14 = zx.q(_mm_extract_epi32(arg7, 1))
                uint64_t rax_15 = zx.q(_mm_extract_epi32(arg7, 2))
                uint64_t rax_16 = zx.q(_mm_extract_epi32(arg7, 3))
                uint64_t rax_17 = zx.q(arg7[0])
                arg7 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[8].o
                float var_6a8[0x4]
                var_6a8[0].q = zx.q(_mm_extract_epi32(arg7, 1))
                uint64_t rax_19 = zx.q(_mm_extract_epi32(arg7, 2))
                uint64_t rax_20 = zx.q(_mm_extract_epi32(arg7, 3))
                uint64_t rax_21 = zx.q(arg7[0])
                arg7 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[0xc].o
                uint64_t rax_22 = zx.q(_mm_extract_epi32(arg7, 1))
                uint64_t rax_23 = zx.q(_mm_extract_epi32(arg7, 2))
                uint64_t rax_24 = zx.q(_mm_extract_epi32(arg7, 3))
                uint64_t rax_25 = zx.q(arg7[0])
                arg7 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[0x10].o
                uint64_t rax_26 = zx.q(_mm_extract_epi32(arg7, 1))
                uint64_t rax_27 = zx.q(_mm_extract_epi32(arg7, 2))
                uint64_t rax_28 = zx.q(_mm_extract_epi32(arg7, 3))
                uint64_t rbx_7 = zx.q(arg7[0])
                arg7 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[0x14].o
                uint64_t rcx_17 = zx.q(_mm_extract_epi32(arg7, 1))
                uint64_t rcx_18 = zx.q(_mm_extract_epi32(arg7, 2))
                uint64_t r14_2 = zx.q(_mm_extract_epi32(arg7, 3))
                uint64_t rdx_21 = zx.q(arg7[0])
                arg7 = arg6 & (*U"    $$$$((((,,,,000044448888<<<<")[0x18].o
                uint64_t r10_2 = zx.q(_mm_extract_epi32(arg7, 1))
                uint64_t r9_1 = zx.q(_mm_extract_epi32(arg7, 2))
                uint64_t r15_1 = zx.q(_mm_extract_epi32(arg7, 3))
                uint64_t r11_2 = zx.q(arg7[0])
                arg7 = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rax_17 + r12_1), *(rax_14 + rsi_1), 0x10), 
                        *(rax_15 + rbp_4), 0x20), 
                    *(rax_16 + rdi_5), 0x30)
                float var_1e8[0x4] = temp0_34
                float temp0_114[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rax_21 + r12_1), *(var_6a8[0].q + rsi_1), 
                            0x10), 
                        *(rax_19 + rbp_4), 0x20), 
                    *(rax_20 + rdi_5), 0x30)
                float var_1d8[0x4] = temp0_40
                float temp0_117[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rax_25 + r12_1), *(rax_22 + rsi_1), 0x10), 
                        *(rax_23 + rbp_4), 0x20), 
                    *(rax_24 + rdi_5), 0x30)
                int32_t var_1c8[0x4] = zmm15
                float temp0_120[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rbx_7 + r12_1), *(rax_26 + rsi_1), 0x10), 
                        *(rax_27 + rbp_4), 0x20), 
                    *(rax_28 + rdi_5), 0x30)
                float var_1b8[0x4] = temp0_54
                arg6 &= (*U"    $$$$((((,,,,000044448888<<<<")[0x1c].o
                int32_t* rax_29 = zx.q(_mm_extract_epi32(arg6, 1))
                int32_t* rbx_8 = zx.q(_mm_extract_epi32(arg6, 2))
                int32_t* rcx_31 = zx.q(_mm_extract_epi32(arg6, 3))
                uint64_t r13_3 = zx.q(arg6[0])
                float var_1a8_1[0x4] = temp0_61
                float var_198_1[0x4] = temp0_71
                float var_188_1[0x4] = temp0_75
                int32_t var_178_1[0x4] = arg11
                float var_168_1[0x4] = temp0_89
                int32_t var_158_1[0x4] = arg7
                float var_148_1[0x4] = temp0_114
                float var_138_1[0x4] = temp0_117
                float var_128_1[0x4] = temp0_120
                float var_118_1[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(rdx_21 + r12_1), *(rcx_17 + rsi_1), 0x10), 
                        *(rcx_18 + rbp_4), 0x20), 
                    *(r14_2 + rdi_5), 0x30)
                float var_108_1[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(r11_2 + r12_1), *(r10_2 + rsi_1), 0x10), 
                        *(r9_1 + rbp_4), 0x20), 
                    *(r15_1 + rdi_5), 0x30)
                float var_f8_1[0x4] = __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(
                        __insertps_xmmps_memd_immb(*(r13_3 + r12_1), *(rax_29 + rsi_1), 0x10), 
                        *(rbx_8 + rbp_4), 0x20), 
                    *(rcx_31 + rdi_5), 0x30)
                uint64_t var_9a8_1
                var_9a8_1.o = (*arg14)[9]
                var_968.o = (*arg14)[0xd]
                zmm12 = (*arg14)[2]
                zmm14 = (*arg14)[3]
                zmm15 = (*arg14)[6]
                arg13 = (*arg14)[0xa]
                arg9 = (*arg14)[0xe]
                arg8 = (*arg14)[7]
                zmm0 = (*arg14)[0xb]
                
                for (int64_t i_3 = 0; i_3 != 0x100; i_3 += 0x40)
                    arg10 = *arg14
                    arg12 = arg14[1][0]
                    arg10 = _mm_shuffle_ps(arg10, arg10, 0)
                    zmm4 = *(&var_1e8 + i_3)
                    arg6 = *(&var_1d8 + i_3)
                    zmm2 = *(&var_1c8 + i_3)
                    arg5 = *(&var_1b8 + i_3)
                    arg11 = zx.o(0)
                    arg10 = _mm_add_ps(_mm_mul_ps(arg10, zmm4), arg11)
                    float temp0_138[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg12, arg12, 0), arg6), arg10)
                    zmm6 = arg14[2][0]
                    float temp0_141[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm2), temp0_138)
                    arg7 = arg14[3][0]
                    *(&var_7b8 + i_3) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), arg5), temp0_141)
                    arg7 = (*arg14)[1]
                    zmm6 = (*arg14)[5]
                    arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), zmm4), arg11)
                    float temp0_150[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), arg6), arg7)
                    arg7 = var_9a8_1.o
                    arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), zmm2), temp0_150)
                    zmm6 = var_968.o
                    *(&var_7a8 + i_3) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), arg5), arg7)
                    arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), zmm4), arg11)
                    float temp0_162[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm15, zmm15, 0), arg6), arg7)
                    arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg13, arg13, 0), zmm2), temp0_162)
                    *(&var_798 + i_3) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg9, arg9, 0), arg5), arg7)
                    arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm4), arg11)
                    float temp0_174[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg8, arg8, 0), arg6), arg7)
                    float temp0_177[0x4] =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm2), temp0_174)
                    zmm2 = (*arg14)[0xf]
                    *(&var_788 + i_3) =
                        _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm2, zmm2, 0), arg5), temp0_177)
                
                zmm2 = var_7b8.o
                var_968.o = zmm2
                zmm0 = var_7a8
                var_9a8_1.o = zmm0
                zmm4 = var_798
                var_6a8 = zmm4
                uint64_t var_828_1
                var_828_1.o = var_758
                float temp0_181[0x4] = __addps_xmmps_memps(temp0_90, var_8f8_1)
                zmm12 = data_142d3f640
                float temp0_182[0x4] = _mm_mul_ps(temp0_181, zmm12)
                arg7 = _mm_mul_ps(temp0_182, zmm2)
                float temp0_184[0x4] = _mm_mul_ps(temp0_182, zmm0)
                arg11 = _mm_mul_ps(_mm_add_ps(var_888, var_868_1), zmm12)
                float temp0_188[0x4] = _mm_add_ps(_mm_mul_ps(arg11, var_778), arg7)
                float temp0_190[0x4] = _mm_add_ps(_mm_mul_ps(arg11, var_768), temp0_184)
                arg7 = _mm_mul_ps(temp0_182, zmm4)
                float temp0_193[0x4] = _mm_add_ps(_mm_mul_ps(arg11, var_758), arg7)
                float temp0_194[0x4] = __mulps_xmmps_memps(temp0_182, var_788)
                arg11 = _mm_add_ps(_mm_mul_ps(arg11, var_748), temp0_194)
                arg7 = _mm_mul_ps(_mm_add_ps(var_8c8_1, var_6b8_1), zmm12)
                float temp0_200[0x4] = _mm_add_ps(_mm_mul_ps(arg7, var_738), temp0_188)
                arg10 = _mm_add_ps(_mm_mul_ps(arg7, var_728), temp0_190)
                float temp0_204[0x4] = _mm_add_ps(_mm_mul_ps(arg7, var_718), temp0_193)
                arg7 = _mm_add_ps(_mm_mul_ps(arg7, var_708), arg11)
                float temp0_207[0x4] = __addps_xmmps_memps(temp0_200, var_6f8)
                arg10 = __addps_xmmps_memps(arg10, var_6e8)
                float temp0_209[0x4] = __addps_xmmps_memps(temp0_204, var_6d8)
                arg7 = __addps_xmmps_memps(arg7, var_6c8)
                var_7b8.o = var_778
                var_7a8 = var_768
                arg11 = var_828_1.o
                var_798 = arg11
                var_788 = var_748
                float var_5d8_1[0x4] = var_738
                float var_5c8_1[0x4] = var_728
                float var_5b8_1[0x4] = var_718
                float var_5a8_1[0x4] = var_708
                float temp0_211[0x4] = __subps_xmmps_memps(var_868_1, var_888)
                float temp0_212[0x4] = __subps_xmmps_memps(var_6b8_1, var_8c8_1)
                float temp0_213[0x4] = __subps_xmmps_memps(temp0_90, var_8f8_1)
                float var_618_1[0x4] = temp0_207
                uint32_t var_608_1[0x4] = arg10
                float var_5f8_1[0x4] = temp0_209
                int32_t var_5e8_1[0x4] = arg7
                zmm2 = data_142d3f640
                float temp0_214[0x4] = _mm_mul_ps(temp0_213, zmm2)
                arg7 = _mm_mul_ps(var_968.o, temp0_214)
                float temp0_216[0x4] = _mm_mul_ps(var_9a8_1.o, temp0_214)
                float temp0_217[0x4] = __mulps_xmmps_memps(temp0_214, var_6a8)
                float temp0_218[0x4] = _mm_mul_ps(temp0_211, zmm2)
                zmm15 = zmm2
                float temp0_219[0x4] = _mm_mul_ps(var_778, temp0_218)
                float temp0_220[0x4] = _mm_mul_ps(var_768, temp0_218)
                float temp0_221[0x4] = _mm_mul_ps(temp0_218, arg11)
                zmm2 = data_142d3f770
                arg7 = _mm_and_ps(arg7, zmm2)
                float temp0_224[0x4] = _mm_add_ps(_mm_and_ps(temp0_219, zmm2), arg7)
                zmm4 = _mm_and_ps(temp0_216, zmm2)
                float temp0_227[0x4] = _mm_add_ps(_mm_and_ps(temp0_220, zmm2), zmm4)
                arg9 = _mm_and_ps(temp0_217, zmm2)
                float temp0_230[0x4] = _mm_add_ps(_mm_and_ps(temp0_221, zmm2), arg9)
                float temp0_231[0x4] = _mm_mul_ps(temp0_212, zmm15)
                float temp0_232[0x4] = _mm_mul_ps(var_738, temp0_231)
                float temp0_233[0x4] = _mm_mul_ps(var_728, temp0_231)
                float temp0_234[0x4] = _mm_mul_ps(temp0_231, var_718)
                float temp0_236[0x4] = _mm_add_ps(_mm_and_ps(temp0_232, zmm2), temp0_224)
                float temp0_238[0x4] = _mm_add_ps(_mm_and_ps(temp0_233, zmm2), temp0_227)
                float temp0_240[0x4] = _mm_add_ps(_mm_and_ps(temp0_234, zmm2), temp0_230)
                arg11 = _mm_sub_ps(temp0_207, temp0_236)
                float temp0_242[0x4] = _mm_sub_ps(arg10, temp0_238)
                float temp0_243[0x4] = _mm_sub_ps(temp0_209, temp0_240)
                var_968.o = _mm_add_ps(temp0_236, temp0_207)
                var_9a8_1.o = _mm_add_ps(temp0_238, arg10)
                zmm6 = _mm_add_ps(temp0_240, temp0_209)
                zmm14 = var_9b8_1 & data_142ed6810
                arg9 = zx.o(0)
                arg5 = _mm_slli_epi32(_mm_cmpeq_epi32(zmm14, zx.o(0)) & not.o(var_8b8_1), 0x1f)
                char temp0_249 = _mm_movemask_ps(arg5)
                int32_t rbp_5
                char rsi_3
                bool cond:20_1
                bool cond:21_1
                bool cond:22_1
                bool cond:32_1
                bool cond:33_1
                bool cond:44_1
                bool cond:45_1
                bool cond:58_1
                bool cond:59_1
                bool cond:72_1
                bool cond:73_1
                char rdi_6
                
                if (temp0_249 == 0)
                    arg4 = var_870
                    r10 = arg16
                    rdx_4 = var_914
                    rbp_5 = var_878_1
                    zmm2 = var_9c8
                    arg13 = var_958_1
                    arg10 = var_838_1
                    arg12 = var_848.o
                    arg6 = var_948
                    zmm15 = var_938
                    rdi_6 = temp0_7
                    zmm12 = temp0_242
                label_140358191:
                    zmm14 = _mm_cmpeq_epi32(zmm14, zx.o(0))
                    arg5 = _mm_slli_epi32(var_8b8_1 & zmm14, 0x1f)
                    
                    if (_mm_movemask_ps(arg5) == 0)
                        var_9c8 = zmm2
                        zmm4 = var_978_1
                        zmm14 = var_8e8_1
                        zmm12 = var_8a8_1
                        arg7 = var_998_1
                        arg8 = var_908_1
                        zmm2 = var_8d8_1
                        arg5 = var_928_1
                        rsi_3 = rdi_6
                        char temp4_1 = rsi_3 & 1
                        cond:20_1 = temp4_1 == 0
                        cond:21_1 = temp4_1 != 0
                        cond:22_1 = temp4_1 != 0
                        cond:32_1 = temp4_1 != 0
                        cond:33_1 = temp4_1 == 0
                        cond:44_1 = temp4_1 == 0
                        cond:45_1 = temp4_1 != 0
                        cond:58_1 = temp4_1 != 0
                        cond:59_1 = temp4_1 == 0
                        cond:72_1 = temp4_1 == 0
                        cond:73_1 = temp4_1 != 0
                        
                        if (temp4_1 != 0)
                            zmm12 = __blendps_xmmdq_memdq_immb(zmm12, var_9c8, 1)
                    else
                        zmm0 = arg5
                        char temp0_293 = _mm_movemask_ps(zmm14)
                        char temp5_1 = temp0_293 & 1
                        
                        if (temp5_1 == 0)
                            var_9c8 = zmm2
                            zmm4 = var_978_1
                            arg7 = var_998_1
                            
                            if (temp5_1 != 0)
                                goto label_1403585de
                            
                            goto label_1403581bc
                        
                        var_9c8 = _mm_blend_ps(zmm2, arg11, 1)
                        zmm4 = var_978_1
                        arg7 = var_998_1
                        
                        if (temp5_1 != 0)
                        label_1403585de:
                            arg13 = _mm_blend_ps(arg13, zmm12, 1)
                            
                            if (temp5_1 == 0)
                                goto label_1403581bc_1
                            
                            goto label_1403585eb
                        
                    label_1403581bc:
                        
                        if (temp5_1 == 0)
                        label_1403581bc_1:
                            
                            if (temp5_1 != 0)
                                goto label_1403585fd
                            
                            goto label_1403581bc_2
                        
                    label_1403585eb:
                        arg10 = __blendps_xmmdq_memdq_immb(arg10, temp0_243, 1)
                        
                        if (temp5_1 != 0)
                        label_1403585fd:
                            arg12 = __blendps_xmmdq_memdq_immb(arg12, var_968.o, 1)
                            
                            if (temp5_1 == 0)
                                goto label_1403581bc_3
                            
                            goto label_14035860c
                        
                    label_1403581bc_2:
                        
                        if (temp5_1 != 0)
                        label_14035860c:
                            arg6 = __blendps_xmmdq_memdq_immb(arg6, var_9a8_1.o, 1)
                            
                            if (temp5_1 != 0)
                            label_14035861a:
                                zmm15 = _mm_blend_ps(zmm15, zmm6, 1)
                                
                                if (temp5_1 == 0)
                                    goto label_1403581f9
                                
                                goto label_14035862c
                        else
                        label_1403581bc_3:
                            
                            if (temp5_1 != 0)
                                goto label_14035861a
                        
                        bool cond:106_1
                        bool cond:107_1
                        bool cond:126_1
                        bool cond:127_1
                        bool cond:146_1
                        bool cond:147_1
                        bool cond:165_1
                        bool cond:166_1
                        bool cond:178_1
                        bool cond:179_1
                        bool cond:194_1
                        bool cond:195_1
                        
                        if (temp5_1 == 0)
                        label_1403581f9:
                            char temp18_1 = temp0_293 & 2
                            cond:106_1 = temp18_1 != 0
                            cond:107_1 = temp18_1 == 0
                            cond:126_1 = temp18_1 == 0
                            cond:127_1 = temp18_1 != 0
                            cond:146_1 = temp18_1 != 0
                            cond:147_1 = temp18_1 == 0
                            cond:165_1 = temp18_1 == 0
                            cond:166_1 = temp18_1 != 0
                            cond:178_1 = temp18_1 != 0
                            cond:179_1 = temp18_1 == 0
                            cond:194_1 = temp18_1 == 0
                            cond:195_1 = temp18_1 != 0
                            
                            if (temp18_1 != 0)
                                goto label_140358647
                            
                            goto label_140358203
                        
                    label_14035862c:
                        arg7 = _mm_insert_epi32(arg7, 1, 0)
                        char temp17_1 = temp0_293 & 2
                        cond:106_1 = temp17_1 != 0
                        cond:107_1 = temp17_1 == 0
                        cond:126_1 = temp17_1 == 0
                        cond:127_1 = temp17_1 != 0
                        cond:146_1 = temp17_1 != 0
                        cond:147_1 = temp17_1 == 0
                        cond:165_1 = temp17_1 == 0
                        cond:166_1 = temp17_1 != 0
                        cond:178_1 = temp17_1 != 0
                        cond:179_1 = temp17_1 == 0
                        cond:194_1 = temp17_1 == 0
                        cond:195_1 = temp17_1 != 0
                        
                        if (temp17_1 != 0)
                        label_140358647:
                            var_9c8 = _mm_blend_ps(var_9c8, arg11, 2)
                            
                            if (cond:107_1)
                                goto label_140358209
                            
                            goto label_140358651
                        
                    label_140358203:
                        
                        if (not(cond:106_1))
                        label_140358209:
                            
                            if (cond:127_1)
                                goto label_14035865e
                            
                            goto label_14035820f
                        
                    label_140358651:
                        arg13 = _mm_blend_ps(arg13, zmm12, 2)
                        
                        if (not(cond:126_1))
                        label_14035865e:
                            arg10 = __blendps_xmmdq_memdq_immb(arg10, temp0_243, 2)
                            
                            if (cond:147_1)
                                goto label_140358215
                            
                            goto label_140358670
                        
                    label_14035820f:
                        
                        if (not(cond:146_1))
                        label_140358215:
                            
                            if (cond:166_1)
                                goto label_14035867f
                            
                            goto label_14035821b
                        
                    label_140358670:
                        arg12 = __blendps_xmmdq_memdq_immb(arg12, var_968.o, 2)
                        
                        if (not(cond:165_1))
                        label_14035867f:
                            arg6 = __blendps_xmmdq_memdq_immb(arg6, var_9a8_1.o, 2)
                            
                            if (cond:179_1)
                                goto label_140358221
                            
                            goto label_14035868d
                        
                    label_14035821b:
                        
                        if (not(cond:178_1))
                        label_140358221:
                            
                            if (cond:195_1)
                                goto label_14035869f
                            
                            goto label_140358227
                        
                    label_14035868d:
                        zmm15 = _mm_blend_ps(zmm15, zmm6, 2)
                        bool cond:226_1
                        bool cond:227_1
                        bool cond:246_1
                        bool cond:247_1
                        bool cond:266_1
                        bool cond:267_1
                        bool cond:286_1
                        bool cond:287_1
                        bool cond:298_1
                        bool cond:299_1
                        bool cond:314_1
                        bool cond:315_1
                        
                        if (not(cond:194_1))
                        label_14035869f:
                            arg7 = _mm_insert_epi32(arg7, 1, 1)
                            char temp37_1 = temp0_293 & 4
                            cond:226_1 = temp37_1 == 0
                            cond:227_1 = temp37_1 != 0
                            cond:246_1 = temp37_1 != 0
                            cond:247_1 = temp37_1 == 0
                            cond:266_1 = temp37_1 == 0
                            cond:267_1 = temp37_1 != 0
                            cond:286_1 = temp37_1 != 0
                            cond:287_1 = temp37_1 == 0
                            cond:298_1 = temp37_1 == 0
                            cond:299_1 = temp37_1 != 0
                            cond:314_1 = temp37_1 != 0
                            cond:315_1 = temp37_1 == 0
                            
                            if (temp37_1 == 0)
                                goto label_140358231
                            
                            goto label_1403586ba
                        
                    label_140358227:
                        char temp36_1 = temp0_293 & 4
                        cond:226_1 = temp36_1 == 0
                        cond:227_1 = temp36_1 != 0
                        cond:246_1 = temp36_1 != 0
                        cond:247_1 = temp36_1 == 0
                        cond:266_1 = temp36_1 == 0
                        cond:267_1 = temp36_1 != 0
                        cond:286_1 = temp36_1 != 0
                        cond:287_1 = temp36_1 == 0
                        cond:298_1 = temp36_1 == 0
                        cond:299_1 = temp36_1 != 0
                        cond:314_1 = temp36_1 != 0
                        cond:315_1 = temp36_1 == 0
                        
                        if (temp36_1 == 0)
                        label_140358231:
                            
                            if (cond:227_1)
                                goto label_1403586c4
                            
                            goto label_140358237
                        
                    label_1403586ba:
                        var_9c8 = _mm_blend_ps(var_9c8, arg11, 4)
                        
                        if (not(cond:226_1))
                        label_1403586c4:
                            arg13 = _mm_blend_ps(arg13, zmm12, 4)
                            
                            if (cond:247_1)
                                goto label_14035823d
                            
                            goto label_1403586d1
                        
                    label_140358237:
                        
                        if (not(cond:246_1))
                        label_14035823d:
                            
                            if (cond:267_1)
                                goto label_1403586e3
                            
                            goto label_140358243
                        
                    label_1403586d1:
                        arg10 = __blendps_xmmdq_memdq_immb(arg10, temp0_243, 4)
                        
                        if (not(cond:266_1))
                        label_1403586e3:
                            arg12 = __blendps_xmmdq_memdq_immb(arg12, var_968.o, 4)
                            
                            if (cond:287_1)
                                goto label_140358249
                            
                            goto label_1403586f2
                        
                    label_140358243:
                        
                        if (cond:286_1)
                        label_1403586f2:
                            arg6 = __blendps_xmmdq_memdq_immb(arg6, var_9a8_1.o, 4)
                            
                            if (not(cond:298_1))
                            label_140358700:
                                zmm15 = _mm_blend_ps(zmm15, zmm6, 4)
                                
                                if (cond:315_1)
                                    goto label_140358255
                                
                                goto label_140358712
                        else
                        label_140358249:
                            
                            if (cond:299_1)
                                goto label_140358700
                        
                        bool cond:345_1
                        bool cond:346_1
                        bool cond:364_1
                        bool cond:383_1
                        bool cond:384_1
                        bool cond:403_1
                        bool cond:404_1
                        bool cond:415_1
                        bool cond:416_1
                        bool cond:431_1
                        bool cond:432_1
                        
                        if (not(cond:314_1))
                        label_140358255:
                            char temp57_1 = temp0_293 & 8
                            cond:345_1 = temp57_1 == 0
                            cond:346_1 = temp57_1 != 0
                            cond:364_1 = temp57_1 != 0
                            cond:383_1 = temp57_1 == 0
                            cond:384_1 = temp57_1 != 0
                            cond:403_1 = temp57_1 != 0
                            cond:404_1 = temp57_1 == 0
                            cond:415_1 = temp57_1 == 0
                            cond:416_1 = temp57_1 != 0
                            cond:431_1 = temp57_1 == 0
                            cond:432_1 = temp57_1 != 0
                            
                            if (temp57_1 != 0)
                                goto label_14035872d
                            
                            goto label_14035825f
                        
                    label_140358712:
                        arg7 = _mm_insert_epi32(arg7, 1, 2)
                        char temp56_1 = temp0_293 & 8
                        cond:345_1 = temp56_1 == 0
                        cond:346_1 = temp56_1 != 0
                        cond:364_1 = temp56_1 != 0
                        cond:383_1 = temp56_1 == 0
                        cond:384_1 = temp56_1 != 0
                        cond:403_1 = temp56_1 != 0
                        cond:404_1 = temp56_1 == 0
                        cond:415_1 = temp56_1 == 0
                        cond:416_1 = temp56_1 != 0
                        cond:431_1 = temp56_1 == 0
                        cond:432_1 = temp56_1 != 0
                        
                        if (temp56_1 == 0)
                        label_14035825f:
                            zmm14 = var_8e8_1
                            
                            if (not(cond:345_1))
                                arg13 = _mm_blend_ps(arg13, zmm12, 8)
                        else
                        label_14035872d:
                            var_9c8 = _mm_blend_ps(var_9c8, arg11, 8)
                            zmm14 = var_8e8_1
                            
                            if (cond:346_1)
                                arg13 = _mm_blend_ps(arg13, zmm12, 8)
                        
                        zmm12 = var_8a8_1
                        arg8 = var_908_1
                        zmm2 = var_8d8_1
                        arg5 = var_928_1
                        
                        if (not(cond:364_1))
                            if (cond:384_1)
                                goto label_140358757
                            
                            goto label_14035829e
                        
                        arg10 = __blendps_xmmdq_memdq_immb(arg10, temp0_243, 8)
                        
                        if (not(cond:383_1))
                        label_140358757:
                            arg12 = __blendps_xmmdq_memdq_immb(arg12, var_968.o, 8)
                            
                            if (cond:404_1)
                                goto label_1403582a4
                            
                            goto label_140358766
                        
                    label_14035829e:
                        
                        if (not(cond:403_1))
                        label_1403582a4:
                            
                            if (cond:416_1)
                                goto label_140358774
                            
                            goto label_1403582aa
                        
                    label_140358766:
                        arg6 = __blendps_xmmdq_memdq_immb(arg6, var_9a8_1.o, 8)
                        
                        if (cond:415_1)
                        label_1403582aa:
                            
                            if (not(cond:431_1))
                                arg7 = _mm_insert_epi32(arg7, 1, 3)
                        else
                        label_140358774:
                            zmm15 = _mm_blend_ps(zmm15, zmm6, 8)
                            
                            if (cond:432_1)
                                arg7 = _mm_insert_epi32(arg7, 1, 3)
                        
                        _mm_movemask_ps(_mm_srai_epi32(zmm0, 0x1f) | arg9)
                        rsi_3 = rdi_6
                        char temp71_1 = rsi_3 & 1
                        cond:20_1 = temp71_1 == 0
                        cond:21_1 = temp71_1 != 0
                        cond:22_1 = temp71_1 != 0
                        cond:32_1 = temp71_1 != 0
                        cond:33_1 = temp71_1 == 0
                        cond:44_1 = temp71_1 == 0
                        cond:45_1 = temp71_1 != 0
                        cond:58_1 = temp71_1 != 0
                        cond:59_1 = temp71_1 == 0
                        cond:72_1 = temp71_1 == 0
                        cond:73_1 = temp71_1 != 0
                        
                        if (temp71_1 != 0)
                            zmm12 = __blendps_xmmdq_memdq_immb(zmm12, var_9c8, 1)
                else
                    float temp0_250[0x4] = _mm_min_ps(var_8a8_1, arg11)
                    char temp0_252 = _mm_movemask_ps(__pcmpeqd_xmmdq_memdq(zmm14, data_142d8f750)
                        ^ data_142d3f800)
                    char temp2_1 = temp0_252 & 1
                    
                    if (temp2_1 == 0)
                        zmm2 = var_9c8
                    else
                        zmm2 = _mm_blend_ps(var_9c8, temp0_250, 1)
                    
                    arg8 = var_838_1
                    arg12 = var_848.o
                    zmm12 = temp0_242
                    float temp0_254[0x4] = _mm_min_ps(var_8e8_1, temp0_242)
                    
                    if (temp2_1 != 0)
                        var_958_1 = _mm_blend_ps(var_958_1, temp0_254, 1)
                    
                    arg4 = var_870
                    r10 = arg16
                    rdx_4 = var_914
                    rbp_5 = var_878_1
                    rdi_6 = temp0_7
                    zmm15 = __minps_xmmps_memps(var_978_1, temp0_243)
                    
                    if (temp2_1 == 0)
                        arg10 = __maxps_xmmps_memps(var_908_1, var_968.o)
                        
                        if (temp2_1 != 0)
                            goto label_140357f0d
                        
                        goto label_140357e4b
                    
                    arg8 = _mm_blend_ps(arg8, zmm15, 1)
                    arg10 = __maxps_xmmps_memps(var_908_1, var_968.o)
                    
                    if (temp2_1 != 0)
                    label_140357f0d:
                        arg12 = _mm_blend_ps(arg12, arg10, 1)
                        zmm0 = __maxps_xmmps_memps(var_928_1, var_9a8_1.o)
                        
                        if (temp2_1 == 0)
                            goto label_140357e5e
                        
                        goto label_140357f35
                    
                label_140357e4b:
                    zmm0 = __maxps_xmmps_memps(var_928_1, var_9a8_1.o)
                    
                    if (temp2_1 != 0)
                    label_140357f35:
                        var_948 = _mm_blend_ps(var_948, zmm0, 1)
                        arg7 = _mm_max_ps(var_8d8_1, zmm6)
                        
                        if (temp2_1 != 0)
                        label_140357f5c:
                            var_938 = _mm_blend_ps(var_938, arg7, 1)
                            
                            if (temp2_1 == 0)
                                goto label_140357e6d
                            
                            goto label_140357f77
                    else
                    label_140357e5e:
                        arg7 = _mm_max_ps(var_8d8_1, zmm6)
                        
                        if (temp2_1 != 0)
                            goto label_140357f5c
                    
                    bool cond:76_1
                    bool cond:77_1
                    bool cond:92_1
                    bool cond:93_1
                    bool cond:108_1
                    bool cond:109_1
                    bool cond:128_1
                    bool cond:129_1
                    bool cond:148_1
                    bool cond:149_1
                    bool cond:167_1
                    bool cond:168_1
                    
                    if (temp2_1 == 0)
                    label_140357e6d:
                        char temp14_1 = temp0_252 & 2
                        cond:76_1 = temp14_1 != 0
                        cond:77_1 = temp14_1 == 0
                        cond:92_1 = temp14_1 == 0
                        cond:93_1 = temp14_1 != 0
                        cond:108_1 = temp14_1 != 0
                        cond:109_1 = temp14_1 == 0
                        cond:128_1 = temp14_1 == 0
                        cond:129_1 = temp14_1 != 0
                        cond:148_1 = temp14_1 != 0
                        cond:149_1 = temp14_1 == 0
                        cond:167_1 = temp14_1 == 0
                        cond:168_1 = temp14_1 != 0
                        
                        if (temp14_1 != 0)
                            goto label_140357f86
                        
                        goto label_140357e77
                    
                label_140357f77:
                    var_998_1 = __blendps_xmmdq_memdq_immb(var_998_1, var_9b8_1, 1)
                    char temp13_1 = temp0_252 & 2
                    cond:76_1 = temp13_1 != 0
                    cond:77_1 = temp13_1 == 0
                    cond:92_1 = temp13_1 == 0
                    cond:93_1 = temp13_1 != 0
                    cond:108_1 = temp13_1 != 0
                    cond:109_1 = temp13_1 == 0
                    cond:128_1 = temp13_1 == 0
                    cond:129_1 = temp13_1 != 0
                    cond:148_1 = temp13_1 != 0
                    cond:149_1 = temp13_1 == 0
                    cond:167_1 = temp13_1 == 0
                    cond:168_1 = temp13_1 != 0
                    
                    if (temp13_1 != 0)
                    label_140357f86:
                        zmm2 = _mm_blend_ps(zmm2, temp0_250, 2)
                        
                        if (cond:77_1)
                            goto label_140357e7d
                        
                        goto label_140357fa3
                    
                label_140357e77:
                    
                    if (not(cond:76_1))
                    label_140357e7d:
                        
                        if (cond:93_1)
                            goto label_140357fb3
                        
                        goto label_140357e83
                    
                label_140357fa3:
                    var_958_1 = _mm_blend_ps(var_958_1, temp0_254, 2)
                    
                    if (not(cond:92_1))
                    label_140357fb3:
                        arg8 = _mm_blend_ps(arg8, zmm15, 2)
                        
                        if (cond:109_1)
                            goto label_140357e89
                        
                        goto label_140357fc0
                    
                label_140357e83:
                    
                    if (not(cond:108_1))
                    label_140357e89:
                        
                        if (cond:129_1)
                            goto label_140357fdb
                        
                        goto label_140357e8f
                    
                label_140357fc0:
                    arg12 = _mm_blend_ps(arg12, arg10, 2)
                    
                    if (not(cond:128_1))
                    label_140357fdb:
                        var_948 = _mm_blend_ps(var_948, zmm0, 2)
                        
                        if (cond:149_1)
                            goto label_140357e95
                        
                        goto label_140357ff7
                    
                label_140357e8f:
                    
                    if (not(cond:148_1))
                    label_140357e95:
                        
                        if (cond:168_1)
                            goto label_140358012
                        
                        goto label_140357e9b
                    
                label_140357ff7:
                    var_938 = _mm_blend_ps(var_938, arg7, 2)
                    bool cond:196_1
                    bool cond:197_1
                    bool cond:212_1
                    bool cond:213_1
                    bool cond:228_1
                    bool cond:229_1
                    bool cond:248_1
                    bool cond:249_1
                    bool cond:268_1
                    bool cond:269_1
                    bool cond:288_1
                    bool cond:289_1
                    
                    if (not(cond:167_1))
                    label_140358012:
                        var_998_1 = __blendps_xmmdq_memdq_immb(var_998_1, var_9b8_1, 2)
                        char temp33_1 = temp0_252 & 4
                        cond:196_1 = temp33_1 == 0
                        cond:197_1 = temp33_1 != 0
                        cond:212_1 = temp33_1 != 0
                        cond:213_1 = temp33_1 == 0
                        cond:228_1 = temp33_1 == 0
                        cond:229_1 = temp33_1 != 0
                        cond:248_1 = temp33_1 != 0
                        cond:249_1 = temp33_1 == 0
                        cond:268_1 = temp33_1 == 0
                        cond:269_1 = temp33_1 != 0
                        cond:288_1 = temp33_1 != 0
                        cond:289_1 = temp33_1 == 0
                        
                        if (temp33_1 == 0)
                            goto label_140357ea5
                        
                        goto label_140358021
                    
                label_140357e9b:
                    char temp32_1 = temp0_252 & 4
                    cond:196_1 = temp32_1 == 0
                    cond:197_1 = temp32_1 != 0
                    cond:212_1 = temp32_1 != 0
                    cond:213_1 = temp32_1 == 0
                    cond:228_1 = temp32_1 == 0
                    cond:229_1 = temp32_1 != 0
                    cond:248_1 = temp32_1 != 0
                    cond:249_1 = temp32_1 == 0
                    cond:268_1 = temp32_1 == 0
                    cond:269_1 = temp32_1 != 0
                    cond:288_1 = temp32_1 != 0
                    cond:289_1 = temp32_1 == 0
                    
                    if (temp32_1 == 0)
                    label_140357ea5:
                        
                        if (cond:197_1)
                            goto label_14035803f
                        
                        goto label_140357eab
                    
                label_140358021:
                    zmm2 = _mm_blend_ps(zmm2, temp0_250, 4)
                    
                    if (not(cond:196_1))
                    label_14035803f:
                        var_958_1 = _mm_blend_ps(var_958_1, temp0_254, 4)
                        
                        if (cond:213_1)
                            goto label_140357eb1
                        
                        goto label_140358050
                    
                label_140357eab:
                    
                    if (not(cond:212_1))
                    label_140357eb1:
                        
                        if (cond:229_1)
                            goto label_14035805d
                        
                        goto label_140357eb7
                    
                label_140358050:
                    arg8 = _mm_blend_ps(arg8, zmm15, 4)
                    
                    if (not(cond:228_1))
                    label_14035805d:
                        arg12 = _mm_blend_ps(arg12, arg10, 4)
                        
                        if (cond:249_1)
                            goto label_140357ebd
                        
                        goto label_140358078
                    
                label_140357eb7:
                    
                    if (cond:248_1)
                    label_140358078:
                        var_948 = _mm_blend_ps(var_948, zmm0, 4)
                        
                        if (not(cond:268_1))
                        label_140358094:
                            var_938 = _mm_blend_ps(var_938, arg7, 4)
                            
                            if (cond:289_1)
                                goto label_140357ec9
                            
                            goto label_1403580af
                    else
                    label_140357ebd:
                        
                        if (cond:269_1)
                            goto label_140358094
                    
                    bool cond:316_1
                    bool cond:332_1
                    bool cond:333_1
                    bool cond:347_1
                    bool cond:365_1
                    bool cond:366_1
                    bool cond:385_1
                    bool cond:386_1
                    bool cond:405_1
                    bool cond:406_1
                    bool cond:317_1
                    
                    if (cond:288_1)
                    label_1403580af:
                        var_998_1 = __blendps_xmmdq_memdq_immb(var_998_1, var_9b8_1, 4)
                        char temp52_1 = temp0_252 & 8
                        cond:316_1 = temp52_1 == 0
                        cond:317_1 = temp52_1 != 0
                        cond:332_1 = temp52_1 == 0
                        cond:333_1 = temp52_1 != 0
                        cond:347_1 = temp52_1 != 0
                        cond:365_1 = temp52_1 == 0
                        cond:366_1 = temp52_1 != 0
                        cond:385_1 = temp52_1 != 0
                        cond:386_1 = temp52_1 == 0
                        cond:405_1 = temp52_1 == 0
                        cond:406_1 = temp52_1 != 0
                        
                        if (temp52_1 != 0)
                        label_1403580be:
                            zmm2 = _mm_blend_ps(zmm2, temp0_250, 8)
                            
                            if (cond:317_1)
                                goto label_140357edf
                            
                            goto label_1403580ca
                    else
                    label_140357ec9:
                        char temp53_1 = temp0_252 & 8
                        cond:316_1 = temp53_1 == 0
                        cond:317_1 = temp53_1 != 0
                        cond:332_1 = temp53_1 == 0
                        cond:333_1 = temp53_1 != 0
                        cond:347_1 = temp53_1 != 0
                        cond:365_1 = temp53_1 == 0
                        cond:366_1 = temp53_1 != 0
                        cond:385_1 = temp53_1 != 0
                        cond:386_1 = temp53_1 == 0
                        cond:405_1 = temp53_1 == 0
                        cond:406_1 = temp53_1 != 0
                        
                        if (temp53_1 != 0)
                            goto label_1403580be
                    
                    if (cond:316_1)
                    label_1403580ca:
                        arg13 = var_958_1
                        
                        if (not(cond:332_1))
                            arg8 = _mm_blend_ps(arg8, zmm15, 8)
                    else
                    label_140357edf:
                        arg13 = _mm_blend_ps(var_958_1, temp0_254, 8)
                        
                        if (cond:333_1)
                            arg8 = _mm_blend_ps(arg8, zmm15, 8)
                    
                    arg6 = var_948
                    zmm15 = var_938
                    
                    if (not(cond:347_1))
                        arg10 = arg8
                        
                        if (cond:366_1)
                            goto label_140358158
                        
                        goto label_1403580f2
                    
                    arg12 = _mm_blend_ps(arg12, arg10, 8)
                    arg10 = arg8
                    
                    if (not(cond:365_1))
                    label_140358158:
                        arg6 = _mm_blend_ps(arg6, zmm0, 8)
                        
                        if (cond:386_1)
                            goto label_1403580f4
                        
                        goto label_140358160
                    
                label_1403580f2:
                    
                    if (not(cond:385_1))
                    label_1403580f4:
                        
                        if (cond:406_1)
                            goto label_140358176
                        
                        goto label_1403580f6
                    
                label_140358160:
                    zmm15 = _mm_blend_ps(zmm15, arg7, 8)
                    
                    if (cond:405_1)
                    label_1403580f6:
                        
                        if (rdi_6 != temp0_249)
                            arg9 = _mm_srai_epi32(arg5, 0x1f)
                            goto label_140358191
                    else
                    label_140358176:
                        var_998_1 = __blendps_xmmdq_memdq_immb(var_998_1, var_9b8_1, 8)
                        
                        if (rdi_6 != temp0_249)
                            arg9 = _mm_srai_epi32(arg5, 0x1f)
                            goto label_140358191
                    
                    var_9c8 = zmm2
                    zmm14 = var_8e8_1
                    zmm12 = var_8a8_1
                    arg7 = var_998_1
                    arg8 = var_908_1
                    zmm2 = var_8d8_1
                    arg5 = var_928_1
                    zmm4 = var_978_1
                    rsi_3 = rdi_6
                    char temp72_1 = rsi_3 & 1
                    cond:20_1 = temp72_1 == 0
                    cond:21_1 = temp72_1 != 0
                    cond:22_1 = temp72_1 != 0
                    cond:32_1 = temp72_1 != 0
                    cond:33_1 = temp72_1 == 0
                    cond:44_1 = temp72_1 == 0
                    cond:45_1 = temp72_1 != 0
                    cond:58_1 = temp72_1 != 0
                    cond:59_1 = temp72_1 == 0
                    cond:72_1 = temp72_1 == 0
                    cond:73_1 = temp72_1 != 0
                    
                    if (temp72_1 != 0)
                        zmm12 = __blendps_xmmdq_memdq_immb(zmm12, var_9c8, 1)
                
                if (not(cond:22_1))
                    if (cond:21_1)
                        goto label_1403583dd
                    
                    goto label_1403582e9
                
                zmm14 = _mm_blend_ps(zmm14, arg13, 1)
                
                if (not(cond:20_1))
                label_1403583dd:
                    zmm4 = _mm_blend_ps(zmm4, arg10, 1)
                    
                    if (cond:33_1)
                        goto label_1403582ef
                    
                    goto label_1403583ea
                
            label_1403582e9:
                
                if (not(cond:32_1))
                label_1403582ef:
                    
                    if (cond:45_1)
                        goto label_1403583f7
                    
                    goto label_1403582f5
                
            label_1403583ea:
                arg8 = _mm_blend_ps(arg8, arg12, 1)
                
                if (not(cond:44_1))
                label_1403583f7:
                    arg5 = _mm_blend_ps(arg5, arg6, 1)
                    
                    if (cond:59_1)
                        goto label_1403582fb
                    
                    goto label_140358403
                
            label_1403582f5:
                
                if (not(cond:58_1))
                label_1403582fb:
                    
                    if (cond:73_1)
                        goto label_14035841c
                    
                    goto label_140358301
                
            label_140358403:
                zmm2 = _mm_blend_ps(zmm2, zmm15, 1)
                bool cond:104_1
                bool cond:105_1
                bool cond:124_1
                bool cond:125_1
                bool cond:144_1
                bool cond:145_1
                bool cond:163_1
                bool cond:164_1
                bool cond:176_1
                bool cond:177_1
                bool cond:192_1
                bool cond:193_1
                
                if (not(cond:72_1))
                label_14035841c:
                    var_9b8_1 = _mm_blend_epi16(var_9b8_1, arg7, 3)
                    char temp22_1 = rsi_3 & 2
                    cond:104_1 = temp22_1 == 0
                    cond:105_1 = temp22_1 != 0
                    cond:124_1 = temp22_1 != 0
                    cond:125_1 = temp22_1 == 0
                    cond:144_1 = temp22_1 == 0
                    cond:145_1 = temp22_1 != 0
                    cond:163_1 = temp22_1 != 0
                    cond:164_1 = temp22_1 == 0
                    cond:176_1 = temp22_1 == 0
                    cond:177_1 = temp22_1 != 0
                    cond:192_1 = temp22_1 != 0
                    cond:193_1 = temp22_1 == 0
                    
                    if (temp22_1 == 0)
                        goto label_14035830b
                    
                    goto label_14035842c
                
            label_140358301:
                char temp21_1 = rsi_3 & 2
                cond:104_1 = temp21_1 == 0
                cond:105_1 = temp21_1 != 0
                cond:124_1 = temp21_1 != 0
                cond:125_1 = temp21_1 == 0
                cond:144_1 = temp21_1 == 0
                cond:145_1 = temp21_1 != 0
                cond:163_1 = temp21_1 != 0
                cond:164_1 = temp21_1 == 0
                cond:176_1 = temp21_1 == 0
                cond:177_1 = temp21_1 != 0
                cond:192_1 = temp21_1 != 0
                cond:193_1 = temp21_1 == 0
                
                if (temp21_1 == 0)
                label_14035830b:
                    
                    if (cond:105_1)
                        goto label_14035843a
                    
                    goto label_140358311
                
            label_14035842c:
                zmm12 = __blendps_xmmdq_memdq_immb(zmm12, var_9c8, 2)
                
                if (not(cond:104_1))
                label_14035843a:
                    zmm14 = _mm_blend_ps(zmm14, arg13, 2)
                    
                    if (cond:125_1)
                        goto label_140358317
                    
                    goto label_140358447
                
            label_140358311:
                
                if (not(cond:124_1))
                label_140358317:
                    
                    if (cond:145_1)
                        goto label_140358454
                    
                    goto label_14035831d
                
            label_140358447:
                zmm4 = _mm_blend_ps(zmm4, arg10, 2)
                
                if (not(cond:144_1))
                label_140358454:
                    arg8 = _mm_blend_ps(arg8, arg12, 2)
                    
                    if (cond:164_1)
                        goto label_140358323
                    
                    goto label_140358461
                
            label_14035831d:
                
                if (cond:163_1)
                label_140358461:
                    arg5 = _mm_blend_ps(arg5, arg6, 2)
                    
                    if (not(cond:176_1))
                    label_14035846d:
                        zmm2 = _mm_blend_ps(zmm2, zmm15, 2)
                        
                        if (cond:193_1)
                            goto label_14035832f
                        
                        goto label_140358486
                else
                label_140358323:
                    
                    if (cond:177_1)
                        goto label_14035846d
                
                bool cond:224_1
                bool cond:225_1
                bool cond:244_1
                bool cond:245_1
                bool cond:264_1
                bool cond:265_1
                bool cond:284_1
                bool cond:285_1
                bool cond:296_1
                bool cond:297_1
                bool cond:312_1
                bool cond:313_1
                
                if (not(cond:192_1))
                label_14035832f:
                    char temp41_1 = rsi_3 & 4
                    cond:224_1 = temp41_1 != 0
                    cond:225_1 = temp41_1 == 0
                    cond:244_1 = temp41_1 == 0
                    cond:245_1 = temp41_1 != 0
                    cond:264_1 = temp41_1 != 0
                    cond:265_1 = temp41_1 == 0
                    cond:284_1 = temp41_1 == 0
                    cond:285_1 = temp41_1 != 0
                    cond:296_1 = temp41_1 != 0
                    cond:297_1 = temp41_1 == 0
                    cond:312_1 = temp41_1 == 0
                    cond:313_1 = temp41_1 != 0
                    
                    if (temp41_1 != 0)
                        goto label_140358496
                    
                    goto label_140358339
                
            label_140358486:
                var_9b8_1 = _mm_blend_epi16(var_9b8_1, arg7, 0xc)
                char temp40_1 = rsi_3 & 4
                cond:224_1 = temp40_1 != 0
                cond:225_1 = temp40_1 == 0
                cond:244_1 = temp40_1 == 0
                cond:245_1 = temp40_1 != 0
                cond:264_1 = temp40_1 != 0
                cond:265_1 = temp40_1 == 0
                cond:284_1 = temp40_1 == 0
                cond:285_1 = temp40_1 != 0
                cond:296_1 = temp40_1 != 0
                cond:297_1 = temp40_1 == 0
                cond:312_1 = temp40_1 == 0
                cond:313_1 = temp40_1 != 0
                
                if (temp40_1 != 0)
                label_140358496:
                    zmm12 = __blendps_xmmdq_memdq_immb(zmm12, var_9c8, 4)
                    
                    if (cond:225_1)
                        goto label_14035833f
                    
                    goto label_1403584a4
                
            label_140358339:
                
                if (not(cond:224_1))
                label_14035833f:
                    
                    if (cond:245_1)
                        goto label_1403584b1
                    
                    goto label_140358345
                
            label_1403584a4:
                zmm14 = _mm_blend_ps(zmm14, arg13, 4)
                
                if (not(cond:244_1))
                label_1403584b1:
                    zmm4 = _mm_blend_ps(zmm4, arg10, 4)
                    
                    if (cond:265_1)
                        goto label_14035834b
                    
                    goto label_1403584be
                
            label_140358345:
                
                if (not(cond:264_1))
                label_14035834b:
                    
                    if (cond:285_1)
                        goto label_1403584cb
                    
                    goto label_140358351
                
            label_1403584be:
                arg8 = _mm_blend_ps(arg8, arg12, 4)
                
                if (not(cond:284_1))
                label_1403584cb:
                    arg5 = _mm_blend_ps(arg5, arg6, 4)
                    
                    if (cond:297_1)
                        goto label_140358357
                    
                    goto label_1403584d7
                
            label_140358351:
                
                if (not(cond:296_1))
                label_140358357:
                    
                    if (cond:313_1)
                        goto label_1403584f0
                    
                    goto label_14035835d
                
            label_1403584d7:
                zmm2 = _mm_blend_ps(zmm2, zmm15, 4)
                bool cond:343_1
                bool cond:344_1
                bool cond:362_1
                bool cond:363_1
                bool cond:381_1
                bool cond:382_1
                bool cond:401_1
                bool cond:402_1
                bool cond:413_1
                bool cond:414_1
                bool cond:429_1
                bool cond:430_1
                
                if (not(cond:312_1))
                label_1403584f0:
                    var_9b8_1 = _mm_blend_epi16(var_9b8_1, arg7, 0x30)
                    char temp61_1 = rsi_3 & 8
                    cond:343_1 = temp61_1 == 0
                    cond:344_1 = temp61_1 != 0
                    cond:362_1 = temp61_1 != 0
                    cond:363_1 = temp61_1 == 0
                    cond:381_1 = temp61_1 == 0
                    cond:382_1 = temp61_1 != 0
                    cond:401_1 = temp61_1 != 0
                    cond:402_1 = temp61_1 == 0
                    cond:413_1 = temp61_1 == 0
                    cond:414_1 = temp61_1 != 0
                    cond:429_1 = temp61_1 == 0
                    cond:430_1 = temp61_1 != 0
                    
                    if (temp61_1 == 0)
                        goto label_140358367
                    
                    goto label_140358500
                
            label_14035835d:
                char temp60_1 = rsi_3 & 8
                cond:343_1 = temp60_1 == 0
                cond:344_1 = temp60_1 != 0
                cond:362_1 = temp60_1 != 0
                cond:363_1 = temp60_1 == 0
                cond:381_1 = temp60_1 == 0
                cond:382_1 = temp60_1 != 0
                cond:401_1 = temp60_1 != 0
                cond:402_1 = temp60_1 == 0
                cond:413_1 = temp60_1 == 0
                cond:414_1 = temp60_1 != 0
                cond:429_1 = temp60_1 == 0
                cond:430_1 = temp60_1 != 0
                
                if (temp60_1 == 0)
                label_140358367:
                    
                    if (cond:344_1)
                        goto label_14035850e
                    
                    goto label_14035836d
                
            label_140358500:
                zmm12 = __blendps_xmmdq_memdq_immb(zmm12, var_9c8, 8)
                
                if (not(cond:343_1))
                label_14035850e:
                    zmm14 = _mm_blend_ps(zmm14, arg13, 8)
                    
                    if (cond:363_1)
                        goto label_140358373
                    
                    goto label_14035851b
                
            label_14035836d:
                
                if (not(cond:362_1))
                label_140358373:
                    
                    if (cond:382_1)
                        goto label_140358528
                    
                    goto label_140358379
                
            label_14035851b:
                zmm4 = _mm_blend_ps(zmm4, arg10, 8)
                
                if (not(cond:381_1))
                label_140358528:
                    arg8 = _mm_blend_ps(arg8, arg12, 8)
                    
                    if (cond:402_1)
                        goto label_14035837f
                    
                    goto label_140358535
                
            label_140358379:
                
                if (not(cond:401_1))
                label_14035837f:
                    
                    if (cond:414_1)
                        goto label_140358548
                    
                    goto label_140358385
                
            label_140358535:
                arg5 = _mm_blend_ps(arg5, arg6, 8)
                
                if (cond:413_1)
                label_140358385:
                    var_8d8_1 = zmm2
                    arg9 = arg10
                    
                    if (not(cond:429_1))
                    label_140358397:
                        zmm2 = arg5
                        arg11 = zmm15
                        arg10 = arg7
                        var_9b8_1 = _mm_blend_epi16(var_9b8_1, arg7, 0xc0)
                        rbp_1 = zx.q(rbp_5 + 4)
                        
                        if (rbp_1.d s>= rdx_4)
                            break
                        
                        continue
                else
                label_140358548:
                    var_8d8_1 = _mm_blend_ps(zmm2, zmm15, 8)
                    arg9 = arg10
                    
                    if (cond:430_1)
                        goto label_140358397
                
                arg10 = arg7
                zmm2 = arg5
                arg11 = zmm15
                rbp_1 = zx.q(rbp_5 + 4)
                
                if (rbp_1.d s>= rdx_4)
                    break
    
    int64_t* rdi_9
    
    if (rbp_1.d s>= r10)
        rdi_9 = arg15
        zmm6 = zmm2
        zmm2 = var_8d8_1
        arg6 = arg8
    else
        float var_8a8_3[0x4] = zmm12
        zmm0 = __paddd_xmmdq_memdq(_mm_shuffle_epi32(zx.o(rbp_1.d), 0), data_142e11d00)
        int64_t r11_5 = sx.q(rbp_1.d << 2)
        arg12 = _mm_cmpgt_epi32(_mm_shuffle_epi32(zx.o(r10), 0), zmm0)
        uint32_t temp0_713 = _mm_movemask_ps(arg12)
        uint64_t r14_7 = zx.q(temp0_713) & 0xfffffff9
        
        if (r14_7 != 9)
            if ((temp0_713.b & 1) != 0)
                var_7b8 = *(arg2 + r11_5)
            
            if ((temp0_713.b & 2) == 0)
                if ((temp0_713.b & 4) != 0)
                    goto label_14035befa
                
                goto label_14035a6ac
            
            int32_t var_7b4_2 = *(arg2 + r11_5 + 4)
            int32_t var_7ac_2
            
            if ((temp0_713.b & 4) == 0)
            label_14035a6ac:
                
                if ((temp0_713.b & 8) != 0)
                    var_7ac_2 = *(arg2 + r11_5 + 0xc)
            else
            label_14035befa:
                int32_t var_7b0_2 = *(arg2 + r11_5 + 8)
                
                if ((temp0_713.b & 8) != 0)
                    var_7ac_2 = *(arg2 + r11_5 + 0xc)
            arg10 = var_7b8.o
        else
            arg10 = *(arg2 + r11_5)
        
        zmm0 = __pmulld_xmmdq_memdq(zmm0, data_143442c00) & arg12
        int64_t rcx_66 = sx.q(zmm0[0])
        void* rsi_8 = &(*arg4)[rcx_66]
        arg11 = (*arg4)[rcx_66]
        int64_t rcx_68 = sx.q(_mm_extract_epi32(zmm0, 1))
        void* r10_7 = &(*arg4)[rcx_68]
        int64_t rbx_31 = sx.q(_mm_extract_epi32(zmm0, 2))
        void* rbp_17 = &(*arg4)[rbx_31]
        int64_t rdx_46 = sx.q(_mm_extract_epi32(zmm0, 3))
        void* rdi_14 = &(*arg4)[rdx_46]
        arg11 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg11, (*arg4)[rcx_68], 0x10), 
                (*arg4)[rbx_31], 0x20), 
            (*arg4)[rdx_46], 0x30)
        zmm0 = data_142fc95e0 & arg12
        zmm12 = *(zx.q(zmm0[0]) + rsi_8)
        uint64_t rcx_70 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint64_t rdx_47 = zx.q(_mm_extract_epi32(zmm0, 2))
        uint64_t rbx_32 = zx.q(_mm_extract_epi32(zmm0, 3))
        float temp0_802[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm12, *(rcx_70 + r10_7), 0x10), 
                *(rdx_47 + rbp_17), 0x20), 
            *(rbx_32 + rdi_14), 0x30)
        zmm0 = data_142fc95f0 & arg12
        arg13 = *(zx.q(zmm0[0]) + rsi_8)
        uint64_t rcx_72 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint64_t rdx_48 = zx.q(_mm_extract_epi32(zmm0, 2))
        uint64_t rbx_33 = zx.q(_mm_extract_epi32(zmm0, 3))
        float temp0_808[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg13, *(rcx_72 + r10_7), 0x10), 
                *(rdx_48 + rbp_17), 0x20), 
            *(rbx_33 + rdi_14), 0x30)
        zmm0 = data_143442650 & arg12
        arg6 = *(zx.q(zmm0[0]) + rsi_8)
        uint64_t rcx_74 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint64_t rdx_49 = zx.q(_mm_extract_epi32(zmm0, 2))
        uint64_t rbx_34 = zx.q(_mm_extract_epi32(zmm0, 3))
        float temp0_814[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg6, *(rcx_74 + r10_7), 0x10), 
                *(rdx_49 + rbp_17), 0x20), 
            *(rbx_34 + rdi_14), 0x30)
        zmm0 = data_143442660 & arg12
        arg7 = *(zx.q(zmm0[0]) + rsi_8)
        uint64_t rcx_76 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint64_t rdx_50 = zx.q(_mm_extract_epi32(zmm0, 2))
        uint64_t rbx_35 = zx.q(_mm_extract_epi32(zmm0, 3))
        arg7 = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(arg7, *(rcx_76 + r10_7), 0x10), 
                *(rdx_50 + rbp_17), 0x20), 
            *(rbx_35 + rdi_14), 0x30)
        zmm0 = data_143442670 & arg12
        zmm6 = *(zx.q(zmm0[0]) + rsi_8)
        uint64_t rcx_78 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint64_t rdx_51 = zx.q(_mm_extract_epi32(zmm0, 2))
        int32_t* rbx_36 = zx.q(_mm_extract_epi32(zmm0, 3))
        float temp0_826[0x4] = __insertps_xmmps_memd_immb(
            __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm6, *(rcx_78 + r10_7), 0x10), 
                *(rdx_51 + rbp_17), 0x20), 
            *(rbx_36 + rdi_14), 0x30)
        zmm0 = data_143442700 & arg12
        uint64_t rcx_79 = zx.q(zmm0[0])
        uint8_t* rdx_52 = zx.q(_mm_extract_epi32(zmm0, 1))
        uint8_t* rbx_37 = zx.q(_mm_extract_epi32(zmm0, 2))
        uint32_t rcx_80 = zx.d(*(rcx_79 + rsi_8))
        uint8_t* rsi_9 = zx.q(_mm_extract_epi32(zmm0, 3))
        zmm0 = __pinsrb_xmmdq_memb_immb(
            __pinsrb_xmmdq_memb_immb(__pinsrb_xmmdq_memb_immb(zx.o(rcx_80), *(rdx_52 + r10_7), 4), 
                *(rbx_37 + rbp_17), 8), 
            *(rsi_9 + rdi_14), 0xc)
        float var_928_3[0x4] = zmm2
        float var_978_3[0x4] = zmm4
        float var_8e8_4[0x4] = zmm14
        float var_908_4[0x4] = arg8
        
        if (r14_7 != 9)
            if ((temp0_713.b & 1) == 0)
                if ((temp0_713.b & 2) != 0)
                    goto label_14035bf94
                
                goto label_14035b3ac
            
            var_7b8 = *(arg1 + r11_5)
            
            if ((temp0_713.b & 2) != 0)
            label_14035bf94:
                int32_t var_7b4_4 = *(arg1 + r11_5 + 4)
                
                if ((temp0_713.b & 4) == 0)
                    goto label_14035b3b4
                
                goto label_14035bfb0
            
        label_14035b3ac:
            int32_t var_7ac_4
            
            if ((temp0_713.b & 4) != 0)
            label_14035bfb0:
                int32_t var_7b0_4 = *(arg1 + r11_5 + 8)
                
                if ((temp0_713.b & 8) != 0)
                    var_7ac_4 = *(arg1 + r11_5 + 0xc)
            else
            label_14035b3b4:
                
                if ((temp0_713.b & 8) != 0)
                    var_7ac_4 = *(arg1 + r11_5 + 0xc)
            arg5 = var_7b8.o
        else
            arg5 = *(arg1 + r11_5)
        
        zmm2 = _mm_cmpeq_epi32(_mm_cmpeq_epi32(zmm2, zmm2), arg5)
            & not.o(_mm_cmpeq_epi32(zmm0 & data_142ed6810, zx.o(0)) & not.o(arg12))
        uint32_t temp0_1062 = _mm_movemask_ps(zmm2)
        
        if (temp0_1062.b == 0)
            rdi_9 = arg15
            zmm2 = var_8d8_1
            zmm6 = var_928_3
            zmm4 = var_978_3
            zmm14 = var_8e8_4
            arg6 = var_908_4
            zmm12 = var_8a8_3
        else
            float var_998_3[0x4] = temp0_802
            int32_t var_8c8_4[0x4] = arg7
            var_898.o = temp0_814
            var_9c8 = arg11
            var_968.o = temp0_826
            var_888[0] = temp0_1062
            uint32_t temp0_1063[0x4] = _mm_slli_epi32(arg10, 6)
            float var_8f8_3[0x4] = zmm2
            int32_t temp0_1065[0x4] = _mm_srai_epi32(_mm_slli_epi32(zmm2, 0x1f), 0x1f)
            arg10 = temp0_1063 & temp0_1065
            int64_t rax_143 = sx.q(arg10[0])
            void* rdx_54 = arg3 + rax_143
            zmm12 = *(arg3 + rax_143)
            int64_t r9_6 = sx.q(_mm_extract_epi32(arg10, 1))
            void* rbp_20 = arg3 + r9_6
            int64_t rcx_98 = sx.q(_mm_extract_epi32(arg10, 2))
            void* rbx_39 = arg3 + rcx_98
            int64_t rax_145 = sx.q(_mm_extract_epi32(arg10, 3))
            void* rdi_18 = arg3 + rax_145
            float temp0_1071[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(__insertps_xmmps_memd_immb(zmm12, *(arg3 + r9_6), 0x10), 
                    *(arg3 + rcx_98), 0x20), 
                *(arg3 + rax_145), 0x30)
            zmm0 = data_142fc95e0 & temp0_1065
            zmm15 = *(zx.q(zmm0[0]) + rdx_54)
            int32_t* rax_147 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_99 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_26 = zx.q(_mm_extract_epi32(zmm0, 3))
            zmm15 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm15, *(rax_147 + rbp_20), 0x10), 
                    *(rcx_99 + rbx_39), 0x20), 
                *(rsi_26 + rdi_18), 0x30)
            zmm0 = data_142fc95f0 & temp0_1065
            zmm14 = *(zx.q(zmm0[0]) + rdx_54)
            int32_t* rax_149 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_100 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_27 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_1083[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm14, *(rax_149 + rbp_20), 0x10), 
                    *(rcx_100 + rbx_39), 0x20), 
                *(rsi_27 + rdi_18), 0x30)
            zmm0 = data_143442650 & temp0_1065
            zmm4 = *(zx.q(zmm0[0]) + rdx_54)
            int32_t* rax_151 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_101 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_28 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_1089[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm4, *(rax_151 + rbp_20), 0x10), 
                    *(rcx_101 + rbx_39), 0x20), 
                *(rsi_28 + rdi_18), 0x30)
            zmm0 = data_143442660 & temp0_1065
            arg6 = *(zx.q(zmm0[0]) + rdx_54)
            int32_t* rax_153 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_102 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_29 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_1095[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg6, *(rax_153 + rbp_20), 0x10), 
                    *(rcx_102 + rbx_39), 0x20), 
                *(rsi_29 + rdi_18), 0x30)
            zmm0 = data_143442670 & temp0_1065
            arg5 = *(zx.q(zmm0[0]) + rdx_54)
            int32_t* rax_155 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_103 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_30 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_1101[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg5, *(rax_155 + rbp_20), 0x10), 
                    *(rcx_103 + rbx_39), 0x20), 
                *(rsi_30 + rdi_18), 0x30)
            zmm0 = data_143442700 & temp0_1065
            zmm2 = *(zx.q(zmm0[0]) + rdx_54)
            int32_t* rax_157 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_104 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_31 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_1107[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm2, *(rax_157 + rbp_20), 0x10), 
                    *(rcx_104 + rbx_39), 0x20), 
                *(rsi_31 + rdi_18), 0x30)
            zmm0 = data_1434b2e20 & temp0_1065
            arg9 = *(zx.q(zmm0[0]) + rdx_54)
            int32_t* rax_159 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_105 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_32 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_1113[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg9, *(rax_159 + rbp_20), 0x10), 
                    *(rcx_105 + rbx_39), 0x20), 
                *(rsi_32 + rdi_18), 0x30)
            zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[0].o & temp0_1065
            arg10 = *(zx.q(zmm0[0]) + rdx_54)
            int32_t* rax_161 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_106 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_33 = zx.q(_mm_extract_epi32(zmm0, 3))
            arg10 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg10, *(rax_161 + rbp_20), 0x10), 
                    *(rcx_106 + rbx_39), 0x20), 
                *(rsi_33 + rdi_18), 0x30)
            zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[4].o & temp0_1065
            arg11 = *(zx.q(zmm0[0]) + rdx_54)
            int32_t* rax_163 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_107 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_34 = zx.q(_mm_extract_epi32(zmm0, 3))
            arg11 = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg11, *(rax_163 + rbp_20), 0x10), 
                    *(rcx_107 + rbx_39), 0x20), 
                *(rsi_34 + rdi_18), 0x30)
            zmm0 = (*U"    $$$$((((,,,,000044448888<<<<")[8].o & temp0_1065
            arg8 = *(zx.q(zmm0[0]) + rdx_54)
            int32_t* rax_165 = zx.q(_mm_extract_epi32(zmm0, 1))
            int32_t* rcx_108 = zx.q(_mm_extract_epi32(zmm0, 2))
            int32_t* rsi_35 = zx.q(_mm_extract_epi32(zmm0, 3))
            float temp0_1131[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg8, *(rax_165 + rbp_20), 0x10), 
                    *(rcx_108 + rbx_39), 0x20), 
                *(rsi_35 + rdi_18), 0x30)
            zmm6 = (*U"    $$$$((((,,,,000044448888<<<<")[0xc].o & temp0_1065
            zmm0 = *(zx.q(zmm6[0]) + rdx_54)
            int32_t* rax_167 = zx.q(_mm_extract_epi32(zmm6, 1))
            int32_t* rcx_109 = zx.q(_mm_extract_epi32(zmm6, 2))
            int32_t* rsi_36 = zx.q(_mm_extract_epi32(zmm6, 3))
            float temp0_1137[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm0, *(rax_167 + rbp_20), 0x10), 
                    *(rcx_109 + rbx_39), 0x20), 
                *(rsi_36 + rdi_18), 0x30)
            arg12 = (*U"    $$$$((((,,,,000044448888<<<<")[0x10].o & temp0_1065
            zmm6 = *(zx.q(arg12[0]) + rdx_54)
            int32_t* rax_169 = zx.q(_mm_extract_epi32(arg12, 1))
            int32_t* rcx_110 = zx.q(_mm_extract_epi32(arg12, 2))
            int32_t* rsi_37 = zx.q(_mm_extract_epi32(arg12, 3))
            float temp0_1143[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(zmm6, *(rax_169 + rbp_20), 0x10), 
                    *(rcx_110 + rbx_39), 0x20), 
                *(rsi_37 + rdi_18), 0x30)
            arg12 = (*U"    $$$$((((,,,,000044448888<<<<")[0x14].o & temp0_1065
            int32_t* rax_170 = zx.q(_mm_extract_epi32(arg12, 1))
            var_948[0].q = zx.q(_mm_extract_epi32(arg12, 2))
            float (* rax_172)[0x4] = zx.q(arg12[0])
            var_938[0].q = zx.q(_mm_extract_epi32(arg12, 3))
            arg12 = (*U"    $$$$((((,,,,000044448888<<<<")[0x18].o & temp0_1065
            float (* r14_9)[0x4] = zx.q(arg12[0])
            int32_t* r12_5 = zx.q(_mm_extract_epi32(arg12, 1))
            int32_t* r13_7 = zx.q(_mm_extract_epi32(arg12, 2))
            int32_t* r15_7 = zx.q(_mm_extract_epi32(arg12, 3))
            arg12 = *(rax_172 + rdx_54)
            arg7 = temp0_1065 & (*U"    $$$$((((,,,,000044448888<<<<")[0x1c].o
            float (* r11_7)[0x4] = zx.q(arg7[0])
            int32_t* r9_7 = zx.q(_mm_extract_epi32(arg7, 1))
            int32_t* rsi_38 = zx.q(_mm_extract_epi32(arg7, 2))
            int32_t* rax_173 = zx.q(_mm_extract_epi32(arg7, 3))
            float var_2e8[0x4] = temp0_1071
            int32_t var_2d8[0x4] = zmm15
            float var_2c8[0x4] = temp0_1083
            float var_2b8[0x4] = temp0_1089
            float var_2a8_1[0x4] = temp0_1095
            float var_298_1[0x4] = temp0_1101
            float var_288_1[0x4] = temp0_1107
            float var_278_1[0x4] = temp0_1113
            uint32_t var_268_1[0x4] = arg10
            int32_t var_258_1[0x4] = arg11
            float var_248_1[0x4] = temp0_1131
            float var_238_1[0x4] = temp0_1137
            float var_228_1[0x4] = temp0_1143
            float var_218_1[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(arg12, *(rax_170 + rbp_20), 0x10), 
                    *(var_948[0].q + rbx_39), 0x20), 
                *(var_938[0].q + rdi_18), 0x30)
            float var_208_1[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r14_9 + rdx_54), *(r12_5 + rbp_20), 0x10), 
                    *(r13_7 + rbx_39), 0x20), 
                *(r15_7 + rdi_18), 0x30)
            float var_1f8_1[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(
                    __insertps_xmmps_memd_immb(*(r11_7 + rdx_54), *(r9_7 + rbp_20), 0x10), 
                    *(rsi_38 + rbx_39), 0x20), 
                *(rax_173 + rdi_18), 0x30)
            int32_t* var_9a8_4
            var_9a8_4.o = (*arg14)[9]
            arg10 = (*arg14)[0xd]
            arg11 = (*arg14)[2]
            zmm14 = (*arg14)[3]
            arg12 = (*arg14)[6]
            arg13 = (*arg14)[0xa]
            arg8 = (*arg14)[0xe]
            zmm0 = (*arg14)[7]
            arg5 = (*arg14)[0xb]
            
            for (int64_t i_4 = 0; i_4 != 0x100; i_4 += 0x40)
                arg7 = *arg14
                zmm12 = arg14[1][0]
                arg7 = _mm_shuffle_ps(arg7, arg7, 0)
                zmm15 = *(&var_2e8 + i_4)
                zmm4 = *(&var_2d8 + i_4)
                arg6 = *(&var_2c8 + i_4)
                zmm2 = *(&var_2b8 + i_4)
                arg7 = _mm_add_ps(_mm_mul_ps(arg7, zmm15), zx.o(0))
                float temp0_1167[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm12, zmm12, 0), zmm4), arg7)
                arg7 = arg14[2][0]
                arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), arg6), temp0_1167)
                zmm6 = arg14[3][0]
                *(&var_7b8 + i_4) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm2), arg7)
                arg7 = (*arg14)[1]
                zmm6 = (*arg14)[5]
                arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), zmm15), zx.o(0))
                float temp0_1179[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0), zmm4), arg7)
                arg7 = var_9a8_4.o
                arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg7, arg7, 0), arg6), temp0_1179)
                *(&var_7a8 + i_4) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg10, arg10, 0), zmm2), arg7)
                arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg11, arg11, 0), zmm15), zx.o(0))
                float temp0_1191[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg12, arg12, 0), zmm4), arg7)
                arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg13, arg13, 0), arg6), temp0_1191)
                *(&var_798 + i_4) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg8, arg8, 0), zmm2), arg7)
                arg7 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm14, zmm14, 0), zmm15), zx.o(0))
                float temp0_1203[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(zmm0, zmm0, 0), zmm4), arg7)
                float temp0_1206[0x4] =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg5, arg5, 0), arg6), temp0_1203)
                arg6 = (*arg14)[0xf]
                *(&var_788 + i_4) =
                    _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(arg6, arg6, 0), zmm2), temp0_1206)
            
            zmm15 = var_7b8.o
            arg7 = var_7a8
            int32_t var_948_3[0x4] = arg7
            arg8 = var_798
            arg11 = var_778
            zmm2 = var_898.o
            float temp0_1210[0x4] = _mm_add_ps(var_9c8, zmm2)
            zmm0 = data_142d3f640
            float temp0_1211[0x4] = _mm_mul_ps(temp0_1210, zmm0)
            arg5 = zmm0
            float temp0_1212[0x4] = _mm_mul_ps(temp0_1211, zmm15)
            float temp0_1213[0x4] = _mm_mul_ps(temp0_1211, arg7)
            zmm0 = var_8c8_4
            float temp0_1215[0x4] = _mm_mul_ps(_mm_add_ps(var_998_3, zmm0), arg5)
            zmm12 = arg5
            arg7 = _mm_add_ps(_mm_mul_ps(temp0_1215, arg11), temp0_1212)
            float temp0_1219[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1215, var_768), temp0_1213)
            float temp0_1220[0x4] = _mm_mul_ps(temp0_1211, arg8)
            var_9a8_4.o = var_758
            arg10 = _mm_add_ps(_mm_mul_ps(temp0_1215, var_758), temp0_1220)
            arg5 = var_788
            float var_6b8_3[0x4] = arg5
            float temp0_1223[0x4] = _mm_mul_ps(temp0_1211, arg5)
            arg5 = var_748
            float var_8b8_4[0x4] = arg5
            float temp0_1225[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1215, arg5), temp0_1223)
            arg5 = var_968.o
            float temp0_1227[0x4] = _mm_mul_ps(_mm_add_ps(temp0_808, arg5), zmm12)
            float temp0_1229[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1227, var_738), arg7)
            float temp0_1231[0x4] = _mm_add_ps(_mm_mul_ps(temp0_1227, var_728), temp0_1219)
            arg7 = _mm_add_ps(_mm_mul_ps(temp0_1227, var_718), arg10)
            arg10 = var_708
            float temp0_1234[0x4] = _mm_mul_ps(temp0_1227, arg10)
            float temp0_1235[0x4] = __addps_xmmps_memps(temp0_1229, var_6f8)
            float temp0_1236[0x4] = __addps_xmmps_memps(temp0_1231, var_6e8)
            arg7 = __addps_xmmps_memps(arg7, var_6d8)
            float temp0_1239[0x4] = __addps_xmmps_memps(_mm_add_ps(temp0_1234, temp0_1225), var_6c8)
            var_7b8.o = zmm15
            var_7a8 = var_948_3
            var_798 = arg8
            var_788 = var_6b8_3
            int32_t var_5d8_4[0x4] = arg11
            float var_5c8_4[0x4] = var_768
            float var_5b8_4[0x4] = var_9a8_4.o
            float var_5a8_4[0x4] = var_8b8_4
            float var_618_4[0x4] = var_738
            float var_608_4[0x4] = var_728
            float var_5f8_4[0x4] = var_718
            uint32_t var_5e8_4[0x4] = arg10
            float temp0_1240[0x4] = __subps_xmmps_memps(zmm0, var_998_3)
            float temp0_1241[0x4] = __subps_xmmps_memps(arg5, temp0_808)
            float temp0_1242[0x4] = __subps_xmmps_memps(zmm2, var_9c8)
            zmm4 = data_142d3f640
            float temp0_1243[0x4] = _mm_mul_ps(temp0_1240, zmm4)
            float temp0_1244[0x4] = _mm_mul_ps(temp0_1242, zmm4)
            float temp0_1245[0x4] = _mm_mul_ps(temp0_1241, zmm4)
            float var_528_2[0x4] = temp0_1235
            float var_518_2[0x4] = temp0_1236
            int32_t var_508_2[0x4] = arg7
            float var_4f8_2[0x4] = temp0_1239
            zmm15 = _mm_mul_ps(zmm15, temp0_1244)
            float temp0_1247[0x4] = _mm_mul_ps(var_948_3, temp0_1244)
            float temp0_1248[0x4] = __mulps_xmmps_memps(temp0_1244, arg8)
            arg11 = _mm_mul_ps(arg11, temp0_1243)
            float temp0_1250[0x4] = _mm_mul_ps(var_768, temp0_1243)
            float temp0_1251[0x4] = __mulps_xmmps_memps(temp0_1243, var_9a8_4.o)
            arg8 = data_142d3f770
            zmm15 = _mm_and_ps(zmm15, arg8)
            arg11 = _mm_add_ps(_mm_and_ps(arg11, arg8), zmm15)
            arg5 = _mm_and_ps(temp0_1247, arg8)
            arg12 = _mm_add_ps(_mm_and_ps(temp0_1250, arg8), arg5)
            zmm2 = _mm_and_ps(temp0_1248, arg8)
            float temp0_1260[0x4] = _mm_add_ps(_mm_and_ps(temp0_1251, arg8), zmm2)
            float temp0_1261[0x4] = _mm_mul_ps(var_738, temp0_1245)
            float temp0_1262[0x4] = _mm_mul_ps(var_728, temp0_1245)
            float temp0_1263[0x4] = _mm_mul_ps(temp0_1245, var_718)
            float temp0_1265[0x4] = _mm_add_ps(_mm_and_ps(temp0_1261, arg8), arg11)
            float temp0_1267[0x4] = _mm_add_ps(_mm_and_ps(temp0_1262, arg8), arg12)
            float temp0_1269[0x4] = _mm_add_ps(_mm_and_ps(temp0_1263, arg8), temp0_1260)
            arg10 = _mm_sub_ps(temp0_1235, temp0_1265)
            arg11 = _mm_sub_ps(temp0_1236, temp0_1267)
            float temp0_1272[0x4] = _mm_sub_ps(arg7, temp0_1269)
            float temp0_1273[0x4] = _mm_add_ps(temp0_1265, temp0_1235)
            float temp0_1274[0x4] = _mm_add_ps(temp0_1267, temp0_1236)
            float temp0_1275[0x4] = _mm_add_ps(temp0_1269, arg7)
            zmm0 = zx.o(0)
            int32_t temp0_1276[0x4] = _mm_cmpeq_epi32(data_142ed6810 & var_9b8_1, zx.o(0))
            zmm6 = _mm_slli_epi32(temp0_1276 & not.o(var_8f8_3), 0x1f)
            char temp0_1278 = _mm_movemask_ps(zmm6)
            char rcx_114 = var_888[0].b
            
            if (temp0_1278 == 0)
                goto label_14035c160
            
            zmm15 = _mm_min_ps(var_8a8_3, arg10)
            zmm14 = var_8e8_4
            var_9c8 = _mm_min_ps(zmm14, arg11)
            arg12 = _mm_min_ps(var_978_3, temp0_1272)
            var_998_3 = _mm_max_ps(var_908_4, temp0_1273)
            var_9a8_4.o = _mm_max_ps(var_928_3, temp0_1274)
            zmm0 = var_8d8_1
            arg5 = _mm_max_ps(zmm0, temp0_1275)
            char rax_190
            bool cond:69_1
            bool cond:88_1
            bool cond:89_1
            bool cond:100_1
            bool cond:101_1
            bool cond:120_1
            bool cond:121_1
            bool cond:140_1
            bool cond:141_1
            bool cond:159_1
            bool cond:160_1
            
            if (rcx_114 != temp0_1278)
                zmm0 = _mm_srai_epi32(zmm6, 0x1f)
            label_14035c160:
                rdi_9 = arg15
                arg8 = _mm_slli_epi32(var_8f8_3 & temp0_1276, 0x1f)
                
                if (_mm_movemask_ps(arg8) == 0)
                    arg9 = var_9b8_1
                    arg7 = var_8d8_1
                    zmm6 = var_928_3
                    zmm14 = var_8e8_4
                    goto label_14035c59e
                
                char temp0_1297 = _mm_movemask_ps(temp0_1276)
                char temp11_1 = temp0_1297 & 1
                zmm14 = var_8e8_4
                float var_8f8_4[0x4]
                
                if (temp11_1 == 0)
                    arg7 = temp0_1272
                    var_8f8_4 = arg8
                    zmm12 = var_8a8_3
                    
                    if (temp11_1 != 0)
                        goto label_14035ccc0
                    
                    goto label_14035c17f
                
                zmm15 = _mm_blend_ps(zmm15, arg10, 1)
                arg7 = temp0_1272
                var_8f8_4 = arg8
                zmm12 = var_8a8_3
                
                if (temp11_1 != 0)
                label_14035ccc0:
                    var_9c8 = _mm_blend_ps(var_9c8, arg11, 1)
                    
                    if (temp11_1 == 0)
                        goto label_14035c17f_1
                    
                    goto label_14035ccca
                
            label_14035c17f:
                
                if (temp11_1 == 0)
                label_14035c17f_1:
                    
                    if (temp11_1 != 0)
                        goto label_14035cce2
                    
                    goto label_14035c17f_2
                
            label_14035ccca:
                arg12 = _mm_blend_ps(arg12, arg7, 1)
                
                if (temp11_1 != 0)
                label_14035cce2:
                    var_998_3 = _mm_blend_ps(var_998_3, temp0_1273, 1)
                    
                    if (temp11_1 == 0)
                        goto label_14035c17f_3
                    
                    goto label_14035ccf9
                
            label_14035c17f_2:
                
                if (temp11_1 == 0)
                label_14035c17f_3:
                    
                    if (temp11_1 != 0)
                        goto label_14035cd04
                    
                    goto label_14035c1c3
                
            label_14035ccf9:
                var_9a8_4.o = _mm_blend_ps(var_9a8_4.o, temp0_1274, 1)
                
                if (temp11_1 != 0)
                label_14035cd04:
                    arg5 = _mm_blend_ps(arg5, temp0_1275, 1)
                    var_968.o = temp0_1275
                    arg6 = var_9b8_1
                    
                    if (temp11_1 == 0)
                        goto label_14035c1da
                    
                    goto label_14035cd28
                
            label_14035c1c3:
                var_968.o = temp0_1275
                arg6 = var_9b8_1
                bool cond:190_1
                bool cond:191_1
                bool cond:210_1
                bool cond:211_1
                bool cond:222_1
                bool cond:223_1
                bool cond:242_1
                bool cond:243_1
                bool cond:262_1
                bool cond:263_1
                bool cond:282_1
                bool cond:283_1
                
                if (temp11_1 == 0)
                label_14035c1da:
                    char temp29_1 = temp0_1297 & 2
                    cond:190_1 = temp29_1 != 0
                    cond:191_1 = temp29_1 == 0
                    cond:210_1 = temp29_1 == 0
                    cond:211_1 = temp29_1 != 0
                    cond:222_1 = temp29_1 != 0
                    cond:223_1 = temp29_1 == 0
                    cond:242_1 = temp29_1 == 0
                    cond:243_1 = temp29_1 != 0
                    cond:262_1 = temp29_1 != 0
                    cond:263_1 = temp29_1 == 0
                    cond:282_1 = temp29_1 == 0
                    cond:283_1 = temp29_1 != 0
                    
                    if (temp29_1 != 0)
                        goto label_14035cd36
                    
                    goto label_14035c1e2
                
            label_14035cd28:
                arg6 = _mm_insert_epi32(var_9b8_1, 1, 0)
                char temp28_1 = temp0_1297 & 2
                cond:190_1 = temp28_1 != 0
                cond:191_1 = temp28_1 == 0
                cond:210_1 = temp28_1 == 0
                cond:211_1 = temp28_1 != 0
                cond:222_1 = temp28_1 != 0
                cond:223_1 = temp28_1 == 0
                cond:242_1 = temp28_1 == 0
                cond:243_1 = temp28_1 != 0
                cond:262_1 = temp28_1 != 0
                cond:263_1 = temp28_1 == 0
                cond:282_1 = temp28_1 == 0
                cond:283_1 = temp28_1 != 0
                
                if (temp28_1 != 0)
                label_14035cd36:
                    zmm15 = _mm_blend_ps(zmm15, arg10, 2)
                    
                    if (cond:191_1)
                        goto label_14035c1e8
                    
                    goto label_14035cd4e
                
            label_14035c1e2:
                
                if (not(cond:190_1))
                label_14035c1e8:
                    
                    if (cond:211_1)
                        goto label_14035cd58
                    
                    goto label_14035c1ee
                
            label_14035cd4e:
                var_9c8 = _mm_blend_ps(var_9c8, arg11, 2)
                
                if (not(cond:210_1))
                label_14035cd58:
                    arg12 = _mm_blend_ps(arg12, arg7, 2)
                    
                    if (cond:223_1)
                        goto label_14035c1f4
                    
                    goto label_14035cd70
                
            label_14035c1ee:
                
                if (not(cond:222_1))
                label_14035c1f4:
                    
                    if (cond:243_1)
                        goto label_14035cd87
                    
                    goto label_14035c1fa
                
            label_14035cd70:
                var_998_3 = _mm_blend_ps(var_998_3, temp0_1273, 2)
                
                if (not(cond:242_1))
                label_14035cd87:
                    var_9a8_4.o = _mm_blend_ps(var_9a8_4.o, temp0_1274, 2)
                    
                    if (cond:263_1)
                        goto label_14035c200
                    
                    goto label_14035cd92
                
            label_14035c1fa:
                
                if (not(cond:262_1))
                label_14035c200:
                    
                    if (cond:283_1)
                        goto label_14035cda0
                    
                    goto label_14035c206
                
            label_14035cd92:
                arg5 = __blendps_xmmdq_memdq_immb(arg5, var_968.o, 2)
                bool cond:310_1
                bool cond:311_1
                bool cond:330_1
                bool cond:331_1
                bool cond:341_1
                bool cond:342_1
                bool cond:360_1
                bool cond:361_1
                bool cond:379_1
                bool cond:380_1
                bool cond:399_1
                bool cond:400_1
                
                if (not(cond:282_1))
                label_14035cda0:
                    arg6 = _mm_insert_epi32(arg6, 1, 1)
                    char temp49_1 = temp0_1297 & 4
                    cond:310_1 = temp49_1 == 0
                    cond:311_1 = temp49_1 != 0
                    cond:330_1 = temp49_1 != 0
                    cond:331_1 = temp49_1 == 0
                    cond:341_1 = temp49_1 == 0
                    cond:342_1 = temp49_1 != 0
                    cond:360_1 = temp49_1 != 0
                    cond:361_1 = temp49_1 == 0
                    cond:379_1 = temp49_1 == 0
                    cond:380_1 = temp49_1 != 0
                    cond:399_1 = temp49_1 != 0
                    cond:400_1 = temp49_1 == 0
                    
                    if (temp49_1 == 0)
                        goto label_14035c20e
                    
                    goto label_14035cdae
                
            label_14035c206:
                char temp48_1 = temp0_1297 & 4
                cond:310_1 = temp48_1 == 0
                cond:311_1 = temp48_1 != 0
                cond:330_1 = temp48_1 != 0
                cond:331_1 = temp48_1 == 0
                cond:341_1 = temp48_1 == 0
                cond:342_1 = temp48_1 != 0
                cond:360_1 = temp48_1 != 0
                cond:361_1 = temp48_1 == 0
                cond:379_1 = temp48_1 == 0
                cond:380_1 = temp48_1 != 0
                cond:399_1 = temp48_1 != 0
                cond:400_1 = temp48_1 == 0
                
                if (temp48_1 == 0)
                label_14035c20e:
                    
                    if (cond:311_1)
                        goto label_14035cdc6
                    
                    goto label_14035c214
                
            label_14035cdae:
                zmm15 = _mm_blend_ps(zmm15, arg10, 4)
                
                if (not(cond:310_1))
                label_14035cdc6:
                    var_9c8 = _mm_blend_ps(var_9c8, arg11, 4)
                    
                    if (cond:331_1)
                        goto label_14035c21a
                    
                    goto label_14035cdd0
                
            label_14035c214:
                
                if (not(cond:330_1))
                label_14035c21a:
                    
                    if (cond:342_1)
                        goto label_14035cde8
                    
                    goto label_14035c220
                
            label_14035cdd0:
                arg12 = _mm_blend_ps(arg12, arg7, 4)
                
                if (not(cond:341_1))
                label_14035cde8:
                    var_998_3 = _mm_blend_ps(var_998_3, temp0_1273, 4)
                    
                    if (cond:361_1)
                        goto label_14035c226
                    
                    goto label_14035cdff
                
            label_14035c220:
                
                if (cond:360_1)
                label_14035cdff:
                    var_9a8_4.o = _mm_blend_ps(var_9a8_4.o, temp0_1274, 4)
                    
                    if (not(cond:379_1))
                    label_14035ce0a:
                        arg5 = __blendps_xmmdq_memdq_immb(arg5, var_968.o, 4)
                        
                        if (cond:400_1)
                            goto label_14035c232
                        
                        goto label_14035ce18
                else
                label_14035c226:
                    
                    if (cond:380_1)
                        goto label_14035ce0a
                
                bool cond:427_1
                bool cond:443_1
                bool cond:444_1
                bool cond:451_1
                bool cond:458_1
                bool cond:459_1
                bool cond:465_1
                bool cond:466_1
                bool cond:473_1
                bool cond:474_1
                bool cond:428_1
                
                if (cond:399_1)
                label_14035ce18:
                    arg6 = _mm_insert_epi32(arg6, 1, 2)
                    char temp66_1 = temp0_1297 & 8
                    cond:427_1 = temp66_1 == 0
                    cond:428_1 = temp66_1 != 0
                    cond:443_1 = temp66_1 == 0
                    cond:444_1 = temp66_1 != 0
                    cond:451_1 = temp66_1 != 0
                    cond:458_1 = temp66_1 == 0
                    cond:459_1 = temp66_1 != 0
                    cond:465_1 = temp66_1 != 0
                    cond:466_1 = temp66_1 == 0
                    cond:473_1 = temp66_1 != 0
                    cond:474_1 = temp66_1 == 0
                    
                    if (temp66_1 != 0)
                    label_14035ce26:
                        zmm15 = _mm_blend_ps(zmm15, arg10, 8)
                        
                        if (cond:428_1)
                            goto label_14035c24c
                        
                        goto label_14035ce33
                else
                label_14035c232:
                    char temp67_1 = temp0_1297 & 8
                    cond:427_1 = temp67_1 == 0
                    cond:428_1 = temp67_1 != 0
                    cond:443_1 = temp67_1 == 0
                    cond:444_1 = temp67_1 != 0
                    cond:451_1 = temp67_1 != 0
                    cond:458_1 = temp67_1 == 0
                    cond:459_1 = temp67_1 != 0
                    cond:465_1 = temp67_1 != 0
                    cond:466_1 = temp67_1 == 0
                    cond:473_1 = temp67_1 != 0
                    cond:474_1 = temp67_1 == 0
                    
                    if (temp67_1 != 0)
                        goto label_14035ce26
                
                if (cond:427_1)
                label_14035ce33:
                    arg11 = var_9c8
                    
                    if (not(cond:443_1))
                        arg12 = _mm_blend_ps(arg12, arg7, 8)
                else
                label_14035c24c:
                    arg11 = _mm_blend_ps(var_9c8, arg11, 8)
                    
                    if (cond:444_1)
                        arg12 = _mm_blend_ps(arg12, arg7, 8)
                
                arg8 = var_9a8_4.o
                arg9 = arg6
                arg6 = var_998_3
                
                if (not(cond:451_1))
                    if (cond:459_1)
                        goto label_14035ce9d
                    
                    goto label_14035ce54
                
                arg6 = _mm_blend_ps(arg6, temp0_1273, 8)
                
                if (not(cond:458_1))
                label_14035ce9d:
                    arg8 = _mm_blend_ps(arg8, temp0_1274, 8)
                    
                    if (cond:466_1)
                        goto label_14035ce56
                    
                    goto label_14035cea6
                
            label_14035ce54:
                
                if (cond:465_1)
                label_14035cea6:
                    arg5 = __blendps_xmmdq_memdq_immb(arg5, var_968.o, 8)
                    
                    if (cond:473_1)
                        arg9 = _mm_insert_epi32(arg9, 1, 3)
                else
                label_14035ce56:
                    
                    if (not(cond:474_1))
                        arg9 = _mm_insert_epi32(arg9, 1, 3)
                
                _mm_movemask_ps(_mm_srai_epi32(var_8f8_4, 0x1f) | zmm0)
                arg7 = var_8d8_1
                zmm6 = var_928_3
                rax_190 = rcx_114
                char temp74_1 = rax_190 & 1
                cond:69_1 = temp74_1 != 0
                cond:88_1 = temp74_1 == 0
                cond:89_1 = temp74_1 != 0
                cond:100_1 = temp74_1 != 0
                cond:101_1 = temp74_1 == 0
                cond:120_1 = temp74_1 == 0
                cond:121_1 = temp74_1 != 0
                cond:140_1 = temp74_1 != 0
                cond:141_1 = temp74_1 == 0
                cond:159_1 = temp74_1 == 0
                cond:160_1 = temp74_1 != 0
                
                if (temp74_1 != 0)
                    zmm12 = _mm_blend_ps(zmm12, zmm15, 1)
            else
                zmm6 = var_928_3
                arg7 = zmm0
                arg9 = var_9b8_1
                rdi_9 = arg15
            label_14035c59e:
                zmm12 = var_8a8_3
                arg8 = var_9a8_4.o
                arg6 = var_998_3
                arg11 = var_9c8
                rax_190 = rcx_114
                char temp12_1 = rax_190 & 1
                cond:69_1 = temp12_1 != 0
                cond:88_1 = temp12_1 == 0
                cond:89_1 = temp12_1 != 0
                cond:100_1 = temp12_1 != 0
                cond:101_1 = temp12_1 == 0
                cond:120_1 = temp12_1 == 0
                cond:121_1 = temp12_1 != 0
                cond:140_1 = temp12_1 != 0
                cond:141_1 = temp12_1 == 0
                cond:159_1 = temp12_1 == 0
                cond:160_1 = temp12_1 != 0
                
                if (temp12_1 != 0)
                    zmm12 = _mm_blend_ps(zmm12, zmm15, 1)
            
            if (not(cond:69_1))
                if (cond:89_1)
                    goto label_14035c68e
                
                goto label_14035c5cf
            
            zmm14 = _mm_blend_ps(zmm14, arg11, 1)
            
            if (not(cond:88_1))
            label_14035c68e:
                var_978_3 = _mm_blend_ps(var_978_3, arg12, 1)
                
                if (cond:101_1)
                    goto label_14035c5d5
                
                goto label_14035c6a7
            
        label_14035c5cf:
            
            if (not(cond:100_1))
            label_14035c5d5:
                
                if (cond:121_1)
                    goto label_14035c6b5
                
                goto label_14035c5db
            
        label_14035c6a7:
            var_908_4 = _mm_blend_ps(var_908_4, arg6, 1)
            
            if (not(cond:120_1))
            label_14035c6b5:
                zmm6 = _mm_blend_ps(zmm6, arg8, 1)
                
                if (cond:141_1)
                    goto label_14035c5e1
                
                goto label_14035c6c1
            
        label_14035c5db:
            
            if (not(cond:140_1))
            label_14035c5e1:
                
                if (cond:160_1)
                    goto label_14035c6da
                
                goto label_14035c5e7
            
        label_14035c6c1:
            arg7 = _mm_blend_ps(arg7, arg5, 1)
            bool cond:188_1
            bool cond:189_1
            bool cond:208_1
            bool cond:209_1
            bool cond:220_1
            bool cond:221_1
            bool cond:240_1
            bool cond:241_1
            bool cond:260_1
            bool cond:261_1
            bool cond:280_1
            bool cond:281_1
            
            if (not(cond:159_1))
            label_14035c6da:
                var_9b8_1 = _mm_blend_epi16(var_9b8_1, arg9, 3)
                char temp31_1 = rax_190 & 2
                cond:188_1 = temp31_1 == 0
                cond:189_1 = temp31_1 != 0
                cond:208_1 = temp31_1 != 0
                cond:209_1 = temp31_1 == 0
                cond:220_1 = temp31_1 == 0
                cond:221_1 = temp31_1 != 0
                cond:240_1 = temp31_1 != 0
                cond:241_1 = temp31_1 == 0
                cond:260_1 = temp31_1 == 0
                cond:261_1 = temp31_1 != 0
                cond:280_1 = temp31_1 != 0
                cond:281_1 = temp31_1 == 0
                
                if (temp31_1 == 0)
                    goto label_14035c5ef
                
                goto label_14035c6e8
            
        label_14035c5e7:
            char temp30_1 = rax_190 & 2
            cond:188_1 = temp30_1 == 0
            cond:189_1 = temp30_1 != 0
            cond:208_1 = temp30_1 != 0
            cond:209_1 = temp30_1 == 0
            cond:220_1 = temp30_1 == 0
            cond:221_1 = temp30_1 != 0
            cond:240_1 = temp30_1 != 0
            cond:241_1 = temp30_1 == 0
            cond:260_1 = temp30_1 == 0
            cond:261_1 = temp30_1 != 0
            cond:280_1 = temp30_1 != 0
            cond:281_1 = temp30_1 == 0
            
            if (temp30_1 == 0)
            label_14035c5ef:
                
                if (cond:189_1)
                    goto label_14035c6f5
                
                goto label_14035c5f5
            
        label_14035c6e8:
            zmm12 = _mm_blend_ps(zmm12, zmm15, 2)
            
            if (not(cond:188_1))
            label_14035c6f5:
                zmm14 = _mm_blend_ps(zmm14, arg11, 2)
                
                if (cond:209_1)
                    goto label_14035c5fb
                
                goto label_14035c70e
            
        label_14035c5f5:
            
            if (not(cond:208_1))
            label_14035c5fb:
                
                if (cond:221_1)
                    goto label_14035c727
                
                goto label_14035c601
            
        label_14035c70e:
            var_978_3 = _mm_blend_ps(var_978_3, arg12, 2)
            
            if (not(cond:220_1))
            label_14035c727:
                var_908_4 = _mm_blend_ps(var_908_4, arg6, 2)
                
                if (cond:241_1)
                    goto label_14035c607
                
                goto label_14035c735
            
        label_14035c601:
            
            if (cond:240_1)
            label_14035c735:
                zmm6 = _mm_blend_ps(zmm6, arg8, 2)
                
                if (not(cond:260_1))
                label_14035c741:
                    arg7 = _mm_blend_ps(arg7, arg5, 2)
                    
                    if (cond:281_1)
                        goto label_14035c613
                    
                    goto label_14035c75a
            else
            label_14035c607:
                
                if (cond:261_1)
                    goto label_14035c741
            
            bool cond:308_1
            bool cond:309_1
            bool cond:328_1
            bool cond:329_1
            bool cond:339_1
            bool cond:340_1
            bool cond:358_1
            bool cond:359_1
            bool cond:377_1
            bool cond:378_1
            bool cond:397_1
            bool cond:398_1
            
            if (not(cond:280_1))
            label_14035c613:
                char temp51_1 = rax_190 & 4
                cond:308_1 = temp51_1 != 0
                cond:309_1 = temp51_1 == 0
                cond:328_1 = temp51_1 == 0
                cond:329_1 = temp51_1 != 0
                cond:339_1 = temp51_1 != 0
                cond:340_1 = temp51_1 == 0
                cond:358_1 = temp51_1 == 0
                cond:359_1 = temp51_1 != 0
                cond:377_1 = temp51_1 != 0
                cond:378_1 = temp51_1 == 0
                cond:397_1 = temp51_1 == 0
                cond:398_1 = temp51_1 != 0
                
                if (temp51_1 != 0)
                    goto label_14035c768
                
                goto label_14035c61b
            
        label_14035c75a:
            var_9b8_1 = _mm_blend_epi16(var_9b8_1, arg9, 0xc)
            char temp50_1 = rax_190 & 4
            cond:308_1 = temp50_1 != 0
            cond:309_1 = temp50_1 == 0
            cond:328_1 = temp50_1 == 0
            cond:329_1 = temp50_1 != 0
            cond:339_1 = temp50_1 != 0
            cond:340_1 = temp50_1 == 0
            cond:358_1 = temp50_1 == 0
            cond:359_1 = temp50_1 != 0
            cond:377_1 = temp50_1 != 0
            cond:378_1 = temp50_1 == 0
            cond:397_1 = temp50_1 == 0
            cond:398_1 = temp50_1 != 0
            
            if (temp50_1 != 0)
            label_14035c768:
                zmm12 = _mm_blend_ps(zmm12, zmm15, 4)
                
                if (cond:309_1)
                    goto label_14035c621
                
                goto label_14035c775
            
        label_14035c61b:
            
            if (not(cond:308_1))
            label_14035c621:
                
                if (cond:329_1)
                    goto label_14035c78e
                
                goto label_14035c627
            
        label_14035c775:
            zmm14 = _mm_blend_ps(zmm14, arg11, 4)
            
            if (not(cond:328_1))
            label_14035c78e:
                var_978_3 = _mm_blend_ps(var_978_3, arg12, 4)
                
                if (cond:340_1)
                    goto label_14035c62d
                
                goto label_14035c7a7
            
        label_14035c627:
            
            if (not(cond:339_1))
            label_14035c62d:
                
                if (cond:359_1)
                    goto label_14035c7b5
                
                goto label_14035c633
            
        label_14035c7a7:
            var_908_4 = _mm_blend_ps(var_908_4, arg6, 4)
            
            if (not(cond:358_1))
            label_14035c7b5:
                zmm6 = _mm_blend_ps(zmm6, arg8, 4)
                
                if (cond:378_1)
                    goto label_14035c639
                
                goto label_14035c7c1
            
        label_14035c633:
            
            if (not(cond:377_1))
            label_14035c639:
                
                if (cond:398_1)
                    goto label_14035c7da
                
                goto label_14035c63f
            
        label_14035c7c1:
            arg7 = _mm_blend_ps(arg7, arg5, 4)
            bool cond:425_1
            bool cond:426_1
            bool cond:441_1
            bool cond:442_1
            bool cond:449_1
            bool cond:450_1
            bool cond:456_1
            bool cond:457_1
            bool cond:464_1
            bool cond:471_1
            bool cond:472_1
            
            if (not(cond:397_1))
            label_14035c7da:
                var_9b8_1 = _mm_blend_epi16(var_9b8_1, arg9, 0x30)
                char temp69_1 = rax_190 & 8
                cond:425_1 = temp69_1 == 0
                cond:426_1 = temp69_1 != 0
                cond:441_1 = temp69_1 != 0
                cond:442_1 = temp69_1 == 0
                cond:449_1 = temp69_1 != 0
                cond:450_1 = temp69_1 == 0
                cond:456_1 = temp69_1 != 0
                cond:457_1 = temp69_1 == 0
                cond:464_1 = temp69_1 != 0
                cond:471_1 = temp69_1 != 0
                cond:472_1 = temp69_1 == 0
                
                if (temp69_1 == 0)
                    goto label_14035c647
                
                goto label_14035c7e8
            
        label_14035c63f:
            char temp68_1 = rax_190 & 8
            cond:425_1 = temp68_1 == 0
            cond:426_1 = temp68_1 != 0
            cond:441_1 = temp68_1 != 0
            cond:442_1 = temp68_1 == 0
            cond:449_1 = temp68_1 != 0
            cond:450_1 = temp68_1 == 0
            cond:456_1 = temp68_1 != 0
            cond:457_1 = temp68_1 == 0
            cond:464_1 = temp68_1 != 0
            cond:471_1 = temp68_1 != 0
            cond:472_1 = temp68_1 == 0
            
            if (temp68_1 == 0)
            label_14035c647:
                
                if (cond:426_1)
                    goto label_14035c7f5
                
                goto label_14035c64d
            
        label_14035c7e8:
            zmm12 = _mm_blend_ps(zmm12, zmm15, 8)
            
            if (not(cond:425_1))
            label_14035c7f5:
                zmm14 = _mm_blend_ps(zmm14, arg11, 8)
                
                if (cond:442_1)
                    goto label_14035c653
                
                goto label_14035c80e
            
        label_14035c64d:
            
            if (not(cond:441_1))
            label_14035c653:
                
                if (cond:450_1)
                    goto label_14035c819
                
                goto label_14035c667
            
        label_14035c80e:
            var_978_3 = _mm_blend_ps(var_978_3, arg12, 8)
            
            if (cond:449_1)
            label_14035c667:
                arg6 = _mm_blend_ps(var_908_4, arg6, 8)
                
                if (cond:456_1)
                    zmm6 = _mm_blend_ps(zmm6, arg8, 8)
            else
            label_14035c819:
                arg6 = var_908_4
                
                if (not(cond:457_1))
                    zmm6 = _mm_blend_ps(zmm6, arg8, 8)
            
            zmm4 = var_978_3
            zmm2 = arg7
            
            if (cond:464_1)
                zmm2 = _mm_blend_ps(zmm2, arg5, 8)
                
                if (cond:471_1)
                    var_9b8_1 = _mm_blend_epi16(var_9b8_1, arg9, 0xc0)
            else if (not(cond:472_1))
                var_9b8_1 = _mm_blend_epi16(var_9b8_1, arg9, 0xc0)
    
    float temp0_1354[0x4] = _mm_shuffle_ps(arg6, zmm4, 0)
    float var_598[0x4] = _mm_shuffle_ps(_mm_insert_ps(zmm12, zmm14, 0x1c), temp0_1354, 0x24)
    int32_t var_57c_1 = __extractps_memd_xmmps_immb(zmm12, 1)
    int32_t var_560_1 = __extractps_memd_xmmps_immb(zmm12, 2)
    int32_t var_544_1 = __extractps_memd_xmmps_immb(zmm12, 3)
    float temp0_1360[0x4] = _mm_insert_ps(zmm4, zmm14, 0x4c)
    float var_578_1[0x4] = _mm_blend_epi16(_mm_unpacklo_epi32(arg6, zmm6[0].q), temp0_1360, 0xf)
    float temp0_1363[0x4] = _mm_unpackhi_ps(zmm14, zmm4)
    float temp0_1364[0x4] = _mm_insert_ps(zmm6, arg6, 0xe3)
    float var_55c_1[0x4] = _mm_blend_ps(_mm_insert_ps(arg6, zmm6, 0xb3), temp0_1363, 3)
    float var_540_1[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(zmm4, zmm14, 0x33), temp0_1364, 0xe2)
    float var_588 = zmm6[0]
    float var_584 = zmm2[0]
    int32_t var_568_1 = __extractps_memd_xmmps_immb(zmm2, 1)
    int32_t var_54c_1 = __extractps_memd_xmmps_immb(zmm2, 2)
    int32_t var_530_1 = __extractps_memd_xmmps_immb(zmm2, 3)
    char var_580[0x4]
    var_580[0] = __pextrb_memb_xmmdq_immb(var_9b8_1, 0)
    uint8_t var_564_1 = __pextrb_memb_xmmdq_immb(var_9b8_1, 4)
    uint8_t var_548_1 = __pextrb_memb_xmmdq_immb(var_9b8_1, 8)
    uint8_t var_52c_1 = __pextrb_memb_xmmdq_immb(var_9b8_1, 0xc)
    
    for (i_2 = 0xf; i_2 != 0; )
        uint64_t rcx_126
        uint64_t rflags_2
        
        if (i_2 == 0)
            rcx_126 = 0x40
        else
            rcx_126, rflags_2 = _bit_scan_forward(i_2)
        i_2 &= not.q(1 << (rcx_126 u% 0x40))
        uint64_t rdx_57 = rcx_126 * 0x1c
        char rbx_40 = rdi_9[3].b
        char rcx_127 = var_580[rdx_57]
        
        if (rbx_40 != 0 && rcx_127 != 0)
            zmm2 = var_9c8[rcx_126 * 7 + 0x10c]
            float temp0_1376[0x4] = __insertps_xmmps_memd_immb(zx.o(*rdi_9), rdi_9[1].d, 0x20)
            float temp0_1378[0x4] = __insertps_xmmps_memd_immb(
                __insertps_xmmps_memd_immb(zmm2, var_598[1 + rcx_126 * 7], 0x10), 
                var_598[2 + rcx_126 * 7], 0x20)
            arg5 = zx.o(*(rdi_9 + 0xc))
            zmm0 = _mm_min_ps(temp0_1376, temp0_1378)
            float temp0_1380[0x4] = __insertps_xmmps_memd_immb(arg5, *(rdi_9 + 0x14), 0x20)
            arg6 = _mm_movehdup_ps(zmm0)
            float temp0_1382[0x4] = __insertps_xmmps_memd_immb(zx.o(*(&var_598[3] + rdx_57)), 
                (&var_584)[rcx_126 * 7], 0x20)
            zmm2 = _mm_unpackhi_pd(zmm0, zmm0[0].q)
            arg5 = _mm_max_ps(temp0_1380, temp0_1382)
            zmm4 = _mm_movehdup_ps(arg5)
            arg7 = _mm_unpackhi_pd(arg5, arg5[0].q)
        else if (rcx_127 == 0)
            rbx_40 = rdi_9[3].b
            arg7 = *(rdi_9 + 0x14)
            zmm4 = rdi_9[2].d
            arg5 = *(rdi_9 + 0xc)
            zmm2 = rdi_9[1].d
            zmm0 = *rdi_9
            arg6 = *(rdi_9 + 4)
        else
            zmm0 = var_9c8[rcx_126 * 7 + 0x10c]
            arg6 = var_598[1 + rcx_126 * 7]
            zmm2 = var_598[2 + rcx_126 * 7]
            arg5 = var_598[3 + rcx_126 * 7]
            zmm4 = (&var_588)[rcx_126 * 7]
            arg7 = (&var_584)[rcx_126 * 7]
            rbx_40 = rcx_127
        
        *rdi_9 = zmm0[0]
        *(rdi_9 + 4) = arg6[0]
        rdi_9[1].d = zmm2[0]
        *(rdi_9 + 0xc) = arg5[0]
        rdi_9[2].d = zmm4[0]
        *(rdi_9 + 0x14) = arg7[0]
        rdi_9[3].b = rbx_40
return i_2
