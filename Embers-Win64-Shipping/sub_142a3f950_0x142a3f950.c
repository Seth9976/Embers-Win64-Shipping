// 函数: sub_142a3f950
// 地址: 0x142a3f950
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x38)
int64_t rax = 0
void* r15 = arg2[0xb]
void* result

if (rcx == 0)
label_142a3f997:
    result = nullptr
else
    result = arg1 + 0x70
    
    while (true)
        char r8_1 = *(result + 1)
        
        if ((r8_1 & 1) == 0)
            if ((r8_1 & 2) != 0 || (r8_1 & 4) == 0)
                int32_t rdx_1 = *(arg1 + 0x68)
                int64_t r9_1 = *(result + 0x30)
                int64_t rsi_1
                
                if (rdx_1 != 3)
                    rsi_1 = 1 << (*(arg1 + 0x58)).b
                else
                    rsi_1 = *(arg1 + 0x40)
                
                uint32_t rax_2 = zx.d(*result)
                void* rbp_3 = zx.q(rax_2) * rsi_1 + arg1
                
                if (rax_2.b == 0)
                    int64_t rax_3 = *(arg1 + 0x48)
                    rbp_3 += rax_3
                    rsi_1 -= rax_3
                    
                    if (r9_1 != 0 && rdx_1 s<= 1)
                        int64_t rax_6 = r9_1 - modu.dp.q(0:rbp_3, r9_1)
                        
                        if (rax_6 u< r9_1)
                            rbp_3 += rax_6
                            rsi_1 -= rax_6
                
                char arg_8
                
                if ((r8_1 & 4) == 0)
                    arg_8 = 0
                    *(result + 1) = r8_1 | 4
                    j_sub_142a41ee0(rbp_3, rsi_1, &arg_8, r15)
                    
                    if (arg_8 != 0)
                        *(result + 1) |= 8
                
                char rax_7 = *(result + 1)
                
                if ((rax_7 & 2) != 0)
                    arg_8 = 0
                    *(result + 1) = rax_7 & 0xfd
                    j_sub_142a42480(rbp_3, rsi_1, &arg_8, r15)
                    
                    if (arg_8 != 0)
                        *(result + 1) |= 8
            
            break
        
        rax += 1
        result += 0x50
        
        if (rax u>= rcx)
            goto label_142a3f997

*(result + 1) |= 1
*(arg1 + 0x30) += 1

if (*(arg1 + 0x30) == *(arg1 + 0x38))
    sub_142a3fbc0(arg1, arg2)

return result
