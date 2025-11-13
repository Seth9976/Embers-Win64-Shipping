// 函数: ?filt$0@?0??__ArrayUnwind@@YAXPEAX_K1P6AX0@Z@Z@4HA
// 地址: 0x142cafeee
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg2 + 0x40) = arg1
*(arg2 + 0x30) = arg1
*(arg2 + 0x28) = **(arg2 + 0x30)

if (**(arg2 + 0x28) != 0xe06d7363)
    *(arg2 + 0x20) = 0
    return zx.q(*(arg2 + 0x20))

int64_t* rax_3 = __current_exception()
*rax_3 = *(arg2 + 0x28)
*__current_exception_context() = *(*(arg2 + 0x30) + 8)
terminate()
noreturn
