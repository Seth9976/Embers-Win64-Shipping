// 函数: sub_142449230
// 地址: 0x142449230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t result = __security_cookie ^ &var_b8
int64_t result_1 = result

if ((*(arg1 + 0x11e) & 4) != 0)
    void* rax_1 = sub_1425603e0()
    void* rbx_1 = rax_1
    
    if (rax_1 == 0)
        rbx_1 = nullptr
    else
        void* rax_2 = sub_1425603e0()
        
        if (rax_2 == 0)
            rbx_1 = nullptr
        else
            int64_t rax_3 = sx.q(*(rax_2 + 0x38))
            
            if (rax_3.d s> *(rbx_1 + 0x38) || *(*(rbx_1 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
                rbx_1 = nullptr
    
    int32_t var_98 = 5
    char var_40_1 = 0
    void* var_90
    sub_142442440(&var_90)
    sub_1405ab0f0(&var_90, arg1, rbx_1)
    char var_40_2 = 1
    sub_14242a940(&var_98)
    char i
    
    if (i == 0)
        void* var_68
        void* rdi_1 = var_68
        
        do
            void* rcx_4 = *(rdi_1 + 0x220)
            
            if (rcx_4 != 0)
                sub_142254c10(rcx_4)
            
            int32_t var_58
            int32_t r8_2 = var_58
            int32_t var_80
            int32_t rdx_3 = var_80
            void* r15_1 = var_90
            int32_t var_78
            int32_t rsi_2 = var_78 + 1
            
            if (rsi_2 s>= r8_2 + rdx_3)
            label_1424494dd:
                int64_t var_68_1 = 0
                char var_74 = 1
                break
            
            int64_t r14_1 = sx.q(rsi_2) << 3
            
            while (true)
                int64_t var_60
                void** var_88
                
                if (rsi_2 s>= rdx_3)
                    rdi_1 = *(var_60 + (sx.q(rsi_2 - rdx_3) << 3))
                else
                    rdi_1 = *(var_88 + r14_1)
                int32_t var_70 = var_70 + 1
                
                if (rdi_1 != 0)
                    void* rax_11 = sub_141dc9840(rdi_1)
                    
                    if (rax_11 != 0)
                        void* const rax_18
                        
                        if ((var_98.b & 1) != 0)
                            int32_t rax_12 = *(rdi_1 + 0xc)
                            
                            if (rax_12 s>= data_143e1d9b4)
                                rax_18 = nullptr
                            else
                                int16_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(rax_12)
                                uint32_t rdx_5 = zx.d(temp0_1)
                                int32_t rax_14 = temp1_1 + rdx_5
                                rax_18 = *(data_143e1d9a0 + (sx.q(rax_14 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_14.w) - rdx_5) * 0x18
                        
                        if ((var_98.b & 1) == 0 || ((*(rax_18 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_12 = var_98
                            
                            if (((rcx_12 u>> 1).b & 1) == 0)
                                goto label_1424493e1
                            
                            uint64_t rax_22 = sub_1405949a0()
                            
                            if (rax_22.b != 0)
                                rcx_12 = var_98
                            label_1424493e1:
                                
                                if (((rcx_12 u>> 2).b & 1) == 0)
                                label_142449489:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_11) == r15_1)
                                        if (rax_11 == *(r15_1 + 0x30))
                                            break
                                        
                                        void* rax_24 = sub_1425bd0d0()
                                        void* rdx_8 = *(rdi_1 + 0x10)
                                        int64_t rax_25 = sx.q(*(rax_24 + 0x38))
                                        
                                        if (rax_25.d s> *(rdx_8 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_8 + 0x30) + (rax_25 << 3)) != rax_24 + 0x30)
                                            break
                                else
                                    if ((*(rax_11 + 0x1f4) & 0x20) == 0
                                            || (*(rax_11 + 0x1f6) & 8) != 0)
                                        rax_22 = zx.q(*(rax_11 + 0x1f5))
                                    
                                    char r9_1
                                    
                                    if (((*(rax_11 + 0x1f4) & 0x20) != 0
                                            && (*(rax_11 + 0x1f6) & 8) == 0) || (rax_22.b & 0x40) != 0
                                            || rax_22.b s< 0)
                                        r9_1 = 1
                                    else
                                        r9_1 = 0
                                    
                                    void* rdx_7 = *(rax_11 + 0xb8)
                                    char* r8_4 = *(rax_11 + 0x248)
                                    uint8_t rcx_13
                                    
                                    if (rdx_7 != 0)
                                        rax_22 = sx.q(*(rdx_7 + 0x168))
                                        
                                        if (rax_22.d s< 0 || rax_22.d s>= *(rdx_7 + 0x160))
                                            rcx_13 = 0
                                        else
                                            rcx_13 = 1
                                    
                                    int64_t rcx_15
                                    
                                    if (rdx_7 == 0 || rcx_13 == 0)
                                        rcx_15 = 0
                                    else
                                        rcx_15 = rax_22 * 0x78 + *(rdx_7 + 0x158)
                                    
                                    if (rcx_15 == 0 || r8_4 == rcx_15)
                                        rcx_15.b = 1
                                    else
                                        rcx_15.b = 0
                                    
                                    if (r8_4 == 0 || *r8_4 == 2)
                                        rax_22.b = 1
                                    else
                                        rax_22.b = 0
                                    
                                    if (rcx_15.b != 0 || rax_22.b != 0)
                                        rax_22.b = 1
                                    
                                    if (r9_1 != 0 && rax_22.b != 0)
                                        goto label_142449489
                    
                    r8_2 = var_58
                    rdx_3 = var_80
                
                rsi_2 += 1
                r14_1 += 8
                
                if (rsi_2 s>= r8_2 + rdx_3)
                    goto label_1424494dd
            
            void* var_68_2 = rdi_1
            var_78 = rsi_2
        while (i == 0)
    
    result = sub_142442440(&var_90)
    *(arg1 + 0x11e) &= 0xfb

__security_check_cookie(result_1 ^ &var_b8)
return result
