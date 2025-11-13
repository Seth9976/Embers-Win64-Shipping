// 函数: sub_1428cd090
// 地址: 0x1428cd090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)
int32_t rsi = 0

if (arg2[1].d + arg3[1].d s> *(arg4 + 0x28) * 2)
    return 0

sub_1428d8e50(arg5)
int64_t* rax_3 = sub_1428d8ba0(arg5)

if (rax_3 != 0)
    int32_t rax_4
    
    if (arg2 != arg3)
        rax_4 = sub_1428d92d0(rax_3, arg2, arg3, arg5)
    else
        rax_4 = sub_14291c910(rax_3, arg2, arg5)
    
    if (rax_4 != 0 && sub_1428ccc30(arg1, rax_3, arg4) != 0)
        rsi = 1

sub_1428d8a60(arg5)
return zx.q(rsi)
