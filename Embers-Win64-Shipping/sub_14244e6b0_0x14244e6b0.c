// 函数: sub_14244e6b0
// 地址: 0x14244e6b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_b8
int64_t rax_1 = __security_cookie ^ &var_b8
uint64_t result = (*(*arg1 + 0x150))()
uint64_t result_3 = result
uint64_t result_1 = result

if ((*(result + 0x11d) & 1) == 0)
    void* rax_3 = sub_142452380()
    int32_t var_90 = 5
    char var_38_1 = 0
    void* var_88
    sub_1405ab0f0(&var_88, result_3, rax_3)
    char var_38_2 = 1
    int64_t rdx_2
    result, rdx_2 = sub_1405b0c60(&var_90)
    int64_t** var_80
    char i
    int64_t var_58
    
    if (i == 0)
        int64_t* var_60
        int64_t* rdi = var_60
        int64_t r15
        int64_t var_28_1 = r15
        
        do
            rdx_2.b = 1
            sub_141dbf290(rdi, rdx_2)
            int32_t var_50
            int32_t r8_2 = var_50
            int32_t var_78
            int32_t rdx_3 = var_78
            void* r13_1 = var_88
            int32_t var_70
            int32_t r14_2 = var_70 + 1
            result = zx.q(r8_2 + rdx_3)
            
            if (r14_2 s>= result.d)
            label_14244e909:
                int64_t var_60_1 = 0
                char var_6c = 1
                break
            
            int64_t r12_1 = sx.q(r14_2) << 3
            
            while (true)
                if (r14_2 s>= rdx_3)
                    rdi = *(var_58 + (sx.q(r14_2 - rdx_3) << 3))
                else
                    rdi = *(var_80 + r12_1)
                
                int32_t var_68 = var_68 + 1
                
                if (rdi != 0)
                    void* rax_9
                    rax_9, rdx_2 = sub_141dc9840(rdi)
                    
                    if (rax_9 != 0)
                        void* const rax_16
                        
                        if ((var_90.b & 1) != 0)
                            int32_t rax_10 = *(rdi + 0xc)
                            
                            if (rax_10 s>= data_143e1d9b4)
                                rax_16 = nullptr
                            else
                                int16_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(rax_10)
                                uint32_t rdx_5 = zx.d(temp0_1)
                                int32_t rax_12 = temp1_1 + rdx_5
                                rax_16 = *(data_143e1d9a0 + (sx.q(rax_12 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_12.w) - rdx_5) * 0x18
                        
                        if ((var_90.b & 1) == 0 || ((*(rax_16 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_10 = var_90
                            
                            if (((rcx_10 u>> 1).b & 1) == 0)
                                goto label_14244e833
                            
                            uint64_t rax_20 = sub_1405949a0()
                            
                            if (rax_20.b != 0)
                                rcx_10 = var_90
                            label_14244e833:
                                
                                if (((rcx_10 u>> 2).b & 1) == 0)
                                label_14244e8af:
                                    result = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                        rax_9)
                                    
                                    if (result == r13_1)
                                        if (rax_9 == *(r13_1 + 0x30))
                                            break
                                        
                                        void* rax_21 = sub_1425bd0d0()
                                        rdx_2 = rdi[2]
                                        result = sx.q(*(rax_21 + 0x38))
                                        
                                        if (result.d s> *(rdx_2 + 0x38))
                                            break
                                        
                                        uint64_t result_2 = result
                                        result = *(rdx_2 + 0x30)
                                        
                                        if (*(result + (result_2 << 3)) != rax_21 + 0x30)
                                            break
                                else
                                    if ((*(rax_9 + 0x1f4) & 0x20) == 0
                                            || (*(rax_9 + 0x1f6) & 8) != 0)
                                        rax_20 = zx.q(*(rax_9 + 0x1f5))
                                    
                                    if (((*(rax_9 + 0x1f4) & 0x20) != 0
                                            && (*(rax_9 + 0x1f6) & 8) == 0) || (rax_20.b & 0x40) != 0
                                            || rax_20.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_12 = *(rax_9 + 0xb8)
                                    char* rsi_1 = *(rax_9 + 0x248)
                                    
                                    if (rcx_12 != 0)
                                        rax_20 = sub_1424359b0(rcx_12)
                                    
                                    if (rcx_12 == 0 || rax_20 == 0 || rsi_1 == rax_20)
                                        rcx_12.b = 1
                                    else
                                        rcx_12.b = 0
                                    
                                    if (rsi_1 == 0 || *rsi_1 == 2)
                                        rax_20.b = 1
                                    else
                                        rax_20.b = 0
                                    
                                    if (rcx_12.b != 0 || rax_20.b != 0)
                                        rax_20.b = 1
                                    
                                    if (r15.b != 0 && rax_20.b != 0)
                                        goto label_14244e8af
                    
                    r8_2 = var_50
                    rdx_3 = var_78
                
                r14_2 += 1
                result = zx.q(r8_2 + rdx_3)
                r12_1 += 8
                
                if (r14_2 s>= result.d)
                    goto label_14244e909
            
            int64_t* var_60_2 = rdi
            var_70 = r14_2
        while (i == 0)
        
        result_3 = result_1
    
    if (var_38_2 != 0)
        char var_38_3 = 0
        int64_t var_40
        result = sub_142441560(var_88, var_40)
        
        if (var_58 != 0)
            result = sub_140a74f90(var_58)
        
        if (var_80 != 0)
            result = sub_140a74f90(var_80)
    
    *(result_3 + 0x11d) |= 1

__security_check_cookie(rax_1 ^ &var_b8)
return result
