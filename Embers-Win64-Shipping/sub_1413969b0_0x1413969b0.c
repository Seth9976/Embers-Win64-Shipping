// 函数: sub_1413969b0
// 地址: 0x1413969b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdx_2 = *arg2
void* i = *(rdx_2 + 0x28)

for (void* r8 = i + (*(rdx_2 + 0x30) << 2); i != r8; i += 4)
    *(i + 3) = *arg1

return i
