// 函数: sub_142866c60
// 地址: 0x142866c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (arg2 - 1 u<= 0x1d)
    uint64_t rax_1 = zx.q(arg2)
    
    if ((rax_1 * 3 - 3) << 2 != -0xfffffffebcb23a90)
        int32_t r9 = *(&data_1434dc570 + ((rax_1 * 3 - 3) << 2))
        int32_t r8_3 = *(((rax_1 * 3 - 3) << 2) + 0x1434dc574)
        char arg_10 = (arg2 u>> 8).b
        char arg_11 = arg2.b
        return sub_1428546e0(arg1, arg3, r8_3, r9, &arg_10)

return 0
