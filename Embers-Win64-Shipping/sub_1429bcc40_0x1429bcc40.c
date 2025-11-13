// 函数: sub_1429bcc40
// 地址: 0x1429bcc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = sx.q(arg2)
uint64_t r11_1 = zx.q(arg1.d) & 0x3f
uint64_t result = zx.q(arg3.d) & 0x3f

if (r11_1 + 8 + result u< r11_1 * rbx)
    int32_t rax_2 = arg1.d & 0x3f
    *arg4 <<= rax_2.b
    *arg5 += rax_2
    *arg4 |= arg1 u>> 6
    uint64_t r11_3 = *arg4
    
    if (*arg5 s>= 8)
        do
            int32_t rcx_2 = *arg5 - 8
            *arg5 = rcx_2
            **arg6 = (*arg4 u>> rcx_2.b).b
            *arg6 += 1
        while (*arg5 s>= 8)
        
        r11_3 = *arg4
    
    int32_t rax_5 = arg3.d & 0x3f
    *arg4 = r11_3 << rax_5.b
    *arg5 += rax_5
    *arg4 |= arg3 u>> 6
    uint64_t rax_6 = *arg4
    
    if (*arg5 s>= 8)
        do
            int32_t rcx_5 = *arg5 - 8
            *arg5 = rcx_5
            **arg6 = (*arg4 u>> rcx_5.b).b
            *arg6 += 1
        while (*arg5 s>= 8)
        
        rax_6 = *arg4
    
    result = rax_6 << 8
    *arg4 = result
    *arg5 += 8
    *arg4 |= rbx
    
    while (*arg5 s>= 8)
        int32_t rcx_7 = *arg5 - 8
        *arg5 = rcx_7
        result = *arg6
        *result = (*arg4 u>> rcx_7.b).b
        *arg6 += 1
else if (arg2 s>= 0)
    int32_t r11_6 = arg1.d & 0x3f
    
    do
        rbx = zx.q(rbx.d - 1)
        *arg4 <<= r11_6.b
        *arg5 += r11_6
        *arg4 |= arg1 u>> 6
        
        while (*arg5 s>= 8)
            int32_t rcx_10 = *arg5 - 8
            *arg5 = rcx_10
            result = *arg6
            *result = (*arg4 u>> rcx_10.b).b
            *arg6 += 1
    while (rbx.d s>= 0)

return result
