// 函数: sub_142649860
// 地址: 0x142649860
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141eba500(arg1, arg2, arg3)

if (arg3 == 1)
    result = *(arg1 + 0x58)
    
    if (arg2[0x1d].d != result)
        char rbx_1 = arg2[0x11].b & 1
        
        if (rbx_1 != 0)
            sub_142666be0(&arg2[0x1c], arg2)
            result = *(arg1 + 0x58)
        
        arg2[0x1d].d = result
        
        if (rbx_1 != 0)
            return sub_142666b00(&arg2[0x1c], arg2)

return result
