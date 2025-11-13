// 函数: sub_142342990
// 地址: 0x142342990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg3
void* r8 = *(arg1 + 0x110)
bool r12 = true
*(arg1 + 0x120) = 0
int64_t r10 = sx.q(*(r8 + 0x30))
int64_t* r13_1 = r10 * 0xb0 + *(arg1 + 0x100)

if (r13_1[5].b != 0)
    r12 = arg7

r12 |= data_143f58a64 != 0
int64_t* result = *(arg1 + 0x40)
void* r14 = *(*result + (r10 << 3))
int64_t rcx

if (*(r8 + 0x68) s<= 0 || *(r14 + 0xec) u<= 0)
    rcx.b = 0
else
    rcx.b = 1

char var_258 = rcx.b
char var_257

if (arg2 == 0 || data_143a2e1b8 == 0 || *(arg1 + 0x68) s< 3 || (*(r8 + 0x104) & 1) == 0)
    result.b = 0
    var_257 = 0
else
    var_257 = 1

void* rsi = nullptr
uint32_t zmm6[0x4]

if (*(r13_1 + 0x29) != 0 && (rcx.b == 0 || r12 == 0))
    rsi = r13_1[9]
    void* var_218 = rsi
    
    if (rsi != 0)
        *(rsi + 8) += 1
    
    result, arg5, zmm6 = sub_1405d1550(&var_218)
    
    if (rsi != 0)
        void* r15_1 = r13_1[9]
        int64_t var_228_1 = 0
        int64_t var_220_1 = 0
        void* var_210 = r15_1
        
        if (r15_1 != 0)
            *(r15_1 + 8) += 1
        
        void*** rcx_4 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_1 = &rcx_4[5]
        
        if (rax_1 u> *(rbx + 0x38))
            sub_140b0e3d0(rbx + 0x30, 0x30)
            rcx_4 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
            rax_1 = &rcx_4[5]
        
        *(rbx + 0x30) = rax_1
        void** rax_2 = *(rbx + 8)
        *(rbx + 0x14) += 1
        *rax_2 = rcx_4
        *(rbx + 8) = &rcx_4[1]
        rcx_4[1] = 0
        *rcx_4 = &data_142f115d8
        rcx_4[2] = r15_1
        *(rcx_4 + 0x18) = var_228_1.o
        sub_1405d1550(&var_210)
        void* rax_4 = r13_1[9]
        void* var_230 = rax_4
        
        if (rax_4 != 0)
            *(rax_4 + 8) += 1
            rax_4 = var_230
        
        void** r15_4 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
        void* rcx_9 = &r15_4[1]
        
        if (rcx_9 u> *(rbx + 0x38))
            sub_140b0e3d0(rbx + 0x30, 0x10)
            r15_4 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
            rcx_9 = &r15_4[1]
        
        *(rbx + 0x30) = rcx_9
        *r15_4 = rax_4
        void*** rcx_13 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
        void* rax_5 = &rcx_13[6]
        
        if (rax_5 u> *(rbx + 0x38))
            sub_140b0e3d0(rbx + 0x30, 0x38)
            rcx_13 = (*(rbx + 0x30) + 7) & 0xfffffffffffffff8
            rax_5 = &rcx_13[6]
        
        *(rbx + 0x30) = rax_5
        rsi = nullptr
        void**** rax_6 = *(rbx + 8)
        *(rbx + 0x14) += 1
        *rax_6 = rcx_13
        *(rbx + 8) = &rcx_13[1]
        rcx_13[1] = 0
        *rcx_13 = &data_142da7798
        rcx_13[2].d = 1
        rcx_13[3] = r15_4
        rcx_13[4].d = 0
        *(rcx_13 + 0x24) = 1
        rcx_13[5] = 0
        result, arg5, zmm6 = sub_1405d1550(&var_230)

*(r13_1 + 0x29) = 0
uint32_t zmm7[0x4]
float zmm8[0x4]
float zmm9[0x4]

