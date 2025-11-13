// 函数: sub_142a6a3f0
// 地址: 0x142a6a3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s<= 0)
    sub_142a67c60(arg1, arg2)
    int32_t rax_2 = *arg2
    int32_t rbx_1
    
    if (rax_2 s> 0)
        rbx_1 = 0
    else
        rbx_1 = arg1[0xb].d
    
    if (rax_2 s<= 0)
        switch (sub_142a69df0((*(*arg1 + 0xb0))(arg1)) - 4)
            case 0
                return zx.q(rbx_1 + 0x26e)
            case 1, 2, 0xb, 0xc, 0xd
                rbx_1 = sub_142a6a5e0(rbx_1)
            case 3
                return zx.q(rbx_1 - 0xeb0)
            case 4
                return zx.q(rbx_1 - 0xa4d)
            case 5
                return zx.q(rbx_1 + 0x4f)
            case 6
                return zx.q(rbx_1 + 0x11c)
            case 7
                return zx.q(rbx_1 + 8)
            case 8
                return zx.q(rbx_1 - 0x1574)
            case 0xa
                return zx.q(rbx_1 - 0x91d)
        
        return zx.q(rbx_1)

return 0
