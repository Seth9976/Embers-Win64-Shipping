// 函数: sub_140754a40
// 地址: 0x140754a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = arg2

if (arg2 != 0 && *(arg2 + 0x10) == *(arg1 + 0x10))
    arg2.b = 1
    
    if (*(r8 + 0x30) == *(arg1 + 0x30))
        return zx.q(arg2.d)
    
    return 0

arg2.b = 0

if (*(r8 + 0x30) == *(arg1 + 0x30))
    return zx.q(arg2.d)

return 0
