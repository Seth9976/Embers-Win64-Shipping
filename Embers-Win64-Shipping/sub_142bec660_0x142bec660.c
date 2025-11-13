// 函数: sub_142bec660
// 地址: 0x142bec660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_148
int64_t rax_1 = __security_cookie ^ &var_148
int32_t var_128
int32_t* rbx = &var_128
int32_t rbp = *(arg1 + 0x148)
int32_t r8 = *(arg1 + 0x14c)
int32_t rcx = *(arg1 + 0x114)
int32_t r9_1 = arg3[1] << 2
int32_t r10_1 = *arg3 << 2
int32_t rdi_1 = *arg2 << 2
int32_t rdx_1 = arg2[1] << 2
int32_t r11_1 = r9_1 s>> 8
var_128 = r10_1
int32_t var_124 = r9_1
int32_t var_120 = rdi_1
int32_t var_11c = rdx_1
int32_t var_118 = rbp
int32_t var_114 = r8
int32_t result

if (r11_1 s>= rcx && rdx_1 s>> 8 s>= rcx)
    result = r8 s>> 8

if (r11_1 s>= rcx && rdx_1 s>> 8 s>= rcx && result s>= rcx)
    *(arg1 + 0x148) = r10_1
    *(arg1 + 0x14c) = r9_1
else
    int32_t rcx_1 = arg1[0x11].d
    
    if (r11_1 s< rcx_1 && rdx_1 s>> 8 s< rcx_1)
        result = r8 s>> 8
    
    if (r11_1 s>= rcx_1 || rdx_1 s>> 8 s>= rcx_1 || result s>= rcx_1)
        int32_t rcx_2 = rdi_1 * 2
        int32_t r11_3 = rbp - rcx_2
        int32_t i
        
        if (r11_3 + r10_1 s>= 0)
            i = r11_3 + r10_1
        else
            i = rcx_2 - rbp - r10_1
        
        int32_t rdx_2 = rdx_1 * 2
        int32_t r10_3 = r8 - rdx_2
        int32_t i_2
        
        if (r10_3 + r9_1 s>= 0)
            i_2 = r10_3 + r9_1
        else
            i_2 = rdx_2 - r8 - r9_1
        
        int32_t i_3 = 1
        
        if (i s< i_2)
            i = i_2
        
        while (i s> 0x40)
            i s>>= 2
            i_3 *= 2
        
        int32_t i_1
        
        do
            int32_t r10_5 = 1
            
            if ((1 & i_3.b) == 0)
                do
                    int32_t rax_8 = rbx[4]
                    r10_5 *= 2
                    rbx[8] = rax_8
                    int32_t temp3_1
                    int32_t temp4_1
                    temp3_1:temp4_1 = sx.q(rax_8 + rbx[2])
                    int32_t rax_12 = (temp4_1 - temp3_1) s>> 1
                    rbx[6] = rax_12
                    int32_t temp5_1
                    int32_t temp6_1
                    temp5_1:temp6_1 = sx.q(*rbx + rbx[2])
                    int32_t rax_17 = (temp6_1 - temp5_1) s>> 1
                    rbx[2] = rax_17
                    int32_t temp7_1
                    int32_t temp8_1
                    temp7_1:temp8_1 = sx.q(rax_17 + rax_12)
                    rbx[4] = (temp8_1 - temp7_1) s>> 1
                    int32_t rax_22 = rbx[5]
                    rbx[9] = rax_22
                    int32_t temp9_1
                    int32_t temp10_1
                    temp9_1:temp10_1 = sx.q(rax_22 + rbx[3])
                    int32_t rax_26 = (temp10_1 - temp9_1) s>> 1
                    rbx[7] = rax_26
                    int32_t temp11_1
                    int32_t temp12_1
                    temp11_1:temp12_1 = sx.q(rbx[1] + rbx[3])
                    int32_t rax_31 = (temp12_1 - temp11_1) s>> 1
                    rbx[3] = rax_31
                    int32_t temp13_1
                    int32_t temp14_1
                    temp13_1:temp14_1 = sx.q(rax_31 + rax_26)
                    rbx[5] = (temp14_1 - temp13_1) s>> 1
                    rbx = &rbx[4]
                while ((i_3 & r10_5) == 0)
            
            result = sub_142becb50(arg1, *rbx, rbx[1])
            rbx -= 0x10
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
    else
        *(arg1 + 0x148) = r10_1
        *(arg1 + 0x14c) = r9_1

__security_check_cookie(rax_1 ^ &var_148)
return result
