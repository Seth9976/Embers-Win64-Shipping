// 函数: sub_1423bcd60
// 地址: 0x1423bcd60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 0xd0)

if (result == 0)
    return result

int32_t rdi = 0
int32_t i = 0

if (*(result + 0x20) s> 0)
    int64_t* rsi_1 = nullptr
    
    do
        if (sub_140bc9840(*(rsi_1 + *(result + 0x18)) + 0x10) == 0)
            break
        
        result = *(arg1 + 0xd0)
        rdi += 1
        i += 1
        rsi_1 = &rsi_1[1]
    while (i s< *(result + 0x20))

return zx.q(rdi)
