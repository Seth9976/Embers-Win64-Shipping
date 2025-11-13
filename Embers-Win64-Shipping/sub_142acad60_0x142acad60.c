// 函数: sub_142acad60
// 地址: 0x142acad60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = 0
int32_t rsi = 0
int32_t r14 = 0
void* const rdi = &data_143656128

do
    int32_t rax_2 = std::_WChar_traits<wchar_t>::length(&data_143656128 + (sx.q(r14) << 3))
    int32_t var_58_1 = 0
    
    if (sub_142a8ee00(arg2, arg3, rax_2, &data_143656128 + (sx.q(r14) << 3), 0, rax_2, 0) == 0)
        if (rax_2 != 0)
            int32_t rbx_2 = rax_2 + arg3
            
            if (rbx_2 + 1 s< sub_142a4a1f0(arg2))
                int16_t rcx_3 = *(arg2 + 8)
                int32_t rax_6
                
                if (rcx_3 s< 0)
                    rax_6 = *(arg2 + 0xc)
                else
                    rax_6 = sx.d(rcx_3) s>> 5
                
                if (rbx_2 u< rax_6)
                    void* rcx_4 = arg2 + 0xa
                    
                    if ((rcx_3.b & 2) == 0)
                        rcx_4 = *(arg2 + 0x18)
                    
                    int16_t rdx_1 = *(rcx_4 + (sx.q(rbx_2) << 1))
                    int32_t rdi_1
                    
                    if (rdx_1 == 0x2b)
                        rdi_1 = 1
                    label_142acae6c:
                        int32_t arg_18 = 0
                        var_58_1.q = &arg_18
                        int32_t rax_8 = sub_142aca9f0(arg1, arg2, rbx_2 + 1, 0x3a, var_58_1)
                        int32_t rax_9 = sub_142a4a1f0(arg2)
                        int32_t rbx_3 = arg_18
                        int32_t rax_12
                        int32_t rbp_1
                        
                        if (rbx_3 != rax_9 - (rbx_2 + 1))
                            arg_18 = 0
                            rbp_1 = sub_142aca570(arg1, arg2, rbx_2 + 1, &arg_18)
                            rax_12 = arg_18
                        
                        int32_t rsi_2
                        
                        if (rbx_3 != rax_9 - (rbx_2 + 1) && rbx_3 s<= rax_12)
                            rsi_2 = rbx_2 + 1 + rax_12
                        else
                            rsi_2 = rbx_2 + 1 + rbx_3
                            rbp_1 = rax_8
                        
                        rsi = rsi_2 - arg3
                        rbp = rbp_1 * rdi_1
                    else if (rdx_1 == 0x2d)
                        rdi_1 = -1
                        goto label_142acae6c
        
        break
    
    rdi += 8
    r14 += 1
while (*rdi != 0)

*arg4 = rsi
return zx.q(rbp)
