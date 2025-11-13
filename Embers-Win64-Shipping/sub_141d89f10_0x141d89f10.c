// 函数: sub_141d89f10
// 地址: 0x141d89f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[0x98].d == 0)
    sub_140dc0fb0(arg1, arg2, arg3, arg4)
else
    int64_t* rcx = arg1[0x97]
    
    if (rcx == 0)
        sub_140dc0fb0(arg1, arg2, arg3, arg4)
    else if ((*(*rcx + 0x28))(rcx) == 0)
        sub_140dc0fb0(arg1, arg2, arg3, arg4)
    else if (arg1[0x98].d == 0)
        (*(*nullptr + 0x48))(0, arg2, arg3, arg4)
    else
        int64_t* rcx_1 = arg1[0x97]
        (*(*rcx_1 + 0x48))(rcx_1, arg2, arg3, arg4)

return arg2
