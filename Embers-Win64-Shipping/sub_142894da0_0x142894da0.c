// 函数: sub_142894da0
// 地址: 0x142894da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rax = sub_142890ec0(arg1)

if (*(rax + 0x1f0) != 0 && *(rax + 0x1f8) != 0 && arg2 != 0 && arg3 != 0 && arg4 u>= 0x10)
    if (*(rax + 0x210) != 0)
        int32_t var_20
        var_20.q = sub_1406219d0(arg1)
        (*(rax + 0x210))(arg3, arg2, arg4, *(rax + 0x1f0), *(rax + 0x1f8), var_20)
        return 1
    
    int32_t rax_4 = sub_142890eb0(arg1)
    
    if (sub_1428d3cf0(rax + 0x1f0, sub_1406219d0(arg1), arg3, arg2, arg4, rax_4) == 0)
        return 1

return 0
