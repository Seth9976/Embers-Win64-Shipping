// 函数: sub_142b36cd0
// 地址: 0x142b36cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rax_1 = zx.q(arg1)

if (arg1 == 0)
    return 0

int64_t result = 1

while (true)
    if ((arg2.b & 1) != 0)
        result *= rax_1
    
    arg2 u>>= 1
    
    if (arg2 == 0)
        break
    
    rax_1 *= rax_1

return result
