// 函数: sub_1414fed20
// 地址: 0x1414fed20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_198
uint64_t result = __security_cookie ^ &var_198
uint64_t result_1 = result
void* r13 = arg1

if (*(arg1 + 0x69d) != 0)
    wchar16 const* const var_b0 = u"PageTable_0"
    wchar16 const* const var_a8_1 = u"PageTable_1"
    result = zx.q(zx.d(*(arg1 + 0x1a)) + 3)
    int32_t i_1 = 0
    int32_t i = 0
    
    if ((result.d & 0xfffffffc) u> 0)
        do
            int32_t rcx = *(r13 + 0x690)
            uint64_t i_2 = zx.q(i)
            char var_160_1 = 0
            wchar16 const* const var_58_1 = u"UnknownTexture2D"
            char var_168_1 = 1
            void* r12_2 = r13 + 0x5d8 + (zx.q(i) << 4)
            char var_170_1 = 1
            int32_t var_88_1 = data_143f02318
            int16_t rax_5 = *(r13 + 0x694)
            uint32_t var_6c_1 = zx.d(*(i_2 + r13 + 0x5f8))
            int64_t rax_7 = (&var_b0)[i_2]
            int16_t var_60_1 = 0
            uint128_t var_98 = data_143f02308
            int32_t var_7c_1 = 0
            int32_t var_78_1 = 1
            int16_t var_74_1 = 0
            int16_t var_70_1 = 1
            int32_t var_68_1 = 0
            int32_t var_64_1 = 9
            int16_t var_50_1 = 0
            char var_4e_1 = 0
            int64_t* var_150 = nullptr
            sub_1419a0ce0(&data_1439c9260, arg2, &var_98, &var_150, rax_7, var_170_1, var_168_1, 
                var_160_1)
            arg3, arg4 = sub_14198ac20(&data_143f02b98, *(r12_2 + 8), var_150[2], arg4, arg3)
            int64_t* rcx_1 = *r12_2
            
            if (rcx_1 != 0)
                void* rax_9 = (*(*rcx_1 + 0x10))(rcx_1)
                int32_t rcx_2 = data_143dbb190
                uint128_t zmm0 = zx.o(data_143dbb188.q)
                int32_t var_140_1 = rcx_2
                int32_t var_134_1 = rcx_2
                uint64_t var_148_1 = zmm0.q
                int32_t var_110_1 = 1
                uint64_t var_13c_1 = zmm0.q
                uint64_t var_130_1 = zmm0.q
                int64_t var_124_1 = 0
                int64_t var_11c_1 = 1
                int32_t var_114_1 = 0
                int32_t rcx_3 = *(rax_9 + 0x14)
                
                if (rcx s<= rcx_3)
                    rcx_3 = rcx
                
                var_148_1.d = rcx_3
                int32_t rcx_4 = *(rax_9 + 0x18)
                int32_t var_140_2 = 1
                
                if (rcx s<= rcx_4)
                    rcx_4 = rcx
                
                var_148_1:4.d = rcx_4
                int16_t rcx_5 = *(rax_9 + 0x26)
                
                if (rax_5 u<= rcx_5)
                    rcx_5 = rax_5
                
                uint32_t rdx_2 = zx.d(rcx_5)
                int64_t r14_1 = var_150[1]
                int64_t* r15_1 = *(*r12_2 + 0x10)
                
                if (data_143f0f19d == 0)
                    int32_t var_d0_1 = 1
                    int32_t r14_2 = 0
                    uint128_t var_108_1 = var_148_1.o
                    uint128_t var_f8_1 = var_13c_1:4.o
                    uint64_t var_d8_1 = var_11c_1
                    uint128_t var_e8_1 = rcx_2.o
                    
                    if (0 u< rdx_2.w)
                        do
                            void*** rbx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                            void* rax_30 = &rbx_8[0xc]
                            
                            if (rax_30 u> *(arg2 + 0x38))
                                sub_140b0e3d0(arg2 + 0x30, 0x68)
                                rbx_8 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                                rax_30 = &rbx_8[0xc]
                            
                            *(arg2 + 0x30) = rax_30
                            void**** rax_31 = *(arg2 + 8)
                            *(arg2 + 0x14) += 1
                            *rax_31 = rbx_8
                            *(arg2 + 8) = &rbx_8[1]
                            rbx_8[1] = 0
                            *rbx_8 = &data_142da7788
                            *(rbx_8 + 0x10) = var_108_1
                            *(rbx_8 + 0x20) = var_f8_1
                            *(rbx_8 + 0x30) = var_e8_1
                            rbx_8[8] = var_d8_1
                            rbx_8[9].d = var_d0_1
                            rbx_8[0xa] = r15_1
                            rbx_8[0xb] = r14_1
                            
                            if ((*(*r15_1 + 8))(r15_1) == 0)
                                int64_t* rcx_17 = rbx_8[0xa]
                                
                                if ((*(*rcx_17 + 0x10))(rcx_17) == 0)
                                    int64_t* rcx_18 = rbx_8[0xa]
                                    
                                    if ((*(*rcx_18 + 0x18))(rcx_18) == 0)
                                        int64_t* rcx_19 = rbx_8[0xa]
                                        (*(*rcx_19 + 0x20))(rcx_19)
                            
                            int64_t* rcx_20 = rbx_8[0xb]
                            
                            if ((*(*rcx_20 + 8))(rcx_20) == 0)
                                int64_t* rcx_21 = rbx_8[0xb]
                                
                                if ((*(*rcx_21 + 0x10))(rcx_21) == 0)
                                    int64_t* rcx_22 = rbx_8[0xb]
                                    
                                    if ((*(*rcx_22 + 0x18))(rcx_22) == 0)
                                        int64_t* rcx_23 = rbx_8[0xb]
                                        (*(*rcx_23 + 0x20))(rcx_23)
                            
                            var_d8_1.d += 1
                            var_d8_1:4.d += 1
                            int32_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(var_108_1.d)
                            int32_t rax_51 = (temp1_1 - temp0_1) s>> 1
                            
                            if (rax_51 s<= 1)
                                rax_51 = 1
                            
                            var_108_1.d = rax_51
                            int32_t temp2_1
                            int32_t temp3_1
                            temp2_1:temp3_1 = sx.q(var_108_1:4.d)
                            int32_t rax_55 = (temp3_1 - temp2_1) s>> 1
                            
                            if (rax_55 s<= 1)
                                rax_55 = 1
                            
                            r14_2 += 1
                            var_108_1:4.d = rax_55
                        while (r14_2 u< rdx_2)
                        
                        r13 = arg1
                        i = i_1
                else
                    void*** rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                    void* rax_12 = &rbx_3[0xc]
                    
                    if (rax_12 u> *(arg2 + 0x38))
                        sub_140b0e3d0(arg2 + 0x30, 0x68)
                        rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
                        rax_12 = &rbx_3[0xc]
                    
                    *(arg2 + 0x30) = rax_12
                    void**** rax_13 = *(arg2 + 8)
                    *(arg2 + 0x14) += 1
                    *rax_13 = rbx_3
                    *(arg2 + 8) = &rbx_3[1]
                    rbx_3[1] = 0
                    *rbx_3 = &data_142da7788
                    *(rbx_3 + 0x10) = var_148_1.o
                    *(rbx_3 + 0x20) = var_13c_1:4.o
                    *(rbx_3 + 0x30) = rcx_2.o
                    rbx_3[8] = var_11c_1
                    rbx_3[9].d = rdx_2
                    rbx_3[0xa] = r15_1
                    rbx_3[0xb] = r14_1
                    
                    if ((*(*r15_1 + 8))(r15_1) == 0)
                        int64_t* rcx_8 = rbx_3[0xa]
                        
                        if ((*(*rcx_8 + 0x10))(rcx_8) == 0)
                            int64_t* rcx_9 = rbx_3[0xa]
                            
                            if ((*(*rcx_9 + 0x18))(rcx_9) == 0)
                                int64_t* rcx_10 = rbx_3[0xa]
                                (*(*rcx_10 + 0x20))(rcx_10)
                    
                    int64_t* rcx_11 = rbx_3[0xb]
                    
                    if ((*(*rcx_11 + 8))(rcx_11) == 0)
                        int64_t* rcx_12 = rbx_3[0xb]
                        
                        if ((*(*rcx_12 + 0x10))(rcx_12) == 0)
                            int64_t* rcx_13 = rbx_3[0xb]
                            
                            if ((*(*rcx_13 + 0x18))(rcx_13) == 0)
                                int64_t* rcx_14 = rbx_3[0xb]
                                (*(*rcx_14 + 0x20))(rcx_14)
                    
                    i = i_1
                
                sub_1419a2440(&data_1439c9260, r12_2)
            
            int64_t* rcx_24 = var_150
            int64_t* rbx_11 = *r12_2
            *r12_2 = rcx_24
            
            if (rcx_24 != 0)
                (*(*rcx_24 + 0x30))()
                rcx_24 = var_150
            
            if (rbx_11 != 0)
                (*(*rbx_11 + 0x38))(rbx_11)
                rcx_24 = var_150
            
            if (rcx_24 != 0)
                (*(*rcx_24 + 0x38))(rcx_24)
            
            i += 1
            result = zx.q((zx.d(*(r13 + 0x1a)) + 3) u>> 2)
            i_1 = i
        while (i u< result.d)
    
    *(r13 + 0x69d) = 0

__security_check_cookie(result_1 ^ &var_198)
return result
