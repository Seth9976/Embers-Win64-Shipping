// 函数: sub_140d1a6a0
// 地址: 0x140d1a6a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rdi = arg1
int32_t result = EnterCriticalSection(&arg1[0xc])

if (data_143de5432 == 0)
    int64_t arg_10 = 0
    sub_140d27770(0, 1)
    result = sub_140bd8a10()
    
    if (data_14399fa4c != 0)
        int32_t* var_68
        result = sub_1409aa070(&var_68, sub_140d41340(), 0, 0, 0)
        int64_t* var_58
        int64_t* r14_1 = var_58
        
        if (r14_1 != 0)
            int32_t result_2
            int32_t result_1 = result_2
            int32_t* rbp_1 = var_68
            
            while (true)
                int64_t* rsi_1
                
                if (r14_1 == 0)
                    rsi_1 = nullptr
                else
                    rsi_1 = *r14_1
                
                char rax_2 = (*(*rsi_1 + 0x1a0))(rsi_1)
                int32_t r8_1 = *(rsi_1 + 0xc)
                
                if (rax_2 == 0)
                    int32_t r9_1 = data_143e1d9b4
                    int64_t r10_1 = data_143e1d9a0
                    void* const rax_16
                    
                    if (r8_1 s>= r9_1)
                        rax_16 = nullptr
                    else
                        int16_t temp0_1
                        int32_t temp1_1
                        temp0_1:temp1_1 = sx.q(r8_1)
                        uint32_t rdx_7 = zx.d(temp0_1)
                        int32_t rax_12 = temp1_1 + rdx_7
                        rax_16 = *(r10_1 + (sx.q(rax_12 s>> 0x10) << 3))
                            + sx.q(zx.d(rax_12.w) - rdx_7) * 0x18
                    
                    if (((*(rax_16 + 8) u>> 0x1e).b & 1) != 0)
                        void* const rax_23
                        
                        if (r8_1 s>= r9_1)
                            rax_23 = nullptr
                        else
                            int16_t temp4_1
                            int32_t temp5_1
                            temp4_1:temp5_1 = sx.q(r8_1)
                            uint32_t rdx_10 = zx.d(temp4_1)
                            int32_t rax_19 = temp5_1 + rdx_10
                            rax_23 = *(r10_1 + (sx.q(rax_19 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_19.w) - rdx_10) * 0x18
                        
                        *(rax_23 + 8) &= 0xbfffffff
                else if (r8_1 s>= data_143e1d9b4)
                    *8 |= 0x40000000
                else
                    int16_t temp2_1
                    int32_t temp3_1
                    temp2_1:temp3_1 = sx.q(r8_1)
                    uint32_t rdx_4 = zx.d(temp2_1)
                    int32_t rax_5 = temp3_1 + rdx_4
                    int64_t r8_2 = *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3))
                    int64_t rcx_6 = sx.q(zx.d(rax_5.w) - rdx_4) * 3
                    *(r8_2 + (rcx_6 << 3) + 8) |= 0x40000000
                
                while (true)
                    int32_t r8_3 = rbp_1[9]
                    result = result_1 + 1
                    result_1 = result
                    
                    if (result s>= r8_3)
                    label_140d1a898:
                        rdi = arg1
                        goto label_140d1a8c7
                    
                    void* rsi_2
                    
                    while (true)
                        int16_t temp6_1
                        int32_t temp7_1
                        temp6_1:temp7_1 = sx.q(result_1)
                        uint32_t rdx_13 = zx.d(temp6_1)
                        int32_t rax_26 = temp7_1 + rdx_13
                        int64_t rdx_14 = *(*(rbp_1 + 0x10) + (sx.q(rax_26 s>> 0x10) << 3))
                        int64_t rcx_20 = sx.q(zx.d(rax_26.w) - rdx_13) * 3
                        rsi_2 = *(rdx_14 + (rcx_20 << 3))
                        r14_1 = rdx_14 + (rcx_20 << 3)
                        
                        if (rsi_2 != 0)
                            break
                        
                        result = result_1 + 1
                        result_1 = result
                        
                        if (result s>= r8_3)
                            goto label_140d1a898
                    
                    int32_t var_48
                    
                    if ((*(rsi_2 + 8) & var_48) == 0)
                        void* var_50
                        
                        if (var_50 != sub_140d41340())
                            void* rax_31 = *(rsi_2 + 0x10)
                            int64_t rcx_24 = sx.q(*(var_50 + 0x38))
                            
                            if (rcx_24.d s> *(rax_31 + 0x38))
                                continue
                            else if (*(*(rax_31 + 0x30) + (rcx_24 << 3)) != var_50 + 0x30)
                                continue
                        
                        int32_t rax_33 = *(rsi_2 + 0xc)
                        void* const rax_37
                        
                        if (rax_33 s>= data_143e1d9b4)
                            rax_37 = nullptr
                        else
                            uint32_t rdx_16 = zx.d(rax_33.w)
                            
                            if (rax_33 s< 0)
                                rax_33 += 0xffff
                                rdx_16 -= 0x10000
                            
                            rax_37 = *(data_143e1d9a0 + (sx.q(rax_33 s>> 0x10) << 3))
                                + sx.q(rdx_16) * 0x18
                        
                        int32_t var_44
                        
                        if ((*(rax_37 + 8) & var_44) == 0)
                            break

label_140d1a8c7:
int32_t rcx_22 = rdi[1] + 1
rdi[3].b = 0

if (*rdi s>= rcx_22)
    rcx_22 = *rdi

*rdi = rcx_22
data_14399fa4c = 0

if (arg1 == -0x30)
    return result

return LeaveCriticalSection(&arg1[0xc])
