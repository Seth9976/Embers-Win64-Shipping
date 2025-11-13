// 函数: sub_142028bf0
// 地址: 0x142028bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
uint64_t result = __security_cookie ^ &var_d8
uint64_t result_1 = result
arg3[1].d = 0
uint64_t* r14 = arg3

if (*(arg3 + 0xc) s<= 0xffffffff)
    result = sub_140638c50(arg3, 0)

if (arg2 != 0)
    result = sub_1423de540(data_143f5b298, arg1, 1)
    
    if (result != 0)
        void* rax_1 = sub_142452380()
        int32_t var_a8 = 5
        char var_50_1 = 0
        void* var_a0
        sub_1405ab0f0(&var_a0, result, rax_1)
        char var_50_2 = 1
        result = sub_1405b0c60(&var_a8)
        void** var_98
        char var_84
        int64_t var_70
        
        if (var_84 == 0)
            void* var_78
            void* rsi_1 = var_78
            int64_t r12
            int64_t var_28_1 = r12
            
            while (true)
                if (sub_141db9a70(rsi_1, arg2) != 0)
                    int64_t rdi_2 = sx.q(r14[1].d)
                    int32_t rax_3 = (rdi_2 + 1).d
                    r14[1].d = rax_3
                    
                    if (rax_3 s> *(r14 + 0xc))
                        sub_1405a4d70(r14)
                    
                    *(*r14 + (rdi_2 << 3)) = rsi_1
                
                void* rax_4 = var_a0
                int32_t var_68
                int32_t r8_1 = var_68
                int32_t var_90
                int32_t rdx_4 = var_90
                int32_t var_88
                int32_t r15_2 = var_88 + 1
                result = zx.q(r8_1 + rdx_4)
                
                if (r15_2 s>= result.d)
                label_142028ea6:
                    int64_t var_78_1 = 0
                    char var_84_1 = 1
                    break
                
                int64_t r13_1 = sx.q(r15_2) << 3
                
                while (true)
                    if (r15_2 s>= rdx_4)
                        rsi_1 = *(var_70 + (sx.q(r15_2 - rdx_4) << 3))
                    else
                        rsi_1 = *(var_98 + r13_1)
                    
                    int32_t var_80 = var_80 + 1
                    
                    if (rsi_1 != 0)
                        void* rax_10 = sub_141dc9840(rsi_1)
                        
                        if (rax_10 != 0)
                            void* const rax_17
                            
                            if ((var_a8.b & 1) != 0)
                                int32_t rax_11 = *(rsi_1 + 0xc)
                                
                                if (rax_11 s>= data_143e1d9b4)
                                    rax_17 = nullptr
                                else
                                    int16_t temp0_1
                                    int32_t temp1_1
                                    temp0_1:temp1_1 = sx.q(rax_11)
                                    uint32_t rdx_6 = zx.d(temp0_1)
                                    int32_t rax_13 = temp1_1 + rdx_6
                                    rax_17 = *(data_143e1d9a0 + (sx.q(rax_13 s>> 0x10) << 3))
                                        + sx.q(zx.d(rax_13.w) - rdx_6) * 0x18
                            
                            if ((var_a8.b & 1) == 0 || ((*(rax_17 + 8) u>> 0x1d).b & 1) == 0)
                                int32_t rcx_14 = var_a8
                                
                                if (((rcx_14 u>> 1).b & 1) == 0)
                                    goto label_142028dcb
                                
                                uint64_t rax_21 = sub_1405949a0()
                                
                                if (rax_21.b != 0)
                                    rcx_14 = var_a8
                                label_142028dcb:
                                    
                                    if (((rcx_14 u>> 2).b & 1) == 0)
                                    label_142028e48:
                                        result = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_10)
                                        
                                        if (result == rax_4)
                                            if (rax_10 == *(rax_4 + 0x30))
                                                break
                                            
                                            void* rax_22 = sub_1425bd0d0()
                                            void* rdx_8 = *(rsi_1 + 0x10)
                                            result = sx.q(*(rax_22 + 0x38))
                                            
                                            if (result.d s> *(rdx_8 + 0x38))
                                                break
                                            
                                            uint64_t result_2 = result
                                            result = *(rdx_8 + 0x30)
                                            
                                            if (*(result + (result_2 << 3)) != rax_22 + 0x30)
                                                break
                                    else
                                        if ((*(rax_10 + 0x1f4) & 0x20) == 0
                                                || (*(rax_10 + 0x1f6) & 8) != 0)
                                            rax_21 = zx.q(*(rax_10 + 0x1f5))
                                        
                                        if (((*(rax_10 + 0x1f4) & 0x20) != 0
                                                && (*(rax_10 + 0x1f6) & 8) == 0) || (rax_21.b & 0x40) != 0
                                                || rax_21.b s< 0)
                                            r12.b = 1
                                        else
                                            r12.b = 0
                                        
                                        void* rcx_16 = *(rax_10 + 0xb8)
                                        char* r14_1 = *(rax_10 + 0x248)
                                        
                                        if (rcx_16 != 0)
                                            rax_21 = sub_1424359b0(rcx_16)
                                        
                                        if (rcx_16 == 0 || rax_21 == 0 || r14_1 == rax_21)
                                            rcx_16.b = 1
                                        else
                                            rcx_16.b = 0
                                        
                                        if (r14_1 == 0 || *r14_1 == 2)
                                            rax_21.b = 1
                                        else
                                            rax_21.b = 0
                                        
                                        if (rcx_16.b != 0 || rax_21.b != 0)
                                            rax_21.b = 1
                                        
                                        if (r12.b != 0 && rax_21.b != 0)
                                            goto label_142028e48
                        
                        r8_1 = var_68
                        rdx_4 = var_90
                    
                    r15_2 += 1
                    result = zx.q(r8_1 + rdx_4)
                    r13_1 += 8
                    
                    if (r15_2 s>= result.d)
                        goto label_142028ea6
                
                void* var_78_2 = rsi_1
                var_88 = r15_2
                
                if (var_84 != 0)
                    break
                
                r14 = arg3
        
        if (var_50_2 != 0)
            char var_50_3 = 0
            int64_t var_58
            result = sub_142441560(var_a0, var_58)
            
            if (var_70 != 0)
                result = sub_140a74f90(var_70)
            
            if (var_98 != 0)
                result = sub_140a74f90(var_98)

__security_check_cookie(result_1 ^ &var_d8)
return result
