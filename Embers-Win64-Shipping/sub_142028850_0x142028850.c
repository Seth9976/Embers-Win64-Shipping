// 函数: sub_142028850
// 地址: 0x142028850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t result = __security_cookie ^ &var_d8
int64_t result_1 = result
arg3[1].d = 0
uint64_t* r14 = arg3

if (*(arg3 + 0xc) s<= 0xffffffff)
    result = sub_140638c50(arg3, 0)

if (arg2 != 0)
    result = sub_140cbe090()
    
    if (result != 0)
        int64_t r8 = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= *(arg2 + 0x38))
            int64_t result_2 = result
            result = *(arg2 + 0x30)
            
            if (*(result + (result_2 << 3)) == r8)
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
                            void* rax_2 = sub_140cbe090()
                            int64_t rax_3
                            
                            if (rax_2 != 0)
                                rax_3 = sx.q(*(rax_2 + 0x38))
                            
                            void* const rdx_3
                            
                            if (rax_2 == 0 || rax_3.d s> *(arg2 + 0x38)
                                    || *(*(arg2 + 0x30) + (rax_3 << 3)) != rax_2 + 0x30)
                                rdx_3 = nullptr
                            else
                                rdx_3 = arg2
                            
                            if (sub_140be1130(*(rsi_1 + 0x10), rdx_3) != 0)
                                int64_t rdi_2 = sx.q(r14[1].d)
                                int32_t rax_6 = (rdi_2 + 1).d
                                r14[1].d = rax_6
                                
                                if (rax_6 s> *(r14 + 0xc))
                                    sub_1405a4d70(r14)
                                
                                *(*r14 + (rdi_2 << 3)) = rsi_1
                            
                            void* rax_7 = var_a0
                            int32_t var_68
                            int32_t r8_2 = var_68
                            int32_t var_90
                            int32_t rdx_5 = var_90
                            int32_t var_88
                            int32_t r15_2 = var_88 + 1
                            result = zx.q(r8_2 + rdx_5)
                            
                            if (r15_2 s>= result.d)
                            label_142028b5e:
                                int64_t var_78_1 = 0
                                char var_84_1 = 1
                                break
                            
                            int64_t r13_1 = sx.q(r15_2) << 3
                            
                            while (true)
                                if (r15_2 s>= rdx_5)
                                    rsi_1 = *(var_70 + (sx.q(r15_2 - rdx_5) << 3))
                                else
                                    rsi_1 = *(var_98 + r13_1)
                                
                                int32_t var_80 = var_80 + 1
                                
                                if (rsi_1 != 0)
                                    void* rax_13 = sub_141dc9840(rsi_1)
                                    
                                    if (rax_13 != 0)
                                        void* const rax_20
                                        
                                        if ((var_a8.b & 1) != 0)
                                            int32_t rax_14 = *(rsi_1 + 0xc)
                                            
                                            if (rax_14 s>= data_143e1d9b4)
                                                rax_20 = nullptr
                                            else
                                                int16_t temp0_1
                                                int32_t temp1_1
                                                temp0_1:temp1_1 = sx.q(rax_14)
                                                uint32_t rdx_7 = zx.d(temp0_1)
                                                int32_t rax_16 = temp1_1 + rdx_7
                                                rax_20 =
                                                    *(data_143e1d9a0 + (sx.q(rax_16 s>> 0x10) << 3))
                                                    + sx.q(zx.d(rax_16.w) - rdx_7) * 0x18
                                        
                                        if ((var_a8.b & 1) == 0
                                                || ((*(rax_20 + 8) u>> 0x1d).b & 1) == 0)
                                            int32_t rcx_15 = var_a8
                                            
                                            if (((rcx_15 u>> 1).b & 1) == 0)
                                                goto label_142028a83
                                            
                                            uint64_t rax_24 = sub_1405949a0()
                                            
                                            if (rax_24.b != 0)
                                                rcx_15 = var_a8
                                            label_142028a83:
                                                
                                                if (((rcx_15 u>> 2).b & 1) == 0)
                                                label_142028b00:
                                                    result = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                                        rax_13)
                                                    
                                                    if (result == rax_7)
                                                        if (rax_13 == *(rax_7 + 0x30))
                                                            break
                                                        
                                                        void* rax_25 = sub_1425bd0d0()
                                                        void* rdx_9 = *(rsi_1 + 0x10)
                                                        result = sx.q(*(rax_25 + 0x38))
                                                        
                                                        if (result.d s> *(rdx_9 + 0x38))
                                                            break
                                                        
                                                        int64_t result_3 = result
                                                        result = *(rdx_9 + 0x30)
                                                        
                                                        if (*(result + (result_3 << 3))
                                                                != rax_25 + 0x30)
                                                            break
                                                else
                                                    if ((*(rax_13 + 0x1f4) & 0x20) == 0
                                                            || (*(rax_13 + 0x1f6) & 8) != 0)
                                                        rax_24 = zx.q(*(rax_13 + 0x1f5))
                                                    
                                                    if (((*(rax_13 + 0x1f4) & 0x20) != 0
                                                            && (*(rax_13 + 0x1f6) & 8) == 0)
                                                            || (rax_24.b & 0x40) != 0
                                                            || rax_24.b s< 0)
                                                        r12.b = 1
                                                    else
                                                        r12.b = 0
                                                    
                                                    void* rcx_17 = *(rax_13 + 0xb8)
                                                    char* r14_1 = *(rax_13 + 0x248)
                                                    
                                                    if (rcx_17 != 0)
                                                        rax_24 = sub_1424359b0(rcx_17)
                                                    
                                                    if (rcx_17 == 0 || rax_24 == 0
                                                            || r14_1 == rax_24)
                                                        rcx_17.b = 1
                                                    else
                                                        rcx_17.b = 0
                                                    
                                                    if (r14_1 == 0 || *r14_1 == 2)
                                                        rax_24.b = 1
                                                    else
                                                        rax_24.b = 0
                                                    
                                                    if (rcx_17.b != 0 || rax_24.b != 0)
                                                        rax_24.b = 1
                                                    
                                                    if (r12.b != 0 && rax_24.b != 0)
                                                        goto label_142028b00
                                    
                                    r8_2 = var_68
                                    rdx_5 = var_90
                                
                                r15_2 += 1
                                result = zx.q(r8_2 + rdx_5)
                                r13_1 += 8
                                
                                if (r15_2 s>= result.d)
                                    goto label_142028b5e
                            
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
