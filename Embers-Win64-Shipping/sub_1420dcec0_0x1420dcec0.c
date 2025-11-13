// 函数: sub_1420dcec0
// 地址: 0x1420dcec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* rcx)[0x4] = arg1[1]
uint32_t zmm4[0x4] = data_143f481d0
float temp0[0x4] = __subps_xmmps_memps(rcx[1], data_143dbb0d0)
float temp0_1[0x4] = _mm_shuffle_ps(0x38d1b717, 0x38d1b717, 0)
uint32_t result
float zmm3[0x4]
float zmm5[0x4]

if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(temp0, zmm4), 1)) != 0)
label_1420dcf6a:
    zmm5 = *rcx
    zmm3 = data_14399f720
    float temp0_17[0x4] = _mm_sub_ps(zmm5, zmm3)
    float temp0_18[0x4] = _mm_shuffle_ps(0x322bcc77, 0x322bcc77, 0)
    
    if (_mm_movemask_ps(_mm_cmpeq_ps(temp0_18, _mm_and_ps(temp0_17, zmm4), 1)) != 0
            && _mm_movemask_ps(_mm_cmpeq_ps(temp0_18, _mm_and_ps(_mm_add_ps(zmm3, zmm5), zmm4), 1))
            != 0)
        void* rax_5 = *arg1
        *(rax_5 + 0x1f4) |= 8
    
    void* rcx_1 = *arg1
    int64_t rbx_1 = 0
    int64_t rsi_1 = 0
    uint32_t zmm6[0x4]
    uint32_t var_38_1[0x4] = zmm6
    int64_t* rdi_1 = *(rcx_1 + 0xc8)
    void* rax_7 = &rdi_1[sx.q(*(rcx_1 + 0xd0))]
    uint64_t r14_2 = sx.q(*(rcx_1 + 0xd0)) << 3 u>> 3
    uint64_t r14_4
    int64_t var_a8
    int64_t var_98
    float var_58[0x4]
    float var_48[0x4]
    float zmm0[0x4]
    float zmm1[0x4]
    
    if (arg1[2].b == 0)
        if (rdi_1 u> rax_7)
            r14_2 = 0
        
        float zmm9[0x4]
        float zmm10[0x4]
        
        if (r14_2 != 0)
            do
                int64_t* r13_2 = *rdi_1
                
                if (r13_2 != 0)
                    zmm4 = zx.o(*(r13_2 + 0x11c))
                    float (* rax_25)[0x4] = arg1[1]
                    zmm0 = zmm4
                    zmm1 = *(r13_2 + 0x124)
                    float temp0_112[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    zmm6 = _mm_unpacklo_ps(zmm4, zmm1[0].q)
                    zmm5 = *rax_25
                    zmm6 = __mulps_xmmps_memps(
                        _mm_unpacklo_ps(zmm6, _mm_unpacklo_ps(temp0_112, zx.o(0)[0].q)[0].q), 
                        rax_25[2])
                    float temp0_117[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                    zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                    float temp0_119[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                    float temp0_121[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), temp0_117)
                    float temp0_124[0x4] =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4), temp0_121)
                    float temp0_125[0x4] = _mm_add_ps(temp0_124, temp0_124)
                    float temp0_126[0x4] = _mm_mul_ps(temp0_119, temp0_125)
                    float temp0_128[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_125, temp0_125, 0xc9), temp0_117)
                    float temp0_129[0x4] = _mm_shuffle_ps(temp0_125, temp0_125, 0xd2)
                    float temp0_130[0x4] = _mm_add_ps(temp0_126, zmm6)
                    float temp0_134[0x4] = __addps_xmmps_memps(
                        _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_129, zmm4), temp0_128), temp0_130), 
                        rax_25[1])
                    float var_70_3 = _mm_shuffle_ps(temp0_134, temp0_134, 0xaa)[0]
                    var_a8 = (_mm_unpacklo_ps(temp0_134, 
                        _mm_shuffle_ps(temp0_134, temp0_134, 0x55)[0].q)).q
                    float var_a0_3 = var_70_3
                    int32_t rax_27 = r13_2[0x26].d
                    var_98 = r13_2[0x25]
                    int32_t var_90_3 = rax_27
                    float (* rax_28)[0x4]
                    float zmm7_1[0x4]
                    float zmm8_1[0x4]
                    rax_28, zmm7_1, zmm8_1 = sub_140ade170(&var_98, &var_48)
                    float zmm2_3[0x4] = *rax_28
                    float zmm4_3[0x4] = *arg1[1]
                    float temp0_138[0x4] = _mm_shuffle_ps(zmm2_3, zmm2_3, 0x1b)
                    float temp0_140[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_3, zmm4_3, 0), temp0_138)
                    float temp0_141[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xff)
                    float temp0_142[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0x55)
                    float temp0_143[0x4] = _mm_mul_ps(temp0_141, zmm2_3)
                    float temp0_144[0x4] = __mulps_xmmps_memps(temp0_140, data_143f48290)
                    float temp0_145[0x4] = _mm_shuffle_ps(zmm4_3, zmm4_3, 0xaa)
                    float temp0_146[0x4] = _mm_add_ps(temp0_144, temp0_143)
                    float temp0_148[0x4] =
                        _mm_mul_ps(temp0_142, _mm_shuffle_ps(zmm2_3, zmm2_3, 0x4e))
                    float temp0_150[0x4] =
                        _mm_mul_ps(temp0_145, _mm_shuffle_ps(zmm2_3, zmm2_3, 0xb1))
                    float temp0_151[0x4] = __mulps_xmmps_memps(temp0_148, data_143f48280)
                    float temp0_152[0x4] = __mulps_xmmps_memps(temp0_150, data_143f48270)
                    var_58 = _mm_add_ps(_mm_add_ps(temp0_146, temp0_151), temp0_152)
                    zmm9, zmm10 =
                        sub_141f48240(r13_2, &var_a8, &var_58, 0, zmm7_1, zmm8_1, zmm9, zmm10, 0, 0)
                
                rdi_1 = &rdi_1[1]
                rsi_1 += 1
            while (rsi_1 != r14_2)
            
            rcx_1 = *arg1
        
        r14_4 = 0
        void** rdi_3 = *(rcx_1 + 0x98)
        uint64_t r12_2 = sx.q(*(rcx_1 + 0xa0)) << 3 u>> 3
        
        if (rdi_3 u> &rdi_3[sx.q(*(rcx_1 + 0xa0))])
            r12_2 = 0
        
        if (r12_2 != 0)
            do
                void* rsi_4 = *rdi_3
                
                if (rsi_4 != 0)
                    int64_t* rsi_5 = *(rsi_4 + 0x130)
                    
                    if (rsi_5 != 0 && rsi_5[0x18] == 0)
                        zmm4 = zx.o(*(rsi_5 + 0x11c))
                        float (* rax_32)[0x4] = arg1[1]
                        zmm0 = zmm4
                        zmm1 = *(rsi_5 + 0x124)
                        float temp0_155[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                        zmm6 = _mm_unpacklo_ps(zmm4, zmm1[0].q)
                        zmm5 = *rax_32
                        zmm6 = __mulps_xmmps_memps(
                            _mm_unpacklo_ps(zmm6, _mm_unpacklo_ps(temp0_155, zx.o(0)[0].q)[0].q), 
                            rax_32[2])
                        float temp0_160[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                        zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                        float temp0_162[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                        float temp0_164[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), temp0_160)
                        float temp0_167[0x4] = _mm_sub_ps(
                            _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4), temp0_164)
                        float temp0_168[0x4] = _mm_add_ps(temp0_167, temp0_167)
                        float temp0_169[0x4] = _mm_mul_ps(temp0_162, temp0_168)
                        float temp0_171[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_168, temp0_168, 0xc9), temp0_160)
                        float temp0_172[0x4] = _mm_shuffle_ps(temp0_168, temp0_168, 0xd2)
                        float temp0_173[0x4] = _mm_add_ps(temp0_169, zmm6)
                        float temp0_177[0x4] = __addps_xmmps_memps(
                            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_172, zmm4), temp0_171), 
                                temp0_173), 
                            rax_32[1])
                        float var_70_4 = _mm_shuffle_ps(temp0_177, temp0_177, 0xaa)[0]
                        var_a8 = (_mm_unpacklo_ps(temp0_177, 
                            _mm_shuffle_ps(temp0_177, temp0_177, 0x55)[0].q)).q
                        float var_a0_4 = var_70_4
                        int32_t rax_34 = rsi_5[0x26].d
                        var_98 = rsi_5[0x25]
                        int32_t var_90_4 = rax_34
                        float (* rax_35)[0x4]
                        float zmm7_2[0x4]
                        float zmm8_2[0x4]
                        rax_35, zmm7_2, zmm8_2 = sub_140ade170(&var_98, &var_48)
                        float zmm3_4[0x4] = *rax_35
                        float zmm2_4[0x4] = *arg1[1]
                        float temp0_181[0x4] = _mm_shuffle_ps(zmm3_4, zmm3_4, 0x1b)
                        float temp0_182[0x4] = _mm_shuffle_ps(zmm3_4, zmm3_4, 0x4e)
                        float temp0_184[0x4] =
                            _mm_mul_ps(temp0_181, _mm_shuffle_ps(zmm2_4, zmm2_4, 0))
                        float temp0_186[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm2_4, zmm2_4, 0xff), zmm3_4)
                        float temp0_187[0x4] = __mulps_xmmps_memps(temp0_184, data_143f48290)
                        float temp0_188[0x4] = _mm_shuffle_ps(zmm3_4, zmm3_4, 0xb1)
                        float temp0_189[0x4] = _mm_add_ps(temp0_187, temp0_186)
                        float temp0_191[0x4] =
                            _mm_mul_ps(temp0_182, _mm_shuffle_ps(zmm2_4, zmm2_4, 0x55))
                        float temp0_193[0x4] =
                            _mm_mul_ps(temp0_188, _mm_shuffle_ps(zmm2_4, zmm2_4, 0xaa))
                        float temp0_194[0x4] = __mulps_xmmps_memps(temp0_191, data_143f48280)
                        float temp0_195[0x4] = __mulps_xmmps_memps(temp0_193, data_143f48270)
                        var_58 = _mm_add_ps(_mm_add_ps(temp0_189, temp0_194), temp0_195)
                        zmm9, zmm10 = sub_141f48240(rsi_5, &var_a8, &var_58, 0, zmm7_2, zmm8_2, 
                            zmm9, zmm10, 0, 0)
                
                rdi_3 = &rdi_3[1]
                r14_4 += 1
            while (r14_4 != r12_2)
    else
        if (rdi_1 u> rax_7)
            r14_2 = 0
        
        int64_t var_b8
        void var_6c
        
        if (r14_2 != 0)
            do
                void* r13_1 = *rdi_1
                
                if (r13_1 != 0)
                    zmm4 = zx.o(*(r13_1 + 0x11c))
                    int32_t rax_8 = *(r13_1 + 0x124)
                    zmm0 = zmm4
                    float temp0_26[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                    var_b8 = zmm4.q
                    float (* rax_9)[0x4] = arg1[1]
                    float temp0_27[0x4] = _mm_unpacklo_ps(temp0_26, zx.o(0)[0].q)
                    zmm6 = _mm_unpacklo_ps(zmm4, rax_8[0].q)
                    zmm5 = *rax_9
                    zmm6 = __mulps_xmmps_memps(_mm_unpacklo_ps(zmm6, temp0_27[0].q), rax_9[2])
                    float temp0_31[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                    float temp0_32[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                    float temp0_33[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                    float temp0_35[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), temp0_32)
                    float temp0_38[0x4] =
                        _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), temp0_31), temp0_35)
                    float temp0_39[0x4] = _mm_add_ps(temp0_38, temp0_38)
                    float temp0_40[0x4] = _mm_mul_ps(temp0_33, temp0_39)
                    zmm4 = _mm_shuffle_ps(temp0_39, temp0_39, 0xd2)
                    float temp0_42[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xc9)
                    zmm4 = _mm_mul_ps(zmm4, temp0_31)
                    float temp0_44[0x4] = _mm_mul_ps(temp0_42, temp0_32)
                    float temp0_45[0x4] = _mm_add_ps(temp0_40, zmm6)
                    zmm4 = __addps_xmmps_memps(_mm_add_ps(_mm_sub_ps(zmm4, temp0_44), temp0_45), 
                        rax_9[1])
                    float var_70_1 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)[0]
                    var_a8 = (_mm_unpacklo_ps(zmm4, _mm_shuffle_ps(zmm4, zmm4, 0x55)[0].q)).q
                    float var_a0_1 = var_70_1
                    sub_141f48c60(r13_1, &var_a8)
                    int32_t rax_11 = *(r13_1 + 0x130)
                    var_98 = *(r13_1 + 0x128)
                    int32_t var_90_1 = rax_11
                    float zmm3_1[0x4] = *sub_140ade170(&var_98, &var_48)
                    float zmm2_1[0x4] = *arg1[1]
                    float temp0_52[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x1b)
                    float temp0_53[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0x4e)
                    float temp0_55[0x4] = _mm_mul_ps(temp0_52, _mm_shuffle_ps(zmm2_1, zmm2_1, 0))
                    float temp0_57[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_1, zmm2_1, 0xff), zmm3_1)
                    float temp0_58[0x4] = __mulps_xmmps_memps(temp0_55, data_143f48290)
                    float temp0_59[0x4] = _mm_shuffle_ps(zmm3_1, zmm3_1, 0xb1)
                    var_58 = _mm_add_ps(
                        _mm_add_ps(_mm_add_ps(temp0_58, temp0_57), 
                            __mulps_xmmps_memps(
                                _mm_mul_ps(temp0_53, _mm_shuffle_ps(zmm2_1, zmm2_1, 0x55)), 
                                data_143f48280)), 
                        __mulps_xmmps_memps(
                        _mm_mul_ps(temp0_59, _mm_shuffle_ps(zmm2_1, zmm2_1, 0xaa)), data_143f48270))
                    int32_t* rax_13 = sub_140adf5d0(&var_58, &var_6c)
                    int32_t rax_14 = rax_13[2]
                    int64_t var_88 = *rax_13
                    int32_t var_80_1 = rax_14
                    sub_141f48ec0(r13_1, &var_88)
                
                rdi_1 = &rdi_1[1]
                rsi_1 += 1
            while (rsi_1 != r14_2)
            
            rcx_1 = *arg1
        
        int64_t* rdi_2 = *(rcx_1 + 0x98)
        r14_4 = sx.q(*(rcx_1 + 0xa0)) << 3 u>> 3
        
        if (rdi_2 u> &rdi_2[sx.q(*(rcx_1 + 0xa0))])
            r14_4 = 0
        
        if (r14_4 != 0)
            do
                void* rsi_2 = *rdi_2
                
                if (rsi_2 != 0)
                    void* rsi_3 = *(rsi_2 + 0x130)
                    
                    if (rsi_3 != 0 && *(rsi_3 + 0xc0) == 0)
                        zmm4 = zx.o(*(rsi_3 + 0x11c))
                        zmm0 = zmm4
                        float (* rax_18)[0x4] = arg1[1]
                        zmm1 = *(rsi_3 + 0x124)
                        float temp0_69[0x4] = _mm_shuffle_ps(zmm0, zmm0, 0x55)
                        zmm6 = _mm_unpacklo_ps(zmm4, zmm1[0].q)
                        zmm5 = *rax_18
                        zmm6 = __mulps_xmmps_memps(
                            _mm_unpacklo_ps(zmm6, _mm_unpacklo_ps(temp0_69, zx.o(0)[0].q)[0].q), 
                            rax_18[2])
                        float temp0_74[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xd2)
                        zmm4 = _mm_shuffle_ps(zmm5, zmm5, 0xc9)
                        float temp0_76[0x4] = _mm_shuffle_ps(zmm5, zmm5, 0xff)
                        float temp0_78[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xc9), temp0_74)
                        float temp0_81[0x4] =
                            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(zmm6, zmm6, 0xd2), zmm4), temp0_78)
                        float temp0_82[0x4] = _mm_add_ps(temp0_81, temp0_81)
                        float temp0_83[0x4] = _mm_mul_ps(temp0_76, temp0_82)
                        float temp0_85[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(temp0_82, temp0_82, 0xc9), temp0_74)
                        float temp0_86[0x4] = _mm_shuffle_ps(temp0_82, temp0_82, 0xd2)
                        float temp0_87[0x4] = _mm_add_ps(temp0_83, zmm6)
                        float temp0_91[0x4] = __addps_xmmps_memps(
                            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_86, zmm4), temp0_85), temp0_87), 
                            rax_18[1])
                        float var_70_2 = _mm_shuffle_ps(temp0_91, temp0_91, 0xaa)[0]
                        var_98 = (_mm_unpacklo_ps(temp0_91, 
                            _mm_shuffle_ps(temp0_91, temp0_91, 0x55)[0].q)).q
                        float var_90_2 = var_70_2
                        sub_141f48c60(rsi_3, &var_98)
                        int32_t rax_20 = *(rsi_3 + 0x130)
                        var_a8 = *(rsi_3 + 0x128)
                        int32_t var_a0_2 = rax_20
                        float zmm3_2[0x4] = *sub_140ade170(&var_a8, &var_48)
                        float zmm2_2[0x4] = *arg1[1]
                        float temp0_97[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3_2, zmm3_2, 0x1b), 
                            _mm_shuffle_ps(zmm2_2, zmm2_2, 0))
                        float temp0_99[0x4] =
                            _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm3_2)
                        float temp0_100[0x4] = __mulps_xmmps_memps(temp0_97, data_143f48290)
                        float temp0_101[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0x4e)
                        float temp0_102[0x4] = _mm_shuffle_ps(zmm3_2, zmm3_2, 0xb1)
                        float temp0_103[0x4] = _mm_add_ps(temp0_100, temp0_99)
                        float temp0_105[0x4] =
                            _mm_mul_ps(temp0_101, _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55))
                        float temp0_106[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
                        var_58 = _mm_add_ps(
                            _mm_add_ps(temp0_103, __mulps_xmmps_memps(temp0_105, data_143f48280)), 
                            __mulps_xmmps_memps(_mm_mul_ps(temp0_102, temp0_106), data_143f48270))
                        int32_t* rax_22 = sub_140adf5d0(&var_58, &var_6c)
                        int32_t rax_23 = rax_22[2]
                        var_b8 = *rax_22
                        int32_t var_b0_2 = rax_23
                        sub_141f48ec0(rsi_3, &var_b8)
                
                rdi_2 = &rdi_2[1]
                rbx_1 += 1
            while (rbx_1 != r14_4)
    r14_4.b = 0
    int64_t r12_3 = arg1[1]
    int64_t* rsi_7 = *arg1 + 0x200
    *(rsi_7 + 0x14) += 1
    int32_t rax_36 = rsi_7[1].d
    int32_t rcx_18 = *(rsi_7 + 0x14)
    int64_t rdi_4 = sx.q(rax_36 - 1)
    
    if (rax_36 - 1 s>= 0)
        int64_t rbx_3 = rdi_4 << 4
        int64_t temp1_1
        
        do
            int64_t rcx_19 = *rsi_7
            
            if (*(rbx_3 + rcx_19 + 8) == 0)
                r14_4.b = 1
            else
                int64_t* rcx_20 = *(rbx_3 + rcx_19)
                
                if (rcx_20 == 0)
                    r14_4.b = 1
                else if ((*(*rcx_20 + 0x50))(rcx_20, r12_3) == 0)
                    r14_4.b = 1
            
            rbx_3 -= 0x10
            temp1_1 = rdi_4
            rdi_4 -= 1
        while (temp1_1 - 1 s>= 0)
        rcx_18 = *(rsi_7 + 0x14)
    
    result = rcx_18 - 1
    *(rsi_7 + 0x14) = result
    
    if (r14_4.b != 0)
        return sub_140599630(rsi_7, 0)
else
    zmm3 = *rcx
    zmm5 = data_143dbb0c0
    uint32_t temp0_8 =
        _mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(_mm_sub_ps(zmm3, zmm5), zmm4), 1))
    uint32_t temp0_12
    
    if (temp0_8 != 0)
        temp0_12 =
            _mm_movemask_ps(_mm_cmpeq_ps(temp0_1, _mm_and_ps(_mm_add_ps(zmm3, zmm5), zmm4), 1))
    
    if (temp0_8 != 0 && temp0_12 != 0)
        goto label_1420dcf6a
    
    result = _mm_movemask_ps(_mm_cmpeq_ps(temp0_1, 
        _mm_and_ps(__subps_xmmps_memps(rcx[2], data_143dbb0e0), zmm4), 1))
    
    if (result != 0)
        goto label_1420dcf6a
return result
