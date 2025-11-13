// 函数: sub_14215f280
// 地址: 0x14215f280
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

void var_d8
uint64_t var_48_1 = __security_cookie ^ &var_d8
int64_t* rsi_1 = arg3
int64_t* r14_1 = arg1

if (arg3 != 0)
    void* rax_2 = sub_142452380()
    int32_t var_a8 = 5
    char var_50_1 = 0
    void* var_a0
    sub_1405ab0f0(&var_a0, arg2, rax_2)
    char var_50_2 = 1
    sub_1405b0c60(&var_a8)
    int64_t** var_98
    char var_84
    int64_t var_70
    
    if (var_84 == 0)
        int64_t* var_78
        int64_t* rdi_1 = var_78
        int64_t r15
        int64_t var_38_1 = r15
        
        while (true)
            if (rdi_1 != 0)
                int32_t rax_3 = *(rdi_1 + 0xc)
                void* const rax_9
                
                if (rax_3 s>= data_143e1d9b4)
                    rax_9 = nullptr
                else
                    int16_t temp0_1
                    int32_t temp1_1
                    temp0_1:temp1_1 = sx.q(rax_3)
                    uint32_t rdx_2 = zx.d(temp0_1)
                    int32_t rax_5 = temp1_1 + rdx_2
                    rax_9 = *(data_143e1d9a0 + (sx.q(rax_5 s>> 0x10) << 3))
                        + sx.q(zx.d(rax_5.w) - rdx_2) * 0x18
                
                if (((*(rax_9 + 8) u>> 0x1d).b & 1) == 0 && sub_1420e6460(rdi_1) != 0)
                    uint8_t rax_13
                    
                    if (sub_141dce3a0(rdi_1) == 0 || *(rdi_1 + 0xf1) != 4)
                        rax_13 = 0
                    else
                        rax_13 = 1
                    
                    if (rax_13 == 0)
                        sub_142167460(r14_1, rdi_1, rsi_1, nullptr)
            
            int32_t var_68
            int32_t r8_3 = var_68
            int32_t var_90
            int32_t rdx_5 = var_90
            void* r13_1 = var_a0
            int32_t var_88
            int32_t r14_3 = var_88 + 1
            
            if (r14_3 s>= r8_3 + rdx_5)
            label_14215f551:
                int64_t var_78_1 = 0
                char var_84_1 = 1
                break
            
            int64_t r12_1 = sx.q(r14_3) << 3
            
            while (true)
                if (r14_3 s>= rdx_5)
                    rdi_1 = *(var_70 + (sx.q(r14_3 - rdx_5) << 3))
                else
                    rdi_1 = *(var_98 + r12_1)
                
                int32_t var_80 = var_80 + 1
                
                if (rdi_1 != 0)
                    void* rax_19 = sub_141dc9840(rdi_1)
                    
                    if (rax_19 != 0)
                        void* const rax_26
                        
                        if ((var_a8.b & 1) != 0)
                            int32_t rax_20 = *(rdi_1 + 0xc)
                            
                            if (rax_20 s>= data_143e1d9b4)
                                rax_26 = nullptr
                            else
                                int16_t temp2_1
                                int32_t temp3_1
                                temp2_1:temp3_1 = sx.q(rax_20)
                                uint32_t rdx_7 = zx.d(temp2_1)
                                int32_t rax_22 = temp3_1 + rdx_7
                                rax_26 = *(data_143e1d9a0 + (sx.q(rax_22 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_22.w) - rdx_7) * 0x18
                        
                        if ((var_a8.b & 1) == 0 || ((*(rax_26 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_16 = var_a8
                            
                            if (((rcx_16 u>> 1).b & 1) == 0)
                                goto label_14215f47b
                            
                            uint64_t rax_30 = sub_1405949a0()
                            
                            if (rax_30.b != 0)
                                rcx_16 = var_a8
                            label_14215f47b:
                                
                                if (((rcx_16 u>> 2).b & 1) == 0)
                                label_14215f4f7:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_19) == r13_1)
                                        if (rax_19 == *(r13_1 + 0x30))
                                            break
                                        
                                        void* rax_31 = sub_1425bd0d0()
                                        void* rdx_9 = rdi_1[2]
                                        uint64_t rax = sx.q(*(rax_31 + 0x38))
                                        
                                        if (rax.d s> *(rdx_9 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_9 + 0x30) + (rax << 3)) != rax_31 + 0x30)
                                            break
                                else
                                    if ((*(rax_19 + 0x1f4) & 0x20) == 0
                                            || (*(rax_19 + 0x1f6) & 8) != 0)
                                        rax_30 = zx.q(*(rax_19 + 0x1f5))
                                    
                                    if (((*(rax_19 + 0x1f4) & 0x20) != 0
                                            && (*(rax_19 + 0x1f6) & 8) == 0) || (rax_30.b & 0x40) != 0
                                            || rax_30.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_18 = *(rax_19 + 0xb8)
                                    char* rsi_2 = *(rax_19 + 0x248)
                                    
                                    if (rcx_18 != 0)
                                        rax_30 = sub_1424359b0(rcx_18)
                                    
                                    if (rcx_18 == 0 || rax_30 == 0 || rsi_2 == rax_30)
                                        rcx_18.b = 1
                                    else
                                        rcx_18.b = 0
                                    
                                    if (rsi_2 == 0 || *rsi_2 == 2)
                                        rax_30.b = 1
                                    else
                                        rax_30.b = 0
                                    
                                    if (rcx_18.b != 0 || rax_30.b != 0)
                                        rax_30.b = 1
                                    
                                    if (r15.b != 0 && rax_30.b != 0)
                                        goto label_14215f4f7
                    
                    r8_3 = var_68
                    rdx_5 = var_90
                
                r14_3 += 1
                r12_1 += 8
                
                if (r14_3 s>= r8_3 + rdx_5)
                    goto label_14215f551
            
            int64_t* var_78_2 = rdi_1
            var_88 = r14_3
            
            if (var_84 != 0)
                break
            
            rsi_1 = arg3
            r14_1 = arg1
    
    if (var_50_2 != 0)
        char var_50_3 = 0
        int64_t var_58
        sub_142441560(var_a0, var_58)
        
        if (var_70 != 0)
            sub_140a74f90(var_70)
        
        if (var_98 != 0)
            sub_140a74f90(var_98)

__security_check_cookie(var_48_1 ^ &var_d8)
