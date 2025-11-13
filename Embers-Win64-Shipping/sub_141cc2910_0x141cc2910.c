// 函数: sub_141cc2910
// 地址: 0x141cc2910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
uint64_t* rsi = arg4
void* r14 = arg3
arg4[1].d = 0

if (*(arg4 + 0xc) != 0)
    sub_140638c50(arg4, 0)

uint64_t result = sub_1423de540(data_143f5b298, arg1, 1)
uint64_t result_2 = result

if (arg2 != 0)
    result = sub_142452380()
    
    if (result != 0)
        int64_t rcx_2 = sx.q(*(result + 0x38))
        void* rdx_1 = result + 0x30
        
        if (rcx_2.d s<= *(arg2 + 0x38))
            result = *(arg2 + 0x30)
            
            if (*(result + (rcx_2 << 3)) == rdx_1 && result_2 != 0)
                uint64_t r15
                r15.b = 0
                int32_t var_a8 = 5
                char var_f8_1 = 0
                char var_50_1 = 0
                void* var_a0
                sub_1405ab0f0(&var_a0, result_2, arg2)
                char var_50_2 = 1
                result = sub_1406277a0(&var_a8)
                int64_t var_98
                char var_84
                int64_t var_70
                
                if (var_84 == 0)
                    void* var_78
                    void* rdi_1 = var_78
                    
                    while (true)
                        int32_t rax_2 = *(rdi_1 + 0xc)
                        void* const rax_8
                        
                        if (rax_2 s>= data_143e1d9b4)
                            rax_8 = nullptr
                        else
                            int16_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(rax_2)
                            uint32_t rdx_4 = zx.d(temp0_1)
                            int32_t rax_4 = temp1_1 + rdx_4
                            rax_8 = *(data_143e1d9a0 + (sx.q(rax_4 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_4.w) - rdx_4) * 0x18
                        
                        if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0)
                            void* rax_12 = sub_140d21950(rdi_1, sub_141cc7c00())
                            
                            if (rax_12 == 0)
                                char rax_17 = r15.b
                                
                                if (r15.b == 0)
                                    rax_17 = 1
                                
                                var_f8_1 = rax_17
                            else
                                int64_t r8_2 = *rax_12
                                int64_t var_d8
                                __builtin_memset(&var_d8, 0, 0x20)
                                (*(r8_2 + 0x10))(rax_12, &var_d8, r8_2)
                                void* var_f0 = r14
                                int64_t var_e8_1 = 0
                                char var_e0_1 = 0
                                
                                if (*(r14 + 0x20) s> 0)
                                    var_e8_1.d = 1
                                    var_e8_1:4.d = zx.d(**(r14 + 0x18))
                                    
                                    if (*(r14 + 0x20) s> 1)
                                        var_e8_1.d = 2
                                        
                                        if (*(*(r14 + 0x18) + 1) != 0
                                                && sub_141cc2060(&var_f0, &var_d8, 0) != 0)
                                            int64_t rbx_1 = sx.q(rsi[1].d)
                                            int32_t rax_16 = (rbx_1 + 1).d
                                            rsi[1].d = rax_16
                                            
                                            if (rax_16 s> *(rsi + 0xc))
                                                sub_1405a4d70(rsi)
                                            
                                            *(*rsi + (rbx_1 << 3)) = rdi_1
                                
                                int64_t var_c8
                                
                                if (var_c8 != 0)
                                    sub_140a74f90(var_c8)
                                
                                int64_t rcx_16 = var_d8
                                
                                if (rcx_16 != 0)
                                    sub_140a74f90(rcx_16)
                        
                        int32_t var_68
                        int32_t r8_3 = var_68
                        int32_t var_90
                        int32_t rdx_10 = var_90
                        void* r13_1 = var_a0
                        int32_t var_88
                        int32_t r14_2 = var_88 + 1
                        result = zx.q(r8_3 + rdx_10)
                        
                        if (r14_2 s>= result.d)
                        label_141cc2d01:
                            int64_t var_78_2 = 0
                            char var_84_1 = 1
                            break
                        
                        void** r12_1 = sx.q(r14_2) << 3
                        
                        while (true)
                            if (r14_2 s>= rdx_10)
                                rdi_1 = *(var_70 + (sx.q(r14_2 - rdx_10) << 3))
                            else
                                rdi_1 = *(r12_1 + var_98)
                            
                            int32_t var_80 = var_80 + 1
                            
                            if (rdi_1 != 0)
                                void* rax_23 = sub_141dc9840(rdi_1)
                                
                                if (rax_23 != 0)
                                    void* const rax_30
                                    
                                    if ((var_a8.b & 1) != 0)
                                        int32_t rax_24 = *(rdi_1 + 0xc)
                                        
                                        if (rax_24 s>= data_143e1d9b4)
                                            rax_30 = nullptr
                                        else
                                            int16_t temp2_1
                                            int32_t temp3_1
                                            temp2_1:temp3_1 = sx.q(rax_24)
                                            uint32_t rdx_12 = zx.d(temp2_1)
                                            int32_t rax_26 = temp3_1 + rdx_12
                                            rax_30 =
                                                *(data_143e1d9a0 + (sx.q(rax_26 s>> 0x10) << 3))
                                                + sx.q(zx.d(rax_26.w) - rdx_12) * 0x18
                                    
                                    if ((var_a8.b & 1) == 0
                                            || ((*(rax_30 + 8) u>> 0x1d).b & 1) == 0)
                                        int32_t rcx_24 = var_a8
                                        
                                        if (((rcx_24 u>> 1).b & 1) == 0)
                                            goto label_141cc2c0c
                                        
                                        uint64_t rax_34 = sub_1405949a0()
                                        
                                        if (rax_34.b != 0)
                                            rcx_24 = var_a8
                                        label_141cc2c0c:
                                            
                                            if (((rcx_24 u>> 2).b & 1) == 0)
                                            label_141cc2c88:
                                                result = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                                    rax_23)
                                                
                                                if (result == r13_1)
                                                    if (rax_23 == *(r13_1 + 0x30))
                                                        break
                                                    
                                                    void* rax_35 = sub_1425bd0d0()
                                                    void* rdx_14 = *(rdi_1 + 0x10)
                                                    result = sx.q(*(rax_35 + 0x38))
                                                    
                                                    if (result.d s> *(rdx_14 + 0x38))
                                                        break
                                                    
                                                    uint64_t result_1 = result
                                                    result = *(rdx_14 + 0x30)
                                                    
                                                    if (*(result + (result_1 << 3))
                                                            != rax_35 + 0x30)
                                                        break
                                            else
                                                if ((*(rax_23 + 0x1f4) & 0x20) == 0
                                                        || (*(rax_23 + 0x1f6) & 8) != 0)
                                                    rax_34 = zx.q(*(rax_23 + 0x1f5))
                                                
                                                char r15_1
                                                
                                                if (((*(rax_23 + 0x1f4) & 0x20) != 0
                                                        && (*(rax_23 + 0x1f6) & 8) == 0)
                                                        || (rax_34.b & 0x40) != 0 || rax_34.b s< 0)
                                                    r15_1 = 1
                                                else
                                                    r15_1 = 0
                                                
                                                void* rcx_26 = *(rax_23 + 0xb8)
                                                char* rsi_1 = *(rax_23 + 0x248)
                                                
                                                if (rcx_26 != 0)
                                                    rax_34 = sub_1424359b0(rcx_26)
                                                
                                                if (rcx_26 == 0 || rax_34 == 0 || rsi_1 == rax_34)
                                                    rcx_26.b = 1
                                                else
                                                    rcx_26.b = 0
                                                
                                                if (rsi_1 == 0 || *rsi_1 == 2)
                                                    rax_34.b = 1
                                                else
                                                    rax_34.b = 0
                                                
                                                if (rcx_26.b != 0 || rax_34.b != 0)
                                                    rax_34.b = 1
                                                
                                                if (r15_1 != 0 && rax_34.b != 0)
                                                    goto label_141cc2c88
                                
                                r8_3 = var_68
                                rdx_10 = var_90
                            
                            r14_2 += 1
                            result = zx.q(r8_3 + rdx_10)
                            r12_1 = &r12_1[1]
                            
                            if (r14_2 s>= result.d)
                                goto label_141cc2d01
                        
                        void* var_78_1 = rdi_1
                        var_88 = r14_2
                        
                        if (var_84 != 0)
                            break
                        
                        rsi = arg4
                        r14 = arg3
                        r15 = zx.q(var_f8_1)
                
                if (var_50_2 != 0)
                    char var_50_3 = 0
                    int64_t var_58
                    result = sub_142441560(var_a0, var_58)
                    
                    if (var_70 != 0)
                        result = sub_140a74f90(var_70)
                    
                    if (var_98 != 0)
                        result = sub_140a74f90(var_98)

__security_check_cookie(rax_1 ^ &var_118)
return result
