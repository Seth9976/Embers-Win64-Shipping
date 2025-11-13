// 函数: sub_142b84620
// 地址: 0x142b84620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = arg5
int64_t r10_1 = arg3 - arg7
int64_t rbx = arg3 + arg7

if (result u< r10_1)
    int64_t rdi_1 = sx.q(arg2)
    
    while (arg4 - result u>= arg6)
        int64_t result_1 = result + arg6
        
        if (result_1 u>= r10_1 && r10_1 - result u< result - r10_1 + arg6)
            break
        
        int64_t rcx_4 = *arg1
        result = result_1
        *(rcx_4 + rdi_1 - 1) -= 1
        
        if (result_1 u>= r10_1)
            break

if (result u< rbx && arg4 - result u>= arg6
        && (result + arg6 u< rbx || rbx - result u> result - rbx + arg6))
    result.b = 0
    return result

if (arg7 * 2 u<= result && result u<= arg4 - (arg7 << 2))
    return 1

return 0
