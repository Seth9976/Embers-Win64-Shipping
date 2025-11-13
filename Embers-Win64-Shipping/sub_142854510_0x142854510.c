// 函数: sub_142854510
// 地址: 0x142854510
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg3 == 0)
    return sub_142854410(arg1, arg2, arg3) __tailcall

int128_t* rax_1 = sub_1428a3640(arg3)

if (rax_1 != 0)
    if (sub_142854410(arg1, arg2, rax_1) != 0)
        return 1
    
    sub_142898cb0(rax_1, sub_1428a2c50)

return 0
