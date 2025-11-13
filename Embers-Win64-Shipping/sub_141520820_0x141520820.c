// 函数: sub_141520820
// 地址: 0x141520820
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    sub_14151fe20(arg1 + 0x70)
    sub_14151fe20(arg1 + 0x88)
    return sub_14151fe20(arg1 + 0x38) __tailcall

void arg_10
int64_t* rcx_1

if (*(arg2 + 0x28) != *sub_140b58260(&arg_10, u"GameDefaultMap", 1))
    if (*(arg2 + 0x28) != *sub_140b58260(&arg_10, u"ServerDefaultMap", 1))
        int64_t rbx_2 = *(arg2 + 0x28)
        int64_t* result = sub_140b58260(&arg_10, u"TransitionMap", 1)
        
        if (rbx_2 != *result)
            return result
        
        rcx_1 = arg1 + 0x38
    else
        rcx_1 = arg1 + 0x88
else
    rcx_1 = arg1 + 0x70

return sub_14151fe20(rcx_1)
