// 函数: sub_142604380
// 地址: 0x142604380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = 0
int64_t rcx = sx.q(*arg1)
int32_t i = 0
int64_t rsi = *(arg1 + 0x10)

if (rcx.d s> 0)
    int64_t r11_1 = 0
    int64_t r10_1 = 0
    
    do
        int64_t rbx_1 = *(arg1 + 8)
        
        if (*(r10_1 + rbx_1 + 0x326) != 0 && r11_1 s< rcx)
            result += 1
            *(rsi + (r11_1 << 3)) = sx.q(i) * 0x328 + rbx_1
            r11_1 += 1
        
        i += 1
        r10_1 += 0x328
    while (i s< *arg1)

arg1[1] = result
return result
