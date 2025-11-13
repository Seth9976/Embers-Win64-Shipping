// 函数: sub_14111dee0
// 地址: 0x14111dee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_2f8
int64_t rax_1 = __security_cookie ^ &var_2f8
uint64_t rdi = zx.q(arg3[0x2a9].d)
void* var_2a0 = arg2
int32_t rax_2 = sub_1422e5a30(arg3)
int32_t rbx = 3

if (data_1439b5c10 == 0)
    rdi.b = 0
else
    int32_t rdx = data_1439b5c14
    
    if (rdx s< 0)
        rdi.b = 0
    else
        int32_t rcx_1 = 3
        
        if (rdx s< 3)
            rcx_1 = rdx
        
        if (rcx_1 s<= 0 || rdi.d s< 3)
            rdi.b = 0
        else if (sub_1410f5e80(rax_2) == 0)
            rdi.b = 0
        else
            rdi.b = 1

int32_t r14 = arg3[0x2a9].d
int32_t rax_4 = sub_1422e5a30(arg3)
char var_2a8_1

if (data_143e56de8 == 0)
    var_2a8_1 = 0
else
    int32_t rcx_4 = data_1439b5c24
    
    if (rcx_4 s< 0)
        var_2a8_1 = 0
    else
        if (rcx_4 s< 3)
            rbx = rcx_4
        
        if (rbx s<= 0 || r14 s< 3)
            var_2a8_1 = 0
        else
            var_2a8_1 = 1
            
            if (sub_1410f5e80(rax_4) == 0)
                var_2a8_1 = 0

char var_2a7_1

if (data_143f0f1c7 != 0)
    var_2a7_1 = 1

if (data_143f0f1c7 == 0 || *(data_143ed2e18 + 4) == 0)
    var_2a7_1 = 0

void* result = *arg3
int32_t r14_1 = 0
int128_t zmm6
int128_t var_48 = zmm6
int128_t zmm7
int128_t var_58 = zmm7
float zmm8[0x4]
float var_68[0x4] = zmm8
void* rcx_6 = *(result + 0x20)
int32_t r12 = 1
int128_t zmm9
int128_t var_78 = zmm9
float zmm10[0x4]
float var_88[0x4] = zmm10
float zmm11[0x4]
float var_98[0x4] = zmm11
float zmm12[0x4]
float var_a8[0x4] = zmm12
float zmm3[0x4]

