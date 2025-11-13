// 函数: sub_142142120
// 地址: 0x142142120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg3
char* rbx = arg4
void* r12_1 = &arg4[zx.q(arg5)]
int64_t* r13 = arg2
void* r14 = arg1
uint64_t result = zx.q(*(arg3 + 0x40c))
void* arg_20 = r12_1
int32_t rcx = 0
*(arg3 + 0x408) = 0
int32_t temp0 = result.d

if (temp0 s< 0 && temp0 != 0)
    result = sub_142152fa0(arg3, 0)
    rcx = *(rsi + 0x408)

if (rbx u< r12_1)
    float zmm6[0x4]
    float var_58_1[0x4] = zmm6
    float zmm7[0x4]
    float var_68_1[0x4] = zmm7
    uint32_t zmm8[0x4]
    uint32_t var_78_1[0x4] = zmm8
    float zmm9[0x4]
    float var_88_1[0x4] = zmm9
    uint32_t zmm10[0x4]
    uint32_t var_98_1[0x4] = zmm10
    
    do
        uint32_t rax = zx.d(*rbx)
        rbx = &rbx[1]
        char* arg_18 = rbx
        char var_3a8
        uint32_t var_388[0x4]
        float var_378[0x4]
        float zmm0[0x4]
        float zmm1[0x4]
        float zmm2[0x4]
        float zmm3[0x4]
        float zmm4[0x4]
        
        if (rax - 1 u> 0x28)
            sub_140af98a0("Unknown", 0x396, u"Unknown preshader opcode %d", zx.q(rax))
            result = sub_140afbb40()
        else
            switch (rax)
                case 1
                    zmm6 = zx.o(0)
                label_14214225c:
                    int64_t rdi_1 = sx.q(*(rsi + 0x408))
                    int32_t rax_3 = (rdi_1 + 1).d
                    *(rsi + 0x408) = rax_3
                    
                    if (rax_3 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_1.d)
                    
                    void* rax_4 = *(rsi + 0x400)
                    void* rcx_5 = rsi
                    
                    if (rax_4 != 0)
                        rcx_5 = rax_4
                    
                    result = rdi_1 * 2
                    *(rcx_5 + (result << 3)) = zmm6
                case 2
                    zmm6 = *rbx
                    rbx = &rbx[0x10]
                    goto label_14214225c
                case 3
                    int16_t rdi_5 = *rbx
                    rbx = &rbx[2]
                    void* rax_12 = sub_14213ce50(rsi)
                    void* rdx_3 = *(r14 + 0x20)
                    
                    if ((rdx_3.b & 1) != 0)
                        rdx_3 = (rdx_3 s>> 1) + r14 + 0x20
                    
                    *(rax_12 + 0xc) = 0
                    void* r14_2 = rdx_3 + zx.q(rdi_5) * 0x28
                    int64_t* rcx_18 = *r13
                    
                    if (rcx_18 != 0)
                        result = (*(*rcx_18 + 0x60))(rcx_18, r14_2, rax_12 + 0xc, r13, var_3a8)
                    
                    if (rcx_18 == 0 || result.b == 0)
                        int64_t r12_2 = data_143f4ca00
                        r13.b = *(r14_2 + 0xc) == 2
                        int64_t rcx_19
                        
                        if (data_143de5480 == 0)
                            rcx_19 = 0
                        else
                            rcx_19.b = GetCurrentThreadId() != data_143de5470
                        
                        if (*(r12_2 + (rcx_19 << 2)) != 1)
                            result = zx.q(*(r14_2 + 0x20))
                            *(rax_12 + 0xc) = result.d
                        else
                            int64_t* rcx_21 = arg2[1]
                            int64_t* rax_17 = (*(*rcx_21 + 0x348))(rcx_21)
                            
                            if (rax_17 == 0)
                                result = zx.q(*(r14_2 + 0x20))
                                *(rax_12 + 0xc) = result.d
                            else
                                var_3a8 = 0
                                result = (*(*rax_17 + 0x328))(rax_17, r14_2, rax_12 + 0xc, 
                                    zx.q(r13.b), 0)
                                
                                if (result.b == 0)
                                    result = zx.q(*(r14_2 + 0x20))
                                    *(rax_12 + 0xc) = result.d
                        
                        r12_1 = arg_20
                    
                    zmm0 = *(rax_12 + 0xc)
                    *(rax_12 + 8) = zmm0[0]
                    *(rax_12 + 4) = zmm0[0]
                    *rax_12 = zmm0[0]
                    r14 = arg1
                case 4
                    int16_t result_1 = *rbx
                    rbx = &rbx[2]
                    void* rax_6 = sub_14213ce50(rsi)
                    void* rcx_7 = *(arg1 + 0x30)
                    
                    if ((rcx_7.b & 1) != 0)
                        rcx_7 = (rcx_7 s>> 1) + arg1 + 0x30
                    
                    result = zx.q(result_1)
                    *(rax_6 + 8) = 0
                    *rax_6 = 0
                    void* rdi_4 = result * 0x30 + rcx_7
                    int64_t* rcx_9 = *r13
                    
                    if (rcx_9 != 0)
                        result = (*(*rcx_9 + 0x58))(rcx_9, rdi_4, rax_6, r13, var_3a8)
                    
                    if (rcx_9 != 0 && result.b != 0)
                        r14 = arg1
                    else
                        int64_t r15_1 = data_143f4ca00
                        r12_1.b = *(rdi_4 + 0xc) == 2
                        int64_t rcx_10
                        
                        if (data_143de5480 == 0)
                            rcx_10 = 0
                        else
                            result = GetCurrentThreadId()
                            rcx_10.b = result.d != data_143de5470
                        
                        if (*(r15_1 + (rcx_10 << 2)) != 1)
                            *rax_6 = *(rdi_4 + 0x20)
                        else
                            int64_t* rcx_11 = r13[1]
                            result = (*(*rcx_11 + 0x348))(rcx_11)
                            
                            if (result == 0)
                                *rax_6 = *(rdi_4 + 0x20)
                            else
                                var_3a8 = 0
                                result =
                                    (*(*result + 0x330))(result, rdi_4, rax_6, zx.q(r12_1.b), 0)
                                
                                if (result.b == 0)
                                    *rax_6 = *(rdi_4 + 0x20)
                        
                        r12_1 = arg_20
                        r14 = arg1
                case 5
                    void* rax_18 = *(rsi + 0x400)
                    void* rcx_23 = rsi
                    int64_t rdi_7 = sx.q(*(rsi + 0x408))
                    
                    if (rax_18 != 0)
                        rcx_23 = rax_18
                    
                    int32_t rdx_7 = (rdi_7 - 1).d
                    zmm4 = *(rcx_23 + rdi_7 * 0x10 - 0x10)
                    *(rsi + 0x408) = rdx_7
                    void* rcx_24 = rsi
                    void* rax_21 = *(rsi + 0x400)
                    
                    if (rax_21 != 0)
                        rcx_24 = rax_21
                    
                    zmm3 = *(rcx_24 + (rdi_7 - 2) * 0x10)
                    *(rsi + 0x408) = rdx_7
                    zmm0 = zmm3
                    zmm0[0] = zmm0[0] + zmm4[0]
                    zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                    float var_140_1 = zmm0[0]
                    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                    zmm1[0] = zmm1[0] + zmm0[0]
                    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
                    zmm2[0] = zmm2[0] + zmm0[0]
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    zmm3[0] = zmm3[0] + zmm4[0]
                    float var_13c_1 = zmm1[0]
                    float var_138_1 = zmm2[0]
                    float var_134_1 = zmm3[0]
                    
                    if (rdx_7 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdx_7 - 1)
                    
                    void* rax_25 = *(rsi + 0x400)
                    void* rcx_26 = rsi
                    
                    if (rax_25 != 0)
                        rcx_26 = rax_25
                    
                    result = (rdi_7 - 2) * 2
                    *(rcx_26 + (result << 3)) = var_140_1.o
                case 6
                    void* rax_27 = *(rsi + 0x400)
                    void* rcx_27 = rsi
                    int64_t rdi_8 = sx.q(*(rsi + 0x408))
                    
                    if (rax_27 != 0)
                        rcx_27 = rax_27
                    
                    int32_t rdx_9 = (rdi_8 - 1).d
                    zmm4 = *(rcx_27 + rdi_8 * 0x10 - 0x10)
                    *(rsi + 0x408) = rdx_9
                    void* rcx_28 = rsi
                    void* rax_30 = *(rsi + 0x400)
                    
                    if (rax_30 != 0)
                        rcx_28 = rax_30
                    
                    zmm3 = *(rcx_28 + (rdi_8 - 2) * 0x10)
                    *(rsi + 0x408) = rdx_9
                    zmm0 = zmm3
                    zmm0[0] = zmm0[0] - zmm4[0]
                    zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                    float var_320_1 = zmm0[0]
                    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                    zmm1[0] = zmm1[0] - zmm0[0]
                    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
                    zmm2[0] = zmm2[0] - zmm0[0]
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    zmm3[0] = zmm3[0] - zmm4[0]
                    float var_31c_1 = zmm1[0]
                    float var_318_1 = zmm2[0]
                    float var_314_1 = zmm3[0]
                    
                    if (rdx_9 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdx_9 - 1)
                    
                    void* rax_34 = *(rsi + 0x400)
                    void* rcx_30 = rsi
                    
                    if (rax_34 != 0)
                        rcx_30 = rax_34
                    
                    result = (rdi_8 - 2) * 2
                    *(rcx_30 + (result << 3)) = var_320_1.o
                case 7
                    void* rax_36 = *(rsi + 0x400)
                    void* rcx_31 = rsi
                    int64_t rdi_9 = sx.q(*(rsi + 0x408))
                    
                    if (rax_36 != 0)
                        rcx_31 = rax_36
                    
                    int32_t rdx_11 = (rdi_9 - 1).d
                    zmm4 = *(rcx_31 + rdi_9 * 0x10 - 0x10)
                    *(rsi + 0x408) = rdx_11
                    void* rcx_32 = rsi
                    void* rax_39 = *(rsi + 0x400)
                    
                    if (rax_39 != 0)
                        rcx_32 = rax_39
                    
                    zmm3 = *(rcx_32 + (rdi_9 - 2) * 0x10)
                    *(rsi + 0x408) = rdx_11
                    zmm3[0] = zmm3[0] * zmm4[0]
                    zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    float var_310_1 = zmm3[0]
                    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                    zmm1[0] = zmm1[0] * zmm0[0]
                    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                    zmm3[0] = zmm3[0] * zmm4[0]
                    zmm2[0] = zmm2[0] * zmm0[0]
                    float var_304_1 = zmm3[0]
                    float var_30c_1 = zmm1[0]
                    float var_308_1 = zmm2[0]
                    
                    if (rdx_11 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdx_11 - 1)
                    
                    void* rax_43 = *(rsi + 0x400)
                    void* rcx_34 = rsi
                    
                    if (rax_43 != 0)
                        rcx_34 = rax_43
                    
                    result = (rdi_9 - 2) * 2
                    *(rcx_34 + (result << 3)) = var_310_1.o
                case 8
                    void* rax_45 = *(rsi + 0x400)
                    void* rcx_35 = rsi
                    int64_t rdi_10 = sx.q(*(rsi + 0x408))
                    
                    if (rax_45 != 0)
                        rcx_35 = rax_45
                    
                    int32_t rdx_13 = (rdi_10 - 1).d
                    zmm7 = *(rcx_35 + rdi_10 * 0x10 - 0x10)
                    *(rsi + 0x408) = rdx_13
                    void* rcx_36 = rsi
                    void* rax_48 = *(rsi + 0x400)
                    
                    if (rax_48 != 0)
                        rcx_36 = rax_48
                    
                    zmm6 = *(rcx_36 + (rdi_10 - 2) * 0x10)
                    float var_300_1 = sub_142140e20(zmm6[0], zmm7)[0]
                    float zmm0_1[0x4] = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    zmm1 = _mm_shuffle_ps(zmm7, zmm7, 0x55)
                    float var_2fc_1 = sub_142140e20(zmm0_1[0], zmm1)[0]
                    zmm1 = _mm_shuffle_ps(zmm7, zmm7, 0xaa)
                    float var_2f8_1 = sub_142140e20(_mm_shuffle_ps(zmm6, zmm6, 0xaa)[0], zmm1)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                    float var_2f4_1 = sub_142140e20(_mm_shuffle_ps(zmm6, zmm6, 0xff)[0], zmm7)[0]
                    *(rsi + 0x408) = rdx_13
                    
                    if (rdx_13 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdx_13 - 1)
                    
                    void* rax_52 = *(rsi + 0x400)
                    void* rcx_38 = rsi
                    
                    if (rax_52 != 0)
                        rcx_38 = rax_52
                    
                    result = (rdi_10 - 2) * 2
                    *(rcx_38 + (result << 3)) = var_300_1.o
                case 9
                    void* rax_54 = *(rsi + 0x400)
                    void* rcx_39 = rsi
                    int64_t r8_4 = sx.q(*(rsi + 0x408))
                    
                    if (rax_54 != 0)
                        rcx_39 = rax_54
                    
                    int32_t rdx_15 = (r8_4 - 1).d
                    zmm10 = *(rcx_39 + r8_4 * 0x10 - 0x10)
                    *(rsi + 0x408) = rdx_15
                    void* rcx_40 = rsi
                    void* rax_57 = *(rsi + 0x400)
                    zmm1 = _mm_shuffle_ps(zmm10, zmm10, 0xff)
                    
                    if (rax_57 != 0)
                        rcx_40 = rax_57
                    
                    zmm9 = *(rcx_40 + (r8_4 - 2) * 0x10)
                    *(rsi + 0x408) = rdx_15 - 1
                    float zmm0_4[0x4]
                    int512_t zmm8_1
                    float zmm9_1[0x4]
                    zmm0_4, zmm8_1, zmm9_1 = sub_140a454f0(_mm_shuffle_ps(zmm9, zmm9, 0xff), zmm1)
                    zmm8_1.o = zmm0_4
                    float zmm1_1[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
                    float zmm0_5[0x4]
                    int512_t zmm7_1
                    float zmm9_2[0x4]
                    zmm0_5, zmm7_1, zmm9_2 =
                        sub_140a454f0(_mm_shuffle_ps(zmm9_1, zmm9_1, 0xaa), zmm1_1)
                    zmm7_1.o = zmm0_5
                    float zmm1_2[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
                    float zmm0_6[0x4]
                    int512_t zmm6_1
                    float zmm9_3[0x4]
                    zmm0_6, zmm6_1, zmm9_3 =
                        sub_140a454f0(_mm_shuffle_ps(zmm9_2, zmm9_2, 0x55), zmm1_2)
                    zmm6_1.o = zmm0_6
                    zmm0, zmm6, zmm7, zmm8 = sub_140a454f0(zmm9_3, zmm10)
                    int64_t rdi_11 = sx.q(*(rsi + 0x408))
                    float var_2f0_1 = zmm0[0]
                    float var_2ec_1 = zmm6[0]
                    float var_2e8_1 = zmm7[0]
                    int32_t rax_61 = (rdi_11 + 1).d
                    uint32_t var_2e4_1 = zmm8[0]
                    *(rsi + 0x408) = rax_61
                    
                    if (rax_61 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_11.d)
                    
                    void* rax_62 = *(rsi + 0x400)
                    void* rcx_42 = rsi
                    
                    if (rax_62 != 0)
                        rcx_42 = rax_62
                    
                    result = rdi_11 * 2
                    *(rcx_42 + (result << 3)) = var_2f0_1.o
                case 0xa
                    void* rax_64 = *(rsi + 0x400)
                    void* rcx_43 = rsi
                    int64_t rdi_12 = sx.q(*(rsi + 0x408))
                    
                    if (rax_64 != 0)
                        rcx_43 = rax_64
                    
                    int32_t rdx_17 = (rdi_12 - 1).d
                    zmm4 = *(rcx_43 + rdi_12 * 0x10 - 0x10)
                    *(rsi + 0x408) = rdx_17
                    void* rcx_44 = rsi
                    void* rax_67 = *(rsi + 0x400)
                    
                    if (rax_67 != 0)
                        rcx_44 = rax_67
                    
                    zmm3 = *(rcx_44 + (rdi_12 - 2) * 0x10)
                    *(rsi + 0x408) = rdx_17
                    zmm0 = _mm_min_ss(zmm3[0], zmm4[0])
                    zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                    float var_2e0_1 = zmm0[0]
                    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                    zmm1 = _mm_min_ss(zmm1[0], zmm0[0])
                    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
                    zmm2 = _mm_min_ss(zmm2[0], zmm0[0])
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    zmm3 = _mm_min_ss(zmm3[0], zmm4[0])
                    float var_2dc_1 = zmm1[0]
                    float var_2d8_1 = zmm2[0]
                    float var_2d4_1 = zmm3[0]
                    
                    if (rdx_17 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdx_17 - 1)
                    
                    void* rax_71 = *(rsi + 0x400)
                    void* rcx_46 = rsi
                    
                    if (rax_71 != 0)
                        rcx_46 = rax_71
                    
                    result = (rdi_12 - 2) * 2
                    *(rcx_46 + (result << 3)) = var_2e0_1.o
                case 0xb
                    void* rax_73 = *(rsi + 0x400)
                    void* rcx_47 = rsi
                    int64_t rdi_13 = sx.q(*(rsi + 0x408))
                    
                    if (rax_73 != 0)
                        rcx_47 = rax_73
                    
                    int32_t rdx_19 = (rdi_13 - 1).d
                    zmm4 = *(rcx_47 + rdi_13 * 0x10 - 0x10)
                    *(rsi + 0x408) = rdx_19
                    void* rcx_48 = rsi
                    void* rax_76 = *(rsi + 0x400)
                    
                    if (rax_76 != 0)
                        rcx_48 = rax_76
                    
                    zmm3 = *(rcx_48 + (rdi_13 - 2) * 0x10)
                    *(rsi + 0x408) = rdx_19
                    zmm0 = _mm_max_ss(zmm3[0], zmm4[0])
                    zmm1 = _mm_shuffle_ps(zmm3, zmm3, 0x55)
                    zmm2 = _mm_shuffle_ps(zmm3, zmm3, 0xaa)
                    zmm3 = _mm_shuffle_ps(zmm3, zmm3, 0xff)
                    float var_2d0_1 = zmm0[0]
                    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0x55)
                    zmm1 = _mm_max_ss(zmm1[0], zmm0[0])
                    zmm0 = _mm_shuffle_ps(zmm4, zmm4, 0xaa)
                    zmm2 = _mm_max_ss(zmm2[0], zmm0[0])
                    zmm4 = _mm_shuffle_ps(zmm4, zmm4, 0xff)
                    zmm3 = _mm_max_ss(zmm3[0], zmm4[0])
                    float var_2cc_1 = zmm1[0]
                    float var_2c8_1 = zmm2[0]
                    float var_2c4_1 = zmm3[0]
                    
                    if (rdx_19 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdx_19 - 1)
                    
                    void* rax_80 = *(rsi + 0x400)
                    void* rcx_50 = rsi
                    
                    if (rax_80 != 0)
                        rcx_50 = rax_80
                    
                    result = (rdi_13 - 2) * 2
                    *(rcx_50 + (result << 3)) = var_2d0_1.o
                case 0xc
                    void* rax_82 = *(rsi + 0x400)
                    void* rcx_51 = rsi
                    int64_t rdx_21 = sx.q(*(rsi + 0x408))
                    
                    if (rax_82 != 0)
                        rcx_51 = rax_82
                    
                    var_388 = *(rcx_51 + rdx_21 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_21.d - 1, 1, 0)
                    void* rax_85 = *(rsi + 0x400)
                    void* rcx_53 = rsi
                    int64_t rdx_23 = sx.q(*(rsi + 0x408))
                    
                    if (rax_85 != 0)
                        rcx_53 = rax_85
                    
                    zmm7 = *(rcx_53 + rdx_23 * 0x10 - 0x10)
                    int96_t var_398_1 = zmm7[0].12
                    sub_142152470(rsi, rdx_23.d - 1, 1, 0)
                    void* rax_88 = *(rsi + 0x400)
                    void* rcx_55 = rsi
                    int64_t rdx_25 = sx.q(*(rsi + 0x408))
                    
                    if (rax_88 != 0)
                        rcx_55 = rax_88
                    
                    zmm6 = *(rcx_55 + rdx_25 * 0x10 - 0x10)
                    var_378 = zmm6
                    sub_142152470(rsi, rdx_25.d - 1, 1, 0)
                    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0xff)
                    
                    if (not(zmm6[0] < zmm7[0]))
                        zmm7 = __minss_xmmss_memss(zmm6[0], var_388[3])
                    
                    zmm0 = var_378[2]
                    zmm2 = var_398_1:8.d
                    
                    if (not(zmm0[0] < zmm2[0]))
                        zmm2 = __minss_xmmss_memss(zmm0[0], var_388[2])
                    
                    zmm0 = var_378[1]
                    zmm1 = var_398_1:4.d
                    
                    if (not(zmm0[0] < zmm1[0]))
                        zmm1 = __minss_xmmss_memss(zmm0[0], var_388[1])
                    
                    zmm3 = var_378[0]
                    zmm0 = var_398_1.d
                    
                    if (not(zmm3[0] < zmm0[0]))
                        zmm0 = __minss_xmmss_memss(zmm3[0], var_388[0])
                    
                    int64_t rdi_14 = sx.q(*(rsi + 0x408))
                    float var_2c0_1 = zmm0[0]
                    float var_2bc_1 = zmm1[0]
                    float var_2b8_1 = zmm2[0]
                    int32_t rax_91 = (rdi_14 + 1).d
                    float var_2b4_1 = zmm7[0]
                    *(rsi + 0x408) = rax_91
                    
                    if (rax_91 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_14.d)
                    
                    void* rax_92 = *(rsi + 0x400)
                    void* rcx_58 = rsi
                    
                    if (rax_92 != 0)
                        rcx_58 = rax_92
                    
                    result = rdi_14 * 2
                    *(rcx_58 + (result << 3)) = var_2c0_1.o
                case 0xd
                    void* rax_118 = *(rsi + 0x400)
                    void* rcx_78 = rsi
                    int64_t rdx_41 = sx.q(*(rsi + 0x408))
                    
                    if (rax_118 != 0)
                        rcx_78 = rax_118
                    
                    zmm6 = *(rcx_78 + rdx_41 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_41.d - 1, 1, 0)
                    float var_280_1 = sinf(zmm6[0])[0]
                    float var_27c_1 = sinf(_mm_shuffle_ps(zmm6, zmm6, 0x55)[0])[0]
                    float var_278_1 = sinf(_mm_shuffle_ps(zmm6, zmm6, 0xaa)[0])
                    zmm0 = sinf(_mm_shuffle_ps(zmm6, zmm6, 0xff)[0])
                    int64_t rdi_20 = sx.q(*(rsi + 0x408))
                    float var_274_1 = zmm0[0]
                    int32_t rax_121 = (rdi_20 + 1).d
                    *(rsi + 0x408) = rax_121
                    
                    if (rax_121 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_20.d)
                    
                    void* rax_122 = *(rsi + 0x400)
                    void* rcx_81 = rsi
                    
                    if (rax_122 != 0)
                        rcx_81 = rax_122
                    
                    result = rdi_20 * 2
                    *(rcx_81 + (result << 3)) = var_280_1.o
                case 0xe
                    void* rax_124 = *(rsi + 0x400)
                    void* rcx_82 = rsi
                    int64_t rdx_44 = sx.q(*(rsi + 0x408))
                    
                    if (rax_124 != 0)
                        rcx_82 = rax_124
                    
                    zmm6 = *(rcx_82 + rdx_44 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_44.d - 1, 1, 0)
                    float var_270_1 = cosf(zmm6[0])[0]
                    float var_26c_1 = cosf(_mm_shuffle_ps(zmm6, zmm6, 0x55)[0])[0]
                    float var_268_1 = cosf(_mm_shuffle_ps(zmm6, zmm6, 0xaa)[0])
                    zmm0 = cosf(_mm_shuffle_ps(zmm6, zmm6, 0xff)[0])
                    int64_t rdi_21 = sx.q(*(rsi + 0x408))
                    float var_264_1 = zmm0[0]
                    int32_t rax_127 = (rdi_21 + 1).d
                    *(rsi + 0x408) = rax_127
                    
                    if (rax_127 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_21.d)
                    
                    void* rax_128 = *(rsi + 0x400)
                    void* rcx_85 = rsi
                    
                    if (rax_128 != 0)
                        rcx_85 = rax_128
                    
                    result = rdi_21 * 2
                    *(rcx_85 + (result << 3)) = var_270_1.o
                case 0xf
                    void* rax_130 = *(rsi + 0x400)
                    void* rcx_86 = rsi
                    int64_t rdx_47 = sx.q(*(rsi + 0x408))
                    
                    if (rax_130 != 0)
                        rcx_86 = rax_130
                    
                    zmm6 = *(rcx_86 + rdx_47 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_47.d - 1, 1, 0)
                    float var_260_1 = tanf(zmm6[0])[0]
                    float var_25c_1 = tanf(_mm_shuffle_ps(zmm6, zmm6, 0x55)[0])[0]
                    float var_258_1 = tanf(_mm_shuffle_ps(zmm6, zmm6, 0xaa)[0])
                    zmm0 = tanf(_mm_shuffle_ps(zmm6, zmm6, 0xff)[0])
                    int64_t rdi_22 = sx.q(*(rsi + 0x408))
                    float var_254_1 = zmm0[0]
                    int32_t rax_133 = (rdi_22 + 1).d
                    *(rsi + 0x408) = rax_133
                    
                    if (rax_133 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_22.d)
                    
                    void* rax_134 = *(rsi + 0x400)
                    void* rcx_89 = rsi
                    
                    if (rax_134 != 0)
                        rcx_89 = rax_134
                    
                    result = rdi_22 * 2
                    *(rcx_89 + (result << 3)) = var_260_1.o
                case 0x10
                    void* rax_136 = *(rsi + 0x400)
                    void* rcx_90 = rsi
                    int64_t rdx_50 = sx.q(*(rsi + 0x408))
                    
                    if (rax_136 != 0)
                        rcx_90 = rax_136
                    
                    zmm6 = *(rcx_90 + rdx_50 * 0x10 - 0x10)
                    int96_t var_398_4 = zmm6[0].12
                    sub_142152470(rsi, rdx_50.d - 1, 1, 0)
                    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    
                    if (zmm6[0] >= -1f)
                        zmm6 = _mm_min_ss(zmm6[0], 0x3f800000)
                    else
                        zmm6 = 0xbf800000
                    
                    zmm8 = asinf(zmm6[0])
                    uint32_t zmm0_20[0x4] = var_398_4:8.d
                    
                    if (zmm0_20[0] f>= -1f)
                        zmm0_20 = _mm_min_ss(zmm0_20[0], 0x3f800000)
                    else
                        zmm0_20 = 0xbf800000
                    
                    zmm7 = asinf(zmm0_20[0])
                    float zmm0_21[0x4] = var_398_4:4.d
                    
                    if (zmm0_21[0] >= -1f)
                        zmm0_21 = _mm_min_ss(zmm0_21[0], 0x3f800000)
                    else
                        zmm0_21 = 0xbf800000
                    
                    zmm6 = asinf(zmm0_21[0])
                    float zmm0_22[0x4] = var_398_4.d
                    
                    if (zmm0_22[0] >= -1f)
                        zmm0_22 = _mm_min_ss(zmm0_22[0], 0x3f800000)
                    else
                        zmm0_22 = 0xbf800000
                    
                    zmm0 = asinf(zmm0_22[0])
                    int64_t rdi_23 = sx.q(*(rsi + 0x408))
                    float var_250_1 = zmm0[0]
                    float var_24c_1 = zmm6[0]
                    float var_248_1 = zmm7[0]
                    int32_t rax_139 = (rdi_23 + 1).d
                    uint32_t var_244_1 = zmm8[0]
                    *(rsi + 0x408) = rax_139
                    
                    if (rax_139 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_23.d)
                    
                    void* rax_140 = *(rsi + 0x400)
                    void* rcx_93 = rsi
                    
                    if (rax_140 != 0)
                        rcx_93 = rax_140
                    
                    result = rdi_23 * 2
                    *(rcx_93 + (result << 3)) = var_250_1.o
                case 0x11
                    void* rax_142 = *(rsi + 0x400)
                    void* rcx_94 = rsi
                    int64_t rdx_53 = sx.q(*(rsi + 0x408))
                    
                    if (rax_142 != 0)
                        rcx_94 = rax_142
                    
                    zmm6 = *(rcx_94 + rdx_53 * 0x10 - 0x10)
                    int96_t var_398_5 = zmm6[0].12
                    sub_142152470(rsi, rdx_53.d - 1, 1, 0)
                    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    
                    if (zmm6[0] >= -1f)
                        zmm6 = _mm_min_ss(zmm6[0], 0x3f800000)
                    else
                        zmm6 = 0xbf800000
                    
                    zmm8 = acosf(zmm6[0])
                    uint32_t zmm0_24[0x4] = var_398_5:8.d
                    
                    if (zmm0_24[0] f>= -1f)
                        zmm0_24 = _mm_min_ss(zmm0_24[0], 0x3f800000)
                    else
                        zmm0_24 = 0xbf800000
                    
                    zmm7 = acosf(zmm0_24[0])
                    float zmm0_25[0x4] = var_398_5:4.d
                    
                    if (zmm0_25[0] >= -1f)
                        zmm0_25 = _mm_min_ss(zmm0_25[0], 0x3f800000)
                    else
                        zmm0_25 = 0xbf800000
                    
                    zmm6 = acosf(zmm0_25[0])
                    float zmm0_26[0x4] = var_398_5.d
                    
                    if (zmm0_26[0] >= -1f)
                        zmm0_26 = _mm_min_ss(zmm0_26[0], 0x3f800000)
                    else
                        zmm0_26 = 0xbf800000
                    
                    zmm0 = acosf(zmm0_26[0])
                    int64_t rdi_24 = sx.q(*(rsi + 0x408))
                    float var_240_1 = zmm0[0]
                    float var_23c_1 = zmm6[0]
                    float var_238_1 = zmm7[0]
                    int32_t rax_145 = (rdi_24 + 1).d
                    uint32_t var_234_1 = zmm8[0]
                    *(rsi + 0x408) = rax_145
                    
                    if (rax_145 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_24.d)
                    
                    void* rax_146 = *(rsi + 0x400)
                    void* rcx_97 = rsi
                    
                    if (rax_146 != 0)
                        rcx_97 = rax_146
                    
                    result = rdi_24 * 2
                    *(rcx_97 + (result << 3)) = var_240_1.o
                case 0x12
                    void* rax_148 = *(rsi + 0x400)
                    void* rcx_98 = rsi
                    int64_t rdx_56 = sx.q(*(rsi + 0x408))
                    
                    if (rax_148 != 0)
                        rcx_98 = rax_148
                    
                    zmm6 = *(rcx_98 + rdx_56 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_56.d - 1, 1, 0)
                    float var_230_1 = atanf(zmm6[0])[0]
                    float var_22c_1 = atanf(_mm_shuffle_ps(zmm6, zmm6, 0x55)[0])[0]
                    float var_228_1 = atanf(_mm_shuffle_ps(zmm6, zmm6, 0xaa)[0])
                    zmm0 = atanf(_mm_shuffle_ps(zmm6, zmm6, 0xff)[0])
                    int64_t rdi_25 = sx.q(*(rsi + 0x408))
                    float var_224_1 = zmm0[0]
                    int32_t rax_151 = (rdi_25 + 1).d
                    *(rsi + 0x408) = rax_151
                    
                    if (rax_151 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_25.d)
                    
                    void* rax_152 = *(rsi + 0x400)
                    void* rcx_101 = rsi
                    
                    if (rax_152 != 0)
                        rcx_101 = rax_152
                    
                    result = rdi_25 * 2
                    *(rcx_101 + (result << 3)) = var_230_1.o
                case 0x13
                    void* rax_154 = *(rsi + 0x400)
                    void* rcx_102 = rsi
                    int64_t rdx_59 = sx.q(*(rsi + 0x408))
                    
                    if (rax_154 != 0)
                        rcx_102 = rax_154
                    
                    zmm10 = *(rcx_102 + rdx_59 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_59.d - 1, 1, 0)
                    void* rax_157 = *(rsi + 0x400)
                    void* rcx_104 = rsi
                    int64_t rdx_61 = sx.q(*(rsi + 0x408))
                    
                    if (rax_157 != 0)
                        rcx_104 = rax_157
                    
                    zmm9 = *(rcx_104 + rdx_61 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_61.d - 1, 1, 0)
                    zmm1 = _mm_shuffle_ps(zmm10, zmm10, 0xff)
                    zmm8 = sub_140a3f4a0(_mm_shuffle_ps(zmm9, zmm9, 0xff), zmm1)
                    uint32_t zmm1_4[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0xaa)
                    zmm7 = sub_140a3f4a0(_mm_shuffle_ps(zmm9, zmm9, 0xaa), zmm1_4)
                    float zmm1_5[0x4] = _mm_shuffle_ps(zmm10, zmm10, 0x55)
                    float zmm0_34[0x4]
                    int512_t zmm6_2
                    zmm0_34, zmm6_2 = sub_140a3f4a0(_mm_shuffle_ps(zmm9, zmm9, 0x55), zmm1_5)
                    zmm6_2.o = zmm0_34
                    zmm0, zmm6 = sub_140a3f4a0(zmm9, zmm10)
                    int64_t rdi_26 = sx.q(*(rsi + 0x408))
                    float var_220_1 = zmm0[0]
                    float var_21c_1 = zmm6[0]
                    float var_218_1 = zmm7[0]
                    int32_t rax_160 = (rdi_26 + 1).d
                    uint32_t var_214_1 = zmm8[0]
                    *(rsi + 0x408) = rax_160
                    
                    if (rax_160 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_26.d)
                    
                    void* rax_161 = *(rsi + 0x400)
                    void* rcx_107 = rsi
                    
                    if (rax_161 != 0)
                        rcx_107 = rax_161
                    
                    result = rdi_26 * 2
                    *(rcx_107 + (result << 3)) = var_220_1.o
                case 0x14
                    void* rax_94 = *(rsi + 0x400)
                    void* rcx_59 = rsi
                    int64_t rdx_28 = sx.q(*(rsi + 0x408))
                    char rdi_15 = *rbx
                    rbx = &rbx[1]
                    
                    if (rax_94 != 0)
                        rcx_59 = rax_94
                    
                    zmm7 = *(rcx_59 + rdx_28 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_28.d - 1, 1, 0)
                    void* rax_97 = *(rsi + 0x400)
                    void* rcx_61 = rsi
                    int64_t rdx_30 = sx.q(*(rsi + 0x408))
                    
                    if (rax_97 != 0)
                        rcx_61 = rax_97
                    
                    zmm6 = *(rcx_61 + rdx_30 * 0x10 - 0x10)
                    var_388 = zmm6
                    sub_142152470(rsi, rdx_30.d - 1, 1, 0)
                    zmm7[0] = zmm7[0] * zmm6[0]
                    
                    if (rdi_15 u< 2)
                        zmm0 = zx.o(0)
                    else
                        zmm0 = zmm7[1]
                        zmm0[0] = zmm0[0] f* var_388[1]
                    
                    zmm7[0] = zmm7[0] + zmm0[0]
                    
                    if (rdi_15 u< 4)
                        zmm0 = zx.o(0)
                    else
                        zmm0 = zmm7[2]
                        zmm0[0] = zmm0[0] f* var_388[2]
                    
                    zmm7[0] = zmm7[0] + zmm0[0]
                    
                    if (rdi_15 u< 8)
                        zmm0 = zx.o(0)
                    else
                        zmm0 = zmm7[3]
                        zmm0[0] = zmm0[0] f* var_388[3]
                    
                    int64_t rdi_16 = sx.q(*(rsi + 0x408))
                    zmm7[0] = zmm7[0] + zmm0[0]
                    int32_t rax_100 = (rdi_16 + 1).d
                    zmm7 = _mm_shuffle_ps(zmm7, zmm7, 0)
                    *(rsi + 0x408) = rax_100
                    
                    if (rax_100 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_16.d)
                    
                    void* rax_101 = *(rsi + 0x400)
                    void* rcx_64 = rsi
                    
                    if (rax_101 != 0)
                        rcx_64 = rax_101
                    
                    result = rdi_16 * 2
                    *(rcx_64 + (result << 3)) = zmm7
                case 0x15
                    void* rax_103 = *(rsi + 0x400)
                    void* rcx_65 = rsi
                    int64_t rdx_33 = sx.q(*(rsi + 0x408))
                    uint32_t rdi_17 = zx.d(*rbx)
                    rbx = &rbx[1]
                    
                    if (rax_103 != 0)
                        rcx_65 = rax_103
                    
                    zmm6 = *(rcx_65 + rdx_33 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_33.d - 1, 1, 0)
                    void* rax_106 = *(rsi + 0x400)
                    void* rcx_67 = rsi
                    int64_t rdx_35 = sx.q(*(rsi + 0x408))
                    
                    if (rax_106 != 0)
                        rcx_67 = rax_106
                    
                    zmm8 = *(rcx_67 + rdx_35 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_35.d - 1, 1, 0)
                    int96_t var_398_3 = zmm6[0].12
                    var_388 = zmm8
                    uint32_t zmm5_1
                    
                    if (rdi_17 == 1)
                        zmm5_1 = (zx.o(0)).d
                        zmm3 = zx.o(0)
                        zmm4 = zx.o(0)
                        zmm7 = zx.o(0)
                    else if (rdi_17 == 2)
                        zmm3 = var_398_3:4.d
                        zmm5_1 = var_388[1]
                        zmm4 = zx.o(0)
                        zmm7 = zx.o(0)
                    else if (rdi_17 != 0xf)
                        zmm4 = var_398_3:8.d
                        zmm3 = var_398_3:4.d
                        zmm7 = var_388[2]
                        zmm5_1 = var_388[1]
                    else
                        zmm5_1 = zmm8[0]
                        zmm7 = zmm8
                        zmm3 = zmm6
                        zmm4 = zmm6
                    
                    int64_t rdi_18 = sx.q(*(rsi + 0x408))
                    zmm3[0] = zmm3[0] * zmm7[0]
                    int32_t var_294_1 = 0
                    zmm4[0] = zmm4[0] f* zmm5_1
                    int32_t rax_109 = (rdi_18 + 1).d
                    zmm6[0] = zmm6[0] * zmm7[0]
                    *(rsi + 0x408) = rax_109
                    zmm4[0] = zmm4[0] - zmm3[0]
                    zmm4[0] = zmm4[0] f* zmm8[0]
                    zmm3[0] = zmm3[0] f* zmm8[0]
                    zmm6[0] = zmm6[0] - zmm4[0]
                    zmm6[0] = zmm6[0] f* zmm5_1
                    float var_2a0_1 = zmm4[0]
                    zmm3[0] = zmm3[0] - zmm6[0]
                    float var_29c_1 = zmm6[0]
                    float var_298_1 = zmm3[0]
                    
                    if (rax_109 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_18.d)
                    
                    void* rax_110 = *(rsi + 0x400)
                    void* rcx_73 = rsi
                    
                    if (rax_110 != 0)
                        rcx_73 = rax_110
                    
                    result = rdi_18 * 2
                    *(rcx_73 + (result << 3)) = var_2a0_1.o
                case 0x16
                    void* rax_112 = *(rsi + 0x400)
                    void* rcx_74 = rsi
                    int64_t rdx_38 = sx.q(*(rsi + 0x408))
                    
                    if (rax_112 != 0)
                        rcx_74 = rax_112
                    
                    zmm6 = *(rcx_74 + rdx_38 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_38.d - 1, 1, 0)
                    int64_t rdi_19 = sx.q(*(rsi + 0x408))
                    zmm0 = _mm_sqrt_ss(0, zmm6[0])
                    int32_t rax_115 = (rdi_19 + 1).d
                    *(rsi + 0x408) = rax_115
                    zmm1 = _mm_shuffle_ps(zmm6, zmm6, 0x55)
                    float var_290_1 = zmm0[0]
                    zmm0 = _mm_sqrt_ss(0, zmm1[0])
                    zmm2 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                    float var_28c_1 = zmm0[0]
                    zmm0 = _mm_sqrt_ss(0, zmm2[0])
                    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    float var_288_1 = zmm0[0]
                    float var_284_1 = _mm_sqrt_ss(0, zmm6[0])[0]
                    
                    if (rax_115 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_19.d)
                    
                    void* rax_116 = *(rsi + 0x400)
                    void* rcx_77 = rsi
                    
                    if (rax_116 != 0)
                        rcx_77 = rax_116
                    
                    result = rdi_19 * 2
                    *(rcx_77 + (result << 3)) = var_290_1.o
                case 0x17
                    sub_140af98a0("Unknown", 0x396, u"Unknown preshader opcode %d", zx.q(rax))
                    result = sub_140afbb40()
                case 0x18
                    void* rax_169 = *(rsi + 0x400)
                    void* rcx_112 = rsi
                    int64_t rdx_67 = sx.q(*(rsi + 0x408))
                    
                    if (rax_169 != 0)
                        rcx_112 = rax_169
                    
                    zmm6 = *(rcx_112 + rdx_67 * 0x10 - 0x10)
                    int96_t var_398_6 = zmm6[0].12
                    sub_142152470(rsi, rdx_67.d - 1, 1, 0)
                    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    
                    if (zmm6[0] >= 0f)
                        zmm6 = _mm_min_ss(zmm6[0], 0x3f800000)
                    else
                        zmm6 = zx.o(0)
                    
                    zmm2 = var_398_6:8.d
                    
                    if (zmm2[0] >= 0f)
                        zmm2 = _mm_min_ss(zmm2[0], 0x3f800000)
                    else
                        zmm2 = zx.o(0)
                    
                    zmm1 = var_398_6:4.d
                    
                    if (zmm1[0] >= 0f)
                        zmm1 = _mm_min_ss(zmm1[0], 0x3f800000)
                    else
                        zmm1 = zx.o(0)
                    
                    zmm0 = var_398_6.d
                    
                    if (zmm0[0] >= 0f)
                        zmm0 = _mm_min_ss(zmm0[0], 0x3f800000)
                    else
                        zmm0 = zx.o(0)
                    
                    int64_t rdi_28 = sx.q(*(rsi + 0x408))
                    float var_200_1 = zmm0[0]
                    float var_1fc_1 = zmm1[0]
                    float var_1f8_1 = zmm2[0]
                    int32_t rax_172 = (rdi_28 + 1).d
                    float var_1f4_1 = zmm6[0]
                    *(rsi + 0x408) = rax_172
                    
                    if (rax_172 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_28.d)
                    
                    void* rax_173 = *(rsi + 0x400)
                    void* rcx_115 = rsi
                    
                    if (rax_173 != 0)
                        rcx_115 = rax_173
                    
                    result = rdi_28 * 2
                    *(rcx_115 + (result << 3)) = var_200_1.o
                case 0x19
                    void* rax_163 = *(rsi + 0x400)
                    void* rcx_108 = rsi
                    int64_t rdx_64 = sx.q(*(rsi + 0x408))
                    
                    if (rax_163 != 0)
                        rcx_108 = rax_163
                    
                    zmm6 = *(rcx_108 + rdx_64 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_64.d - 1, 1, 0)
                    int64_t rdi_27 = sx.q(*(rsi + 0x408))
                    float var_210_1 = _mm_and_ps(zmm6, 0x7fffffff)[0]
                    zmm0 = _mm_shuffle_ps(zmm6, zmm6, 0xaa)
                    int32_t rax_166 = (rdi_27 + 1).d
                    zmm1 = _mm_and_ps(_mm_shuffle_ps(zmm6, zmm6, 0x55), 0x7fffffff)
                    zmm6 = _mm_and_ps(_mm_shuffle_ps(zmm6, zmm6, 0xff), 0x7fffffff)
                    zmm0 = _mm_and_ps(zmm0, 0x7fffffff)
                    float var_204_1 = zmm6[0]
                    float var_20c_1 = zmm1[0]
                    float var_208_1 = zmm0[0]
                    *(rsi + 0x408) = rax_166
                    
                    if (rax_166 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_27.d)
                    
                    void* rax_167 = *(rsi + 0x400)
                    void* rcx_111 = rsi
                    
                    if (rax_167 != 0)
                        rcx_111 = rax_167
                    
                    result = rdi_27 * 2
                    *(rcx_111 + (result << 3)) = var_210_1.o
                case 0x1a
                    void* rax_175 = *(rsi + 0x400)
                    void* rcx_116 = rsi
                    int64_t rdx_70 = sx.q(*(rsi + 0x408))
                    
                    if (rax_175 != 0)
                        rcx_116 = rax_175
                    
                    zmm6 = *(rcx_116 + rdx_70 * 0x10 - 0x10)
                    float var_398_7[0x4] = zmm6
                    sub_142152470(rsi, rdx_70.d - 1, 1, 0)
                    int32_t rcx_118 = int.d(zmm6[0])
                    
                    if (rcx_118 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_118))[0] == zmm6[0]))
                        zmm6 = _mm_cvtepi32_ps(zx.o(rcx_118
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm6, zmm6[0].q)) & 1)))
                    
                    zmm1 = var_398_7[1]
                    int32_t rcx_120 = int.d(zmm1[0])
                    float var_1f0_1 = zmm6[0]
                    
                    if (rcx_120 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_120))[0] == zmm1[0]))
                        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_120
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
                    
                    zmm2 = var_398_7[2]
                    int32_t rcx_122 = int.d(zmm2[0])
                    float var_1ec_1 = zmm1[0]
                    
                    if (rcx_122 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_122))[0] == zmm2[0]))
                        zmm2 = _mm_cvtepi32_ps(zx.o(rcx_122
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
                    
                    zmm1 = var_398_7[3]
                    int32_t rcx_124 = int.d(zmm1[0])
                    float var_1e8_1 = zmm2[0]
                    
                    if (rcx_124 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_124))[0] == zmm1[0]))
                        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_124
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
                    
                    int64_t rdi_29 = sx.q(*(rsi + 0x408))
                    float var_1e4_1 = zmm1[0]
                    int32_t rax_186 = (rdi_29 + 1).d
                    *(rsi + 0x408) = rax_186
                    
                    if (rax_186 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_29.d)
                    
                    void* rax_187 = *(rsi + 0x400)
                    void* rcx_127 = rsi
                    
                    if (rax_187 != 0)
                        rcx_127 = rax_187
                    
                    result = rdi_29 * 2
                    *(rcx_127 + (result << 3)) = var_1f0_1.o
                case 0x1b
                    void* rax_189 = *(rsi + 0x400)
                    void* rcx_128 = rsi
                    int64_t rdx_73 = sx.q(*(rsi + 0x408))
                    
                    if (rax_189 != 0)
                        rcx_128 = rax_189
                    
                    zmm6 = *(rcx_128 + rdx_73 * 0x10 - 0x10)
                    float var_398_8[0x4] = zmm6
                    sub_142152470(rsi, rdx_73.d - 1, 1, 0)
                    int32_t rcx_130 = int.d(zmm6[0])
                    
                    if (rcx_130 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_130))[0] == zmm6[0]))
                        zmm6 = _mm_cvtepi32_ps(zx.o(rcx_130
                            + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm6, zmm6[0].q)) & 1) ^ 1)))
                    
                    zmm1 = var_398_8[1]
                    int32_t rcx_132 = int.d(zmm1[0])
                    float var_1e0_1 = zmm6[0]
                    
                    if (rcx_132 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_132))[0] == zmm1[0]))
                        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_132
                            + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1) ^ 1)))
                    
                    zmm2 = var_398_8[2]
                    int32_t rcx_134 = int.d(zmm2[0])
                    float var_1dc_1 = zmm1[0]
                    
                    if (rcx_134 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_134))[0] == zmm2[0]))
                        zmm2 = _mm_cvtepi32_ps(zx.o(rcx_134
                            + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1) ^ 1)))
                    
                    zmm1 = var_398_8[3]
                    int32_t rcx_136 = int.d(zmm1[0])
                    float var_1d8_1 = zmm2[0]
                    
                    if (rcx_136 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_136))[0] == zmm1[0]))
                        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_136
                            + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1) ^ 1)))
                    
                    int64_t rdi_30 = sx.q(*(rsi + 0x408))
                    float var_1d4_1 = zmm1[0]
                    int32_t rax_204 = (rdi_30 + 1).d
                    *(rsi + 0x408) = rax_204
                    
                    if (rax_204 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_30.d)
                    
                    void* rax_205 = *(rsi + 0x400)
                    void* rcx_139 = rsi
                    
                    if (rax_205 != 0)
                        rcx_139 = rax_205
                    
                    result = rdi_30 * 2
                    *(rcx_139 + (result << 3)) = var_1e0_1.o
                case 0x1c
                    void* rax_207 = *(rsi + 0x400)
                    void* rcx_140 = rsi
                    int64_t rdx_76 = sx.q(*(rsi + 0x408))
                    
                    if (rax_207 != 0)
                        rcx_140 = rax_207
                    
                    zmm6 = *(rcx_140 + rdx_76 * 0x10 - 0x10)
                    float var_398_9[0x4] = zmm6
                    sub_142152470(rsi, rdx_76.d - 1, 1, 0)
                    zmm6[0] = zmm6[0] + 0.5f
                    int32_t rcx_142 = int.d(zmm6[0])
                    
                    if (rcx_142 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_142))[0] == zmm6[0]))
                        zmm6 = _mm_cvtepi32_ps(zx.o(rcx_142
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm6, zmm6[0].q)) & 1)))
                    
                    zmm1 = var_398_9[1]
                    zmm1[0] = zmm1[0] + 0.5f
                    float var_1d0_1 = zmm6[0]
                    int32_t rcx_144 = int.d(zmm1[0])
                    
                    if (rcx_144 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_144))[0] == zmm1[0]))
                        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_144
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
                    
                    zmm2 = var_398_9[2]
                    zmm2[0] = zmm2[0] + 0.5f
                    float var_1cc_1 = zmm1[0]
                    int32_t rcx_146 = int.d(zmm2[0])
                    
                    if (rcx_146 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_146))[0] == zmm2[0]))
                        zmm2 = _mm_cvtepi32_ps(zx.o(rcx_146
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1)))
                    
                    zmm1 = var_398_9[3]
                    zmm1[0] = zmm1[0] + 0.5f
                    float var_1c8_1 = zmm2[0]
                    int32_t rcx_148 = int.d(zmm1[0])
                    
                    if (rcx_148 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_148))[0] == zmm1[0]))
                        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_148
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
                    
                    int64_t rdi_31 = sx.q(*(rsi + 0x408))
                    float var_1c4_1 = zmm1[0]
                    int32_t rax_218 = (rdi_31 + 1).d
                    *(rsi + 0x408) = rax_218
                    
                    if (rax_218 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_31.d)
                    
                    void* rax_219 = *(rsi + 0x400)
                    void* rcx_151 = rsi
                    
                    if (rax_219 != 0)
                        rcx_151 = rax_219
                    
                    result = rdi_31 * 2
                    *(rcx_151 + (result << 3)) = var_1d0_1.o
                case 0x1d
                    void* rax_221 = *(rsi + 0x400)
                    void* rcx_152 = rsi
                    int64_t rdx_79 = sx.q(*(rsi + 0x408))
                    
                    if (rax_221 != 0)
                        rcx_152 = rax_221
                    
                    zmm9 = *(rcx_152 + rdx_79 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_79.d - 1, 1, 0)
                    zmm0 = _mm_shuffle_ps(zmm9, zmm9, 0xff)
                    truncf(zmm0[0])
                    zmm8 = zmm0
                    zmm0 = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
                    truncf(zmm0[0])
                    zmm7 = zmm0
                    zmm0 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
                    truncf(zmm0[0])
                    truncf(zmm9[0])
                    int64_t rdi_32 = sx.q(*(rsi + 0x408))
                    float var_1c0_1 = zmm9[0]
                    float var_1bc_1 = zmm0[0]
                    float var_1b8_1 = zmm7[0]
                    int32_t rax_224 = (rdi_32 + 1).d
                    uint32_t var_1b4_1 = zmm8[0]
                    *(rsi + 0x408) = rax_224
                    
                    if (rax_224 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_32.d)
                    
                    void* rax_225 = *(rsi + 0x400)
                    void* rcx_155 = rsi
                    
                    if (rax_225 != 0)
                        rcx_155 = rax_225
                    
                    result = rdi_32 * 2
                    *(rcx_155 + (result << 3)) = var_1c0_1.o
                case 0x1e
                    void* rax_227 = *(rsi + 0x400)
                    void* rcx_156 = rsi
                    int64_t rdx_82 = sx.q(*(rsi + 0x408))
                    
                    if (rax_227 != 0)
                        rcx_156 = rax_227
                    
                    zmm6 = *(rcx_156 + rdx_82 * 0x10 - 0x10)
                    int96_t var_398_10 = zmm6[0].12
                    sub_142152470(rsi, rdx_82.d - 1, 1, 0)
                    zmm6 = _mm_shuffle_ps(zmm6, zmm6, 0xff)
                    zmm6[0] - 0f
                    
                    if (not(zmm6[0] <= 0f))
                        zmm3 = 0x3f800000
                    else if (zmm6[0] >= 0f)
                        zmm3 = zx.o(0)
                    else
                        zmm3 = 0xbf800000
                    
                    zmm0 = var_398_10:8.d
                    zmm0[0] - 0f
                    
                    if (not(zmm0[0] <= 0f))
                        zmm2 = 0x3f800000
                    else if (zmm0[0] >= 0f)
                        zmm2 = zx.o(0)
                    else
                        zmm2 = 0xbf800000
                    
                    zmm0 = var_398_10:4.d
                    zmm0[0] - 0f
                    
                    if (not(zmm0[0] <= 0f))
                        zmm1 = 0x3f800000
                    else if (zmm0[0] >= 0f)
                        zmm1 = zx.o(0)
                    else
                        zmm1 = 0xbf800000
                    
                    zmm0 = var_398_10.d
                    zmm0[0] - 0f
                    
                    if (not(zmm0[0] <= 0f))
                        zmm0 = 0x3f800000
                    else if (zmm0[0] >= 0f)
                        zmm0 = zx.o(0)
                    else
                        zmm0 = 0xbf800000
                    
                    int64_t rdi_33 = sx.q(*(rsi + 0x408))
                    float var_1b0_1 = zmm0[0]
                    float var_1ac_1 = zmm1[0]
                    float var_1a8_1 = zmm2[0]
                    int32_t rax_230 = (rdi_33 + 1).d
                    float var_1a4_1 = zmm3[0]
                    *(rsi + 0x408) = rax_230
                    
                    if (rax_230 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_33.d)
                    
                    void* rax_231 = *(rsi + 0x400)
                    void* rcx_159 = rsi
                    
                    if (rax_231 != 0)
                        rcx_159 = rax_231
                    
                    result = rdi_33 * 2
                    *(rcx_159 + (result << 3)) = var_1b0_1.o
                case 0x1f
                    void* rax_233 = *(rsi + 0x400)
                    void* rcx_160 = rsi
                    int64_t rdx_85 = sx.q(*(rsi + 0x408))
                    
                    if (rax_233 != 0)
                        rcx_160 = rax_233
                    
                    zmm6 = *(rcx_160 + rdx_85 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_85.d - 1, 1, 0)
                    zmm1 = zmm6
                    int32_t rcx_162 = int.d(zmm1[0])
                    
                    if (rcx_162 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_162))[0] == zmm1[0]))
                        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_162
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
                    
                    zmm2 = zmm6[1]
                    zmm6[0] = zmm6[0] - zmm1[0]
                    zmm1 = zmm2
                    int32_t rcx_164 = int.d(zmm1[0])
                    float var_1a0_1 = zmm6[0]
                    
                    if (rcx_164 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_164))[0] == zmm1[0]))
                        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_164
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
                    
                    zmm3 = zmm6[2]
                    zmm2[0] = zmm2[0] - zmm1[0]
                    zmm1 = zmm3
                    int32_t rcx_166 = int.d(zmm1[0])
                    float var_19c_1 = zmm2[0]
                    
                    if (rcx_166 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_166))[0] == zmm1[0]))
                        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_166
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
                    
                    zmm2 = zmm6[3]
                    zmm3[0] = zmm3[0] - zmm1[0]
                    zmm1 = zmm2
                    int32_t rcx_168 = int.d(zmm1[0])
                    float var_198_1 = zmm3[0]
                    
                    if (rcx_168 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_168))[0] == zmm1[0]))
                        zmm1 = _mm_cvtepi32_ps(zx.o(rcx_168
                            - (_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1)))
                    
                    int64_t rdi_34 = sx.q(*(rsi + 0x408))
                    zmm2[0] = zmm2[0] - zmm1[0]
                    int32_t rax_244 = (rdi_34 + 1).d
                    float var_194_1 = zmm2[0]
                    *(rsi + 0x408) = rax_244
                    
                    if (rax_244 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_34.d)
                    
                    void* rax_245 = *(rsi + 0x400)
                    void* rcx_171 = rsi
                    
                    if (rax_245 != 0)
                        rcx_171 = rax_245
                    
                    result = rdi_34 * 2
                    *(rcx_171 + (result << 3)) = var_1a0_1.o
                case 0x20
                    void* rax_247 = *(rsi + 0x400)
                    void* rcx_172 = rsi
                    int64_t rdx_88 = sx.q(*(rsi + 0x408))
                    
                    if (rax_247 != 0)
                        rcx_172 = rax_247
                    
                    zmm9 = *(rcx_172 + rdx_88 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_88.d - 1, 1, 0)
                    zmm8 = _mm_shuffle_ps(zmm9, zmm9, 0xff)
                    zmm0 = zmm8
                    truncf(zmm0[0])
                    zmm8[0] = zmm8[0] f- zmm0[0]
                    zmm7 = _mm_shuffle_ps(zmm9, zmm9, 0xaa)
                    truncf(zmm7[0])
                    zmm7[0] = zmm7[0] - zmm7[0]
                    zmm6 = _mm_shuffle_ps(zmm9, zmm9, 0x55)
                    truncf(zmm6[0])
                    zmm6[0] = zmm6[0] - zmm6[0]
                    truncf(zmm9[0])
                    int64_t rdi_35 = sx.q(*(rsi + 0x408))
                    zmm9[0] = zmm9[0] - zmm9[0]
                    float var_18c_1 = zmm6[0]
                    float var_188_1 = zmm7[0]
                    uint32_t var_184_1 = zmm8[0]
                    int32_t rax_250 = (rdi_35 + 1).d
                    float var_190_1 = zmm9[0]
                    *(rsi + 0x408) = rax_250
                    
                    if (rax_250 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_35.d)
                    
                    void* rax_251 = *(rsi + 0x400)
                    void* rcx_175 = rsi
                    
                    if (rax_251 != 0)
                        rcx_175 = rax_251
                    
                    result = rdi_35 * 2
                    *(rcx_175 + (result << 3)) = var_190_1.o
                case 0x21
                    void* rax_253 = *(rsi + 0x400)
                    void* rcx_176 = rsi
                    int64_t rdx_91 = sx.q(*(rsi + 0x408))
                    
                    if (rax_253 != 0)
                        rcx_176 = rax_253
                    
                    zmm9 = *(rcx_176 + rdx_91 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_91.d - 1, 1, 0)
                    uint32_t zmm0_35[0x4] = sub_14213c050(&arg5, _mm_shuffle_ps(zmm9, zmm9, 0xff))
                    float zmm0_36[0x4] = sub_14213c050(&arg5, _mm_shuffle_ps(zmm9, zmm9, 0xaa))
                    int128_t zmm0_37
                    int512_t zmm6_3
                    zmm0_37, zmm6_3 = sub_14213c050(&arg5, _mm_shuffle_ps(zmm9, zmm9, 0x55))
                    zmm6_3.o = zmm0_37
                    zmm0, zmm6 = sub_14213c050(&arg5, zmm9)
                    int64_t rdi_36 = sx.q(*(rsi + 0x408))
                    float var_180_1 = zmm0[0]
                    float var_17c_1 = zmm6[0]
                    float var_178_1 = zmm0_36[0]
                    int32_t rax_256 = (rdi_36 + 1).d
                    uint32_t var_174_1 = zmm0_35[0]
                    *(rsi + 0x408) = rax_256
                    
                    if (rax_256 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_36.d)
                    
                    void* rax_257 = *(rsi + 0x400)
                    void* rcx_183 = rsi
                    
                    if (rax_257 != 0)
                        rcx_183 = rax_257
                    
                    result = rdi_36 * 2
                    *(rcx_183 + (result << 3)) = var_180_1.o
                case 0x22
                    void* rax_259 = *(rsi + 0x400)
                    void* rcx_184 = rsi
                    int64_t rdx_94 = sx.q(*(rsi + 0x408))
                    
                    if (rax_259 != 0)
                        rcx_184 = rax_259
                    
                    zmm7 = *(rcx_184 + rdx_94 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_94.d - 1, 1, 0)
                    float zmm0_39[0x4] = logf(zmm7[0])
                    zmm6 = data_143a2eac8
                    zmm0_39[0] = zmm0_39[0] * zmm6[0]
                    float var_170_1 = zmm0_39[0]
                    float zmm0_40[0x4] = logf(_mm_shuffle_ps(zmm7, zmm7, 0x55)[0])
                    zmm0_40[0] = zmm0_40[0] * zmm6[0]
                    float var_16c_1 = zmm0_40[0]
                    float var_168_1 = logf(_mm_shuffle_ps(zmm7, zmm7, 0xaa)[0]) * zmm6[0]
                    zmm0 = logf(_mm_shuffle_ps(zmm7, zmm7, 0xff)[0])
                    int64_t rdi_37 = sx.q(*(rsi + 0x408))
                    zmm0[0] = zmm0[0] * zmm6[0]
                    int32_t rax_262 = (rdi_37 + 1).d
                    float var_164_1 = zmm0[0]
                    *(rsi + 0x408) = rax_262
                    
                    if (rax_262 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_37.d)
                    
                    void* rax_263 = *(rsi + 0x400)
                    void* rcx_187 = rsi
                    
                    if (rax_263 != 0)
                        rcx_187 = rax_263
                    
                    result = rdi_37 * 2
                    *(rcx_187 + (result << 3)) = var_170_1.o
                case 0x23
                    void* rax_265 = *(rsi + 0x400)
                    void* rcx_188 = rsi
                    int64_t rdx_97 = sx.q(*(rsi + 0x408))
                    uint32_t rdi_38 = zx.d(*rbx)
                    char r14_3 = rbx[1]
                    char r13_1 = rbx[2]
                    char r12_3 = rbx[3]
                    char r15_3 = rbx[4]
                    rbx = &rbx[5]
                    
                    if (rax_265 != 0)
                        rcx_188 = rax_265
                    
                    var_388 = *(rcx_188 + rdx_97 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_97.d - 1, 1, 0)
                    var_378 = zx.o(0)
                    
                    if (rdi_38 == 1)
                        zmm0 = var_388[zx.q(r14_3)]
                        var_378 = _mm_shuffle_ps(zmm0, zmm0, 0)
                    else if (rdi_38 == 2)
                        var_378[1] = var_388[zx.q(r13_1)][0]
                        var_378[0] = var_388[zx.q(r14_3)][0]
                    else
                        if (rdi_38 == 3)
                            goto label_142144338
                        
                        if (rdi_38 == 4)
                            var_378[3] = var_388[zx.q(r15_3)][0]
                        label_142144338:
                            var_378[2] = var_388[zx.q(r12_3)][0]
                            var_378[1] = var_388[zx.q(r13_1)][0]
                            var_378[0] = var_388[zx.q(r14_3)][0]
                        else
                            sub_140af98a0("Unknown", 0x2cf, 
                                Invalid number of swizzle elements: %d", zx.q(rdi_38))
                            sub_140afbb40()
                    
                    int64_t rdi_39 = sx.q(*(rsi + 0x408))
                    int32_t rax_273 = (rdi_39 + 1).d
                    *(rsi + 0x408) = rax_273
                    
                    if (rax_273 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_39.d)
                    
                    void* rax_274 = *(rsi + 0x400)
                    void* rcx_195 = rsi
                    
                    if (rax_274 != 0)
                        rcx_195 = rax_274
                    
                    result = rdi_39 * 2
                    *(rcx_195 + (result << 3)) = var_378
                    r12_1 = arg_20
                    r14 = arg1
                case 0x24
                    void* rax_276 = *(rsi + 0x400)
                    void* rcx_196 = rsi
                    int64_t rdx_100 = sx.q(*(rsi + 0x408))
                    char rdi_40 = *rbx
                    rbx = &rbx[1]
                    
                    if (rax_276 != 0)
                        rcx_196 = rax_276
                    
                    var_378 = *(rcx_196 + rdx_100 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_100.d - 1, 1, 0)
                    void* rax_279 = *(rsi + 0x400)
                    void* rcx_198 = rsi
                    int64_t rdx_102 = sx.q(*(rsi + 0x408))
                    
                    if (rax_279 != 0)
                        rcx_198 = rax_279
                    
                    var_388 = *(rcx_198 + rdx_102 * 0x10 - 0x10)
                    sub_142152470(rsi, rdx_102.d - 1, 1, 0)
                    uint64_t rdx_104 = zx.q(rdi_40)
                    
                    if (rdi_40 u< 1)
                        zmm0 = *(&var_378 - (rdx_104 << 2))
                    else
                        zmm0 = var_388[0]
                    
                    float var_368_1 = zmm0[0]
                    
                    if (rdi_40 u< 2)
                        zmm0 = *(&var_378[1] - (rdx_104 << 2))
                    else
                        zmm0 = var_388[1]
                    
                    float var_364_1 = zmm0[0]
                    uint64_t rdx_105 = zx.q(rdi_40)
                    
                    if (rdi_40 u< 3)
                        zmm0 = *(&var_378[2] - (rdx_105 << 2))
                    else
                        zmm0 = var_388[2]
                    
                    float var_360_1 = zmm0[0]
                    
                    if (rdi_40 u< 4)
                        zmm0 = *(&var_378[3] - (rdx_105 << 2))
                    else
                        zmm0 = var_388[3]
                    
                    int64_t rdi_41 = sx.q(*(rsi + 0x408))
                    float var_35c_1 = zmm0[0]
                    int32_t rax_286 = (rdi_41 + 1).d
                    *(rsi + 0x408) = rax_286
                    
                    if (rax_286 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rdi_41.d)
                    
                    void* rax_287 = *(rsi + 0x400)
                    void* rcx_205 = rsi
                    
                    if (rax_287 != 0)
                        rcx_205 = rax_287
                    
                    result = rdi_41 * 2
                    *(rcx_205 + (result << 3)) = var_368_1.o
                case 0x25
                    result = sub_14214a8b0(r13, &arg_18)
                    
                    if (result != 0)
                        int64_t* rcx_207 = *(result + 0x78)
                        int64_t rdx_108 = *rcx_207
                        int32_t rax_289 = (*(rdx_108 + 0x40))(rcx_207, rdx_108)
                        int64_t* rcx_208 = *(result + 0x78)
                        zmm0 = zx.o(0)
                        zmm0[0] = float.s(zx.q(rax_289))
                        int64_t rdx_110 = *rcx_208
                        float var_160_1 = zmm0[0]
                        int32_t rax_290 = (*(rdx_110 + 0x48))(rcx_208, rdx_110)
                        int64_t* rcx_209 = *(result + 0x78)
                        zmm0 = zx.o(0)
                        zmm0[0] = float.s(zx.q(rax_290))
                        float var_15c_1 = zmm0[0]
                        int32_t rax_293 = (*(*rcx_209 + 0x50))(rcx_209)
                        int64_t rbx_2 = sx.q(*(rsi + 0x408))
                        zmm0 = zx.o(0)
                        int32_t var_154_1 = 0
                        zmm0[0] = float.s(zx.q(rax_293))
                        int32_t rax_295 = (rbx_2 + 1).d
                        *(rsi + 0x408) = rax_295
                        float var_158_1 = zmm0[0]
                        
                        if (rax_295 s> *(rsi + 0x40c))
                            sub_142152d60(rsi, rbx_2.d)
                        
                        void* rax_296 = *(rsi + 0x400)
                        void* rcx_211 = rsi
                        
                        if (rax_296 != 0)
                            rcx_211 = rax_296
                        
                        result = rbx_2 * 2
                        *(rcx_211 + (result << 3)) = var_160_1.o
                    
                    rbx = arg_18
                case 0x26
                    result = sub_14214a8b0(r13, &arg_18)
                    
                    if (result == 0)
                        rbx = arg_18
                    else
                        int64_t* rcx_213 = *(result + 0x78)
                        int64_t rdx_113 = *rcx_213
                        int32_t rax_298 = (*(rdx_113 + 0x40))(rcx_213, rdx_113)
                        int64_t* rcx_214 = *(result + 0x78)
                        int64_t rdx_114 = *rcx_214
                        int32_t rax_299 = (*(rdx_114 + 0x48))(rcx_214, rdx_114)
                        int64_t* rcx_215 = *(result + 0x78)
                        int64_t rdx_115 = *rcx_215
                        int32_t rax_300 = (*(rdx_115 + 0x50))(rcx_215, rdx_115)
                        
                        if (rax_300 == 0)
                            zmm2 = zx.o(0)
                        else
                            zmm0 = zx.o(0)
                            zmm2 = 0x3f800000
                            zmm0[0] = float.s(zx.q(rax_300))
                            zmm2[0] = 1f / zmm0[0]
                        
                        int64_t rbx_4 = sx.q(*(rsi + 0x408))
                        zmm0 = zx.o(0)
                        zmm0[0] = float.s(zx.q(rax_298))
                        int32_t var_144_1 = 0
                        int32_t rax_301 = (rbx_4 + 1).d
                        *(rsi + 0x408) = rax_301
                        zmm1 = 0x3f800000
                        float var_148_1 = zmm2[0]
                        zmm1[0] = 1f / zmm0[0]
                        zmm0 = zx.o(0)
                        float var_150_1 = zmm1[0]
                        zmm1 = 0x3f800000
                        zmm0[0] = float.s(zx.q(rax_299))
                        zmm1[0] = 1f / zmm0[0]
                        float var_14c_1 = zmm1[0]
                        
                        if (rax_301 s> *(rsi + 0x40c))
                            sub_142152d60(rsi, rbx_4.d)
                        
                        void* rax_302 = *(rsi + 0x400)
                        void* rcx_218 = rsi
                        
                        if (rax_302 != 0)
                            rcx_218 = rax_302
                        
                        rbx = arg_18
                        result = rbx_4 * 2
                        *(rcx_218 + (result << 3)) = var_150_1.o
                        r14 = arg1
                case 0x27
                    int32_t var_350
                    sub_1421484c0(&var_350, r13, &arg_18)
                    int32_t var_34c
                    int32_t var_348
                    int32_t var_344
                    bool cond:4_1 = (var_344 | var_348 | var_350 | var_34c) == 0
                    float var_130[0x4] = data_142d8c9b0
                    
                    if (not(cond:4_1))
                        sub_142004830(sub_142003380(), &var_350, &var_130)
                    
                    int64_t rbx_5 = sx.q(*(rsi + 0x408))
                    int32_t rax_309 = (rbx_5 + 1).d
                    *(rsi + 0x408) = rax_309
                    
                    if (rax_309 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rbx_5.d)
                    
                    void* rax_310 = *(rsi + 0x400)
                    void* rcx_222 = rsi
                    
                    if (rax_310 != 0)
                        rcx_222 = rax_310
                    
                    rbx = arg_18
                    result = rbx_5 * 2
                    *(rcx_222 + (result << 3)) = var_130
                case 0x28
                    int32_t var_340
                    sub_1421484c0(&var_340, r13, &arg_18)
                    int32_t var_33c
                    int32_t var_338
                    int32_t var_334
                    bool cond:5_1 = (var_334 | var_338 | var_340 | var_33c) == 0
                    float var_120[0x4] = zx.o(0)
                    
                    if (not(cond:5_1))
                        sub_142004780(sub_142003380(), &var_340, &var_120)
                    
                    int64_t rbx_6 = sx.q(*(rsi + 0x408))
                    int32_t rax_317 = (rbx_6 + 1).d
                    *(rsi + 0x408) = rax_317
                    
                    if (rax_317 s> *(rsi + 0x40c))
                        sub_142152d60(rsi, rbx_6.d)
                    
                    void* rax_318 = *(rsi + 0x400)
                    void* rcx_226 = rsi
                    
                    if (rax_318 != 0)
                        rcx_226 = rax_318
                    
                    rbx = arg_18
                    result = rbx_6 * 2
                    *(rcx_226 + (result << 3)) = var_120
                case 0x29
                    int64_t var_330 = 0
                    int32_t var_328_1 = 0xffffffff
                    char var_324_1 = 2
                    var_330.o = *rbx
                    int32_t r14_5 = *(rbx + 0x10)
                    int32_t rdi_43 = *(rbx + 0x14)
                    rbx = &rbx[0x18]
                    bool cond:6_1 = var_330 == 0
                    void* var_358 = nullptr
                    void* rax_322
                    
                    if (cond:6_1)
                        rax_322 = sub_142136860(r13[1], r14_5)
                        var_358 = rax_322
                    else
                        int64_t* rcx_227 = *r13
                        
                        if (rcx_227 == 0)
                            rax_322 = sub_142136860(r13[1], r14_5)
                            var_358 = rax_322
                        else if ((*(*rcx_227 + 0x68))(rcx_227, &var_330, &var_358, r13, var_3a8)
                                == 0)
                            rax_322 = sub_142136860(r13[1], r14_5)
                            var_358 = rax_322
                        else
                            rax_322 = var_358
                    
                    if (rax_322 == 0 || rdi_43 == 0xffffffff)
                        int64_t rdi_45 = sx.q(*(rsi + 0x408))
                        int32_t rax_326 = (rdi_45 + 1).d
                        *(rsi + 0x408) = rax_326
                        
                        if (rax_326 s> *(rsi + 0x40c))
                            sub_142152d60(rsi, rdi_45.d)
                        
                        void* rax_327 = *(rsi + 0x400)
                        void* rcx_235 = rsi
                        
                        if (rax_327 != 0)
                            rcx_235 = rax_327
                        
                        result = rdi_45 * 2
                        *(rcx_235 + (result << 3)) = zx.o(0)
                    else
                        void var_108
                        void var_f8
                        int32_t* rax_324 =
                            sub_140acc970(&var_f8, sub_142437770(rax_322, &var_108, rdi_43))
                        int64_t rdi_44 = sx.q(*(rsi + 0x408))
                        int32_t rcx_231 = (rdi_44 + 1).d
                        *(rsi + 0x408) = rcx_231
                        
                        if (rcx_231 s> *(rsi + 0x40c))
                            sub_142152d60(rsi, rdi_44.d)
                        
                        void* rcx_233 = *(rsi + 0x400)
                        void* rdx_128 = rsi
                        
                        if (rcx_233 != 0)
                            rdx_128 = rcx_233
                        
                        result = rdi_44 * 2
                        *(rdx_128 + (result << 3)) = *rax_324
                    
                    r14 = arg1
        r13 = arg2
    while (rbx u< r12_1)
    
    rcx = *(rsi + 0x408)

if (rcx s> 0)
    void* rax_11 = *(rsi + 0x400)
    
    if (rax_11 != 0)
        rsi = rax_11
    
    result = arg6
    *result = *(rsi + sx.q(rcx) * 0x10 - 0x10)

return result
