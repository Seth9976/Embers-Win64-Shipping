// 函数: sub_14262d0e0
// 地址: 0x14262d0e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(arg1 + 0x50)

if (result s< arg2)
    arg2 = result

if (arg2 s<= 0)
label_14262d13f:
    result.b = 1
else
    int64_t rbx_1 = 0
    
    while (true)
        if (sub_142612750(arg3, *(*(arg1 + 0x48) + (rbx_1 << 3)), arg4).b == 0)
            result.b = 0
            break
        
        rbx_1 += 1
        
        if (rbx_1 s>= sx.q(arg2))
            goto label_14262d13f

return result
