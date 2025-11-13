// 函数: sub_1426a8e90
// 地址: 0x1426a8e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rax_1

if (*(arg1 + 0x84) == 0 || (arg1[0x12].b & 1) == 0)
    rax_1 = (*(*arg1 + 0x280))()
else
    rax_1 = (*(*arg1 + 0x290))()

if (rax_1 == 0)
    arg1[0x12].d |= 4
    
    if (arg1[0x11].d != 3)
        arg1[0x11].d = 3
    
    sub_1426be890(arg1, 1)

return zx.q(rax_1)
