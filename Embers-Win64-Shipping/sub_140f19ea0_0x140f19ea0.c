// 函数: sub_140f19ea0
// 地址: 0x140f19ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rcx = arg1[0x11].b
char result = rcx & 1

if (result != 0)
    (*(*arg1 + 0x10))(arg1)
    jump(*(*arg1 + 0x18))

if ((rcx & 2) == 0)
    return result

jump(*(*arg1 + 0x18))
