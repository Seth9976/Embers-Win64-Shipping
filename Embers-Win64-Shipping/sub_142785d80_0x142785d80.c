// 函数: sub_142785d80
// 地址: 0x142785d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_118
int64_t rax_1 = __security_cookie ^ &var_118
char* r14 = arg4
void** r13 = arg2
void* const rsi = nullptr
uint64_t result = (*(*arg1 + 0x150))()

if (result != 0)
    int64_t* rcx = *(arg3 + 0x10)
    uint64_t r14_1 = 0
    uint64_t var_e8 = 0
    int32_t r15_1 = rcx[1].d
    int64_t rbx_1 = *rcx
    int32_t var_f8_1 = r15_1
    
    if (r15_1 != 0)
        sub_1405a4c70(&var_e8, r15_1, 0)
        r14_1 = var_e8
        memcpy(r14_1, rbx_1, r15_1 * 2)
        var_f8_1 = r15_1
    
    void* rax_3 = sub_142776620()
    void* rbx_2 = rax_3
    
    if (rax_3 == 0)
        rbx_2 = nullptr
    else
        void* rax_4 = sub_142776620()
        
        if (rax_4 == 0)
            rbx_2 = nullptr
        else
            int64_t rax_5 = sx.q(*(rax_4 + 0x38))
            
            if (rax_5.d s> *(rbx_2 + 0x38) || *(*(rbx_2 + 0x30) + (rax_5 << 3)) != rax_4 + 0x30)
                rbx_2 = nullptr
    
    int32_t var_b8 = 5
    char var_60_1 = 0
    void* var_b0
    sub_1405ab0f0(&var_b0, result, rbx_2)
    char var_60_2 = 1
    result = sub_1405b0c60(&var_b8)
    void** var_a8
    char var_94
    int64_t var_80
    
    if (var_94 == 0)
        void* var_88
        void* rdi_1 = var_88
        
        while (true)
            int64_t var_d0 = *(rdi_1 + 0x18)
            int16_t* var_c8
            sub_140b63b70(&var_d0, &var_c8)
            uint64_t rdx_5 = &data_142d40450
            int16_t* const rcx_7 = &data_142d40450
            
            if (r15_1 != 0)
                rdx_5 = r14_1
            
            int32_t var_c0
            
            if (var_c0 != 0)
                rcx_7 = var_c8
            
            result = sub_140a54510(rcx_7, rdx_5)
            int16_t* rcx_8 = var_c8
            rbx_2.b = result.d == 0
            
            if (rcx_8 != 0)
                result = sub_140a74f90(rcx_8)
            
            if (rbx_2.b != 0)
                rsi = var_88
                break
            
            int32_t var_78
            int32_t r8_3 = var_78
            int32_t var_a0
            int32_t rdx_6 = var_a0
            void* r13_1 = var_b0
            int32_t var_98
            int32_t r14_3 = var_98 + 1
            result = zx.q(r8_3 + rdx_6)
            
            if (r14_3 s>= result.d)
            label_14278609a:
                int64_t var_88_1 = 0
                char var_94_1 = 1
                break
            
            int64_t r12_1 = sx.q(r14_3) << 3
            
            while (true)
                if (r14_3 s>= rdx_6)
                    rdi_1 = *(var_80 + (sx.q(r14_3 - rdx_6) << 3))
                else
                    rdi_1 = *(var_a8 + r12_1)
                
                int32_t var_90 = var_90 + 1
                
                if (rdi_1 != 0)
                    void* rax_13 = sub_141dc9840(rdi_1)
                    
                    if (rax_13 != 0)
                        void* const rax_20
                        
                        if ((var_b8.b & 1) != 0)
                            int32_t rax_14 = *(rdi_1 + 0xc)
                            
                            if (rax_14 s>= data_143e1d9b4)
                                rax_20 = nullptr
                            else
                                int16_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(rax_14)
                                uint32_t rdx_8 = zx.d(temp0_1)
                                int32_t rax_16 = temp1_1 + rdx_8
                                rax_20 = *(data_143e1d9a0 + (sx.q(rax_16 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_16.w) - rdx_8) * 0x18
                        
                        if ((var_b8.b & 1) == 0 || ((*(rax_20 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_16 = var_b8
                            
                            if (((rcx_16 u>> 1).b & 1) == 0)
                                goto label_142785fcc
                            
                            uint64_t rax_24 = sub_1405949a0()
                            
                            if (rax_24.b != 0)
                                rcx_16 = var_b8
                            label_142785fcc:
                                
                                if (((rcx_16 u>> 2).b & 1) == 0)
                                    goto label_14278604a
                                
                                if ((*(rax_13 + 0x1f4) & 0x20) == 0 || (*(rax_13 + 0x1f6) & 8) != 0)
                                    rax_24 = zx.q(*(rax_13 + 0x1f5))
                                
                                if (((*(rax_13 + 0x1f4) & 0x20) != 0
                                        && (*(rax_13 + 0x1f6) & 8) == 0) || (rax_24.b & 0x40) != 0
                                        || rax_24.b s< 0)
                                    r15_1.b = 1
                                else
                                    r15_1.b = 0
                                
                                void* rcx_18 = *(rax_13 + 0xb8)
                                char* rsi_1 = *(rax_13 + 0x248)
                                
                                if (rcx_18 != 0)
                                    rax_24 = sub_1424359b0(rcx_18)
                                
                                if (rcx_18 == 0 || rax_24 == 0 || rsi_1 == rax_24)
                                    rcx_18.b = 1
                                else
                                    rcx_18.b = 0
                                
                                if (rsi_1 == 0 || *rsi_1 == 2)
                                    rax_24.b = 1
                                else
                                    rax_24.b = 0
                                
                                if (rcx_18.b != 0 || rax_24.b != 0)
                                    rax_24.b = 1
                                
                                if (r15_1.b != 0 && rax_24.b != 0)
                                    rsi = nullptr
                                label_14278604a:
                                    result = Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                        rax_13)
                                    
                                    if (result == r13_1)
                                        if (rax_13 == *(r13_1 + 0x30))
                                            break
                                        
                                        void* rax_25 = sub_1425bd0d0()
                                        void* rdx_10 = *(rdi_1 + 0x10)
                                        result = sx.q(*(rax_25 + 0x38))
                                        
                                        if (result.d s> *(rdx_10 + 0x38))
                                            break
                                        
                                        uint64_t result_1 = result
                                        result = *(rdx_10 + 0x30)
                                        
                                        if (*(result + (result_1 << 3)) != rax_25 + 0x30)
                                            break
                    
                    r8_3 = var_78
                    rsi = nullptr
                    rdx_6 = var_a0
                
                r14_3 += 1
                result = zx.q(r8_3 + rdx_6)
                r12_1 += 8
                
                if (r14_3 s>= result.d)
                    goto label_14278609a
            
            var_88 = rdi_1
            var_98 = r14_3
            
            if (var_94 != 0)
                break
            
            r14_1 = var_e8
            r15_1 = var_f8_1
        
        r13 = arg2
    
    if (var_60_2 != 0)
        char var_60_3 = 0
        int64_t var_68
        result = sub_142441560(var_b0, var_68)
        
        if (var_80 != 0)
            result = sub_140a74f90(var_80)
        
        if (var_a8 != 0)
            result = sub_140a74f90(var_a8)
    
    uint64_t rcx_23 = var_e8
    
    if (rcx_23 != 0)
        result = sub_140a74f90(rcx_23)
    
    r14 = arg4

if (*r13 != rsi)
    *r14 = 1
    *r13 = rsi

__security_check_cookie(rax_1 ^ &var_118)
return result
