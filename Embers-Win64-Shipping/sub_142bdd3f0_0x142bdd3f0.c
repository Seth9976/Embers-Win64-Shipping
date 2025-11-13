// 函数: sub_142bdd3f0
// 地址: 0x142bdd3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x40) = &arg1[0x43]
arg1[0x47] = arg1[0x16]
*(*(arg1 + 0x40) + 0x14) = arg1[0x17]
*(*(arg1 + 0x40) + 8) = arg2
*(*(arg1 + 0x40) + 0xc) = arg3
**(arg1 + 0x40) = arg4
*(*(arg1 + 0x40) + 4) = arg5
void* result

while (true)
    int32_t* r9 = *(arg1 + 0x40)
    int32_t r11_1 = r9[5]
    int32_t rsi_1 = r9[1]
    int32_t rdx = r9[3]
    int32_t r15_1 = *r9
    int32_t rax_6
    int32_t rcx_2
    
    if (r11_1 s> rsi_1)
        rax_6 = rsi_1
        rcx_2 = r11_1
    else
        rax_6 = r11_1
        rcx_2 = rsi_1
    
    if (rdx s< rax_6 || rdx s> rcx_2)
        int32_t rax_18 = r9[4]
        r9[8] = rax_18
        int32_t temp0_1
        int32_t temp1_1
        temp0_1:temp1_1 = sx.q(rax_18 + r9[2])
        int32_t rax_22 = (temp1_1 - temp0_1) s>> 1
        r9[6] = rax_22
        int32_t temp2_1
        int32_t temp3_1
        temp2_1:temp3_1 = sx.q(r15_1 + r9[2])
        int32_t rax_27 = (temp3_1 - temp2_1) s>> 1
        r9[2] = rax_27
        int32_t temp4_1
        int32_t temp5_1
        temp4_1:temp5_1 = sx.q(rax_27 + rax_22)
        r9[4] = (temp5_1 - temp4_1) s>> 1
        r9[9] = r11_1
        int32_t temp6_1
        int32_t temp7_1
        temp6_1:temp7_1 = sx.q(r11_1 + r9[3])
        int32_t rax_36 = (temp7_1 - temp6_1) s>> 1
        r9[7] = rax_36
        int32_t temp8_1
        int32_t temp9_1
        temp8_1:temp9_1 = sx.q(rsi_1 + r9[3])
        int32_t rax_41 = (temp9_1 - temp8_1) s>> 1
        r9[3] = rax_41
        int32_t temp10_1
        int32_t temp11_1
        temp10_1:temp11_1 = sx.q(rax_41 + rax_36)
        r9[5] = (temp11_1 - temp10_1) s>> 1
        *(arg1 + 0x40) += 0x10
    else if (r11_1 != rsi_1)
        int32_t rdx_1 = arg1[0x22]
        int32_t r9_1
        r9_1.b = r11_1 s>= rsi_1
        
        if (rdx_1 != r9_1 + 1)
            bool cond:0_1
            
            if (r11_1 s>= rsi_1)
                cond:0_1 = r11_1 - (neg.d(arg1[1]) & r11_1) s>= arg1[2]
            else
                int32_t rax_7 = arg1[1]
                cond:0_1 = ((rax_7 - 1 + r11_1) & neg.d(rax_7)) - r11_1 s>= arg1[2]
            
            if (rdx_1 != 0)
                result = sub_142bde490(arg1, cond:0_1)
            
            if (rdx_1 != 0 && result.b != 0)
                result.b = 1
                break
                break
            
            if (sub_142bdece0(arg1, r9_1 + 1, cond:0_1).b != 0)
                result.b = 1
                break
                break
        
        if (r11_1 s>= rsi_1)
            void* rbp_1 = *(arg1 + 0x40)
            int32_t rcx_14 = neg.d(arg1[0x18])
            int32_t r9_5 = neg.d(arg1[0x19])
            *(rbp_1 + 4) = neg.d(*(rbp_1 + 4))
            *(rbp_1 + 0xc) = neg.d(*(rbp_1 + 0xc))
            *(rbp_1 + 0x14) = neg.d(*(rbp_1 + 0x14))
            char rdi_1 = *(arg1 + 0x6a)
            result = sub_142bdd270(arg1, 2, sub_142bdf0f0, r9_5, rcx_14)
            
            if (rdi_1 != 0 && *(arg1 + 0x6a) == 0)
                void* rdx_4 = *(arg1 + 0x70)
                *(rdx_4 + 0x20) = neg.d(*(rdx_4 + 0x20))
            
            *(rbp_1 + 4) = neg.d(*(rbp_1 + 4))
            
            if (result.b != 0)
                result.b = 1
                break
        else
            result = sub_142bdd270(arg1, 2, sub_142bdf0f0, arg1[0x18], arg1[0x19])
            
            if (result.b != 0)
                result.b = 1
                break
    else
        *(arg1 + 0x40) = &r9[-4]
    
    if (*(arg1 + 0x40) u< &arg1[0x43])
        arg1[0x16] = r15_1
        result.b = 0
        arg1[0x17] = rsi_1
        break

return result
