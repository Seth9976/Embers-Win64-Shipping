// 函数: sub_141043f10
// 地址: 0x141043f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_20 = arg4
void var_1c8
int64_t rax_1 = __security_cookie ^ &var_1c8
void* var_160 = arg1
int64_t var_68 = 0
int32_t var_60 = 0
int64_t var_88
__builtin_memset(&var_88, 0, 0x1c)
int64_t* var_178 = &var_88
int32_t result_3
int32_t* var_170 = &result_3
int32_t* var_168 = &arg_20
int64_t* var_158 = &var_68
void* var_198
int64_t* var_148 = &var_198
var_198 = arg2
result_3 = arg3
int16_t* var_150 = arg1 + 0x2c98
sub_141042ea0(&var_178)
uint64_t result

if (*(arg1 + 0x3290) == 0)
label_1410440f4:
    int64_t* rdi_3 = *(arg1 + 0x3078)
    int32_t var_70
    
    if (sub_141016130(rdi_3, var_70) == 0 && (*(*rdi_3 + 8))(rdi_3) != 0)
        sub_141042ea0(&var_178)
    
    int32_t r9_1
    result, r9_1 = sub_141033be0(rdi_3, var_70)
    bool cond:0_1 = result_3 != 5
    int32_t var_190 = result.d
    int64_t var_78
    
    if (cond:0_1)
        if (var_68.w != 0)
            int32_t* var_1a0_2 = &var_190
            result, r9_1 = sub_141007ce0(arg1 + 0x3020, var_198, arg1 + 0x2c98, r9_1, var_88.d)
        
        if (var_68:2.w != 0)
            int32_t* var_1a0_3 = &var_190
            result, r9_1 = sub_141006b10(arg1 + 0x3020, var_198, arg1 + 0x2c98, r9_1, var_88:4.d)
        
        int64_t var_80
        
        if (var_68:4.w != 0)
            int32_t* var_1a0_4 = &var_190
            result, r9_1 = sub_141006ea0(arg1 + 0x3020, var_198, arg1 + 0x2c98, r9_1, var_80.d)
        
        if (var_60.w != 0)
            int32_t* var_1a0_5 = &var_190
            result, r9_1 = sub_1410075c0(arg1 + 0x3020, var_198, arg1 + 0x2c98, r9_1, var_78.d)
        
        if (var_68:6.w != 0)
            int32_t* var_1a0_6 = &var_190
            result = sub_141007230(arg1 + 0x3020, var_198, arg1 + 0x2c98, r9_1, var_80:4.d)
    else if (var_60:2.w != 0)
        int32_t* var_1a0_1 = &var_190
        result = sub_141007950(arg1 + 0x3020, var_198, arg1 + 0x2c98, r9_1, var_78:4.d)
    sub_141035420(rdi_3, var_190)
else
    result = *(arg1 + 0x28)
    int32_t result_2 = result_3
    int32_t rcx_1 = arg_20
    uint64_t result_1 = result
    
    if (result_2 u< rcx_1)
        while (true)
            result = zx.q(result_2)
            int16_t* r9 = result * 2
            
            if (*(&var_68 + r9) != 0)
                int32_t rdx = *(&var_88 + (result << 2))
                
                if (rdx != 0)
                    uint64_t rcx_2 = 0
                    int64_t var_90_1 = 0
                    int32_t var_138 = rdx
                    int16_t buffer2[0x36]
                    
                    if (rdx != 0)
                        do
                            void* rax_3 = *((result << 7) + arg1 + 0x2c98 + (rcx_2 << 3) + 0x10)
                            int16_t rdx_1
                            
                            if (rax_3 == 0)
                                rdx_1 = 0
                            else
                                rdx_1 = *(rax_3 + 0x3c)
                            
                            int16_t rax_5 =
                                *(r9 + arg1 + 0x2c98) & (not.d(1 << (rcx_2.d u% 0x20))).w
                            buffer2[rcx_2] = rdx_1
                            rcx_2 = zx.q(rcx_2.d + 1)
                            *(r9 + arg1 + 0x2c98) = rax_5
                        while (rcx_2.d u< *(&var_88 + (result << 2)))
                    
                    if (*(arg1 + 0x3248) == *(arg1 + 0x3274))
                    label_1410440e1:
                        
                        if (sub_141036c70(arg1 + 0x3020) != 0)
                            sub_141042ea0(&var_178)
                        
                        break
                    
                    int32_t rax_7 = sub_141024700(&var_138)
                    void* r8 = arg1 + 0x3278
                    void* rcx_4 = *(r8 + 8)
                    
                    if (rcx_4 != 0)
                        r8 = rcx_4
                    
                    int32_t rbx_1 = *(r8 + (((sx.q(*(arg1 + 0x3288)) - 1) & sx.q(rax_7)) << 2))
                    
                    if (rbx_1 == 0xffffffff)
                        goto label_1410440e1
                    
                    int64_t rsi_1 = *(arg1 + 0x3240)
                    int32_t r14_1 = var_138
                    int32_t* rdi_2
                    
                    while (true)
                        rdi_2 = sx.q(rbx_1) * 0xb8 + rsi_1
                        int32_t rax_10 = *rdi_2
                        
                        if (rax_10 == r14_1 && memcmp(&rdi_2[1], &buffer2, zx.q(rax_10) * 2) == 0)
                            break
                        
                        rbx_1 = rdi_2[0x2c]
                        
                        if (rbx_1 == 0xffffffff)
                            goto label_1410440e1
                    
                    if (rbx_1 == 0xffffffff || rdi_2 == 0)
                        goto label_1410440e1
                    
                    uint64_t rbx_2 = zx.q(result_2.b)
                    
                    if (result_2 != 5)
                        uint64_t rdx_10
                        
                        if (rbx_2.d u> 5)
                            rdx_10 = 0xffffffff
                        else
                            switch (rbx_2.d)
                                case 0
                                    rdx_10 = zx.q(*(var_198 + 0x17))
                                case 1
                                    rdx_10 = zx.q(*(var_198 + 0x1f))
                                case 2
                                    rdx_10 = zx.q(*(var_198 + 0x23))
                                case 3
                                    rdx_10 = zx.q(*(var_198 + 0x13))
                                case 4
                                    rdx_10 = zx.q(*(var_198 + 0x1b))
                        
                        int64_t* rcx_18 = *(*(result_1 + 0x1c8) + 0x30)
                        (*(*rcx_18 + 0x100))(rcx_18, rdx_10, *(rdi_2 + 0xa8))
                    else
                        uint64_t rdx_9
                        
                        if (rbx_2.d u> result_2)
                            rdx_9 = 0xffffffff
                        else
                            *((sx.q(rbx_2.d) << 2) + 0x1410443e4)
                            rdx_9 = zx.q(*(var_198 + 0x27))
                        
                        int64_t* rcx_15 = *(*(result_1 + 0x1c8) + 0x30)
                        (*(*rcx_15 + 0xf8))(rcx_15, rdx_9, *(rdi_2 + 0xa8))
                    
                    void* rdx_11 = &(arg1 + 0x2c98)[rbx_2]
                    result.w = 0xffff << var_138.b
                    *rdx_11 |= result.w
                    rcx_1 = arg_20
            
            result_2 += 1
            
            if (result_2 u>= rcx_1)
                goto label_1410443c9
        
        goto label_1410440f4

label_1410443c9:
__security_check_cookie(rax_1 ^ &var_1c8)
return result
