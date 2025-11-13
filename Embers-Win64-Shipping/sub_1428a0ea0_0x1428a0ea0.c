// 函数: sub_1428a0ea0
// 地址: 0x1428a0ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
void* rax = sub_142891590(arg2)
int32_t rdi = *(arg1 + 0xac)
int32_t rsi = rdi + 1

if (rdi == sub_142898c70(*(arg1 + 0x98)) - 1)
    rsi = rdi

void* rax_3 = sub_142898ea0(*(arg1 + 0x98), rsi)
uint64_t result = sub_1428ae660(rax_3, *(arg2 + 0x80))
int32_t rcx_4

if (result.d == 0)
    rcx_4 = *arg4

if (result.d != 0 || (rcx_4.b & 0x20) == 0)
    int32_t rdi_2 = rsi + 1
    
    if (rdi_2 s>= sub_142898c70(*(arg1 + 0x98)))
    label_1428a0f9d:
        result = *(arg1 + 0x20)
        
        if ((*(result + 0x14) & 0x1000) != 0)
            int32_t i = 0
            result = sub_142898c70(*(arg1 + 0x10))
            
            if (result.d s> 0)
                do
                    void* rax_9 = sub_142898ea0(*(arg1 + 0x10), i)
                    
                    if (sub_1428a32a0(sub_1428a3930(rax_9), rax) == 0)
                        result = sub_1428ae660(rax_9, *(arg2 + 0x80))
                        
                        if (result.d == 0)
                            *arg3 = rax_9
                            *arg4 |= 4
                            break
                    
                    i += 1
                    result = sub_142898c70(*(arg1 + 0x10))
                while (i s< result.d)
    else
        while (true)
            void* rax_5 = sub_142898ea0(*(arg1 + 0x98), rdi_2)
            
            if (sub_1428a32a0(sub_1428a3930(rax_5), rax) == 0)
                result = sub_1428ae660(rax_5, *(arg2 + 0x80))
                
                if (result.d == 0)
                    *arg4 |= 0xc
                    *arg3 = rax_5
                    break
            
            rdi_2 += 1
            
            if (rdi_2 s>= sub_142898c70(*(arg1 + 0x98)))
                goto label_1428a0f9d
else
    *arg4 = rcx_4 | 0x1c
    *arg3 = rax_3

return result
