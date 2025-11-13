// 函数: sub_142ab64e0
// 地址: 0x142ab64e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0x16
int32_t r11 = 0
int64_t r9_1

while (true)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(r11 + r10)
    int32_t rax_4 = (temp1_1 - temp0_1) s>> 1
    r9_1 = sx.q(rax_4)
    int64_t rcx = 0
    int32_t rax_5
    
    while (true)
        char rdx_1 = (&data_143652ea0)[r9_1][rcx]
        rcx += 1
        char temp2_1 = *(rcx + 0x143653f23)
        
        if (rdx_1 != temp2_1)
            rax_5 = sbb.d(rax_4, rax_4, rdx_1 u< temp2_1) | 1
            break
        
        if (rcx == 5)
            rax_5 = 0
            break
    
    if (rax_5 s>= 0)
        if (rax_5 == 0)
            break
        
        r10 = r9_1.d
    else
        r11 = (r9_1 + 1).d
    
    if (r11 s>= r10)
        r9_1 = 0xffffffff
        break

*(arg1 + 8) = r9_1.d
int32_t r10_1 = *((sx.q((r9_1 + 1).d) << 2) + &data_143653dd0)
int32_t r11_1 = *((sx.q(r9_1.d) << 2) + &data_143653dd0)
int64_t r9_2

while (r11_1 s< r10_1)
    int32_t temp4_1
    int32_t temp5_1
    temp4_1:temp5_1 = sx.q(r11_1 + r10_1)
    int32_t rax_12 = (temp5_1 - temp4_1) s>> 1
    r9_2 = sx.q(rax_12)
    char* rdx_3 = (&data_143652f50)[r9_2]
    void* r8_3 = arg2 - rdx_3
    int32_t rax_13
    
    while (true)
        char rcx_3 = *rdx_3
        char temp6_1 = *(rdx_3 + r8_3)
        
        if (rcx_3 != temp6_1)
            rax_13 = sbb.d(rax_12, rax_12, rcx_3 u< temp6_1) | 1
            break
        
        rdx_3 = &rdx_3[1]
        
        if (rcx_3 == 0)
            rax_13 = 0
            break
    
    if (rax_13 s>= 0)
        if (rax_13 == 0)
            goto label_142ab65e1
        
        r10_1 = r9_2.d
    else
        r11_1 = (r9_2 + 1).d

r9_2 = 0xffffffff
label_142ab65e1:
int64_t result = sx.q(*(arg1 + 8))
*(arg1 + 0xc) = r9_2.d - *((result << 2) + &data_143653dd0)
return result
