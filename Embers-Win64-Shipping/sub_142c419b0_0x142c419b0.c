// 函数: sub_142c419b0
// 地址: 0x142c419b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbx = 0
int32_t result

if (arg1[1].d u<= 0)
label_142c41a0a:
    result.b = 0
else
    while (true)
        if (sub_142c2ae00(arg4, zx.d(*(*arg1 + (rbx << 3))), arg2, arg3, zx.d(*(arg1 + 0xc))) != 0)
            result.b = 1
            break
        
        rbx = zx.q(rbx.d + 1)
        
        if (rbx.d u>= arg1[1].d)
            goto label_142c41a0a

return result
