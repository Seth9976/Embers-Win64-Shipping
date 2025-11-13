// 函数: sub_142189670
// 地址: 0x142189670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = arg1[0x15]

if (rax == 0)
    rax = sub_141ee69e0(arg1)

void var_88
sub_142076cb0(&var_88, rax, 0, 0, *(arg1 + 0x431) u>> 7)
int64_t i_3 = sx.q(arg1[0xc1].d)
uint64_t result = 0
int32_t rdx_1

if (i_3.d s> 0)
    int64_t i_2 = i_3
    rdx_1 = 0
    int64_t* rax_1 = arg1[0xc0]
    int64_t i
    
    do
        void* rcx_2 = *rax_1
        
        if (rcx_2 != 0 && *(rcx_2 + 0x118) s> 0)
            rdx_1 += 1
        
        rax_1 = &rax_1[1]
        i = i_2
        i_2 -= 1
    while (i != 1)

if (i_3.d s<= 0 || (*(arg1 + 0x432) & 0x20) != 0 || rdx_1 != 0 || *(arg1 + 0x43f) != 0)
    uint64_t result_2 = j_sub_140a82f30(0x88)
    uint64_t result_1 = result_2
    uint64_t result_3 = result_2
    
    if (result_2 == 0)
        result_3 = 0
        result_1 = 0
    else
        *(result_2 + 0x68) = 0
        *(result_2 + 0x70) = 0
        *(result_2 + 0x74) = 0xc
    
    void* rax_2 = arg1[0x81]
    
    if (rax_2 != 0)
        float zmm5_1[0x4] = *(arg1 + 0x1c0)
        float zmm0_1[0x4] = *(rax_2 + 0xc8)
        float temp0_1[0x4] = _mm_unpacklo_ps(*(rax_2 + 0xc4), 0)
        float temp0_2[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xd2)
        float temp0_5[0x4] = __mulps_xmmps_memps(
            _mm_unpacklo_ps(_mm_unpacklo_ps(*(rax_2 + 0xc0), zmm0_1[0].q), temp0_1[0].q), 
            *(arg1 + 0x1e0))
        float temp0_6[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xc9)
        float temp0_7[0x4] = _mm_shuffle_ps(zmm5_1, zmm5_1, 0xff)
        float temp0_9[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xc9), temp0_2)
        float temp0_12[0x4] =
            _mm_sub_ps(_mm_mul_ps(_mm_shuffle_ps(temp0_5, temp0_5, 0xd2), temp0_6), temp0_9)
        float temp0_13[0x4] = _mm_add_ps(temp0_12, temp0_12)
        float temp0_14[0x4] = _mm_mul_ps(temp0_7, temp0_13)
        float temp0_16[0x4] = _mm_mul_ps(_mm_shuffle_ps(temp0_13, temp0_13, 0xc9), temp0_2)
        float temp0_17[0x4] = _mm_shuffle_ps(temp0_13, temp0_13, 0xd2)
        float temp0_18[0x4] = _mm_add_ps(temp0_14, temp0_5)
        float temp0_22[0x4] = __addps_xmmps_memps(
            _mm_add_ps(_mm_sub_ps(_mm_mul_ps(temp0_17, temp0_6), temp0_16), temp0_18), 
            *(arg1 + 0x1d0))
        float var_78_1[0x4] = temp0_22
        float var_b0_1 = _mm_shuffle_ps(temp0_22, temp0_22, 0xaa)[0]
        float temp0_25[0x4] =
            _mm_unpacklo_ps(temp0_22, _mm_shuffle_ps(temp0_22, temp0_22, 0x55)[0].q)
        *(result_3 + 0x78) = temp0_25.q
        *(result_3 + 0x80) = var_b0_1
        int64_t var_b8_1 = temp0_25.q
        *(result_3 + 0x84) = *(arg1[0x81] + 0x64)
    
    char rax_5 = *(arg1 + 0x43f)
    
    if (rax_5 != 2)
        int64_t* rdi_3 = nullptr
        
        if (rax_5 == 1)
            void* rcx_14 = arg1[0xca]
            
            if (rcx_14 != 0)
                int64_t rax_14 = 0
                
                if (0 == *(rcx_14 + 8))
                    *(rcx_14 + 8) = 0
                else
                    rax_14 = *(rcx_14 + 8)
                
                if (((rax_14 u>> 0x1a).b & 1) == 0)
                    float zmm0_2 = sub_14218eae0(&data_143a2edd8)
                    int64_t performanceCount
                    QueryPerformanceCounter(&performanceCount)
                    
                    while (*(arg1 + 0x434) != 0)
                        zmm0_2 = sub_140b732d0((zx.o(0)).d)
                    
                    int64_t performanceCount_1
                    QueryPerformanceCounter(&performanceCount_1)
                    sub_14218e220(arg1, zmm0_2)
            
            int64_t rax_18 = sx.q(arg1[0x9d].d)
            void* rbx_3
            
            if (rax_18.d s<= 0)
            label_142189a53:
                rbx_3 = nullptr
            else
                int64_t* rcx_18 = arg1[0x9c]
                int64_t rdx_6 = 0
                
                while (true)
                    rbx_3 = *rcx_18
                    
                    if (rbx_3 != 0 && *(rbx_3 + 0x28) == arg1[0x9e].d)
                        break
                    
                    rdx_6 += 1
                    rcx_18 = &rcx_18[1]
                    
                    if (rdx_6 s>= rax_18)
                        goto label_142189a53
            
            if (rbx_3 == 0)
                sub_140d19010(arg1, 
                    NewObject with empty name can't be used to create default subobjects (inside of "
                "UObject derived class constructor) as it produces incon")
                int64_t var_c8_1 = 0
                void* rax_21 = sub_140d2dfc0(sub_14255be20(), arg1, 0, 0, 0, 0, 0, 0, 0)
                rbx_3 = rax_21
                *(rax_21 + 0x28) = arg1[0x9e].d
                int64_t r15_2 = sx.q(arg1[0x9d].d)
                int32_t rcx_22 = (r15_2 + 1).d
                arg1[0x9d].d = rcx_22
                
                if (rcx_22 s> *(arg1 + 0x4ec))
                    sub_1405a4d70(&arg1[0x9c])
                
                *(arg1[0x9c] + (r15_2 << 3)) = rbx_3
                sub_140d25500(arg1)
            
            int64_t rdi_4 = sx.q(*(rbx_3 + 0x38))
            int64_t r15_3 = sx.q(*(rbx_3 + 0x38))
            int32_t rax_23 = (rdi_4 + 1).d
            *(rbx_3 + 0x38) = rax_23
            
            if (rax_23 s> *(rbx_3 + 0x3c))
                sub_1405a4f90(rbx_3 + 0x30)
            
            int64_t rcx_26 = *(rbx_3 + 0x30)
            int64_t rax_25 = rdi_4 << 4
            int64_t* rax_26 = rax_25 + rcx_26
            
            if (rax_25 != neg.q(rcx_26))
                *rax_26 = 0
                rax_26[1] = 0
                rcx_26 = *(rbx_3 + 0x30)
            
            rdi_3 = (r15_3 << 4) + rcx_26
            sub_140d25500(arg1)
        
        if ((*(arg1 + 0x432) & 0x10) == 0)
            int32_t rax_27 = *(result_3 + 0x74)
            *(result_3 + 0x70) = 0
            
            if (rax_27 s< 0 && rax_27 != 0)
                sub_140809940(result_3 + 8, 0)
            
            int32_t rax_28 = arg1[0xc1].d
            
            if (rax_28 s> *(result_3 + 0x74))
                sub_140809940(result_3 + 8, rax_28)
                rax_28 = arg1[0xc1].d
            
            int32_t r13_2 = 0
            int32_t i_1 = 0
            
            if (rax_28 s> 0)
                int64_t* r15_4 = nullptr
                int64_t* var_d8_2 = nullptr
                
                do
                    int32_t rax_29 = r13_2 + 1
                    
                    if (arg1[0x7d] == 0)
                        rax_29 = r13_2
                    
                    r13_2 = rax_29
                    int64_t* r15_5 = *(r15_4 + arg1[0xc0])
                    
                    if (r15_5 != 0)
                        void* rax_32 = (*(*r15_5 + 0x120))(r15_5, 0, zx.q(arg2))
                        
                        if (rax_32 != 0)
                            *(rax_32 + 0xc) |= 2
                            int32_t rax_33 = *(result_3 + 0x70)
                            *(result_3 + 0x70) = rax_33 + 1
                            
                            if (rax_33 + 1 s> *(result_3 + 0x74))
                                sub_140809460(result_3 + 8, rax_33)
                            
                            void* rax_34 = *(result_3 + 0x68)
                            void* rdx_12 = result_3 + 8
                            
                            if (rax_34 != 0)
                                rdx_12 = rax_34
                            
                            *(rdx_12 + (sx.q(rax_33) << 3)) = rax_32
                            *(rax_32 + 0x10) = i_1
                            
                            if (*(arg1 + 0x43f) == 1)
                                void* rax_37 = (*(*r15_5 + 0x128))(r15_5)
                                int64_t r14_3 = sx.q(rdi_3[1].d)
                                int32_t rcx_34 = (r14_3 + 1).d
                                rdi_3[1].d = rcx_34
                                
                                if (rcx_34 s> *(rdi_3 + 0xc))
                                    sub_1405a4f90(rdi_3)
                                
                                int64_t rdx_14 = *rdi_3
                                int64_t rcx_37 = r14_3 * 2
                                int64_t* rax_38 = rdx_14 + (rcx_37 << 3)
                                
                                if (rax_38 != 0)
                                    *rax_38 = 0
                                    rax_38[1] = 0
                                    rdx_14 = *rdi_3
                                
                                *(rdx_14 + (rcx_37 << 3)) = *(rax_37 + 8)
                                *(rdx_14 + (rcx_37 << 3) + 4) = i_1
                                *(rdx_14 + (rcx_37 << 3) + 8) = rax_37
                    
                    i_1 += 1
                    r15_4 = &var_d8_2[1]
                    var_d8_2 = r15_4
                while (i_1 s< arg1[0xc1].d)
            
            void* rbx_5 = arg1[0x7d]
            
            if (rbx_5 != 0 && *(rbx_5 + 0x158) != r13_2)
                int32_t var_d0_1 = r13_2
                
                if (sub_140a80f40() == 0)
                    uint32_t rax_44
                    
                    if (data_143f138f4 == 0 && data_143de5480 != 0)
                        rax_44.b = GetCurrentThreadId() == data_143de5470
                    
                    if (data_143f138f4 != 0 || (data_143de5480 != 0 && rax_44.b == 0))
                        void var_68
                        int64_t* rax_45 = sub_14218aec0(&var_68, nullptr, 0xff)
                        *(*rax_45 + 0x10) = rbx_5.o
                        void* rcx_44 = *rax_45
                        int64_t* rdi_8 = *(rcx_44 + 0x28)
                        
                        if (rdi_8 != 0)
                            rdi_8[9].d += 1
                        
                        sub_1405e48c0(rcx_44, rax_45[1], rax_45[2].d, 1)
                        
                        if (rdi_8 != 0)
                            rdi_8[9].d -= 1
                            
                            if (rdi_8[9].d == 1)
                                sub_140a2f6e0(rdi_8)
                    else
                        float var_98[0x4] = rbx_5.o
                        sub_142184650(&var_98)
                else
                    int32_t rax_41 = *(rbx_5 + 0x15c)
                    *(rbx_5 + 0x158) = 0
                    
                    if (rax_41 s< 0 && rax_41 != 0)
                        sub_1405dadb0(rbx_5 + 0x150, 0)
                    
                    int64_t rdi_7 = sx.q(*(rbx_5 + 0x158))
                    int32_t rax_42 = rdi_7.d + r13_2
                    *(rbx_5 + 0x158) = rax_42
                    
                    if (rax_42 s> *(rbx_5 + 0x15c))
                        sub_1405a4cf0(rbx_5 + 0x150)
                    
                    memset(*(rbx_5 + 0x150) + (rdi_7 << 2), 0, sx.q(r13_2) << 2)
    else
        int64_t rax_6 = sx.q(arg1[0x9d].d)
        
        if (rax_6.d s> 0)
            int64_t* rdx_2 = arg1[0x9c]
            int64_t r8_1 = 0
            
            do
                void* rcx_4 = *rdx_2
                
                if (rcx_4 != 0 && *(rcx_4 + 0x28) == arg1[0x9e].d)
                    int64_t rax_8 = sx.q(*(arg1 + 0x4f4))
                    
                    if (rax_8.d s>= 0 && rax_8.d s< *(rcx_4 + 0x38))
                        int64_t r13_1 = *(rcx_4 + 0x30)
                        int64_t r12_2 = rax_8 * 2
                        *(result_3 + 0x70) = 0
                        
                        if (*(result_3 + 0x74) s<= 0xffffffff)
                            sub_140809940(result_3 + 8, 0)
                        
                        int32_t rax_9 = *(r13_1 + (r12_2 << 3) + 8)
                        
                        if (rax_9 s> *(result_3 + 0x74))
                            sub_140809940(result_3 + 8, rax_9)
                            rax_9 = *(r13_1 + (r12_2 << 3) + 8)
                        
                        if (rax_9 s> 0)
                            int64_t r15_1 = 0
                            
                            do
                                int64_t rax_10 = *(r13_1 + (r12_2 << 3))
                                void* rcx_7 = *(r15_1 + rax_10 + 8)
                                int64_t rcx_8 = sx.q(*(r15_1 + rax_10 + 4))
                                
                                if (rcx_8.d s>= 0 && rcx_8.d s< arg1[0xc1].d)
                                    int64_t rbx_1 = arg1[0xc0]
                                    char rax_11 = sub_141ee7700(arg1)
                                    int64_t* rax_12 =
                                        sub_142189e10(*(rbx_1 + (rcx_8 << 3)), rcx_7, rax_11, arg2)
                                    
                                    if (rax_12 != 0)
                                        int64_t rbx_2 = sx.q(*(result_3 + 0x70))
                                        int32_t rcx_11 = (rbx_2 + 1).d
                                        *(result_3 + 0x70) = rcx_11
                                        
                                        if (rcx_11 s> *(result_3 + 0x74))
                                            sub_140809460(result_3 + 8, rbx_2.d)
                                        
                                        void* rax_13 = *(result_3 + 0x68)
                                        void* rcx_13 = result_3 + 8
                                        
                                        if (rax_13 != 0)
                                            rcx_13 = rax_13
                                        
                                        *(rcx_13 + (rbx_2 << 3)) = rax_12
                                        rax_12[2].d = result.d
                                
                                result = zx.q(result.d + 1)
                                r15_1 += 0x10
                            while (result.d s< *(r13_1 + (r12_2 << 3) + 8))
                    
                    break
                
                r8_1 += 1
                rdx_2 = &rdx_2[1]
            while (r8_1 s< rax_6)
    
    result = result_1

sub_142079870(&var_88)
return result
