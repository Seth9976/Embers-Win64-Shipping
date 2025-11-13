// 函数: sub_142a53ea0
// 地址: 0x142a53ea0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = arg1

if (arg2 - 2 u> 0x22)
    arg1.b = 0xff
else
    int32_t rax_1 = sub_142a53ce0(arg1)
    arg1 = rax_1
    
    if (rax_1.b s< 0)
        if (rbx - 0x61 u<= 0x19)
            arg1 = rbx - 0x57
        else if (rbx - 0x41 u<= 0x19)
            arg1 = rbx - 0x37
        else if (rbx - 0xff41 u<= 0x19)
            arg1 = rbx - 0x37
        else if (rbx - 0xff21 u<= 0x19)
            arg1 = rbx - 0x17

if (arg1.b s>= arg2)
    return 0xffffffff

return zx.q(sx.d(arg1.b))
