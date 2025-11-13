// 函数: sub_142bc8530
// 地址: 0x142bc8530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = *arg1
sub_142b91350(arg1[8])
int32_t result = sub_142b96080(*(rsi + 0x2b8), arg2)

if (result == 0)
    void* r8_1 = *(*(rsi + 0x2b8) + 0x80)
    *(arg1 + 0x18) = *(r8_1 + 0x18)
    arg1[5] = *(r8_1 + 0x28)
    arg1[6].d = *(r8_1 + 0x30)

return result
