// 函数: sub_1428986d0
// 地址: 0x1428986d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int128_t* result = sub_1428a6730(0x20)

if (result == 0)
    sub_1428a5670((result + 0xf).d, (result + 0x7f).d, (result + 0x41).d, "crypto\stack\stack.c", 
        0x51)
    return 0

*result = *arg1
result[1] = arg1[1]
int32_t rcx_1 = *arg1

if (rcx_1 == 0)
    *(result + 8) = 0
    *(result + 0x14) = 0
    return result

int32_t rax_1 = 4

if (rcx_1 s> 4)
    rax_1 = rcx_1

*(result + 0x14) = rax_1
int64_t rax_2 = sub_1428a6a70(sx.q(rax_1) << 3)
*(result + 8) = rax_2

if (rax_2 == 0)
    sub_1428a6780(result)
    return nullptr

int32_t i = 0

if (*result s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        int64_t rcx_5 = *(rsi_1 + *(arg1 + 8))
        
        if (rcx_5 != 0)
            int64_t rax_4 = arg2(rcx_5)
            *(rsi_1 + *(result + 8)) = rax_4
            
            if (rax_4 == 0)
                int64_t rdi_1 = sx.q(i - 1)
                
                if (i - 1 s>= 0)
                    int64_t temp0_1
                    
                    do
                        int64_t rcx_7 = *(*(result + 8) + (rdi_1 << 3))
                        
                        if (rcx_7 != 0)
                            arg3(rcx_7)
                        
                        temp0_1 = rdi_1
                        rdi_1 -= 1
                    while (temp0_1 - 1 s>= 0)
                
                sub_142898a10(result)
                return nullptr
        
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *result)

return result
