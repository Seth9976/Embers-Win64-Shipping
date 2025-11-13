// 函数: sub_1428e7420
// 地址: 0x1428e7420
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 != 0)
    int32_t* rsi_1 = *arg1
    int32_t rax_1 = sub_142898c70(rsi_1)
    int32_t rbx_1 = -1
    
    if (arg3 s>= 0)
        rbx_1 = arg3
    
    for (int32_t i = rbx_1 + 1; i s< rax_1; i += 1)
        if (sub_1428f6490(*sub_142898ea0(rsi_1, i), arg2) == 0)
            return zx.q(i)

return 0xffffffff
