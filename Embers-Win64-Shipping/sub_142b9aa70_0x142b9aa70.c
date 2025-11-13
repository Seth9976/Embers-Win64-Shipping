// 函数: sub_142b9aa70
// 地址: 0x142b9aa70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rdx = *arg1
int32_t result = 0

for (char i = *rdx; i != 0; i = *rdx)
    rdx = &rdx[1]
    result = result * 0x1f + sx.d(i)

return result