if (rdi.b != 0 && (*(result + 0x28) & 0x800000) != 0 && data_143a2dd48 != 0
        && *(rcx_6 + 0x18b0) s> 0)
    sub_1410e0370(arg2)
    char rax_7 = (*(arg1 + 0x570)).b
    float var_298[0x4] = zx.o(0)
    int32_t rdx_1 = 0
    void* rcx_8 = nullptr
    
    if ((rax_7 & 0x10) == 0)
        if ((rax_7 & 0x20) == 0)
            rcx_8 = arg1 + 0x170
            float zmm1_1[0x4] = *(arg1 + 0x58)
            float zmm2[0x4] = *(arg1 + 0x5c)
            rdx_1 = *(arg1 + 0x1e0)
            var_298[0] = (*(arg1 + 0x54))[0]
            var_298[1] = zmm1_1[0]
            var_298[2] = zmm2[0]
            goto label_14111e0bc
        
        var_298 = *(arg1 + 0x3b4)
    else
        rdx_1 = *(arg1 + 0x460)
        rcx_8 = arg1 + 0x3f0
    label_14111e0bc:
        void* rax_8 = *(rcx_8 + 0x60)
        
        if (rax_8 != 0)
            rcx_8 = rax_8
    
    zmm3 = data_142d4cc00
    float zmm4_1[0x4] = data_142d4cc20
    float zmm5_1[0x4] = data_142d4cc30
    zmm10 = *(arg1 + 0xb0)
    zmm8 = *(arg1 + 0xa0)
    zmm11 = *(arg1 + 0xc0)
    zmm12 = *(arg1 + 0xd0)
    float temp0_1[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
    int32_t zmm6_1 = *(arg1 + 0x54)
    zmm7 = *(arg1 + 0x58)
    zmm9 = *(arg1 + 0x5c)
    float temp0_2[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
    float temp0_3[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
    int128_t var_258
    __builtin_memcpy(&var_258, 
        "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x"
    "3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00\x00\x00"
    "00", 
        0x30)
    float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm12)
    int32_t var_21c_1 = 0x3f800000
    float temp0_6[0x4] = _mm_mul_ps(temp0_1, zmm8)
    float temp0_7[0x4] = _mm_mul_ps(temp0_2, zmm10)
    float temp0_8[0x4] = _mm_mul_ps(temp0_3, zmm11)
    float temp0_9[0x4] = _mm_add_ps(temp0_6, temp0_7)
    float temp0_11[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0x55), zmm10)
    float temp0_12[0x4] = _mm_add_ps(temp0_9, temp0_8)
    float temp0_14[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0xaa), zmm11)
    float temp0_15[0x4] = _mm_add_ps(temp0_12, temp0_5)
    float temp0_17[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_1, zmm4_1, 0), zmm8)
    float temp0_18[0x4] = _mm_shuffle_ps(zmm4_1, zmm4_1, 0xff)
    float var_1d8[0x4] = temp0_15
    float temp0_19[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0)
    float temp0_20[0x4] = _mm_add_ps(temp0_17, temp0_11)
    float temp0_21[0x4] = _mm_mul_ps(temp0_19, zmm8)
    float temp0_22[0x4] = _mm_mul_ps(temp0_18, zmm12)
    float temp0_23[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0x55)
    float temp0_24[0x4] = _mm_add_ps(temp0_20, temp0_14)
    float temp0_25[0x4] = _mm_mul_ps(temp0_23, zmm10)
    float temp0_27[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_1, zmm5_1, 0xaa), zmm11)
    float temp0_28[0x4] = _mm_add_ps(temp0_21, temp0_25)
    float temp0_29[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
    float temp0_30[0x4] = _mm_add_ps(temp0_24, temp0_22)
    float temp0_31[0x4] = _mm_mul_ps(temp0_29, zmm12)
    float temp0_32[0x4] = _mm_add_ps(temp0_28, temp0_27)
    float var_1c8_1[0x4] = temp0_30
    float var_228[0x4]
    var_228[0] = zmm6_1
    float temp0_33[0x4] = _mm_shuffle_ps(var_228, var_228, 0xe1)
    float temp0_34[0x4] = _mm_add_ps(temp0_32, temp0_31)
    temp0_33[0] = zmm7.d
    float temp0_35[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc6)
    temp0_35[0] = zmm9.d
    float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xc9)
    float var_228_1[0x4] = temp0_36
    float var_1b8_1[0x4] = temp0_34
    float temp0_37[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0x55)
    float temp0_39[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_36, temp0_36, 0), zmm8)
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xaa)
    float temp0_41[0x4] = _mm_mul_ps(temp0_37, zmm10)
    float temp0_42[0x4] = _mm_mul_ps(temp0_40, zmm11)
    float temp0_43[0x4] = _mm_shuffle_ps(temp0_36, temp0_36, 0xff)
    float temp0_44[0x4] = _mm_add_ps(temp0_39, temp0_41)
    float temp0_45[0x4] = _mm_mul_ps(temp0_43, zmm12)
    float temp0_47[0x4] = _mm_add_ps(_mm_add_ps(temp0_44, temp0_42), temp0_45)
    void* r8 = *(arg1 + 0x5c0)
    float var_1a8_1[0x4] = temp0_47
    uint128_t zmm6_2 = sub_141111fb0(arg2, arg3, *(r8 + 0x20), &var_1d8, rdx_1, rcx_8, &var_298, 
        (*(arg1 + 0x3c0))[0], r8 + 0x40)
    rdi = *(*(arg1 + 0x5c0) + 0x40)
    int32_t var_2d8_1
    var_2d8_1.q = rdi
    sub_1411db5d0(&arg3[0xa1b], arg3, arg2, arg1, zmm6_2, var_2d8_1, &data_143e57950)
    int32_t rbx_2 = sbb.d(rbx, rbx, data_143e56de4 != 0) + 2
    int32_t var_2c0_1
    var_2c0_1.b = 0
    int128_t* var_2c8_1
    var_2c8_1.b = 1
    int64_t rcx_11 = data_143ec4fdc
    uint64_t var_2d0_2
    var_2d0_2.b = 1
    int16_t var_120_1 = 0
    int128_t var_158 = data_143f02308
    int32_t var_144_1 = divs.dp.d(sx.q(rcx_11.d), rbx_2)
    int32_t var_148_1 = data_143f02318
    int32_t var_13c_1 = 0
    int32_t var_140_1 = divs.dp.d(sx.q((rcx_11 u>> 0x20).d), rbx_2)
    int32_t var_138_1 = 1
    wchar16 const* const var_118_1 = u"UnknownTexture2D"
    int32_t var_128_1 = data_143ed33cc
    var_2d8_1.q = u"RayTracedShadows"
    int32_t var_134_1 = 0x10000
    int16_t var_130_1 = 1
    int32_t var_12c_1 = 0xf
    int32_t var_124_1 = 0x10001
    int16_t var_110_1 = 1
    char var_10e_1 = 0
    sub_1419a0ce0(&data_1439c9260, arg2, &var_158, arg1 + 0x5b0, var_2d8_1, var_2d0_2.b, 
        var_2c8_1.b, var_2c0_1.b)
    sub_1410e0370(arg2)
    result = sub_141114690(arg2, arg3, arg1, rdi)
    
    if (var_2a7_1 != 0)
        result = sub_141123c80(&data_143e57960)

