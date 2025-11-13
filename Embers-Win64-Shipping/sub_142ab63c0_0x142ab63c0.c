// 函数: sub_142ab63c0
// 地址: 0x142ab63c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0x16
int32_t rsi = 0
int64_t rbx_1

while (true)
    int32_t temp0_1
    int32_t temp1_1
    temp0_1:temp1_1 = sx.q(rsi + rdi)
    rbx_1 = sx.q((temp1_1 - temp0_1) s>> 1)
    int32_t rax_5 = strcmp((&data_143652ea0)[rbx_1], "currency")
    
    if (rax_5 s>= 0)
        if (rax_5 == 0)
            break
        
        rdi = rbx_1.d
    else
        rsi = (rbx_1 + 1).d
    
    if (rsi s>= rdi)
        rbx_1 = 0xffffffff
        break

*(arg1 + 8) = rbx_1.d
int32_t r10 = *((sx.q((rbx_1 + 1).d) << 2) + &data_143653dd0)
int32_t rbx_2 = *((sx.q(rbx_1.d) << 2) + &data_143653dd0)
int32_t r11 = rbx_2
int32_t result

if (rbx_2 s>= r10)
label_142ab64aa:
    result = strncpy(arg1 + 0x10, arg2, 4)
    *(arg1 + 0x13) = 0
else
    int64_t r9_1
    
    while (true)
        int32_t temp3_1
        int32_t temp4_1
        temp3_1:temp4_1 = sx.q(r11 + r10)
        int32_t rax_11 = (temp4_1 - temp3_1) s>> 1
        r9_1 = sx.q(rax_11)
        char* rcx_2 = (&data_143652f50)[r9_1]
        void* r8_2 = arg2 - rcx_2
        
        while (true)
            char rdx_2 = *rcx_2
            char temp5_1 = *(rcx_2 + r8_2)
            
            if (rdx_2 != temp5_1)
                result = sbb.d(rax_11, rax_11, rdx_2 u< temp5_1) | 1
                break
            
            rcx_2 = &rcx_2[1]
            
            if (rdx_2 == 0)
                result = 0
                break
        
        if (result s>= 0)
            if (result == 0)
                break
            
            r10 = r9_1.d
        else
            r11 = (r9_1 + 1).d
        
        if (r11 s>= r10)
            goto label_142ab64aa
    
    if (r9_1.d == 0xffffffff)
        goto label_142ab64aa
    
    *(arg1 + 0xc) = r9_1.d - rbx_2

return result
