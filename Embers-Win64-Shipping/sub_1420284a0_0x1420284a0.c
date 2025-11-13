// 函数: sub_1420284a0
// 地址: 0x1420284a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
arg4[1].d = 0
uint64_t* r14 = arg4

if (*(arg4 + 0xc) s<= 0xffffffff)
    sub_140638c50(arg4, 0)

int64_t result = sub_1423de540(data_143f5b298, arg1, 1)
int64_t result_3 = result

if (arg2 != 0)
    result = sub_142452380()
    
    if (result != 0)
        int64_t rdx_1 = result + 0x30
        result = sx.q(*(result + 0x38))
        
        if (result.d s<= *(arg2 + 0x38))
            int64_t result_1 = result
            result = *(arg2 + 0x30)
            
            if (*(result + (result_1 << 3)) == rdx_1 && result_3 != 0)
                int32_t var_a8 = 5
                char var_50_1 = 0
                void* var_a0
                sub_1405ab0f0(&var_a0, result_3, arg2)
                char var_50_2 = 1
                result = sub_1406277a0(&var_a8)
                void** var_98
                char var_84
                int64_t var_70
                
                if (var_84 == 0)
                    void* var_78
                    void* rsi_1 = var_78
                    int64_t r12
                    int64_t arg_10 = r12
                    
                    while (true)
                        if (rsi_1 != 0)
                            int32_t rax_2 = *(rsi_1 + 0xc)
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
                            
                            if (((*(rax_8 + 8) u>> 0x1d).b & 1) == 0
                                    && sub_141db9a70(rsi_1, arg3) != 0)
                                int64_t rbx_1 = sx.q(r14[1].d)
                                int32_t rax_12 = (rbx_1 + 1).d
                                r14[1].d = rax_12
                                
                                if (rax_12 s> *(r14 + 0xc))
                                    sub_1405a4d70(r14)
                                
                                *(*r14 + (rbx_1 << 3)) = rsi_1
                        
                        void* rax_13 = var_a0
                        int32_t var_68
                        int32_t r8_2 = var_68
                        int32_t var_90
                        int32_t rdx_8 = var_90
                        int32_t var_88
                        int32_t r15_2 = var_88 + 1
                        result = zx.q(r8_2 + rdx_8)
                        
                        if (r15_2 s>= result.d)
                        label_1420287bc:
                            int64_t var_78_1 = 0
                            char var_84_1 = 1
                            break
                        
                        int64_t r13_1 = sx.q(r15_2) << 3
                        
                        while (true)
                            if (r15_2 s>= rdx_8)
                                rsi_1 = *(var_70 + (sx.q(r15_2 - rdx_8) << 3))
                            else
                                rsi_1 = *(var_98 + r13_1)
                            
                            int32_t var_80 = var_80 + 1
                            
                            if (rsi_1 != 0)
                                void* rax_19 = sub_141dc9840(rsi_1)
                                
                                if (rax_19 != 0)
                                    void* const rax_26
                                    
                                    if ((var_a8.b & 1) != 0)
                                        int32_t rax_20 = *(rsi_1 + 0xc)
                                        
                                        if (rax_20 s>= data_143e1d9b4)
                                            rax_26 = nullptr
                                        else
                                            int16_t temp2_1
                                            int32_t temp3_1
                                            temp2_1:temp3_1 = sx.q(rax_20)
                                            uint32_t rdx_10 = zx.d(temp2_1)
                                            int32_t rax_22 = temp3_1 + rdx_10
                                            rax_26 =
                                                *(data_143e1d9a0 + (sx.q(rax_22 s>> 0x10) << 3))
                                                + sx.q(zx.d(rax_22.w) - rdx_10) * 0x18
                                    
                                    if ((var_a8.b & 1) == 0
                                            || ((*(rax_26 + 8) u>> 0x1d).b & 1) == 0)
                                        int32_t rcx_18 = var_a8
                                        
                                        if (((rcx_18 u>> 1).b & 1) == 0)
                                            goto label_1420286e1
                                        
                                        uint64_t rax_30 = sub_1405949a0()
                                        
                                        if (rax_30.b != 0)
                                            rcx_18 = var_a8
                                        label_1420286e1:
                                            
                                            if (((rcx_18 u>> 2).b & 1) == 0)
                                            label_14202875e:
                                                result = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                                    rax_19)
                                                
                                                if (result == rax_13)
                                                    if (rax_19 == *(rax_13 + 0x30))
                                                        break
                                                    
                                                    void* rax_31 = sub_1425bd0d0()
                                                    void* rdx_12 = *(rsi_1 + 0x10)
                                                    result = sx.q(*(rax_31 + 0x38))
                                                    
                                                    if (result.d s> *(rdx_12 + 0x38))
                                                        break
                                                    
                                                    int64_t result_2 = result
                                                    result = *(rdx_12 + 0x30)
                                                    
                                                    if (*(result + (result_2 << 3))
                                                            != rax_31 + 0x30)
                                                        break
                                            else
                                                if ((*(rax_19 + 0x1f4) & 0x20) == 0
                                                        || (*(rax_19 + 0x1f6) & 8) != 0)
                                                    rax_30 = zx.q(*(rax_19 + 0x1f5))
                                                
                                                if (((*(rax_19 + 0x1f4) & 0x20) != 0
                                                        && (*(rax_19 + 0x1f6) & 8) == 0)
                                                        || (rax_30.b & 0x40) != 0 || rax_30.b s< 0)
                                                    r12.b = 1
                                                else
                                                    r12.b = 0
                                                
                                                void* rcx_20 = *(rax_19 + 0xb8)
                                                char* r14_1 = *(rax_19 + 0x248)
                                                
                                                if (rcx_20 != 0)
                                                    rax_30 = sub_1424359b0(rcx_20)
                                                
                                                if (rcx_20 == 0 || rax_30 == 0 || r14_1 == rax_30)
                                                    rcx_20.b = 1
                                                else
                                                    rcx_20.b = 0
                                                
                                                if (r14_1 == 0 || *r14_1 == 2)
                                                    rax_30.b = 1
                                                else
                                                    rax_30.b = 0
                                                
                                                if (rcx_20.b != 0 || rax_30.b != 0)
                                                    rax_30.b = 1
                                                
                                                if (r12.b != 0 && rax_30.b != 0)
                                                    goto label_14202875e
                                
                                r8_2 = var_68
                                rdx_8 = var_90
                            
                            r15_2 += 1
                            result = zx.q(r8_2 + rdx_8)
                            r13_1 += 8
                            
                            if (r15_2 s>= result.d)
                                goto label_1420287bc
                        
                        void* var_78_2 = rsi_1
                        var_88 = r15_2
                        
                        if (var_84 != 0)
                            break
                        
                        r14 = arg4
                
                if (var_50_2 != 0)
                    char var_50_3 = 0
                    int64_t var_58
                    result = sub_142441560(var_a0, var_58)
                    
                    if (var_70 != 0)
                        result = sub_140a74f90(var_70)
                    
                    if (var_98 != 0)
                        result = sub_140a74f90(var_98)

__security_check_cookie(rax_1 ^ &var_d8)
return result
