// 函数: sub_142bf1930
// 地址: 0x142bf1930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = arg2
*arg1 = arg3
arg1[2] = *(arg2 + 0x30)
arg1[0x220] = &arg1[0x21e]
arg1[0x21f] = &arg1[0x21e]
arg1[0x21e].d = 0
int32_t result = sub_142b97060(arg3, 0, arg5)

if (result == 0)
    char arg_8
    result = sub_142b96990(arg3, &arg_8, 2, arg4)
    
    if (result == 0)
        if (arg_8 != 0x1f || arg6 != 0x9d)
            return 3
        
        memset(&arg1[3], 0, 0xd8)
        arg1[0x1c] = arg3
        arg1[0x1d] = *(arg3 + 0x30)
        arg1[0x11] = &arg1[0x14]
        __builtin_memset(&arg1[0xe], 0, 0x14)
        arg1[0x13] = 0x40
        arg1[3] = 0
        arg1[6] = 0
        arg1[7].b = 0
        arg1[8] = 0
        arg1[0x12].d = 0
        *(arg1 + 0x54) = 9

return result
