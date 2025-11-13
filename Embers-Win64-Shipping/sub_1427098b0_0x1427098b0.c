// 函数: sub_1427098b0
// 地址: 0x1427098b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
char* rsi = arg2
int64_t* r14 = arg1
int64_t rax_3 = (*(*arg1 + 0x150))()
void* rax_4 = sub_14255d000()
void* rbx = rax_4

if (rax_4 == 0)
    rbx = nullptr
else
    void* rax_5 = sub_14255d000()
    
    if (rax_5 == 0)
        rbx = nullptr
    else
        int64_t rcx = sx.q(*(rax_5 + 0x38))
        
        if (rcx.d s> *(rbx + 0x38) || *(*(rbx + 0x30) + (rcx << 3)) != rax_5 + 0x30)
            rbx = nullptr

int32_t var_98 = 5
char var_40 = 0
void* var_90
sub_1405ab0f0(&var_90, rax_3, rbx)
char var_40_1 = 1
uint64_t result = sub_1405b0c60(&var_98)
void** var_88
char var_74
int64_t var_60

if (var_74 == 0)
    void* var_68
    void* rdi_1 = var_68
    int64_t r15
    int64_t var_28_1 = r15
    
    while (true)
        char var_a8 = *rsi
        int64_t var_a4_1 = *(rsi + 4)
        sub_14270a4d0(r14, &var_a8, rdi_1)
        int32_t var_58
        int32_t r8_2 = var_58
        int32_t var_80
        int32_t rdx_3 = var_80
        void* r13_1 = var_90
        int32_t var_78
        int32_t r14_2 = var_78 + 1
        result = zx.q(r8_2 + rdx_3)
        
        if (r14_2 s>= result.d)
        label_142709b48:
            int64_t var_68_1 = 0
            char var_74_1 = 1
            break
        
        int64_t r12_1 = sx.q(r14_2) << 3
        
        while (true)
            if (r14_2 s>= rdx_3)
                rdi_1 = *(var_60 + (sx.q(r14_2 - rdx_3) << 3))
            else
                rdi_1 = *(var_88 + r12_1)
            
            int32_t var_70 = var_70 + 1
            
            if (rdi_1 != 0)
                void* rax_14 = sub_141dc9840(rdi_1)
                
                if (rax_14 != 0)
                    void* const rax_21
                    
                    if ((var_98.b & 1) != 0)
                        int32_t rax_15 = *(rdi_1 + 0xc)
                        
                        if (rax_15 s>= data_143e1d9b4)
                            rax_21 = nullptr
                        else
                            int16_t temp0_1
                            int32_t temp1_1
                            temp0_1:temp1_1 = sx.q(rax_15)
                            uint32_t rdx_5 = zx.d(temp0_1)
                            int32_t rax_17 = temp1_1 + rdx_5
                            rax_21 = *(data_143e1d9a0 + (sx.q(rax_17 s>> 0x10) << 3))
                                + sx.q(zx.d(rax_17.w) - rdx_5) * 0x18
                    
                    if ((var_98.b & 1) == 0 || ((*(rax_21 + 8) u>> 0x1d).b & 1) == 0)
                        int32_t rcx_11 = var_98
                        
                        if (((rcx_11 u>> 1).b & 1) == 0)
                            goto label_142709a72
                        
                        uint64_t rax_25 = sub_1405949a0()
                        
                        if (rax_25.b != 0)
                            rcx_11 = var_98
                        label_142709a72:
                            
                            if (((rcx_11 u>> 2).b & 1) == 0)
                            label_142709aee:
                                result =
                                    Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                    rax_14)
                                
                                if (result == r13_1)
                                    if (rax_14 == *(r13_1 + 0x30))
                                        break
                                    
                                    void* rax_26 = sub_1425bd0d0()
                                    void* rdx_7 = *(rdi_1 + 0x10)
                                    result = sx.q(*(rax_26 + 0x38))
                                    
                                    if (result.d s> *(rdx_7 + 0x38))
                                        break
                                    
                                    uint64_t result_1 = result
                                    result = *(rdx_7 + 0x30)
                                    
                                    if (*(result + (result_1 << 3)) != rax_26 + 0x30)
                                        break
                            else
                                if ((*(rax_14 + 0x1f4) & 0x20) == 0 || (*(rax_14 + 0x1f6) & 8) != 0)
                                    rax_25 = zx.q(*(rax_14 + 0x1f5))
                                
                                if (((*(rax_14 + 0x1f4) & 0x20) != 0
                                        && (*(rax_14 + 0x1f6) & 8) == 0) || (rax_25.b & 0x40) != 0
                                        || rax_25.b s< 0)
                                    r15.b = 1
                                else
                                    r15.b = 0
                                
                                void* rcx_13 = *(rax_14 + 0xb8)
                                char* rsi_1 = *(rax_14 + 0x248)
                                
                                if (rcx_13 != 0)
                                    rax_25 = sub_1424359b0(rcx_13)
                                
                                if (rcx_13 == 0 || rax_25 == 0 || rsi_1 == rax_25)
                                    rcx_13.b = 1
                                else
                                    rcx_13.b = 0
                                
                                if (rsi_1 == 0 || *rsi_1 == 2)
                                    rax_25.b = 1
                                else
                                    rax_25.b = 0
                                
                                if (rcx_13.b != 0 || rax_25.b != 0)
                                    rax_25.b = 1
                                
                                if (r15.b != 0 && rax_25.b != 0)
                                    goto label_142709aee
                
                r8_2 = var_58
                rdx_3 = var_80
            
            r14_2 += 1
            result = zx.q(r8_2 + rdx_3)
            r12_1 += 8
            
            if (r14_2 s>= result.d)
                goto label_142709b48
        
        void* var_68_2 = rdi_1
        var_78 = r14_2
        
        if (var_74 != 0)
            break
        
        rsi = arg2
        r14 = arg1

if (var_40_1 != 0)
    char var_40_2 = 0
    int64_t var_48
    result = sub_142441560(var_90, var_48)
    
    if (var_60 != 0)
        result = sub_140a74f90(var_60)
    
    if (var_88 != 0)
        result = sub_140a74f90(var_88)

__security_check_cookie(rax_1 ^ &var_d8)
return result
