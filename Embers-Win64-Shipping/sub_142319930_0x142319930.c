// 函数: sub_142319930
// 地址: 0x142319930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char result = sub_141f20c10(arg1, arg2 | 1, arg3)

if ((arg1[0x11].b & 4) != 0 && (not.b(arg2.b) & 1) != 0)
    result = sub_142255900(arg1, &arg1[(sx.q(*(arg1 + 0x494)) + 0x45) * 2], arg3, 0, 0)

if (arg3 != 0)
    result = sub_141f46230(arg1, arg3)

int64_t* rcx_2 = arg1[0x116]

if (rcx_2 != 0)
    result = (*(*rcx_2 + 0x38))(rcx_2)
    
    if (result != 0)
        char result_1 = arg1[0xe3].b
        *(arg1 + 0x71a) |= 0x40
        result = arg3
        
        if (arg3 u> result_1)
            result_1 = result
        
        arg1[0xe3].b = result_1

return result