if (var_258 != 0)
    if (r12 != 0)
        char rax_8
        
        if (data_143a2ff10 != 0)
            rax_8 = sub_1405fba70(data_143f0f1a0, 3)
        
        if (data_143a2ff10 == 0 || rax_8 == 0)
            void* rdx_3 = *(arg1 + 0x110)
            result, arg5, zmm6, zmm7, zmm8 =
                sub_142349b90(r13_1, rdx_3 + 0x38, rdx_3 + 0x48, zmm6, zmm7, zmm8)
        else
            int32_t rdx = *(r14 + 0x2b0)
            void* r15_7 = rsi
            void* var_250 = rsi
            int64_t var_248_1 = 0
            
            if (rdx s> 0)
                sub_1405dadb0(&var_250, rdx)
                r15_7 = var_250
            
            void* rax_9 = *(arg1 + 0x110)
            int32_t i = rsi.d
            arg7.d = i
            
            if (*(rax_9 + 0x50) s> 0)
                int32_t* r14_1 = rsi
                
                do
                    if (*(r14_1 + *(r14 + 0x2d8)) u> 0)
                        do
                            int64_t rbx_1 = sx.q(var_248_1.d)
                            int64_t r12_1 = *(*(arg1 + 0x110) + 0x48)
                            int32_t rax_12 = (rbx_1 + 1).d
                            var_248_1.d = rax_12
                            
                            if (rax_12 s> var_248_1:4.d)
                                sub_1406105e0(&var_250)
                                r15_7 = var_250
                            
                            rsi = zx.q(rsi.d + 1)
                            *(r15_7 + (rbx_1 << 2)) = *(r14_1 + r12_1)
                        while (rsi.d u< *(r14_1 + *(r14 + 0x2d8)))
                        
                        i = arg7.d
                    
                    rax_9 = *(arg1 + 0x110)
                    i += 1
                    r14_1 = &r14_1[1]
                    arg7.d = i
                    rsi = nullptr
                while (i s< *(rax_9 + 0x50))
                
                rbx = arg3
            
            result, arg5, zmm6, zmm7, zmm8, zmm9 =
                sub_142349f10(r13_1, rbx, &var_250, r14 + 0x208, rax_9 + 0x58)
            
            if (r15_7 != 0)
                result, arg5 = sub_140a74f90(r15_7)
    
    goto label_142342d6f

