// 函数: sub_142ac74b0
// 地址: 0x142ac74b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t result

if (sub_142a45d30(arg1 + 0x148, arg2 + 0x148).b == 0)
    result.b = 0
else
    bool cond:1_1
    
    if ((*(arg1 + 0x248) & 1) == 0)
        int16_t rax = *(arg1 + 0x248)
        int32_t r8_2
        
        if (rax s< 0)
            r8_2 = *(arg1 + 0x24c)
        else
            r8_2 = sx.d(rax) s>> 5
        
        int16_t rax_1 = *(arg2 + 0x248)
        
        if (rax_1 s< 0)
            result = *(arg2 + 0x24c)
        else
            result = sx.d(rax_1) s>> 5
        
        if ((*(arg2 + 0x248) & 1) == 0 && r8_2 == result)
            cond:1_1 = sub_142a490e0(arg1 + 0x240, arg2 + 0x240, r8_2).b == 0
            goto label_142ac753e
        
        result.b = 0
    else
        result.b = *(arg2 + 0x248) & 1
        cond:1_1 = result.b == 0
    label_142ac753e:
        
        if (cond:1_1)
            result.b = 0
        else
            bool cond:3_1
            
            if ((*(arg1 + 0x430) & 1) == 0)
                int16_t rax_3 = *(arg1 + 0x430)
                int32_t r8_4
                
                if (rax_3 s< 0)
                    r8_4 = *(arg1 + 0x434)
                else
                    r8_4 = sx.d(rax_3) s>> 5
                
                int16_t rax_4 = *(arg2 + 0x430)
                
                if (rax_4 s< 0)
                    result = *(arg2 + 0x434)
                else
                    result = sx.d(rax_4) s>> 5
                
                if ((*(arg2 + 0x430) & 1) == 0 && r8_4 == result)
                    cond:3_1 = sub_142a490e0(arg1 + 0x428, arg2 + 0x428, r8_4).b == 0
                    goto label_142ac7597
                
                result.b = 0
            else
                result.b = *(arg2 + 0x430) & 1
                cond:3_1 = result.b == 0
            label_142ac7597:
                
                if (cond:3_1)
                    result.b = 0
                else
                    int64_t* rcx_3 = *(arg1 + 0x230)
                    
                    if ((*(*rcx_3 + 0x10))(rcx_3, *(arg2 + 0x230)).b == 0)
                        result.b = 0
                    else
                        result.b = 1

int64_t rsi = 0
void* rbx = arg1 + 0x288
int64_t rbp = 0
char* rdi_1 = arg2 - arg1

while (result.b != 0)
    if ((*rbx & 1) == 0)
        int16_t rax_7 = *rbx
        int32_t r8_6
        
        if (rax_7 s< 0)
            r8_6 = *(rbx + 4)
        else
            r8_6 = sx.d(rax_7) s>> 5
        
        int16_t rax_8 = *(rdi_1 + rbx)
        
        if (rax_8 s< 0)
            result = *(rdi_1 + rbx + 4)
        else
            result = sx.d(rax_8) s>> 5
        
        if ((*(rdi_1 + rbx) & 1) != 0 || r8_6 != result)
            result.b = 0
        else if (sub_142a490e0(rbx - 8, &rdi_1[-8] + rbx, r8_6).b == 0)
            result.b = 0
        else
            result.b = 1
    else
        result.b = *(rdi_1 + rbx) & 1
    
    rbp += 1
    rbx += 0x40
    
    if (rbp s>= 6)
        break

void* rcx_5 = arg1 + 0x400

while (result.b != 0)
    result.b = *rcx_5 == *(rcx_5 + rdi_1)
    rsi += 1
    rcx_5 += 4
    
    if (rsi s>= 0xa)
        break

return result
