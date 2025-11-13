// 函数: sub_140d7d4a0
// 地址: 0x140d7d4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t* rsi = arg4
int32_t rbp = arg3

if (((*(arg1 + 0x38) u>> 1).b & 1) == 0)
    return 0x80040201

int64_t* rcx = *(arg1 + 0x18)
int32_t rax_4 = (*(*rcx + 0x18))(rcx)

if (arg2 s>= 0 && arg2 s<= rax_4)
    if (rbp == 0xffffffff)
    label_140d7d511:
        
        if (rbp == 0xffffffff)
            rbp = rax_4
        
        int32_t rdi_1 = rbp - arg2
        *arg6 = 0
        
        if (rsi != 0 && arg5 != 0)
            int64_t* rcx_1 = *(arg1 + 0x18)
            int64_t var_38 = 0
            (*(*rcx_1 + 0x30))(rcx_1, zx.q(arg2), zx.q(rdi_1), &var_38, var_38, 0)
            int64_t r8_1 = var_38
            int32_t rdx_1 = 0
            
            if (rdi_1 != 0)
                int32_t rax_6 = *arg6
                
                while (rax_6 u< arg5)
                    int64_t rax_7 = sx.q(rdx_1)
                    rdx_1 += 1
                    *rsi = *(r8_1 + (rax_7 << 1))
                    rsi = &rsi[1]
                    *arg6 += 1
                    rax_6 = *arg6
                    
                    if (rdx_1 u>= rdi_1)
                        break
            
            if (r8_1 != 0)
                sub_140a74f90(r8_1)
        
        *arg9 = 0
        
        if (arg7 != 0 && arg8 != 0)
            arg7[1] = 0
            
            if (arg8 u<= rdi_1)
                rdi_1 = arg8
            
            *arg7 = rdi_1
            *arg9 += 1
        
        *arg10 = rbp
        return 0
    
    if (rbp s>= 0 && rbp s<= rax_4)
        goto label_140d7d511

return 0x80040200