if (r13_1[0xd].d s> 0)
label_142342d6f:
    int32_t i_1 = rsi.d
    int32_t i_2 = rsi.d
    
    if (*(r14 + 8) s> 0)
        uint32_t var_58_1[0x4] = zmm6
        uint32_t var_68_1[0x4] = zmm7
        float var_78_1[0x4] = zmm8
        float var_88_1[0x4] = zmm9
        float zmm10[0x4]
        float var_98_1[0x4] = zmm10
        float zmm11[0x4]
        float var_a8_1[0x4] = zmm11
        float zmm12[0x4]
        float var_b8_1[0x4] = zmm12
        
        do
            void** r15_9 = rsi * 0xe8 + *r14
            
            if (*(arg1 + 0x68) s>= 3)
                result = *(arg1 + 0x110)
            
            void* rax_18
            
            if (*(arg1 + 0x68) s< 3 || result[0xf].d - *(result + 0xa4) s<= 0 || r15_9[4].d s<= 0)
                arg7 = false
                void* rax_19 = *(arg1 + 0x110)
                int32_t* rcx_27
                void* rdx_5
                
                if (*(rax_19 + 0x68) s> 0)
                    rcx_27 = *(rax_19 + 0x58)
                    rdx_5 = &rcx_27[sx.q(*(rax_19 + 0x60))]
                
                int64_t rax_32
                
                if (*(rax_19 + 0x68) s<= 0 || rcx_27 == rdx_5)
                label_142342e42:
                    rax_32 = r13_1[0xc]
                else
                    while (*rcx_27 != i_1)
                        rcx_27 = &rcx_27[1]
                        
                        if (rcx_27 == rdx_5)
                            goto label_142342e42
                    
                    rax_32 = r13_1[0x10]
                
                rax_18 = *(rax_32 + (rsi << 3))
            else
                arg7 = true
                int64_t* rcx_26 = *(r13_1[0x12] + (rsi << 3))
                rax_18 = (*(*rcx_26 + 0x10))(rcx_26)
            
            void* r10_1 = rax_18 + 0x130
            char r12_2 = var_257
            
            if (var_257 != 0)
                r12_2 = var_257
                
                if (*(r15_9 + 0x3c) == 0)
                    r12_2 = 0
            
            void* r8_3 = *(arg1 + 0x110)
            int64_t* rcx_28 = &r15_9[5]
            void** var_2a8
            
            if (*(r8_3 + 0x28) s> 0)
                var_2a8.d = arg6
                arg5 = sub_142071780(r10_1, rbx, r8_3 + 0x20, rcx_28, arg5, var_2a8.d, 1, 
                    *(arg1 + 0x68), r12_2)
                r8_3 = *(arg1 + 0x110)
                rcx_28 = &r15_9[5]
            
            char var_2a0_1 = 0
            var_2a8.d = arg6
            char rax_26
            void* r8_6
            rax_26, r8_6, arg5 = sub_142071780(r10_1, rbx, r8_3 + 0x10, rcx_28, arg5, var_2a8.d, 0, 
                *(arg1 + 0x68), r12_2)
            void* arg_8
            arg_8.b = rax_26
            result = zx.q(arg7)
            
            if (result.b != 0)
                int32_t* rax_28 = *(r13_1[0x12] + (rsi << 3)) + 0x10
                *rax_28 = *(*(arg1 + 0x110) + 0x100)
                void* r10_2 = *(arg1 + 0x110)
                int64_t rbx_2 = sx.q(r15_9[8].w)
                int32_t r9_3 = *(r10_2 + 0x78)
                int32_t* rcx_37
                
                if (r9_3 == *(r10_2 + 0xa4))
                label_142342fa4:
                    rcx_37 = nullptr
                else
                    r8_6 = r10_2 + 0xa8
                    void* rcx_33 = *(r8_6 + 8)
                    
                    if (rcx_33 != 0)
                        r8_6 = rcx_33
                    
                    int32_t rax_29 = *(r8_6 + (((sx.q(*(r10_2 + 0xb8)) - 1) & rbx_2) << 2))
                    
                    if (rax_29 == 0xffffffff)
                    label_142342fa4_1:
                        rcx_37 = nullptr
                    else
                        while (true)
                            rcx_37 = sx.q(rax_29) * 0xa0 + *(r10_2 + 0x70)
                            
                            if (*rcx_37 == rbx_2.d)
                                break
                            
                            rax_29 = rcx_37[0x24]
                            
                            if (rax_29 == 0xffffffff)
                                goto label_142342fa4_2
                        
                        if (rax_29 == 0xffffffff)
                        label_142342fa4_2:
                            rcx_37 = nullptr
                
                void* rax_30 = &rcx_37[4]
                
                if (rcx_37 == 0)
                    rax_30 = nullptr
                
                if (rax_30 != 0)
                    int32_t* r9_7
                    
                    if (r9_3 - *(r10_2 + 0xa4) == 0)
                    label_142343033:
                        r9_7 = nullptr
                    else
                        void* r8_7 = r10_2 + 0xa8
                        void* rcx_38 = *(r8_7 + 8)
                        
                        if (rcx_38 != 0)
                            r8_7 = rcx_38
                        
                        int32_t rax_31 = *(r8_7 + (((sx.q(*(r10_2 + 0xb8)) - 1) & rbx_2) << 2))
                        
                        if (rax_31 == 0xffffffff)
                        label_142343033_1:
                            r9_7 = nullptr
                        else
                            while (true)
                                r9_7 = sx.q(rax_31) * 0xa0 + *(r10_2 + 0x70)
                                
                                if (*r9_7 == rbx_2.d)
                                    break
                                
                                rax_31 = r9_7[0x24]
                                
                                if (rax_31 == 0xffffffff)
                                    goto label_142343033_2
                            
                            if (rax_31 == 0xffffffff)
                            label_142343033_2:
                                r9_7 = nullptr
                    
                    int32_t* r8_12
                    
                    if (*(r10_2 + 0x78) == *(r10_2 + 0xa4))
                    label_142343098:
                        r8_12 = nullptr
                    else
                        void* r8_9 = r10_2 + 0xa8
                        void* rcx_40 = *(r8_9 + 8)
                        
                        if (rcx_40 != 0)
                            r8_9 = rcx_40
                        
                        int32_t rax_34 = *(r8_9 + (((sx.q(*(r10_2 + 0xb8)) - 1) & rbx_2) << 2))
                        
                        if (rax_34 == 0xffffffff)
                        label_142343098_1:
                            r8_12 = nullptr
                        else
                            while (true)
                                r8_12 = sx.q(rax_34) * 0xa0 + *(r10_2 + 0x70)
                                
                                if (*r8_12 == rbx_2.d)
                                    break
                                
                                rax_34 = r8_12[0x24]
                                
                                if (rax_34 == 0xffffffff)
                                    goto label_142343098_2
                            
                            if (rax_34 == 0xffffffff)
                            label_142343098_2:
                                r8_12 = nullptr
                    
                    var_2a0_1.d = *(arg1 + 0x68)
                    var_2a8.d = arg4
                    char rax_37 =
                        sub_142071bc0(rax_28, arg3, &r8_12[4], &r9_7[8], arg5, var_2a8.d, 0)
                    bool cond:6_1
                    
                    if (rax_37 == 0)
                        cond:6_1 = arg_8.b == rax_37
                        arg_8.b = rax_37
                    
                    if (rax_37 != 0 || not(cond:6_1))
                        arg_8.b = 1
                    
                    void* r9_9 = *(arg1 + 0x110)
                    int32_t* rcx_47
                    
                    if (*(r9_9 + 0x78) == *(r9_9 + 0xa4))
                    label_142343146:
                        rcx_47 = nullptr
                    else
                        void* r8_14 = r9_9 + 0xa8
                        void* rcx_43 = *(r8_14 + 8)
                        
                        if (rcx_43 != 0)
                            r8_14 = rcx_43
                        
                        int32_t rax_39 = *(r8_14 + (((sx.q(*(r9_9 + 0xb8)) - 1) & rbx_2) << 2))
                        
                        if (rax_39 == 0xffffffff)
                        label_142343146_1:
                            rcx_47 = nullptr
                        else
                            while (true)
                                rcx_47 = sx.q(rax_39) * 0xa0 + *(r9_9 + 0x70)
                                
                                if (*rcx_47 == rbx_2.d)
                                    break
                                
                                rax_39 = rcx_47[0x24]
                                
                                if (rax_39 == 0xffffffff)
                                    goto label_142343146_2
                            
                            if (rax_39 == 0xffffffff)
                            label_142343146_2:
                                rcx_47 = nullptr
                    
                    arg5 = *(rcx_47 + 0x60)
                    zmm11 = *(rcx_47 + 0x70)
                    zmm9 = *(r9_9 + 0xf0)
                    float temp0_1[0x4] = _mm_add_ps(arg5, arg5)
                    float temp0_2[0x4] = _mm_shuffle_ps(arg5, arg5, 4)
                    float temp0_3[0x4] = _mm_mul_ps(temp0_1, arg5)
                    float temp0_5[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x29), temp0_2)
                    float temp0_6[0x4] = _mm_shuffle_ps(arg5, arg5, 0xff)
                    float temp0_9[0x4] = _mm_add_ps(_mm_shuffle_ps(temp0_3, temp0_3, 0x1a), 
                        _mm_shuffle_ps(temp0_3, temp0_3, 1))
                    float temp0_11[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_1, temp0_1, 0x12), temp0_6)
                    arg5 = *(rcx_47 + 0x80)
                    float temp0_12[0x4] = _mm_shuffle_ps(arg5, arg5, 0xc9)
                    float temp0_13[0x4] = _mm_add_ps(temp0_11, temp0_5)
                    float temp0_14[0x4] = _mm_sub_ps(temp0_5, temp0_11)
                    float zmm3_1[0x4] = data_143f58a80
                    float temp0_15[0x4] = _mm_mul_ps(temp0_13, arg5)
                    float temp0_16[0x4] = _mm_mul_ps(temp0_12, temp0_14)
                    float temp0_17[0x4] = _mm_sub_ps(zmm3_1, temp0_9)
                    zmm3_1[0].q = zmm11 u>> 0x40
                    float temp0_18[0x4] = _mm_shuffle_ps(zmm11, zmm3_1, 0xc4)
                    zmm3_1 = *(r9_9 + 0xd0)
                    float var_148_1[0x4] = temp0_18
                    float zmm2_1[0x4] =
                        __andps_xmmxud_memxud(_mm_mul_ps(temp0_17, arg5), data_143f58a90)
                    float temp0_21[0x4] = _mm_shuffle_ps(temp0_16, zmm2_1, 0x32)
                    float temp0_23[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_15, zmm2_1, 0), temp0_21, 0x82)
                    float temp0_24[0x4] = _mm_shuffle_ps(temp0_15, zmm2_1, 0x31)
                    float temp0_25[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0)
                    float temp0_26[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xaa)
                    float temp0_28[0x4] =
                        _mm_shuffle_ps(_mm_shuffle_ps(temp0_16, zmm2_1, 0x10), temp0_24, 0x88)
                    float temp0_29[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0x55)
                    float temp0_30[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0)
                    float temp0_31[0x4] = _mm_mul_ps(temp0_29, zmm3_1)
                    float temp0_32[0x4] = _mm_shuffle_ps(temp0_15, temp0_16, 0x12)
                    float zmm5_1[0x4] = *(r9_9 + 0xe0)
                    float temp0_33[0x4] = _mm_mul_ps(temp0_26, zmm5_1)
                    float temp0_34[0x4] = _mm_shuffle_ps(temp0_32, zmm2_1, 0xe8)
                    zmm2_1 = *(r9_9 + 0xc0)
                    float temp0_35[0x4] = _mm_mul_ps(temp0_25, zmm2_1)
                    float var_178_1[0x4] = temp0_23
                    float temp0_36[0x4] = _mm_mul_ps(temp0_30, zmm2_1)
                    float temp0_37[0x4] = _mm_add_ps(temp0_35, temp0_31)
                    float var_168_1[0x4] = temp0_28
                    float temp0_38[0x4] = _mm_shuffle_ps(temp0_23, temp0_23, 0xff)
                    float temp0_39[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0x55)
                    float temp0_40[0x4] = _mm_mul_ps(temp0_38, zmm9)
                    float temp0_41[0x4] = _mm_add_ps(temp0_37, temp0_33)
                    float temp0_42[0x4] = _mm_mul_ps(temp0_39, zmm3_1)
                    float var_158_1[0x4] = temp0_34
                    float temp0_44[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_28, temp0_28, 0xaa), zmm5_1)
                    float temp0_45[0x4] = _mm_add_ps(temp0_41, temp0_40)
                    float temp0_46[0x4] = _mm_shuffle_ps(temp0_28, temp0_28, 0xff)
                    float temp0_47[0x4] = _mm_add_ps(temp0_36, temp0_42)
                    float temp0_48[0x4] = _mm_mul_ps(temp0_46, zmm9)
                    float var_138_1[0x4] = temp0_45
                    float temp0_50[0x4] = _mm_add_ps(_mm_add_ps(temp0_47, temp0_44), temp0_48)
                    float temp0_51[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0x55)
                    float temp0_52[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xaa)
                    float temp0_53[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0)
                    float temp0_54[0x4] = _mm_shuffle_ps(temp0_18, temp0_18, 0)
                    float temp0_55[0x4] = _mm_mul_ps(temp0_51, zmm3_1)
                    float temp0_56[0x4] = _mm_mul_ps(temp0_52, zmm5_1)
                    float temp0_57[0x4] = _mm_mul_ps(temp0_53, zmm2_1)
                    float temp0_58[0x4] = _mm_mul_ps(temp0_54, zmm2_1)
                    float temp0_59[0x4] = _mm_shuffle_ps(temp0_34, temp0_34, 0xff)
                    float temp0_60[0x4] = _mm_add_ps(temp0_57, temp0_55)
                    float temp0_61[0x4] = _mm_mul_ps(temp0_59, zmm9)
                    float var_128_1[0x4] = temp0_50
                    float temp0_63[0x4] =
                        _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0x55), zmm3_1)
                    float temp0_64[0x4] = _mm_add_ps(temp0_60, temp0_56)
                    arg5 = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xaa), zmm5_1)
                    float temp0_67[0x4] = _mm_add_ps(temp0_58, temp0_63)
                    float temp0_69[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_18, temp0_18, 0xff), zmm9)
                    float temp0_70[0x4] = _mm_add_ps(temp0_64, temp0_61)
                    float var_118_1[0x4] = temp0_70
                    float temp0_72[0x4] = _mm_add_ps(_mm_add_ps(temp0_67, arg5), temp0_69)
                    float var_108_1[0x4] = temp0_72
                    void* rax_40
                    rax_40, r8_6 = sub_1423371a0(rax_28, arg4)
                    *rax_40 = temp0_45
                    *(rax_40 + 0x10) = temp0_50
                    *(rax_40 + 0x20) = temp0_70
                    *(rax_40 + 0x30) = temp0_72
                
                result = zx.q(arg7)
                rbx = arg3
            
            int32_t i_3
            
            if (r12_2 == 0)
                i_3 = i_2
            else
                void* rax_42
                
                if (result.b == 0)
                    rax_42 = &data_14399f6e0
                else
                    rax_42 = sub_1423371a0(*(r13_1[0x12] + (rsi << 3)) + 0x10, arg4)
                
                arg5 = *(rax_42 + 0x10)
                void* rbx_3 = *(arg1 + 0x110)
                float var_1f8[0x4] = *rax_42
                float var_1e8_1[0x4] = arg5
                float var_1d8_1[0x4] = *(rax_42 + 0x20)
                float var_1c8_1[0x4] = *(rax_42 + 0x30)
                uint32_t var_f8[0x4][0x4]
                uint32_t (* rax_43)[0x4] = sub_140631b10(&var_1f8, &var_f8)
                float zmm2_2[0x4] = *(rbx_3 + 0xc0)
                float zmm4_2[0x4] = *(rbx_3 + 0xd0)
                float zmm5_2[0x4] = *(rbx_3 + 0xe0)
                float zmm9_1[0x4] = *(rbx_3 + 0xf0)
                float zmm6_2[0x4] = rax_43[1]
                uint32_t zmm7_2[0x4] = *rax_43
                float zmm8_2[0x4] = rax_43[2]
                float zmm10_1[0x4] = rax_43[3]
                float temp0_73[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0x55)
                float temp0_74[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0)
                float temp0_75[0x4] = _mm_shuffle_ps(zmm2_2, zmm2_2, 0xaa)
                float temp0_77[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm2_2, zmm2_2, 0xff), zmm10_1)
                float temp0_78[0x4] = _mm_mul_ps(temp0_74, zmm7_2)
                float temp0_79[0x4] = _mm_mul_ps(temp0_75, zmm8_2)
                float temp0_81[0x4] = _mm_add_ps(_mm_mul_ps(temp0_73, zmm6_2), temp0_78)
                float temp0_83[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0x55), zmm6_2)
                float temp0_84[0x4] = _mm_add_ps(temp0_81, temp0_79)
                float temp0_86[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0xaa), zmm8_2)
                float temp0_87[0x4] = _mm_add_ps(temp0_84, temp0_77)
                float temp0_89[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm4_2, zmm4_2, 0), zmm7_2)
                float temp0_90[0x4] = _mm_shuffle_ps(zmm4_2, zmm4_2, 0xff)
                float var_1b8[0x4] = temp0_87
                float temp0_91[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0x55)
                float temp0_92[0x4] = _mm_add_ps(temp0_89, temp0_83)
                float temp0_93[0x4] = _mm_mul_ps(temp0_91, zmm6_2)
                float temp0_94[0x4] = _mm_mul_ps(temp0_90, zmm10_1)
                float temp0_95[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0)
                float temp0_96[0x4] = _mm_add_ps(temp0_92, temp0_86)
                float temp0_97[0x4] = _mm_mul_ps(temp0_95, zmm7_2)
                float temp0_99[0x4] = _mm_mul_ps(_mm_shuffle_ps(zmm5_2, zmm5_2, 0xaa), zmm8_2)
                float temp0_100[0x4] = _mm_add_ps(temp0_96, temp0_94)
                float temp0_101[0x4] = _mm_shuffle_ps(zmm5_2, zmm5_2, 0xff)
                float temp0_102[0x4] = _mm_add_ps(temp0_93, temp0_97)
                float temp0_103[0x4] = _mm_mul_ps(temp0_101, zmm10_1)
                float temp0_104[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0)
                float var_1a8_1[0x4] = temp0_100
                float temp0_105[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0x55)
                float temp0_106[0x4] = _mm_add_ps(temp0_102, temp0_99)
                float temp0_107[0x4] = _mm_mul_ps(temp0_105, zmm6_2)
                float temp0_108[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xaa)
                float temp0_109[0x4] = _mm_mul_ps(temp0_104, zmm7_2)
                float temp0_110[0x4] = _mm_mul_ps(temp0_108, zmm8_2)
                float temp0_111[0x4] = _mm_add_ps(temp0_106, temp0_103)
                float temp0_112[0x4] = _mm_shuffle_ps(zmm9_1, zmm9_1, 0xff)
                float temp0_113[0x4] = _mm_add_ps(temp0_107, temp0_109)
                float temp0_114[0x4] = _mm_mul_ps(temp0_112, zmm10_1)
                float var_198_1[0x4] = temp0_111
                float var_188_1[0x4] = _mm_add_ps(_mm_add_ps(temp0_113, temp0_110), temp0_114)
                int64_t* rdx_26
                void* r8_18
                
                if (arg7 == 0)
                    rdx_26 = nullptr
                    r8_18 = nullptr
                else
                    int32_t* rcx_58
                    
                    if (*(rbx_3 + 0x78) == *(rbx_3 + 0xa4))
                    label_142343521:
                        rcx_58 = nullptr
                    else
                        void* r8_16 = rbx_3 + 0xa8
                        void* rdx_25 = *(r8_16 + 8)
                        int64_t r9_10 = sx.q(r15_9[8].w)
                        
                        if (rdx_25 != 0)
                            r8_16 = rdx_25
                        
                        int32_t rax_45 = *(r8_16 + (((sx.q(*(rbx_3 + 0xb8)) - 1) & r9_10) << 2))
                        
                        if (rax_45 == 0xffffffff)
                        label_142343521_1:
                            rcx_58 = nullptr
                        else
                            while (true)
                                rcx_58 = sx.q(rax_45) * 0xa0 + *(rbx_3 + 0x70)
                                
                                if (*rcx_58 == r9_10.d)
                                    break
                                
                                rax_45 = rcx_58[0x24]
                                
                                if (rax_45 == 0xffffffff)
                                    goto label_142343521_2
                            
                            if (rax_45 == 0xffffffff)
                            label_142343521_2:
                                rcx_58 = nullptr
                    
                    rdx_26 = &rcx_58[4]
                    r8_18 = r14 + 0x1c0
                    
                    if (rcx_58 == 0)
                        rdx_26 = nullptr
                
                float zmm0_3[0x4] = *(rbx_3 + 0x100)
                void* rcx_59 = &r13_1[2]
                i_3 = i_2
                rbx = arg3
                
                if (var_258 == 0)
                    rcx_59 = nullptr
                
                char var_290_2
                var_290_2.q = r8_18
                int32_t var_298_2
                var_298_2.q = rcx_59
                var_2a0_1.q = arg1
                result, r8_6, arg5 = sub_142063b30(arg2, rbx, rax_18, *(r13_1[0xe] + (rsi << 3)), 
                    zmm0_3, r15_9, var_2a0_1, var_298_2, var_290_2, rdx_26, &var_1b8, zmm0_3[0], 
                    arg6, i_3, arg1 + 0x58)
            
            if (arg_8.b != 0)
                r8_6.b = 1
                int64_t* var_200
                result, arg5 = sub_141980430(rbx, &var_200, r8_6.b)
                
                if (arg1 + 0x118 != result)
                    int64_t* rcx_62 = *(arg1 + 0x118)
                    *(arg1 + 0x118) = *result
                    *result = 0
                    
                    if (rcx_62 != 0)
                        result = zx.q(rcx_62[9].d)
                        rcx_62[9].d -= 1
                        
                        if (result.d == 1)
                            result, arg5 = sub_140a2f6e0(rcx_62)
                
                int64_t* rcx_63 = var_200
                
                if (rcx_63 != 0)
                    result = zx.q(rcx_63[9].d)
                    rcx_63[9].d -= 1
                    
                    if (result.d == 1)
                        result, arg5 = sub_140a2f6e0(rcx_63)
            
            i_1 = i_3 + 1
            rsi += 1
            i_2 = i_1
        while (i_1 s< *(r14 + 8))

return result
