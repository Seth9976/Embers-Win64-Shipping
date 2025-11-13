// 函数: sub_142c3d590
// 地址: 0x142c3d590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result

if (sub_142c3ae60(arg2, arg1, 6) != 0)
    *arg1 = (arg3 u>> 8).b
    arg1[1] = arg3.b
    uint16_t rcx_1 = arg4.w
    arg1[3] = rcx_1.b
    arg1[2] = (rcx_1 u>> 8).b
    
    if (sub_142c3c960(&arg1[4], arg2, arg5).b == 0)
        result.b = 0
    else if ((arg1[3] & 0x10) == 0)
        result.b = 1
    else if (sub_142c3ae60(arg2, arg1, 
            (&arg1[4]).d + (((zx.q(arg1[4]) << 8) + zx.q(arg1[5]) + 1) << 1).d - arg1.d + 2) == 0)
        result.b = 0
    else
        uint16_t rsi_1 = (arg4 u>> 0x10).w
        uint64_t rcx_9 = (zx.q(arg1[4]) << 8) + zx.q(arg1[5])
        result.w = rsi_1 u>> 8
        arg1[(rcx_9 << 1) + 6] = result.b
        arg1[(rcx_9 << 1) + 7] = rsi_1.b
        result.b = 1
else
    result.b = 0

return result
