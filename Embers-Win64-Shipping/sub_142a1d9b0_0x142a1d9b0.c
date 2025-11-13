// 函数: sub_142a1d9b0
// 地址: 0x142a1d9b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = 0
int64_t rbp = arg1 + 0x400
int64_t result

for (int32_t i = 0; i s<= 0x7e; i += 2)
    int32_t c = rsi s>> (arg2 s> 0) s>> (arg2 s> 4)
    
    if (arg2 s> 0 && c s> 9 - arg2)
        c = 9 - arg2
    
    if (c s< 1)
        c = 1
    
    memset(rbp + 0x400, c, 0x10)
    int32_t c_1 = c + i
    memset(rbp, c_1, 0x10)
    result = memset(rbp - 0x400, c_1 + 4, 0x10)
    rsi += 1
    rbp += 0x10

return result
