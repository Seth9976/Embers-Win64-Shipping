// 函数: sub_142c36b90
// 地址: 0x142c36b90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_138
int64_t rax_1 = __security_cookie ^ &var_138
uint64_t r13 = zx.q(arg3)
int64_t rbx = arg2
int64_t* rdi = arg1
int32_t rsi = arg4
int32_t rax_2 = sub_142c2b0a0(*arg1, *("BUSGSOPG" + (r13 << 2)))
int32_t r12 = 0
int32_t var_f4 = 0
uint64_t result
int32_t i

do
    int32_t rdx_1 = *("BUSGSOPG" + (r13 << 2))
    void* rcx_1 = *rdi
    void var_d8
    void* var_108_1 = &var_d8
    int32_t i_1
    int32_t* var_110_1 = &i_1
    i_1 = 0x20
    result = sub_142c2a970(rcx_1, rdx_1, rsi, arg5, r12, var_110_1, var_108_1)
    i = i_1
    int32_t result_1 = 0
    
    if (i != 0)
        do
            result = zx.q(result_1)
            
            if (*(&var_d8 + (result << 2)) u< rax_2)
                int32_t* rsi_3 = ((r13 + 2) << 4) + rbx
                int32_t rdi_1 = *rsi_3
                int32_t rcx_2 = rsi_3[1]
                int32_t rdi_2 = rdi_1 + 1
                
                if (rdi_1 + 1 s< 0)
                    rdi_2 = 0
                
                int16_t* r8_4
                
                if (rcx_2 s< 0)
                    r8_4 = &data_144017550
                    data_144017550.q = 0
                else
                    if (rdi_2 u<= rcx_2)
                        goto label_142c36cbd
                    
                    int32_t rbx_1 = rcx_2
                    
                    do
                        rbx_1 = rbx_1 + 8 + (rbx_1 u>> 1)
                    while (rdi_2 u>= rbx_1)
                    
                    int64_t rax_5
                    
                    if (rbx_1 s>= 0 && rbx_1 u>= rcx_2 && rbx_1 u< 0x1fffffff)
                        rax_5 = sub_140dc0f10(*(rsi_3 + 8), zx.q(rbx_1) << 3)
                    
                    if (rbx_1 s< 0 || rbx_1 u< rcx_2 || rbx_1 u>= 0x1fffffff || rax_5 == 0)
                        rbx = arg2
                        rsi_3[1] = 0xffffffff
                        r8_4 = &data_144017550
                        data_144017550.q = 0
                    else
                        rsi_3[1] = rbx_1
                        rbx = arg2
                        *(rsi_3 + 8) = rax_5
                    label_142c36cbd:
                        uint64_t rcx_4 = zx.q(*rsi_3)
                        
                        if (rdi_2 u> rcx_4.d)
                            memset(*(rsi_3 + 8) + (rcx_4 << 3), 0, zx.q(rdi_2 - rcx_4.d) << 3)
                        
                        int64_t rax_7 = *(rsi_3 + 8)
                        *rsi_3 = rdi_2
                        r8_4 = rax_7 + (zx.q(rdi_2 - 1) << 3)
                
                *(r8_4 + 4) = arg6
                *r8_4 = *(&var_d8 + (result << 2))
                r8_4[1] &= 0xfffe
                result = 0xfff9
                r8_4[1] = (((zx.w(arg8) & 1) | ((zx.w(arg9) & 1) * 2)) * 2)
                    | (((zx.w(arg7) & 1) | r8_4[1]) & 0xfff9)
                i = i_1
            
            result_1 += 1
        while (result_1 u< i)
        
        r12 = var_f4
        rdi = arg1
        rsi = arg4
    
    r12 += i
    var_f4 = r12
while (i == 0x20)
__security_check_cookie(rax_1 ^ &var_138)
return result
