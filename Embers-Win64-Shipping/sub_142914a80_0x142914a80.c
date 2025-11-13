// 函数: sub_142914a80
// 地址: 0x142914a80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x50)
void* rbx = *(arg1 + 0x28)
int32_t rax = *(rbx + 0x1c)
int32_t result

if (rax != 4)
    result = sub_142897560(zx.q(arg5), arg4, arg2, *(*(arg1 + 0x10) + 0x28), rax)
label_142914b52:
    
    if (result s>= 0)
        *arg3 = sx.q(result)
        return 1
else
    if (sub_142915950(rbx, arg1) == 0)
        return -1
    
    result = sub_142897560(zx.q(arg5), arg4, *(rbx + 0x38), *(*(arg1 + 0x10) + 0x28), 3)
    
    if (result s> 0)
        result = sub_142923ff0(arg2, result, *(rbx + 0x38), result, result, *(rbx + 0x40), 
            *(rbx + 0x48), *(rbx + 0x20), *(rbx + 0x28))
        goto label_142914b52

return result
