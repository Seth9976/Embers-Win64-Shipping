// 函数: sub_141dced50
// 地址: 0x141dced50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

bool cond:0 = *(arg1 + 0x130) == 0
char arg_21 = arg5
char arg_22 = arg6
uint64_t result = zx.q(arg7)
char arg_23 = result.b
char arg_20 = arg4

if (not(cond:0) && arg2 != 0)
    result = (*(*arg2 + 0x3a8))(arg2)
    
    if (result != 0)
        return sub_141f32b40(*(arg1 + 0x130), result, &arg_20, arg3)

return result
