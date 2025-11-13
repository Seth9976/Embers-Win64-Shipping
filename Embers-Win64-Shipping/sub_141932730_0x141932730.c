// 函数: sub_141932730
// 地址: 0x141932730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (*(rcx + 0x30) != 0)
    data_143f001e0(*(rcx + 0x28))
    *(*arg1 + 0x30) = 0

*(*arg1 + 0x28) = data_143f001f0(0x9117, 0)
void* result = *arg1
*(result + 0x30) = 1
return result
