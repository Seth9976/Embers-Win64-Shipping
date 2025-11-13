// 函数: sub_142b9e2d0
// 地址: 0x142b9e2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rsi = arg1[1]
int32_t r8_1 = *arg1 + arg2
int32_t result_1 = 0

if (r8_1 u<= rsi)
    return 0

int32_t rbx = rsi
int64_t rbp = *(arg1 + 0x20)

if (rsi u< r8_1)
    do
        rbx = rbx + 0x10 + (rbx u>> 1)
    while (rbx u< r8_1)

*(arg1 + 8) = sub_142b99a90(rbp, 8, rsi, rbx, *(arg1 + 8), &result_1)
int32_t result = result_1

if (result == 0)
    *(arg1 + 0x10) = sub_142b99a90(rbp, 1, rsi, rbx, *(arg1 + 0x10), &result_1)
    result = result_1
    
    if (result == 0)
        arg1[1] = rbx

return result
