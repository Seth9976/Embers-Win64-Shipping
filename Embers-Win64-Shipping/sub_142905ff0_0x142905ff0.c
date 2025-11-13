// 函数: sub_142905ff0
// 地址: 0x142905ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (sub_142890290(arg4) == 0)
    return sub_1429071e0(arg1, arg2, arg3, arg4, arg5)

if (arg2[1].d == 1 && arg2[2].d == 0)
    int32_t rax_1 = sub_142890210(arg3, 4)
    
    if (rax_1 == 0)
        int32_t rax_2 = sub_142890210(arg2, rax_1 + 4)
        
        if (rax_2 == 0 && sub_142890210(arg4, rax_2 + 4) == 0)
            return sub_142906de0(arg1, **arg2, arg3, arg4, arg5, nullptr)

return sub_1429060f0(arg1, arg2, arg3, arg4, arg5, nullptr)
