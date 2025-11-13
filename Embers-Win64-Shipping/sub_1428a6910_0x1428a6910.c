// 函数: sub_1428a6910
// 地址: 0x1428a6910
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg1 == 0)
    void* r10 = data_143b85290
    
    if (r10 != 0 && r10 != sub_1428a6730)
        return r10(arg3, arg4, zx.q(arg5))
    
    if (arg3 == 0)
        return 0
    
    data_143b85288 = 0
    return malloc(arg3)

if (arg3 == 0)
    sub_1428a6890(arg1, arg2, arg4, arg5)
    return 0

if (arg3 u< arg2)
    sub_1428b8960(arg1 + arg3, arg2 - arg3)
    return arg1

int64_t rax_6 = sub_1428a6730(arg3)

if (rax_6 != 0)
    memcpy(rax_6, arg1, arg2.d)
    sub_1428a6890(arg1, arg2, arg4, arg5)

return rax_6
