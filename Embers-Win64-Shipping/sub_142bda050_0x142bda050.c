// 函数: sub_142bda050
// 地址: 0x142bda050
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = *(arg1 + 4)
void* rbx = arg1[1]

if (i_1 != 0)
    int32_t i
    
    do
        sub_142b99980(arg2, *(rbx + 8))
        __builtin_memset(rbx, 0, 0x14)
        rbx += 0x18
        i = i_1
        i_1 -= 1
    while (i != 1)

int64_t result = sub_142b99980(arg2, arg1[1])
arg1[1] = 0
*arg1 = 0
return result
