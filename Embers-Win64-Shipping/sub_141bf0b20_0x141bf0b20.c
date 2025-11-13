// 函数: sub_141bf0b20
// 地址: 0x141bf0b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_d8
int64_t rax_1 = __security_cookie ^ &var_d8
int128_t zmm6 = arg2
uint64_t rdi = *(*(arg1 + 0x18) + 0x30)

if ((*(rdi + 0x11d) & 1) == 0)
    void* rax_3 = sub_142452380()
    int32_t var_b0 = 5
    char var_58_1 = 0
    void* var_a8
    sub_1405ab0f0(&var_a8, rdi, rax_3)
    char var_58_2 = 1
    sub_1405b0c60(&var_b0)
    int64_t** var_a0
    char i
    int64_t var_78
    
    if (i == 0)
        int64_t* var_80
        int64_t* rdi_1 = var_80
        int64_t r15
        int64_t var_38_1 = r15
        
        do
            zmm6 = sub_141dbf290(rdi_1, 0)
            int32_t var_70
            int32_t r8_2 = var_70
            int32_t var_98
            int32_t rdx_2 = var_98
            void* r13_1 = var_a8
            int32_t var_90
            int32_t r14_2 = var_90 + 1
            
            if (r14_2 s>= r8_2 + rdx_2)
            label_141bf0d85:
                int64_t var_80_1 = 0
                char var_8c = 1
                break
            
            int64_t r12_1 = sx.q(r14_2) << 3
            
            while (true)
                if (r14_2 s>= rdx_2)
                    rdi_1 = *(var_78 + (sx.q(r14_2 - rdx_2) << 3))
                else
                    rdi_1 = *(var_a0 + r12_1)
                
                int32_t var_88 = var_88 + 1
                
                if (rdi_1 != 0)
                    void* rax_10 = sub_141dc9840(rdi_1)
                    
                    if (rax_10 != 0)
                        void* const rax_17
                        
                        if ((var_b0.b & 1) != 0)
                            int32_t rax_11 = *(rdi_1 + 0xc)
                            
                            if (rax_11 s>= data_143e1d9b4)
                                rax_17 = nullptr
                            else
                                int16_t temp0_1
                                int32_t temp1_1
                                temp0_1:temp1_1 = sx.q(rax_11)
                                uint32_t rdx_4 = zx.d(temp0_1)
                                int32_t rax_13 = temp1_1 + rdx_4
                                rax_17 = *(data_143e1d9a0 + (sx.q(rax_13 s>> 0x10) << 3))
                                    + sx.q(zx.d(rax_13.w) - rdx_4) * 0x18
                        
                        if ((var_b0.b & 1) == 0 || ((*(rax_17 + 8) u>> 0x1d).b & 1) == 0)
                            int32_t rcx_10 = var_b0
                            
                            if (((rcx_10 u>> 1).b & 1) == 0)
                                goto label_141bf0caf
                            
                            uint64_t rax_21 = sub_1405949a0()
                            
                            if (rax_21.b != 0)
                                rcx_10 = var_b0
                            label_141bf0caf:
                                
                                if (((rcx_10 u>> 2).b & 1) == 0)
                                label_141bf0d2b:
                                    
                                    if (Concurrency::details::_CancellationTokenRegistration::_GetToken(
                                            rax_10) == r13_1)
                                        if (rax_10 == *(r13_1 + 0x30))
                                            break
                                        
                                        void* rax_23 = sub_1425bd0d0()
                                        void* rdx_6 = rdi_1[2]
                                        int64_t rax_24 = sx.q(*(rax_23 + 0x38))
                                        
                                        if (rax_24.d s> *(rdx_6 + 0x38))
                                            break
                                        
                                        if (*(*(rdx_6 + 0x30) + (rax_24 << 3)) != rax_23 + 0x30)
                                            break
                                else
                                    if ((*(rax_10 + 0x1f4) & 0x20) == 0
                                            || (*(rax_10 + 0x1f6) & 8) != 0)
                                        rax_21 = zx.q(*(rax_10 + 0x1f5))
                                    
                                    if (((*(rax_10 + 0x1f4) & 0x20) != 0
                                            && (*(rax_10 + 0x1f6) & 8) == 0) || (rax_21.b & 0x40) != 0
                                            || rax_21.b s< 0)
                                        r15.b = 1
                                    else
                                        r15.b = 0
                                    
                                    void* rcx_12 = *(rax_10 + 0xb8)
                                    char* rsi_1 = *(rax_10 + 0x248)
                                    
                                    if (rcx_12 != 0)
                                        rax_21 = sub_1424359b0(rcx_12)
                                    
                                    if (rcx_12 == 0 || rax_21 == 0 || rsi_1 == rax_21)
                                        rcx_12.b = 1
                                    else
                                        rcx_12.b = 0
                                    
                                    if (rsi_1 == 0 || *rsi_1 == 2)
                                        rax_21.b = 1
                                    else
                                        rax_21.b = 0
                                    
                                    if (rcx_12.b != 0 || rax_21.b != 0)
                                        rax_21.b = 1
                                    
                                    if (r15.b != 0 && rax_21.b != 0)
                                        goto label_141bf0d2b
                    
                    r8_2 = var_70
                    rdx_2 = var_98
                
                r14_2 += 1
                r12_1 += 8
                
                if (r14_2 s>= r8_2 + rdx_2)
                    goto label_141bf0d85
            
            int64_t* var_80_2 = rdi_1
            var_90 = r14_2
        while (i == 0)
    
    if (var_58_2 != 0)
        char var_58_3 = 0
        int64_t var_60
        sub_142441560(var_a8, var_60)
        
        if (var_78 != 0)
            sub_140a74f90(var_78)
        
        if (var_a0 != 0)
            sub_140a74f90(var_a0)
    
    *(rdi + 0x11d) |= 1

int64_t result = sub_1420f0560(rdi, 2, zmm6)
__security_check_cookie(rax_1 ^ &var_d8)
return result
