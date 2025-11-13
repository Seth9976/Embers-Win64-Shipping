// 函数: sub_141d78bf0
// 地址: 0x141d78bf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = arg1[0xa].b

if (result != 3 && result != 0)
    if (result == 2)
        (*(*arg1 + 0x290))()
    
    arg1[0xa].b = 3
    result = (*(*arg1 + 0x298))(arg1)

if (arg1[0xa].b != 3)
    return result

arg1[0xa].b = 0
jump(*(*arg1 + 0x2a8))
