// 函数: sub_142a929c0
// 地址: 0x142a929c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = arg1[4]

if (rax == 0)
    *arg3 = 0x10
    return 0

int16_t* rax_1 = rax()

if (rax_1 != 0)
    char* result = sub_142a928f0(arg1, *arg2 + 1)
    
    if (result != 0)
        sub_142a8d6e0(rax_1, result, *arg2 + 1)
        return result
    
    *arg3 = 7

return nullptr
