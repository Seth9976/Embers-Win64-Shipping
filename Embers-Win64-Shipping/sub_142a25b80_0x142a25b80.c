// 函数: sub_142a25b80
// 地址: 0x142a25b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi = 0
int64_t rbp = arg1
int64_t result

for (int32_t i = 0; i s<= 0x7e; i += 2)
    int32_t c = rdi s>> ((arg2 s> 4) + (arg2 s> 0))
    
    if (arg2 s> 0 && c s> 9 - arg2)
        c = 9 - arg2
    
    if (c s< 1)
        c = 1
    
    memset(rbp + 0x10, c, 0x10)
    result = memset(rbp, c + 4 + i, 0x10)
    rdi += 1
    rbp += 0x30

return result
