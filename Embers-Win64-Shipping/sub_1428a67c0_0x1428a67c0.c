// 函数: sub_1428a67c0
// 地址: 0x1428a67c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)
void* rax = data_143b85298

if (rax != 0 && rax != sub_1428a67c0)
    return rax(arg1, arg2) __tailcall

if (arg1 == 0)
    void* rax_2 = data_143b85290
    
    if (rax_2 != 0 && rax_2 != sub_1428a6730)
        return rax_2(arg2, arg3, zx.q(arg4)) __tailcall
    
    if (arg2 == 0)
        return 0
    
    data_143b85288 = 0
    return malloc(arg2) __tailcall

if (arg2 != 0)
    return realloc(arg1, arg2) __tailcall

void* rax_5 = data_143b852a0

if (rax_5 != 0 && rax_5 != sub_1428a6780)
    rax_5(arg1, arg3, zx.q(arg4))
    return 0

free(arg1)
return 0
