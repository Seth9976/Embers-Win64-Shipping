// 函数: __scrt_unhandled_exception_filter
// 地址: 0x142c94600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *arg1

if (*rbx == 0xe06d7363 && rbx[6] == 4)
    int32_t rdx_1 = rbx[8]
    
    if (rdx_1 - 0x19930520 u<= 2 || rdx_1 == 0x1994000)
        *__current_exception() = rbx
        *__current_exception_context() = arg1[1]
        terminate()
        noreturn

return 0