if ((*(arg1 + 0x570) & 0x10) != 0)
    result = *arg3
    
    if ((*(result + 0x28) & 0x800000) != 0 && data_143f3dab0 != 0 && *(rcx_6 + 0x18b4) s> 0
            && var_2a8_1 != 0)
        sub_1410e0370(arg2)
        zmm3 = data_142d4cc00
        void* rdx_8 = arg1 + 0x3f0
        float zmm4_2[0x4] = data_142d4cc20
        float zmm5_2[0x4] = data_142d4cc30
        zmm10 = *(arg1 + 0xb0)
        zmm8 = *(arg1 + 0xa0)
        zmm11 = *(arg1 + 0xc0)
        zmm12 = *(arg1 + 0xd0)
        int32_t zmm6_3 = *(arg1 + 0x54)
        zmm7 = *(arg1 + 0x58)
        zmm9 = *(arg1 + 0x5c)
        void* rcx_17 = *(rdx_8 + 0x60)
        float temp0_50[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0)
        float temp0_51[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
        int128_t var_218
        __builtin_memcpy(&var_218, 
            "\x00\x00\x80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x"
        "80\x3f\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x80\x3f\x00"
        "00\x00\x00", 
            0x30)
        float temp0_52[0x4] = _mm_mul_ps(temp0_50, zmm8)
        int32_t var_1dc_1 = 0x3f800000
        int128_t var_268 = zx.o(0)
        float temp0_53[0x4] = _mm_shuffle_ps(zmm3, zmm3, 0x55)
        float temp0_55[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm3, zmm3, 0xff), zmm12)
        float temp0_56[0x4] = _mm_mul_ps(temp0_53, zmm10)
        float temp0_57[0x4] = _mm_mul_ps(temp0_51, zmm11)
        float temp0_58[0x4] = _mm_add_ps(temp0_52, temp0_56)
        float temp0_60[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0x55), zmm10)
        float temp0_61[0x4] = _mm_add_ps(temp0_58, temp0_57)
        float temp0_63[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa), zmm11)
        float temp0_64[0x4] = _mm_add_ps(temp0_61, temp0_55)
        float temp0_66[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0), zmm8)
        float temp0_67[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xff)
        float var_198[0x4] = temp0_64
        float temp0_68[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0)
        float temp0_69[0x4] = _mm_add_ps(temp0_66, temp0_60)
        float temp0_70[0x4] = _mm_mul_ps(temp0_68, zmm8)
        float temp0_71[0x4] = _mm_mul_ps(temp0_67, zmm12)
        float temp0_72[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0x55)
        float temp0_73[0x4] = _mm_add_ps(temp0_69, temp0_63)
        float temp0_74[0x4] = _mm_mul_ps(temp0_72, zmm10)
        float temp0_76[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0xaa), zmm11)
        float temp0_77[0x4] = _mm_add_ps(temp0_70, temp0_74)
        float temp0_78[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
        float temp0_79[0x4] = _mm_add_ps(temp0_73, temp0_71)
        float temp0_80[0x4] = _mm_mul_ps(temp0_78, zmm12)
        float temp0_81[0x4] = _mm_add_ps(temp0_77, temp0_76)
        float var_188_1[0x4] = temp0_79
        float var_1e8[0x4]
        var_1e8[0] = zmm6_3
        float temp0_82[0x4] = _mm_shuffle_ps(var_1e8, var_1e8, 0xe1)
        float temp0_83[0x4] = _mm_add_ps(temp0_81, temp0_80)
        temp0_82[0] = zmm7.d
        float temp0_84[0x4] = _mm_shuffle_ps(temp0_82, temp0_82, 0xc6)
        temp0_84[0] = zmm9.d
        float temp0_85[0x4] = _mm_shuffle_ps(temp0_84, temp0_84, 0xc9)
        float var_1e8_1[0x4] = temp0_85
        float var_178_1[0x4] = temp0_83
        float temp0_86[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0x55)
        float temp0_90[0x4] = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_85, temp0_85, 0), zmm8), 
            _mm_mul_ps(temp0_86, zmm10))
        void* r8_6 = *(arg1 + 0x5c0)
        float zmm0_3[0x4] = *(arg1 + 0x3c0)
        float temp0_91[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xaa)
        
        if (rcx_17 != 0)
            rdx_8 = rcx_17
        
        float temp0_92[0x4] = _mm_mul_ps(temp0_91, zmm11)
        float temp0_93[0x4] = _mm_shuffle_ps(temp0_85, temp0_85, 0xff)
        float var_2c0_2 = zmm0_3[0]
        int128_t* var_2c8_2 = &var_268
        float temp0_94[0x4] = _mm_add_ps(temp0_90, temp0_92)
        int32_t rax_21 = *(arg1 + 0x460)
        float var_168_1[0x4] = _mm_add_ps(temp0_94, _mm_mul_ps(temp0_93, zmm12))
        sub_141111580(arg2, arg3, *(r8_6 + 0x20), &var_198, rax_21, rdx_8, var_2c8_2, var_2c0_2, 
            r8_6 + 0x48)
        bool cond:3_1 = *(arg1 + 0x5b0) != 0
        int64_t* rbx_3 = nullptr
        int64_t rax_23 = *(*(arg1 + 0x5c0) + 0x48)
        int32_t rax_24 = sub_1422e5a30(arg3)
        void* var_288
        var_288.d = rax_24
        
        if (sub_141137bd0(rax_24) == 0)
            rbx_3 = *(arg1 + 0x5b0)
            
            if (rbx_3 != 0)
                (*(*rbx_3 + 0x30))(rbx_3)
            
            int64_t* rcx_22 = *(arg1 + 0x5b0)
            *(arg1 + 0x5b0) = 0
            
            if (rcx_22 != 0)
                (*(*rcx_22 + 0x38))(rcx_22)
        
        int32_t var_2d8_2
        void* rdi_3
        
        if (*(arg1 + 0x5b0) != 0)
            rdi_3 = var_2a0
        else
            int32_t rdi_2 = sbb.d(rdi.d, rdi.d, data_143e56de4 != 0) + 2
            var_2c0_2.b = 0
            var_2c8_2.b = 1
            int64_t rcx_23 = data_143ec4fdc
            void* var_2d0_3
            var_2d0_3.b = 1
            int16_t var_d0_1 = 0
            int128_t var_108 = data_143f02308
            int32_t var_f4_1 = divs.dp.d(sx.q(rcx_23.d), rdi_2)
            int32_t var_f8_1 = data_143f02318
            rdi_3 = var_2a0
            int32_t var_f0_1 = divs.dp.d(sx.q((rcx_23 u>> 0x20).d), rdi_2)
            int32_t var_ec_1 = 0
            wchar16 const* const var_c8_1 = u"UnknownTexture2D"
            int32_t var_d8_1 = data_143ed33cc
            var_2d8_2.q = u"RayTracedShadows"
            int32_t var_e8_1 = 1
            int32_t var_e4_1 = 0x10000
            int16_t var_e0_1 = 1
            int32_t var_dc_1 = 0xf
            int32_t var_d4_1 = 0x10001
            int16_t var_c0_1 = 1
            char var_be_1 = 0
            sub_1419a0ce0(&data_1439c9260, rdi_3, &var_108, arg1 + 0x5b0, var_2d8_2, var_2d0_3.b, 
                var_2c8_2.b, var_2c0_2.b)
        
        sub_1410e0370(rdi_3)
        int64_t var_278
        void* rax_37
        
        if (rbx_3 == 0)
            rax_37 = nullptr
            r12 = 0
            var_278 = 0
            r14_1 = 2
        else
            rax_37 = rbx_3[2]
            var_2a0 = rax_37
            
            if (rax_37 != 0)
                *(rax_37 + 8) += 1
                rax_37 = var_2a0
        
        var_2d8_2.b = cond:3_1
        result = sub_141113fc0(rdi_3, arg3, arg1, rax_23, var_2d8_2.b, rax_37)
        
        if (r14_1 != 0)
            result = sub_1405d1550(&var_278)
        
        if (r12 != 0)
            result = sub_1405d1550(&var_2a0)
        
        if (var_2a7_1 != 0)
            void* rdi_4 = data_1439b5e28
            
            if (*(rdi_4 + 0x11) != 0)
                if (data_143f0f1c7 != 0)
                    int64_t* rcx_30 = data_143f0f180
                    result = (*(*rcx_30 + 0x628))(rcx_30, rdi_4)
                
                *(rdi_4 + 0x11) = 0
            
            void* rdi_5 = data_1439b5e48
            
            if (*(rdi_5 + 0x11) != 0)
                if (data_143f0f1c7 != 0)
                    int64_t* rcx_31 = data_143f0f180
                    result = (*(*rcx_31 + 0x628))(rcx_31, rdi_5)
                
                *(rdi_5 + 0x11) = 0
            
            if (data_1439b5de0 != 0)
                void* rdi_6 = data_1439b5e68
                
                if (*(rdi_6 + 0x11) != 0)
                    if (data_143f0f1c7 != 0)
                        int64_t* rcx_32 = data_143f0f180
                        result = (*(*rcx_32 + 0x628))(rcx_32, rdi_6)
                    
                    *(rdi_6 + 0x11) = 0
        
        if (rbx_3 != 0)
            result = (*(*rbx_3 + 0x38))(rbx_3)

__security_check_cookie(rax_1 ^ &var_2f8)
return result
