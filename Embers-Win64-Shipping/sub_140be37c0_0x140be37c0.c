// 函数: sub_140be37c0
// 地址: 0x140be37c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140be3800(arg1)
void* result

if (((arg1[1].d u>> 4).b & 1) == 0)
    result = arg1[4]
else
    result = nullptr

if (result != 0 && (arg1[0x16].b & 0x40) != 0)
    *(result + 0xcc) &= 0xfffff7ff

return result
