// 函数: sub_141067550
// 地址: 0x141067550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* result = *(arg1 + 0x20)
int32_t i = 0
void* rsi = *result

if (*(rsi + 0x4c8) s> 0)
    int64_t rdi_1 = 0
    
    do
        result = sub_14105ed10(*(*(rsi + 0x4c0) + rdi_1), 0)
        i += 1
        rdi_1 += 8
    while (i s< *(rsi + 0x4c8))

return result
