// 函数: sub_142b9be30
// 地址: 0x142b9be30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || arg3 == 0)
    return 6

if (arg2 == 0x62697473)
    return sub_142b9bee0(arg1, &data_14367f468, arg3) __tailcall

if (arg2 == 0x6f75746c)
    return sub_142b9bee0(arg1, &data_14367f4a0, arg3) __tailcall

void* rax_2 = sub_142b93410(arg1, arg2, nullptr)

if (rax_2 != 0 && rax_2 != -0x28)
    return sub_142b9bee0(arg1, rax_2 + 0x28, arg3) __tailcall

return 0x12
