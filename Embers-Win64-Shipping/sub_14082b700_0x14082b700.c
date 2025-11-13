// 函数: sub_14082b700
// 地址: 0x14082b700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
void* result = sub_140823850(arg1)

if (*(arg1 + 0x220) != 0 && *(arg1 + 0x230) != 0 && *(arg1 + 0x238) != 0 && *(arg1 + 0x240) != 0)
    result = sub_1408797a0()
    
    if (result != 0)
        void* rdx_1 = *(arg1 + 0x240)
        void* r8_1 = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= *(rdx_1 + 0x38))
            void* result_1 = result
            result = *(rdx_1 + 0x30)
            
            if (*(result + (result_1 << 3)) == r8_1 && rdx_1 != 0)
                sub_140cd85e0(*(arg1 + 0x220))
                int64_t* rdx_2
                
                if (*(arg1 + 0x240) == 0)
                    rdx_2 = nullptr
                else
                    void* rax_2 = sub_1408797a0()
                    
                    if (rax_2 == 0)
                        rdx_2 = nullptr
                    else
                        rdx_2 = *(arg1 + 0x240)
                        int64_t rax_3 = sx.q(*(rax_2 + 0x38))
                        
                        if (rax_3.d s> rdx_2[7].d || *(rdx_2[6] + (rax_3 << 3)) != rax_2 + 0x30)
                            rdx_2 = nullptr
                
                sub_140cd85e0(rdx_2, rdx_2)
                int32_t rax_5 = sub_14087c470(*(arg1 + 0x230))
                int64_t* rcx_4 = *(arg1 + 0x238)
                *(arg1 + 0x250) = rax_5
                int32_t rax_6
                uint128_t zmm6_1
                rax_6, zmm6_1 = sub_14087c470(rcx_4)
                void* r15_1 = arg1 + 0x258
                int32_t rcx_6 = *(arg1 + 0x250) * rax_6
                *(arg1 + 0x254) = rax_6
                int64_t rbx_1 = sx.q(*(r15_1 + 8))
                
                if (rcx_6 s> rbx_1.d)
                    *(r15_1 + 8) = rcx_6
                    
                    if (rcx_6 s> *(r15_1 + 0xc))
                        sub_1405a4d70(r15_1)
                    
                    memset(*r15_1 + (rbx_1 << 3), 0, sx.q(rcx_6 - rbx_1.d) << 3)
                else if (rcx_6 s< rbx_1.d && rcx_6 != rbx_1.d)
                    *(r15_1 + 8) = rcx_6
                    sub_1405c53d0(r15_1)
                
                result = zx.q(*(arg1 + 0x250))
                
                if (result.d s> 0 && *(arg1 + 0x254) s> 0)
                    int32_t i = 0
                    int32_t i_1 = 0
                    
                    if (result.d s> 0)
                        uint128_t var_38_1 = zmm6_1
                        
                        do
                            int32_t r14_1 = *(arg1 + 0x254)
                            int32_t r12_1 = 0
                            
                            if (r14_1 s> 0)
                                _mm_cvtepi32_ps(zx.o(i))
                                int32_t var_80_1 = 0
                                
                                do
                                    int64_t var_c8 = *(arg1 + 0x18)
                                    int16_t* var_98
                                    sub_140b63b70(&var_c8, &var_98)
                                    int16_t* const r8_5 = &data_142d40450
                                    int32_t var_118_1 = r12_1
                                    int32_t var_90
                                    
                                    if (var_90 != 0)
                                        r8_5 = var_98
                                    
                                    int16_t* var_a8
                                    sub_140a2e390(&var_a8, u"%s[%d][%d]", r8_5)
                                    int16_t* const rdx_5 = &data_142d40450
                                    int32_t var_a0
                                    
                                    if (var_a0 != 0)
                                        rdx_5 = var_a8
                                    
                                    void var_78
                                    uint64_t rbx_2 = *sub_140b58260(&var_78, rdx_5, 1)
                                    uint32_t rcx_15
                                    rcx_15.b = (rbx_2 u>> 0x20).d == 0
                                    
                                    if ((rcx_15.b & sub_140b5b8a0(rbx_2.d, 0)) != 0)
                                        sub_140d19010(arg1, 
                                            NewObject with empty name can't be used to create default "
                                        "subobjects (inside of UObject derived class constructor) as "
                                        "it produces incon")
                                    
                                    void* rax_12 = sub_140d2dfc0(sub_142493230(), arg1, rbx_2, 
                                        0x40, 0, 0, 0, 0, 0)
                                    int16_t* rcx_18 = var_a8
                                    
                                    if (rcx_18 != 0)
                                        sub_140a74f90(rcx_18)
                                    
                                    int16_t* rcx_19 = var_98
                                    
                                    if (rcx_19 != 0)
                                        sub_140a74f90(rcx_19)
                                    
                                    *(*r15_1 + (sx.q(r14_1 * i + r12_1) << 3)) = rax_12
                                    void* const rdx_7
                                    void* r14_4
                                    
                                    if (*(arg1 + 0x240) == 0)
                                        r14_4 = nullptr
                                        rdx_7 = nullptr
                                    else
                                        void* rax_14 = sub_1408797a0()
                                        
                                        if (rax_14 == 0)
                                            r14_4 = nullptr
                                            rdx_7 = nullptr
                                        else
                                            rdx_7 = *(arg1 + 0x240)
                                            int64_t rax_15 = sx.q(*(rax_14 + 0x38))
                                            
                                            if (rax_15.d s> *(rdx_7 + 0x38)
                                                    || *(*(rdx_7 + 0x30) + (rax_15 << 3))
                                                    != rax_14 + 0x30)
                                                r14_4 = nullptr
                                                rdx_7 = nullptr
                                            else
                                                r14_4 = nullptr
                                    
                                    sub_141f248b0(rax_12, rdx_7, 0)
                                    *(rax_12 + 0x89) &= 0x7f
                                    sub_141f32b40(rax_12, *(arg1 + 0x130), &data_143f3f280, 0)
                                    void* rcx_24 = *(arg1 + 0x130)
                                    void* rax_17 = *(rcx_24 + 0xa8)
                                    
                                    if (rax_17 == 0)
                                        rax_17 = sub_141ee69e0(rcx_24)
                                    
                                    sub_141ef14c0(rax_12, rax_17, 0)
                                    int64_t* r15_2 = *(rax_12 + 0x1f8)
                                    int32_t var_e8 = 0x202
                                    float zmm6_2[0x4] = sub_141dbacd0(r15_2, rax_12, &var_e8, 0)
                                    zmm6_2[0] = zmm6_2[0] f* *(arg1 + 0x248)
                                    int32_t var_b0_1 = var_80_1
                                    int32_t var_118_2
                                    var_118_2.b = 0
                                    uint128_t zmm1_1
                                    zmm1_1.d = _mm_cvtepi32_ps(zx.o(r12_1)).d f* *(arg1 + 0x24c)
                                    int64_t var_b8 = (_mm_unpacklo_ps(zmm6_2, zmm1_1.q)).q
                                    sub_141dd6a40(r15_2, &var_b8, 0, nullptr, var_118_2.b)
                                    *(r15_2 + 0x32) |= 6
                                    sub_14087c5c0(r15_2, *(arg1 + 0x220))
                                    void* var_50_1 = nullptr
                                    int32_t var_44_1 = 4
                                    int32_t var_48_1 = 0
                                    void* rax_19 = sub_14086a680()
                                    
                                    if (rax_19 != 0)
                                        void* rax_20 = sub_142459c10()
                                        
                                        if (rax_20 != 0)
                                            int64_t rax_21 = sx.q(*(rax_20 + 0x38))
                                            
                                            if (rax_21.d s<= *(rax_19 + 0x38)
                                                    && *(*(rax_19 + 0x30) + (rax_21 << 3))
                                                    == rax_20 + 0x30)
                                                r14_4 = rax_19
                                    
                                    void var_70
                                    void* r8_9 = &var_70
                                    
                                    if (r14_4 != sub_142459c10())
                                        sub_140817de0(r15_2, rax_19, r8_9)
                                    else
                                        sub_140817bd0(r15_2, rax_19, r8_9)
                                    
                                    void* rcx_32 = var_50_1
                                    void* rbx_5 = &var_70
                                    
                                    if (rcx_32 != 0)
                                        rbx_5 = rcx_32
                                    
                                    int64_t r14_5 = 0
                                    int64_t r15_3 = sx.q(var_48_1) << 3
                                    result = rbx_5 + r15_3
                                    uint64_t r15_4 = r15_3 u>> 3
                                    
                                    if (rbx_5 u> result)
                                        r15_4 = 0
                                    
                                    if (r15_4 != 0)
                                        do
                                            int64_t* rcx_31 = *rbx_5
                                            int64_t rdx_15
                                            rdx_15.b = 1
                                            result, rdx_15 = (*(*rcx_31 + 0x268))(rcx_31, rdx_15)
                                            r14_5 += 1
                                            rbx_5 += 8
                                        while (r14_5 != r15_4)
                                        
                                        rcx_32 = var_50_1
                                    
                                    if (rcx_32 != 0)
                                        result = sub_140a74f90(rcx_32)
                                    
                                    r14_1 = *(arg1 + 0x254)
                                    r15_1 = arg1 + 0x258
                                    i = i_1
                                    r12_1 += 1
                                while (r12_1 s< r14_1)
                                
                                r15_1 = arg1 + 0x258
                            
                            i += 1
                            i_1 = i
                        while (i s< *(arg1 + 0x250))

__security_check_cookie(rax_1 ^ &var_138)
return result
