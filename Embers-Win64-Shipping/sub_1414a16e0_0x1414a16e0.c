// 函数: sub_1414a16e0
// 地址: 0x1414a16e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm6
uint128_t var_58 = zmm6
float zmm7[0x4]
float var_68[0x4] = zmm7
float zmm8[0x4]
float var_78[0x4] = zmm8
void var_338
int64_t rax_1 = __security_cookie ^ &var_338
void* r13 = arg6
int64_t r12 = data_1439b59c0
char rax_3 = sub_141421520(*(arg3 + 0x1548))
int32_t rcx_1 = *(arg1 + 0x570)
char rbx = rax_3
int64_t* result
int64_t* var_2e0
int32_t var_2d8

if ((rcx_1 & 0x1800) != 0)
    char rax_50
    
    if (*(arg3 + 0xd7a) != 0 && *(arg3 + 0xd7b) == 0)
        rax_50 = sub_142391f10(arg3)
    
    if (*(arg3 + 0xd7a) == 0 || *(arg3 + 0xd7b) != 0 || rax_50 == 0)
        r12 = 0
    else
        zmm7 = zx.o(0)
        void* rcx_60 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        r12.b = 1
        uint64_t rax_52 = zx.q(*(arg5 + 0x3b8))
        zmm6 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x15a4)))
        zmm7[0] = float.s(rax_52)
        void* rax_53 = rcx_60 + 0x28
        
        if (rax_53 u> *(arg2 + 0x38))
            zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_60 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_53 = rcx_60 + 0x28
        
        *(arg2 + 0x30) = rax_53
        *(arg2 + 0x14) += 1
        **(arg2 + 8) = rcx_60
        *(arg2 + 8) = rcx_60 + 8
        *(rcx_60 + 8) = 0
        *rcx_60 = &data_142d54998
        *(rcx_60 + 0x1c) = zmm7[0]
        *(rcx_60 + 0x20) = zmm6.d
        *(rcx_60 + 0x10) = 0
        *(rcx_60 + 0x18) = 0
        *(rcx_60 + 0x24) = 0x3f800000
        int32_t r13_2 = *(arg3 + 0x15a4)
        void* var_2d0
        var_2d0.d = *(arg3 + 0x15a0)
        void* rcx_66 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        var_2e0.d = *(arg3 + 0x159c)
        var_2d8 = *(arg3 + 0x1598)
        void* rax_59 = rcx_66 + 0x28
        
        if (rax_59 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_66 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_59 = rcx_66 + 0x28
        
        *(arg2 + 0x30) = rax_59
        void** rax_60 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        rbx = rax_3
        *rax_60 = rcx_66
        *(arg2 + 8) = rcx_66 + 8
        *(rcx_66 + 8) = 0
        *rcx_66 = &data_142f18bc8
        *(rcx_66 + 0x14) = var_2d8
        *(rcx_66 + 0x18) = var_2e0.d
        *(rcx_66 + 0x20) = r13_2
        *(rcx_66 + 0x1c) = var_2d0.d
        *(rcx_66 + 0x10) = 1
    
    void* rdx_16 = arg1 + 0x850
    void* rax_65 = *(rdx_16 + 0x30)
    
    if (rax_65 != 0)
        rdx_16 = rax_65
    
    result = sx.q(arg4)
    void* rcx_70 = result * 3
    int64_t*** rcx_71 = rdx_16 + (rcx_70 << 3)
    
    if (*(rdx_16 + (rcx_70 << 3) + 8) s> 0)
        result = sub_1412e4c00(rcx_71, arg1 + 0x8a8, rcx_71[2], 0, rbx, zx.d(r12.b) + 1, arg2)
    
    if (r12.b != 0)
        void*** rcx_74 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_68 = &rcx_74[5]
        
        if (rax_68 u> *(arg2 + 0x38))
            sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_74 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_68 = &rcx_74[5]
        
        *(arg2 + 0x30) = rax_68
        *(arg2 + 0x14) += 1
        **(arg2 + 8) = rcx_74
        *(arg2 + 8) = &rcx_74[1]
        *rcx_74 = &data_142f18bc8
        rcx_74[2].b = 0
        *(rcx_74 + 0x14) = 0
        *(rcx_74 + 0x1c) = 0
        rcx_74[1] = 0
        zmm7 = zx.o(*(arg3 + 0x15a0))
        void*** rcx_80 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        zmm8 = zx.o(*(arg3 + 0x159c))
        uint128_t zmm9 = zx.o(*(arg3 + 0x1598))
        zmm6 = _mm_cvtepi32_ps(zx.o(*(arg3 + 0x15a4)))
        void* rax_71 = &rcx_80[5]
        float temp0_58[0x4] = _mm_cvtepi32_ps(zmm7)
        float temp0_59[0x4] = _mm_cvtepi32_ps(zmm8)
        zmm9 = _mm_cvtepi32_ps(zmm9)
        
        if (rax_71 u> *(arg2 + 0x38))
            zmm6 = sub_140b0e3d0(arg2 + 0x30, 0x30)
            rcx_80 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
            rax_71 = &rcx_80[5]
        
        *(arg2 + 0x30) = rax_71
        void**** rax_72 = *(arg2 + 8)
        *(arg2 + 0x14) += 1
        *rax_72 = rcx_80
        *(arg2 + 8) = &rcx_80[1]
        rcx_80[1] = 0
        result = &data_142d54998
        rcx_80[2].d = zmm9.d
        *rcx_80 = &data_142d54998
        *(rcx_80 + 0x14) = temp0_59[0]
        *(rcx_80 + 0x1c) = temp0_58[0]
        rcx_80[4].d = zmm6.d
        rcx_80[3].d = 0
        *(rcx_80 + 0x24) = 0x3f800000
else if ((rcx_1.b & 0x40) == 0 || *(arg1 + 0x534) s< 0 || (rcx_1.b & 0x10) == 0)
    int64_t rbx_4 = data_1439b6fb8
    
    if (arg8 != 0)
        rbx_4 = data_1439b6fa0
    
    void* rdi_1 = nullptr
    int64_t var_164
    __builtin_memset(&var_164, 0, 0x43)
    int16_t var_120_1 = 0
    int128_t var_1c0
    __builtin_memset(&var_1c0, 0, 0x30)
    int128_t var_178_1 = zx.o(0)
    sub_140fdc870(arg2, &var_1c0)
    int64_t var_188_1 = data_14395da18
    int32_t var_168_1 = 0
    int64_t var_190_1 = r12
    int64_t var_180_1 = rbx_4
    void* var_2a8
    sub_1419a2ec0(*(arg3 + 0x5150), &var_2a8, &data_143ed9940, 0)
    void* rax_22 = var_2a8
    var_1c0.q = data_1439c9410
    int64_t rcx_28 = 0
    
    if (rax_22 != 0)
        int64_t rdx_8 = sx.q(*(rax_22 + 0x10c))
        void* var_2a0
        int64_t* rbx_5 = *(var_2a0 + 0x10)
        int64_t rax_24 = rbx_5[3]
        
        if (*(rax_24 + (rdx_8 << 3)) == 0)
            sub_1419ccf30(rbx_5, rdx_8.d)
            rax_24 = rbx_5[3]
        
        rcx_28 = *(rax_24 + (rdx_8 << 3))
    
    var_1c0:8.q = rcx_28
    int32_t var_168_2 = 0
    sub_1419870b0(arg2, &var_1c0, 2)
    sub_14149e690(var_2a8, arg2, arg3, arg1)
    char rcx_32 = (data_1439c7a34).b
    int32_t r9_2 = *(r13 + 0x90)
    int128_t var_d8
    int128_t* var_310_2 = &var_d8
    var_d8 = zx.o(0)
    char var_b0_1 = 0
    int32_t var_c8_1 = 1
    int64_t* rcx_33 = data_143f0f180
    int128_t var_c4_1 = data_143dbb1e0
    int32_t var_b4_1 = (1 << rcx_32) - 1
    int64_t var_a8_1 = 0
    int32_t var_a0_1 = 0
    (*(*rcx_33 + 0x498))(rcx_33, &var_2e0, &data_143f02b98, zx.q(r9_2 << 4), 4, var_310_2)
    int64_t* rcx_34 = data_143f0f180
    var_310_2.d = 1
    int64_t rax_30 =
        (*(*rcx_34 + 0x130))(rcx_34, &data_143f02b98, var_2e0, 0, *(r13 + 0x90) << 4, var_310_2)
    void* rcx_35 = *(r13 + 0x80)
    uint32_t count = *(r13 + 0x90) << 4
    
    if (rcx_35 != 0)
        r13 = rcx_35
    
    memcpy(rax_30, r13, count)
    int64_t* rcx_37 = data_143f0f180
    int64_t r9_4 = (*(*rcx_37 + 0x138))(rcx_37, &data_143f02b98, var_2e0)
    int64_t* r12_4 = var_2e0
    void*** rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_32 = &rcx_40[5]
    
    if (rax_32 u> *(arg2 + 0x38))
        r9_4 = sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_40 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_32 = &rcx_40[5]
    
    *(arg2 + 0x30) = rax_32
    int64_t* rax_33 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_33 = rcx_40
    *(arg2 + 8) = &rcx_40[1]
    rcx_40[1] = 0
    *rcx_40 = &data_142d56618
    rcx_40[2].d = 0
    rcx_40[3] = r12_4
    rcx_40[4].d = 0
    int64_t r12_5 = data_1439c9150
    
    if (r12_5 == 0)
        sub_140af98a0("Unknown", 0xbc8, Tried to call DrawIndexedPrimitive with null IndexBuffer!", 
            r9_4)
        sub_140afbb40()
    
    void*** rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_35 = &rcx_46[6]
    
    if (rax_35 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x38)
        rcx_46 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_35 = &rcx_46[6]
    
    *(arg2 + 0x30) = rax_35
    int64_t* rax_36 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_36 = rcx_46
    *(arg2 + 8) = &rcx_46[1]
    rcx_46[1] = 0
    *rcx_46 = &data_142f11598
    rcx_46[2] = r12_5
    rcx_46[3] = 0
    rcx_46[4] = 8
    rcx_46[5].d = 0xc
    *(rcx_46 + 0x2c) = 1
    int64_t* rbx_6 = var_2e0
    var_2e0 = nullptr
    
    if (rbx_6 != 0)
        rbx_6[1].d -= 1
        
        if (rbx_6[1].d == 1)
            char rax_39
            
            if (rbx_6[2].b == 0 && data_143f0f1d0 == 0)
                rax_39 = sub_1405949a0()
            
            if (rbx_6[2].b != 0 || (data_143f0f1d0 == 0 && rax_39 != 0))
                (**rbx_6)(rbx_6, 1)
            else
                bool z_1
                
                if (0 == *(rbx_6 + 0xc))
                    *(rbx_6 + 0xc) = 1
                    z_1 = true
                else
                    *(rbx_6 + 0xc)
                    z_1 = false
                
                if (z_1)
                    int32_t rax_41 = sub_140a20af0()
                    
                    if (rax_41 != 0)
                        rdi_1 = *(&data_143cf0bf8 + (zx.q(rax_41) u>> 0xe << 3))
                            + (zx.q(rax_41) & 0x3fff) * 0x18
                    
                    *(rdi_1 + 8) = rbx_6
                    sub_1405a42f0(&data_143f02390, rax_41)
    
    if (arg7 != 0 && *(data_143ed97d8 + 4) == 0)
        void* rdx_14 = arg1 + 0x850
        void* rax_47 = *(rdx_14 + 0x30)
        
        if (rax_47 != 0)
            rdx_14 = rax_47
        
        int64_t rcx_54 = sx.q(arg4) * 3
        int64_t*** rcx_55 = rdx_14 + (rcx_54 << 3)
        
        if (*(rdx_14 + (rcx_54 << 3) + 8) s> 0)
            var_310_2.d = 1
            int32_t var_318_4
            var_318_4.b = rax_3
            sub_1412e4c00(rcx_55, arg1 + 0x8a8, rcx_55[2], 0, var_318_4.b, var_310_2.d, arg2)
    
    result = sub_1405d1550(&var_2e0)
else
    int64_t rbx_1 = data_1439b6fa0
    int64_t var_20c
    __builtin_memset(&var_20c, 0, 0x43)
    int128_t var_268
    __builtin_memset(&var_268, 0, 0x30)
    int128_t var_220_1 = zx.o(0)
    int16_t var_1c8_1 = 0
    sub_140fdc870(arg2, &var_268)
    int64_t var_230_1 = data_14395da18
    int32_t var_210_1 = 0
    int64_t var_238_1 = r12
    int64_t var_228_1 = rbx_1
    void* var_298
    sub_1419a2ec0(*(arg3 + 0x5150), &var_298, &data_143ed9840, 0)
    void* rbx_2 = var_298
    sub_141080be0(rbx_2, arg2, *(arg2 + 0x188), *(arg3 + 0x10))
    int64_t rax_5 = 0
    var_268.q = data_1439c9410
    
    if (rbx_2 != 0)
        int64_t rdx_3 = sx.q(*(rbx_2 + 0x10c))
        void* var_290
        int64_t* rbx_3 = *(var_290 + 0x10)
        int64_t rax_6 = rbx_3[3]
        
        if (*(rax_6 + (rdx_3 << 3)) == 0)
            sub_1419ccf30(rbx_3, rdx_3.d)
            rax_6 = rbx_3[3]
        
        rax_5 = *(rax_6 + (rdx_3 << 3))
    
    int32_t r12_2 = 2
    var_268:8.q = rax_5
    int32_t var_210_2 = 0
    sub_1419870b0(arg2, &var_268, 2)
    zmm7 = *(arg3 + 0x2b0)
    float zmm6_1[0x4] = *(arg3 + 0x2a0)
    float zmm5_1[0x4] = *(arg3 + 0x290)
    float zmm4_1[0x4] = *(arg3 + 0x280)
    float zmm1_1[0x4] = *(arg1 + 0x3d0)
    int64_t* rcx_9 = data_143f0f180
    int32_t rax_8 = (1 << (data_1439c7a34).b) - 1
    int64_t var_2f8_1 = 0
    int32_t var_2ec_1 = 0x3f800000
    int32_t var_2ac_1 = 0x3f800000
    float zmm2_1[0x4] = 0.o
    float temp0_1[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
    temp0_1[0] = zmm1_1[0]
    int32_t var_108_1 = 1
    float temp0_2[0x4] = _mm_shuffle_ps(temp0_1, temp0_1, 0xc9)
    int32_t var_f4_1 = rax_8
    float temp0_3[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0)
    float temp0_4[0x4] = _mm_shuffle_ps(temp0_2, temp0_2, 0x55)
    float temp0_6[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0xaa), zmm6_1)
    char var_f0_1 = 0
    float temp0_8[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_2, temp0_2, 0xff), zmm7)
    int64_t var_e8_1 = 0
    float temp0_9[0x4] = _mm_mul_ps(temp0_4, zmm5_1)
    int32_t var_e0_1 = 0
    float temp0_10[0x4] = _mm_mul_ps(temp0_3, zmm4_1)
    int32_t var_27c_1 = 0x3f800000
    float temp0_11[0x4] = _mm_add_ps(temp0_6, temp0_8)
    int32_t var_26c_1 = 0x3f800000
    zmm2_1 = var_2f8_1.o
    float temp0_12[0x4] = _mm_shuffle_ps(zmm2_1, zmm2_1, 0xd2)
    float temp0_13[0x4] = _mm_add_ps(temp0_10, temp0_9)
    temp0_12[0] = (*(arg1 + 0x3d4))[0]
    float temp0_14[0x4] = _mm_shuffle_ps(temp0_12, temp0_12, 0xc9)
    var_2f8_1.o = temp0_14
    float temp0_15[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0)
    float temp0_16[0x4] = _mm_add_ps(temp0_13, temp0_11)
    float temp0_17[0x4] = _mm_shuffle_ps(temp0_14, temp0_14, 0x55)
    float temp0_18[0x4] = _mm_mul_ps(temp0_15, zmm4_1)
    float temp0_20[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xaa), zmm6_1)
    float temp0_21[0x4] = _mm_mul_ps(temp0_17, zmm5_1)
    float temp0_23[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_14, temp0_14, 0xff), zmm7)
    float temp0_24[0x4] = _mm_add_ps(temp0_18, temp0_21)
    float temp0_25[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xaa)
    float temp0_26[0x4] = _mm_shuffle_ps(temp0_16, temp0_16, 0xff)
    int128_t var_118 = zx.o(0)
    float zmm0_1[0x4] = data_143dbb1e0
    float temp0_27[0x4] = _mm_add_ps(temp0_20, temp0_23)
    float var_104_1[0x4] = zmm0_1
    int64_t rax_9 = *rcx_9
    temp0_25[0] = temp0_25[0] / temp0_26[0]
    float temp0_28[0x4] = _mm_add_ps(temp0_24, temp0_27)
    float temp0_29[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xaa)
    float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xff)
    temp0_29[0] = temp0_29[0] / temp0_30[0]
    (*(rax_9 + 0x498))(rcx_9, &var_2d8, &data_143f02b98, 0xc0, 4, &var_118)
    int64_t* rcx_10 = data_143f0f180
    int128_t* var_310_1
    var_310_1.d = 1
    float (* rax_11)[0x4] =
        (*(*rcx_10 + 0x130))(rcx_10, &data_143f02b98, var_2d8.q, 0, 0xc0, var_310_1)
    var_2f8_1.d = 0x3f800000
    var_2f8_1:4.d = 0x3f800000
    int32_t var_2ec_2 = 0x3f800000
    float temp0_31[0x4] = _mm_shuffle_ps(0x3f800000, 0x3f800000, 0xd2)
    temp0_31[0] = temp0_29[0]
    float temp0_32[0x4] = _mm_shuffle_ps(temp0_31, temp0_31, 0xc9)
    var_2f8_1.o = temp0_32
    *rax_11 = temp0_32
    var_2f8_1.d = 0xbf800000
    var_2f8_1:4.d = 0x3f800000
    int32_t var_2ec_3 = 0x3f800000
    float temp0_33[0x4] = _mm_shuffle_ps(0xbf800000, 0xbf800000, 0xd2)
    temp0_33[0] = temp0_29[0]
    float temp0_34[0x4] = _mm_shuffle_ps(temp0_33, temp0_33, 0xc9)
    var_2f8_1.o = temp0_34
    rax_11[1] = temp0_34
    var_2f8_1.d = 0x3f800000
    var_2f8_1:4.d = 0xbf800000
    int32_t var_2ec_4 = 0x3f800000
    float temp0_35[0x4] = _mm_shuffle_ps(0x3f800000, 0x3f800000, 0xd2)
    temp0_35[0] = temp0_29[0]
    float temp0_36[0x4] = _mm_shuffle_ps(temp0_35, temp0_35, 0xc9)
    var_2f8_1.o = temp0_36
    rax_11[2] = temp0_36
    var_2f8_1.d = 0x3f800000
    var_2f8_1:4.d = 0xbf800000
    int32_t var_2ec_5 = 0x3f800000
    float temp0_37[0x4] = _mm_shuffle_ps(0x3f800000, 0x3f800000, 0xd2)
    temp0_37[0] = temp0_29[0]
    float temp0_38[0x4] = _mm_shuffle_ps(temp0_37, temp0_37, 0xc9)
    var_2f8_1.o = temp0_38
    rax_11[3] = temp0_38
    var_2f8_1.d = 0xbf800000
    var_2f8_1:4.d = 0x3f800000
    int32_t var_2ec_6 = 0x3f800000
    float temp0_39[0x4] = _mm_shuffle_ps(0xbf800000, 0xbf800000, 0xd2)
    temp0_39[0] = temp0_29[0]
    float temp0_40[0x4] = _mm_shuffle_ps(temp0_39, temp0_39, 0xc9)
    var_2f8_1.o = temp0_40
    rax_11[4] = temp0_40
    var_2f8_1.d = 0xbf800000
    var_2f8_1:4.d = 0xbf800000
    int32_t var_2ec_7 = 0x3f800000
    float temp0_41[0x4] = _mm_shuffle_ps(0xbf800000, 0xbf800000, 0xd2)
    temp0_41[0] = temp0_29[0]
    float temp0_42[0x4] = _mm_shuffle_ps(temp0_41, temp0_41, 0xc9)
    var_2f8_1.o = temp0_42
    rax_11[5] = temp0_42
    var_2f8_1.d = 0xbf800000
    var_2f8_1:4.d = 0x3f800000
    int32_t var_2ec_8 = 0x3f800000
    float temp0_43[0x4] = _mm_shuffle_ps(0xbf800000, 0xbf800000, 0xd2)
    temp0_43[0] = temp0_25[0]
    float temp0_44[0x4] = _mm_shuffle_ps(temp0_43, temp0_43, 0xc9)
    var_2f8_1.o = temp0_44
    var_2f8_1.d = 0x3f800000
    var_2f8_1:4.d = 0x3f800000
    int32_t var_2ec_9 = 0x3f800000
    rax_11[6] = temp0_44
    zmm0_1 = var_2f8_1.o
    float temp0_45[0x4] = _mm_shuffle_ps(zmm0_1, zmm0_1, 0xd2)
    temp0_45[0] = temp0_25[0]
    float temp0_46[0x4] = _mm_shuffle_ps(temp0_45, temp0_45, 0xc9)
    var_2f8_1.o = temp0_46
    rax_11[7] = temp0_46
    var_2f8_1.d = 0xbf800000
    var_2f8_1:4.d = 0xbf800000
    int32_t var_2ec_10 = 0x3f800000
    float temp0_47[0x4] = _mm_shuffle_ps(0xbf800000, 0xbf800000, 0xd2)
    temp0_47[0] = temp0_25[0]
    float temp0_48[0x4] = _mm_shuffle_ps(temp0_47, temp0_47, 0xc9)
    var_2f8_1.o = temp0_48
    rax_11[8] = temp0_48
    var_2f8_1.d = 0xbf800000
    var_2f8_1:4.d = 0xbf800000
    int32_t var_2ec_11 = 0x3f800000
    float temp0_49[0x4] = _mm_shuffle_ps(0xbf800000, 0xbf800000, 0xd2)
    temp0_49[0] = temp0_25[0]
    float temp0_50[0x4] = _mm_shuffle_ps(temp0_49, temp0_49, 0xc9)
    var_2f8_1.o = temp0_50
    rax_11[9] = temp0_50
    var_2f8_1.d = 0x3f800000
    var_2f8_1:4.d = 0x3f800000
    int32_t var_2ec_12 = 0x3f800000
    float temp0_51[0x4] = _mm_shuffle_ps(0x3f800000, 0x3f800000, 0xd2)
    temp0_51[0] = temp0_25[0]
    float temp0_52[0x4] = _mm_shuffle_ps(temp0_51, temp0_51, 0xc9)
    var_2f8_1.o = temp0_52
    rax_11[0xa] = temp0_52
    var_2f8_1.d = 0x3f800000
    var_2f8_1:4.d = 0xbf800000
    int32_t var_2ec_13 = 0x3f800000
    float temp0_53[0x4] = _mm_shuffle_ps(0x3f800000, 0x3f800000, 0xd2)
    temp0_53[0] = temp0_25[0]
    rax_11[0xb] = _mm_shuffle_ps(temp0_53, temp0_53, 0xc9)
    int64_t* rcx_11 = data_143f0f180
    (*(*rcx_11 + 0x138))(rcx_11, &data_143f02b98, var_2d8.q)
    int64_t rax_13 = var_2d8.q
    void*** rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_14 = &rcx_14[5]
    
    if (rax_14 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x30)
        rcx_14 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_14 = &rcx_14[5]
    
    *(arg2 + 0x30) = rax_14
    *(arg2 + 0x14) += 1
    **(arg2 + 8) = rcx_14
    *(arg2 + 8) = &rcx_14[1]
    rcx_14[1] = 0
    *rcx_14 = &data_142d56618
    rcx_14[3] = rax_13
    rcx_14[2].d = 0
    rcx_14[4].d = 0
    
    if (*(arg1 + 0x534) s> 0)
        r12_2 = 4
    
    void*** rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    void* rax_18 = &rcx_20[4]
    
    if (rax_18 u> *(arg2 + 0x38))
        sub_140b0e3d0(arg2 + 0x30, 0x28)
        rcx_20 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
        rax_18 = &rcx_20[4]
    
    *(arg2 + 0x30) = rax_18
    int64_t* rax_19 = *(arg2 + 8)
    *(arg2 + 0x14) += 1
    *rax_19 = rcx_20
    *(arg2 + 8) = &rcx_20[1]
    rcx_20[1] = 0
    *rcx_20 = &data_142d54988
    rcx_20[2].d = 0
    *(rcx_20 + 0x14) = r12_2
    rcx_20[3].d = 1
    result = sub_1405d1550(&var_2d8)
__security_check_cookie(rax_1 ^ &var_338)
return result
