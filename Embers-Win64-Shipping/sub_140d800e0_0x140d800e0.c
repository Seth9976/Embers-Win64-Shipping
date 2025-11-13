// 函数: sub_140d800e0
// 地址: 0x140d800e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* result = *(arg1 + 8)
int64_t* r9 = *(result + 0x40)

if (r9 == 0)
    return result

if (arg2 != 0 && arg2 != 1 && arg2 == 2)
    jump(*(*r9 + 0x28))

jump(*(*r9 + 0x28))
