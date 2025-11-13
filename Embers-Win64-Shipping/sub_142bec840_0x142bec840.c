// 函数: sub_142bec840
// 地址: 0x142bec840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_1e8
int64_t rax_1 = __security_cookie ^ &var_1e8
int32_t var_1c8
int32_t* rbx = &var_1c8
int32_t r8 = *(arg1 + 0x114)
int32_t var_1c0 = *arg3 << 2
int32_t rdx = *(arg1 + 0x14c)
int32_t r10_1 = arg4[1] << 2
int32_t r11_1 = *arg4 << 2
int32_t r9_1 = arg3[1] << 2
int32_t rcx_1 = arg2[1] << 2
int32_t rdi_1 = r10_1 s>> 8
int32_t var_1b8 = *arg2 << 2
int32_t var_1b0 = *(arg1 + 0x148)
var_1c8 = r11_1
int32_t var_1c4 = r10_1
int32_t var_1bc = r9_1
int32_t var_1b4 = rcx_1
int32_t var_1ac = rdx
int32_t result

if (rdi_1 s>= r8 && r9_1 s>> 8 s>= r8 && rcx_1 s>> 8 s>= r8)
    result = rdx s>> 8

if (rdi_1 s>= r8 && r9_1 s>> 8 s>= r8 && rcx_1 s>> 8 s>= r8 && result s>= r8)
    *(arg1 + 0x148) = r11_1
    *(arg1 + 0x14c) = r10_1
else
    result = arg1[0x11].d
    
    if (rdi_1 s>= result || r9_1 s>> 8 s>= result || rcx_1 s>> 8 s>= result || rdx s>> 8 s>= result)
        while (true)
            int32_t r14_1 = *rbx
            int32_t r9_4 = rbx[6] - r14_1
            int32_t r15_1 = rbx[1]
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r9_4)
            int32_t r10_3 = rbx[7] - r15_1
            uint64_t rcx_5 = zx.q((temp1_1 ^ temp0_1) - temp0_1)
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r10_3)
            uint64_t r8_3 = zx.q((temp3_1 ^ temp2_1) - temp2_1)
            int32_t rax_18
            
            if (rcx_5.d s<= r8_3.d)
                rax_18 = ((rcx_5 * 3).d s>> 3) + r8_3.d
            else
                rax_18 = ((r8_3 * 3).d s>> 3) + rcx_5.d
            
            if (rax_18 s<= 0x7fff)
                int32_t r8_5 = rbx[2] - r14_1
                int32_t rbp_1 = rax_18 * 0x2a
                int32_t rsi_2 = rbx[3] - r15_1
                int32_t temp28_1
                int32_t temp29_1
                temp28_1:temp29_1 = sx.q(r8_5 * r10_3 - rsi_2 * r9_4)
                
                if ((temp29_1 ^ temp28_1) - temp28_1 s<= rbp_1)
                    int32_t r11_3 = rbx[4] - r14_1
                    int32_t rdi_3 = rbx[5] - r15_1
                    int32_t temp30_1
                    int32_t temp31_1
                    temp30_1:temp31_1 = sx.q(r11_3 * r10_3 - rdi_3 * r9_4)
                    
                    if ((temp31_1 ^ temp30_1) - temp30_1 s<= rbp_1
                            && (rsi_2 - r10_3) * rsi_2 + (r8_5 - r9_4) * r8_5 s<= 0
                            && (rdi_3 - r10_3) * rdi_3 + (r11_3 - r9_4) * r11_3 s<= 0)
                        sub_142becb50(arg1, r14_1, r15_1)
                        result = &var_1c8
                        
                        if (rbx == &var_1c8)
                            break
                        
                        rbx -= 0x18
                        continue
            
            int32_t r10_4 = rbx[2]
            int32_t r9_5 = rbx[6]
            int32_t rcx_19 = rbx[4]
            rbx[0xc] = r9_5
            int32_t temp4_1
            int32_t temp5_1
            temp4_1:temp5_1 = sx.q(r14_1 + r10_4)
            int32_t rax_42 = (temp5_1 - temp4_1) s>> 1
            rbx[2] = rax_42
            int32_t temp6_1
            int32_t temp7_1
            temp6_1:temp7_1 = sx.q(r9_5 + rcx_19)
            int32_t rax_46 = (temp7_1 - temp6_1) s>> 1
            rbx[0xa] = rax_46
            int32_t r10_5 = rbx[3]
            int32_t temp8_1
            int32_t temp9_1
            temp8_1:temp9_1 = sx.q(rcx_19 + r10_4)
            int32_t rax_50 = (temp9_1 - temp8_1) s>> 1
            int32_t temp10_1
            int32_t temp11_1
            temp10_1:temp11_1 = sx.q(rax_50 + rax_42)
            int32_t rax_54 = (temp11_1 - temp10_1) s>> 1
            rbx[4] = rax_54
            int32_t r9_7 = rbx[7]
            int32_t rcx_21 = rbx[5]
            int32_t temp12_1
            int32_t temp13_1
            temp12_1:temp13_1 = sx.q(rax_46 + rax_50)
            rbx[0xd] = r9_7
            int32_t rax_58 = (temp13_1 - temp12_1) s>> 1
            rbx[8] = rax_58
            int32_t temp14_1
            int32_t temp15_1
            temp14_1:temp15_1 = sx.q(rax_58 + rax_54)
            rbx[6] = (temp15_1 - temp14_1) s>> 1
            int32_t temp16_1
            int32_t temp17_1
            temp16_1:temp17_1 = sx.q(r15_1 + r10_5)
            int32_t rax_66 = (temp17_1 - temp16_1) s>> 1
            rbx[3] = rax_66
            int32_t temp18_1
            int32_t temp19_1
            temp18_1:temp19_1 = sx.q(r9_7 + rcx_21)
            int32_t rax_70 = (temp19_1 - temp18_1) s>> 1
            rbx[0xb] = rax_70
            int32_t temp20_1
            int32_t temp21_1
            temp20_1:temp21_1 = sx.q(rcx_21 + r10_5)
            int32_t rax_74 = (temp21_1 - temp20_1) s>> 1
            int32_t temp22_1
            int32_t temp23_1
            temp22_1:temp23_1 = sx.q(rax_74 + rax_66)
            int32_t rax_78 = (temp23_1 - temp22_1) s>> 1
            rbx[5] = rax_78
            int32_t temp24_1
            int32_t temp25_1
            temp24_1:temp25_1 = sx.q(rax_70 + rax_74)
            int32_t rax_82 = (temp25_1 - temp24_1) s>> 1
            rbx[9] = rax_82
            int32_t temp26_1
            int32_t temp27_1
            temp26_1:temp27_1 = sx.q(rax_82 + rax_78)
            rbx[7] = (temp27_1 - temp26_1) s>> 1
            rbx = &rbx[6]
    else
        *(arg1 + 0x148) = r11_1
        *(arg1 + 0x14c) = r10_1

__security_check_cookie(rax_1 ^ &var_1e8)
return result
