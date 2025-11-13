// 函数: sub_141dd1cf0
// 地址: 0x141dd1cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2a8
int64_t rax_1 = __security_cookie ^ &var_2a8
void* rax_3 = (*(*arg1 + 0x150))()
int32_t zmm0

if (rax_3 == 0)
    zmm0 = (zx.o(0)).d
else
    sub_14242d3a0(rax_3)
    zmm0 = *(rax_3 + 0x520)

char rax_5 = arg1[0xb].b
*(arg1 + 0x9c) = zmm0

if (rax_5 s>= 0)
    if (arg5 != 0 && &arg1[0x1e] != arg1 + 0x5f)
        arg1[0x1e].b = *(arg1 + 0x5f)
        *(arg1 + 0x5f) = arg1[0x1e].b
        rax_5 = arg1[0xb].b
    
    arg1[0xb].b = rax_5 | 0x80

(*(*arg1 + 0x440))(arg1, arg3)
arg1[0x23] = arg4
void* r13 = nullptr
int64_t* rsi_1 = arg1[0x26]
int32_t var_278
int64_t* var_228
int64_t** var_218
void var_1b8

if (rsi_1 != 0)
label_141dd1ea6:
    void* rax_14
    uint128_t zmm6_1
    rax_14, zmm6_1 = sub_140d209c0(rsi_1)
    void* r14_2 = rax_14
    void* rbx_2 = *(*(rax_14 + 0x20) + 0x10)
    
    if (rbx_2 == 0)
    label_141dd1f6e:
        int32_t rax_26 = *(rsi_1 + 0x13c)
        *(rsi_1 + 0x11c)
        *(rsi_1 + 0x134)
        int32_t rax_27 = *(rsi_1 + 0x124)
        int32_t var_220_1 = rsi_1[0x26].d
        var_228 = rsi_1[0x25]
        float var_1f8[0x4]
        float zmm6_2[0x4]
        float zmm7_1[0x4]
        float zmm8_1[0x4]
        zmm6_2, zmm7_1, zmm8_1 = sub_140ade170(&var_228, &var_1f8)
        float zmm13[0x4] = var_1f8
        float temp0_1[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55)
        float zmm15[0x4] = zmm6_2
        zmm6_2 = *arg2
        float temp0_2[0x4] = _mm_unpacklo_ps(temp0_1, 0)
        float temp0_3[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0x55)
        float temp0_5[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm15, rax_27[0].q), temp0_2[0].q)
        float temp0_6[0x4] = _mm_unpacklo_ps(temp0_3, 0)
        float temp0_8[0x4] = _mm_unpacklo_ps(_mm_unpacklo_ps(zmm7_1, rax_26[0].q), temp0_6[0].q)
        var_218 = zmm7_1.q
        zmm7_1 = arg2[2]
        float var_1e8[0x4]
        
        if (_mm_movemask_ps(__cmpps_xmmps_memps_immb(_mm_min_ps(temp0_8, zmm7_1), data_143f38cd0, 
                1)) == 0)
            float temp0_141[0x4] = _mm_mul_ps(zmm7_1, temp0_5)
            float temp0_142[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x1b)
            float temp0_143[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0x4e)
            float temp0_145[0x4] = _mm_mul_ps(temp0_142, _mm_shuffle_ps(zmm6_2, zmm6_2, 0))
            float temp0_146[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xff)
            float temp0_147[0x4] = _mm_mul_ps(zmm13, temp0_146)
            float temp0_148[0x4] = __mulps_xmmps_memps(temp0_145, data_143f38c90)
            float temp0_149[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xd2)
            float temp0_150[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xb1)
            float temp0_151[0x4] = _mm_mul_ps(zmm7_1, temp0_8)
            float temp0_152[0x4] = _mm_add_ps(temp0_148, temp0_147)
            float temp0_154[0x4] = _mm_mul_ps(temp0_143, _mm_shuffle_ps(zmm6_2, zmm6_2, 0x55))
            float temp0_156[0x4] = _mm_mul_ps(temp0_150, _mm_shuffle_ps(zmm6_2, zmm6_2, 0xaa))
            float temp0_157[0x4] = __mulps_xmmps_memps(temp0_154, data_143f38c80)
            float temp0_158[0x4] = _mm_shuffle_ps(temp0_141, temp0_141, 0xc9)
            float temp0_159[0x4] = __mulps_xmmps_memps(temp0_156, data_143f38c70)
            float temp0_160[0x4] = _mm_add_ps(temp0_152, temp0_157)
            float temp0_161[0x4] = _mm_mul_ps(temp0_158, temp0_149)
            float temp0_162[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 0xc9)
            float var_1c8_2[0x4] = temp0_151
            var_1e8 = _mm_add_ps(temp0_160, temp0_159)
            float temp0_166[0x4] = _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(temp0_141, temp0_141, 0xd2), temp0_162), temp0_161)
            float temp0_167[0x4] = _mm_add_ps(temp0_166, temp0_166)
            float temp0_168[0x4] = _mm_mul_ps(temp0_146, temp0_167)
            float temp0_170[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_167, temp0_167, 0xd2), temp0_162)
            float temp0_171[0x4] = _mm_shuffle_ps(temp0_167, temp0_167, 0xc9)
            float temp0_172[0x4] = _mm_add_ps(temp0_168, temp0_141)
            float var_1d8_2[0x4] = __addps_xmmps_memps(
                _mm_add_ps(_mm_sub_ps(temp0_170, _mm_mul_ps(temp0_171, temp0_149)), temp0_172), 
                arg2[1])
        else
            float temp0_12[0x4] = _mm_shuffle_ps(zmm7_1, zmm7_1, 0xc9)
            float temp0_13[0x4] = _mm_add_ps(zmm6_2, zmm6_2)
            float var_68_1[0x4] = zmm8_1
            zmm8_1 = arg2[1]
            float temp0_14[0x4] = _mm_shuffle_ps(zmm6_2, zmm6_2, 4)
            float zmm10[0x4] = data_143f38c20
            float temp0_15[0x4] = _mm_mul_ps(temp0_13, zmm6_2)
            float temp0_17[0x4] = _mm_mul_ps(temp0_14, _mm_shuffle_ps(temp0_13, temp0_13, 0x29))
            float temp0_18[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0x12)
            float temp0_21[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_15, temp0_15, 0x1a), 
                _mm_shuffle_ps(temp0_15, temp0_15, 1))
            float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm6_2, zmm6_2, 0xff), temp0_18)
            float temp0_24[0x4] = _mm_sub_ps(zmm10, temp0_21)
            _mm_mul_ps(zmm7_1, temp0_8)
            float temp0_26[0x4] = _mm_add_ps(temp0_23, temp0_17)
            float temp0_27[0x4] = _mm_sub_ps(temp0_17, temp0_23)
            float temp0_28[0x4] = _mm_mul_ps(temp0_24, zmm7_1)
            float temp0_29[0x4] = _mm_mul_ps(temp0_26, zmm7_1)
            float temp0_30[0x4] = _mm_mul_ps(temp0_12, temp0_27)
            float zmm1_1[0x4] = __andps_xmmxud_memxud(temp0_28, data_143f38c30)
            float temp0_32[0x4] = _mm_add_ps(zmm13, zmm13)
            float temp0_35[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_29, zmm1_1, 0), 
                _mm_shuffle_ps(temp0_30, zmm1_1, 0x32), 0x82)
            float temp0_38[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_30, zmm1_1, 0x10), 
                _mm_shuffle_ps(temp0_29, zmm1_1, 0x31), 0x88)
            float temp0_39[0x4] = _mm_mul_ps(temp0_32, zmm13)
            float temp0_41[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_29, temp0_30, 0x12), zmm1_1, 0xe8)
            float temp0_42[0x4] = _mm_shuffle_ps(temp0_32, temp0_32, 0x29)
            zmm10[0].q = zmm8_1 u>> 0x40
            float temp0_43[0x4] = _mm_shuffle_ps(zmm8_1, zmm10, 0xc4)
            float temp0_45[0x4] = _mm_mul_ps(temp0_42, _mm_shuffle_ps(zmm13, zmm13, 4))
            float temp0_48[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_39, temp0_39, 0x1a), 
                _mm_shuffle_ps(temp0_39, temp0_39, 1))
            float temp0_49[0x4] = _mm_shuffle_ps(zmm13, zmm13, 0xff)
            float temp0_51[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_32, temp0_32, 0x12), temp0_49)
            float temp0_52[0x4] = _mm_shuffle_ps(temp0_8, temp0_8, 0xc9)
            float temp0_53[0x4] = _mm_add_ps(temp0_51, temp0_45)
            float temp0_54[0x4] = _mm_sub_ps(temp0_45, temp0_51)
            float temp0_55[0x4] = _mm_mul_ps(temp0_53, temp0_8)
            float temp0_56[0x4] = _mm_mul_ps(temp0_52, temp0_54)
            zmm1_1 = __andps_xmmxud_memxud(_mm_mul_ps(_mm_sub_ps(zmm10, temp0_48), temp0_8), 
                data_143f38c30)
            float temp0_62[0x4] = _mm_shuffle_ps(_mm_shuffle_ps(temp0_55, zmm1_1, 0), 
                _mm_shuffle_ps(temp0_56, zmm1_1, 0x32), 0x82)
            float temp0_63[0x4] = _mm_shuffle_ps(temp0_55, zmm1_1, 0x31)
            float temp0_64[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0x55)
            float temp0_66[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_56, zmm1_1, 0x10), temp0_63, 0x88)
            float temp0_67[0x4] = _mm_mul_ps(temp0_64, temp0_38)
            zmm10[0].q = temp0_5 u>> 0x40
            float temp0_68[0x4] = _mm_shuffle_ps(temp0_5, zmm10, 0xc4)
            float temp0_70[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0), temp0_35)
            float temp0_72[0x4] =
                _mm_shuffle_ps(_mm_shuffle_ps(temp0_55, temp0_56, 0x12), zmm1_1, 0xe8)
            float temp0_73[0x4] = _mm_shuffle_ps(temp0_62, temp0_62, 0xaa)
            float temp0_74[0x4] = _mm_add_ps(temp0_67, temp0_70)
            float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_62, temp0_62, 0xff), temp0_43)
            float temp0_77[0x4] = _mm_mul_ps(temp0_73, temp0_41)
            float temp0_79[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0), temp0_35)
            float temp0_80[0x4] = _mm_add_ps(temp0_74, temp0_77)
            float temp0_82[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0xaa), temp0_41)
            float temp0_83[0x4] = _mm_add_ps(temp0_80, temp0_76)
            float temp0_85[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_66, temp0_66, 0x55), temp0_38)
            float temp0_86[0x4] = _mm_shuffle_ps(temp0_66, temp0_66, 0xff)
            float var_268[0x4] = temp0_83
            float temp0_87[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0x55)
            float temp0_88[0x4] = _mm_add_ps(temp0_85, temp0_79)
            float temp0_89[0x4] = _mm_mul_ps(temp0_87, temp0_38)
            float temp0_90[0x4] = _mm_mul_ps(temp0_86, temp0_43)
            float temp0_91[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0)
            float temp0_92[0x4] = _mm_add_ps(temp0_88, temp0_82)
            float temp0_93[0x4] = _mm_mul_ps(temp0_91, temp0_35)
            float temp0_95[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_72, temp0_72, 0xaa), temp0_41)
            float temp0_96[0x4] = _mm_add_ps(temp0_92, temp0_90)
            float temp0_97[0x4] = _mm_shuffle_ps(temp0_72, temp0_72, 0xff)
            float temp0_98[0x4] = _mm_add_ps(temp0_89, temp0_93)
            float temp0_99[0x4] = _mm_mul_ps(temp0_97, temp0_43)
            float temp0_100[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0)
            int96_t var_258_1 = temp0_96[0].12
            float temp0_101[0x4] = _mm_shuffle_ps(temp0_68, temp0_68, 0x55)
            float temp0_102[0x4] = _mm_add_ps(temp0_98, temp0_95)
            float temp0_103[0x4] = _mm_mul_ps(temp0_101, temp0_38)
            float temp0_105[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xaa), temp0_41)
            float temp0_106[0x4] = _mm_mul_ps(temp0_100, temp0_35)
            float temp0_107[0x4] = _mm_add_ps(temp0_102, temp0_99)
            float temp0_109[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_68, temp0_68, 0xff), temp0_43)
            float temp0_110[0x4] = _mm_add_ps(temp0_103, temp0_106)
            int96_t var_248_1 = temp0_107[0].12
            int96_t var_238_1 = _mm_add_ps(_mm_add_ps(temp0_110, temp0_105), temp0_109)[0].12
            int512_t zmm8_2
            int128_t zmm10_1
            float zmm12_1[0x4]
            zmm8_2, zmm10_1, zmm12_1 = sub_1407740e0(&var_268, 0x322bcc77)
            float zmm2_2[0x4] = var_268[0]
            float zmm4_2[0x4] =
                _mm_and_ps(_mm_cmpeq_ps(data_143f38cd0, zmm12_1, 2), data_143f38cc0 ^ zmm10_1)
                ^ data_143f38cc0
            float zmm1_2 = var_268[1]
            uint32_t zmm0_3[0x4] = var_268[2]
            zmm2_2[0] = zmm2_2[0] * zmm4_2[0]
            zmm1_2 = zmm1_2 * zmm4_2[0]
            zmm0_3[0] = zmm0_3[0] f* zmm4_2[0]
            var_268[0] = zmm2_2[0]
            float temp0_115[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0x55)
            var_268[1] = zmm1_2
            zmm1_2 = var_258_1:4.d * temp0_115[0]
            var_268[2] = zmm0_3[0]
            zmm0_3 = var_258_1:8.d
            zmm0_3[0] = zmm0_3[0] f* temp0_115[0]
            float zmm3_2 = var_258_1.d * temp0_115[0]
            zmm2_2 = var_248_1.d
            float temp0_116[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa)
            var_258_1:4.d = zmm1_2
            var_258_1:8.d = zmm0_3[0]
            zmm0_3 = var_248_1:8.d
            zmm1_2 = var_248_1:4.d * temp0_116[0]
            zmm0_3[0] = zmm0_3[0] f* temp0_116[0]
            zmm2_2[0] = zmm2_2[0] * temp0_116[0]
            var_248_1:4.d = zmm1_2
            var_248_1:8.d = zmm0_3[0]
            var_258_1.d = zmm3_2
            var_248_1.d = zmm2_2[0]
            sub_14077e4a0(&var_1f8, &var_268)
            float zmm5_2[0x4] = var_1f8
            float zmm6_3[0x4] = data_143f38cb0
            zmm8_2.o = var_68_1
            float temp0_117[0x4] = _mm_mul_ps(zmm5_2, zmm5_2)
            var_278 = 0x322bcc77
            float var_1c8_1[0x4] = zmm12_1
            float temp0_119[0x4] = _mm_add_ps(temp0_117, _mm_shuffle_ps(temp0_117, temp0_117, 0x4e))
            float temp0_121[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_119, temp0_119, 0x39), temp0_119)
            float temp0_122[0x4] = _mm_rsqrt_ps(temp0_121)
            float temp0_123[0x4] = _mm_mul_ps(zmm6_3, temp0_121)
            float temp0_128[0x4] = _mm_add_ps(
                _mm_mul_ps(
                    _mm_sub_ps(zmm6_3, _mm_mul_ps(_mm_mul_ps(temp0_122, temp0_122), temp0_123)), 
                    temp0_122), 
                temp0_122)
            float temp0_131[0x4] =
                _mm_sub_ps(zmm6_3, _mm_mul_ps(_mm_mul_ps(temp0_128, temp0_128), temp0_123))
            uint32_t zmm0_4[0x4] = var_278
            zmm0_4 = _mm_cmpeq_ps(_mm_shuffle_ps(zmm0_4, zmm0_4, 0), temp0_121, 2)
            float temp0_135[0x4] = _mm_add_ps(_mm_mul_ps(temp0_131, temp0_128), temp0_128)
            float temp0_136[0x4] = _mm_unpacklo_ps(var_238_1:4.d, 0)
            zmm6_3 =
                _mm_and_ps(_mm_mul_ps(temp0_135, zmm5_2) ^ data_143f38ca0, zmm0_4) ^ data_143f38ca0
            float var_1d8_1[0x4] =
                _mm_unpacklo_ps(_mm_unpacklo_ps(var_238_1.d, var_238_1:8.d[0].q), temp0_136[0].q)
            var_1e8 = zmm6_3
        
        sub_141f4a580(rsi_1, &var_1e8, 0, 0, 0)
        int512_t zmm6_4
        zmm6_4.o = zmm6_1
    else
        void* rax_15 = sub_14247bf70()
        void* rdx_5 = *(rbx_2 + 0x10)
        int64_t rax_16 = sx.q(*(rax_15 + 0x38))
        
        if (rax_16.d s<= *(rdx_5 + 0x38) && *(*(rdx_5 + 0x30) + (rax_16 << 3)) == rax_15 + 0x30
                && (*(rbx_2 + 0x234) & 1) != 0)
            void* rax_20
            int64_t rax_21
            void* rdx_6
            
            do
                void* rax_18
                rax_18, zmm6_1 = sub_140d209c0(r14_2)
                r14_2 = rax_18
                rbx_2 = *(*(rax_18 + 0x20) + 0x10)
                
                if (rbx_2 == 0)
                    goto label_141dd1f6e
                
                rax_20 = sub_14247bf70()
                rdx_6 = *(rbx_2 + 0x10)
                rax_21 = sx.q(*(rax_20 + 0x38))
                
                if (rax_21.d s> *(rdx_6 + 0x38))
                    break
            while (*(*(rdx_6 + 0x30) + (rax_21 << 3)) == rax_20 + 0x30)
        
        if (rbx_2 == 0)
            goto label_141dd1f6e
        
        void* rax_23 = sub_140bdf670()
        void* rdx_7 = *(rbx_2 + 0x10)
        int64_t rax_24 = sx.q(*(rax_23 + 0x38))
        
        if (rax_24.d s> *(rdx_7 + 0x38) || *(*(rdx_7 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30)
            goto label_141dd1f6e
        
        sub_141f4a580(rsi_1, arg2, 0, 0, 0)
else
    void* i_1 = nullptr
    int32_t var_ec_1 = 0x18
    int32_t var_f0_1 = 0
    void* rax_7 = sub_1425881f0()
    void* const r14_1
    
    if (rax_7 == 0)
        r14_1 = nullptr
    else
        void* rax_8 = sub_142459c10()
        
        if (rax_8 == 0)
            r14_1 = nullptr
        else
            int64_t rax_9 = sx.q(*(rax_8 + 0x38))
            
            if (rax_9.d s> *(rax_7 + 0x38))
                r14_1 = nullptr
            else
                r14_1 = rax_7
                
                if (*(*(rax_7 + 0x30) + (rax_9 << 3)) != rax_8 + 0x30)
                    r14_1 = nullptr
    
    void* r8_1 = &var_1b8
    
    if (r14_1 != sub_142459c10())
        sub_1419f71f0(arg1, rax_7, r8_1)
    else
        sub_1419f6fe0(arg1, rax_7, r8_1)
    
    int64_t rax_12 = sx.q(var_f0_1)
    
    if (rax_12.d s> 0)
        void* i = &var_1b8
        
        if (i_1 != 0)
            i = i_1
        
        for (void* rdx_4 = i + (rax_12 << 3); i != rdx_4; i += 8)
            int64_t* rax_13 = *i
            
            if (rax_13 != 0 && rax_13[0x18] == 0 && *(rax_13 + 0x8c) == 0)
                rsi_1 = rax_13
                
                if (rax_13[0x14] == arg1)
                    arg1[0x26] = rax_13
                
                break
    
    if (i_1 != 0)
        sub_140a74f90(i_1)
    
    if (rsi_1 != 0)
        goto label_141dd1ea6

void* var_f8_1 = nullptr
int32_t var_f0_2 = 0
int32_t var_ec_2 = 0x18
sub_141db58b0(arg1, &var_1b8, 0)
void* rcx_18 = var_f8_1
void* rbx_3 = &var_1b8
int64_t r14_3 = 0

if (rcx_18 != 0)
    rbx_3 = rcx_18

int64_t r15 = sx.q(var_f0_2) << 3
uint64_t r15_1 = r15 u>> 3

if (rbx_3 u> rbx_3 + r15)
    r15_1 = 0

if (r15_1 != 0)
    do
        int64_t* rcx_19 = *rbx_3
        
        if ((*(rcx_19 + 0x8a) & 0x40) == 0)
            (*(*rcx_19 + 0x3a8))(rcx_19)
        
        rbx_3 += 8
        r14_3 += 1
    while (r14_3 != r15_1)
    
    rcx_18 = var_f8_1

if (rcx_18 != 0)
    sub_140a74f90(rcx_18)

char rcx_21

if (rsi_1 != 0)
    rcx_21 = 0
else
    void* rcx_20 = arg1[2]
    
    if (rcx_20 == 0)
        rcx_21 = 0
    else if (sub_141db5a90(rcx_20) == 0)
        rcx_21 = 0
    else
        rcx_21 = 1

char rax_34 = (*(arg1 + 0x5c) & 0xfe) | rcx_21
*(arg1 + 0x5c) = rax_34

if ((rax_34 & 1) == 0)
    (*(*arg1 + 0x4b0))(arg1)

int32_t rax_36 = *(arg1 + 0xc)

if (rax_36 s< data_143e1d9b4)
    int16_t temp0_177
    int32_t temp1_1
    temp0_177:temp1_1 = sx.q(rax_36)
    uint32_t rdx_14 = zx.d(temp0_177)
    int32_t rax_38 = temp1_1 + rdx_14
    r13 = *(data_143e1d9a0 + (sx.q(rax_38 s>> 0x10) << 3)) + sx.q(zx.d(rax_38.w) - rdx_14) * 0x18

uint8_t result = (*(r13 + 8) u>> 0x1d).b

if ((result & 1) == 0 || arg6 != 0)
    result = (*(*arg1 + 0x400))(arg1)
    
    if (arg7 == 0)
        result = sub_141dc3850(arg1, arg2, 1, nullptr)
    else if (rsi_1 != 0)
        var_228 = arg1
        var_218 = &var_228
        int32_t var_210
        var_210.q = arg2
        result = sub_141db2af0(&data_143a2d000, &var_278, &var_218, nullptr)

__security_check_cookie(rax_1 ^ &var_2a8)
return result
