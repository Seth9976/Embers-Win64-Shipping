// 函数: sub_142821e08
// 地址: 0x142821e08
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax = zx.d(arg1) u>> 4

if (rax u<= 7)
    return 1

if (rax u> 0xb)
    if (rax u<= 0xd)
        return 2
    
    if (rax == 0xe)
        return 3
    
    if (rax == 0xf)
        return 4

return 0xffffffff
