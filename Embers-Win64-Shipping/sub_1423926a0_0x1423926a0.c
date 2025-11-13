// 函数: sub_1423926a0
// 地址: 0x1423926a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
char result = EnterCriticalSection(arg1 + 0x580)

if (arg2 != 0)
    result = *(arg2 + 0x208)
    
    if ((result & 0x18) != 0)
        int64_t rbp_1 = 0
        int64_t var_50_1 = 0
        int32_t var_48_1 = 0
        int32_t var_44_1 = 0xc
        void var_b0
        
        if ((result & 8) != 0)
            void* rax_2 = sub_141ee26c0(arg2)
            int32_t r8_1 = data_143e1d9b4
            int64_t r9_1 = data_143e1d9a0
            void* const rdx_3
            
            if (rax_2 != 0)
                int32_t rax_3 = *(rax_2 + 0xc)
                
                if (rax_3 s>= r8_1)
                    rdx_3 = nullptr
                else
                    int16_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(rax_3)
                    uint32_t rdx_1 = zx.d(temp2_1)
                    int32_t rax_5 = temp3_1 + rdx_1
                    rdx_3 =
                        *(r9_1 + (sx.q(rax_5 s>> 0x10) << 3)) + sx.q(zx.d(rax_5.w) - rdx_1) * 0x18
            
            if (rax_2 != 0
                    && (((*(rdx_3 + 8) u>> 0x1d).b & 1) != 0 || (*(rax_2 + 8) & 0x18000) != 0))
                sub_142395890(arg1, rax_2)
            else
                int32_t rax_12 = *(arg2 + 0xc)
                void* const rdx_8
                
                if (rax_12 s>= r8_1)
                    rdx_8 = nullptr
                else
                    int16_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rax_12)
                    uint32_t rdx_6 = zx.d(temp0_1)
                    int32_t rax_14 = temp1_1 + rdx_6
                    rdx_8 =
                        *(r9_1 + (sx.q(rax_14 s>> 0x10) << 3)) + sx.q(zx.d(rax_14.w) - rdx_6) * 0x18
                
                if (((*(rdx_8 + 8) u>> 0x1d).b & 1) != 0 || (*(arg2 + 8) & 0x18000) != 0)
                    int64_t** r14_1 = *(arg1 + 0x340)
                    uint64_t r12_2 = sx.q(*(arg1 + 0x348)) << 3 u>> 3
                    
                    if (r14_1 u> &r14_1[sx.q(*(arg1 + 0x348))])
                        r12_2 = 0
                    
                    if (r12_2 != 0)
                        do
                            int64_t* rdi_1 = *r14_1
                            
                            if (rdi_1 != 0 && (rax_2 == 0 || *rdi_1 == rax_2))
                                void* var_b8 = arg2
                                sub_14239a450(&rdi_1[4])
                                void* rcx_10 = rdi_1[3]
                                
                                if (rdi_1[6] == 0)
                                    sub_1423b40c0(rcx_10, arg2, &var_b0)
                                else
                                    sub_1423b4300(rcx_10, arg2)
                                
                                sub_140838b90(&rdi_1[9], &var_b8, 1)
                                sub_140838b90(&rdi_1[0xb], &var_b8, 1)
                            
                            r14_1 = &r14_1[1]
                            rbp_1 += 1
                        while (rbp_1 != r12_2)
                    
                    *(arg2 + 0x208) &= 0xf7
        
        sub_142395410(arg1 + 0x210, arg2, &var_b0)
        result = sub_142398030(arg1, &var_b0)
        
        if (var_50_1 != 0)
            result = sub_140a74f90(var_50_1)

if (arg1 != -0x580)
    result = LeaveCriticalSection(arg1 + 0x580)

__security_check_cookie(rax_1 ^ &var_d8)
return result
