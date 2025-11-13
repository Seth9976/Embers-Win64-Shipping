// 函数: sub_141df7f90
// 地址: 0x141df7f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg1

if (arg3 != arg1[0x1b])
    (*(rax + 0x68))(arg1, arg3)
else
    (*(rax + 0x60))()

char result = (*(*arg1 + 0x78))(arg1, arg2, arg3)

if (result != 0)
    return result

if (arg3 == 0)
    if (*(arg2 + 0x40) == 0)
        return sub_141e0ba30(arg2 + 8)
    
    return sub_141e47c50(arg2 + 8, arg4) __tailcall

if (arg3 == arg1[0x1b])
    arg1[0x86].w += 1
    int16_t rcx_1 = arg1[0x86].w
    arg1[0x85] = data_143de5458
    
    if (rcx_1 == 0xffff)
        arg1[0x86].w = rcx_1 + 1

jump(*(*arg3 + 0x18))
