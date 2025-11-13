// 函数: sub_140b4b370
// 地址: 0x140b4b370
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x29) & 0x20) != 0)
    if ((arg1[5].b & 1) != 0)
        (*(*arg1 + 0x150))(arg1, arg3, 2)
        *arg2 = ror.w(*arg2, 8)
        return arg1
    
    int16_t rax_4 = *arg2
    int16_t arg_8
    arg2 = &arg_8
    arg_8 = ror.w(rax_4, 8)

(*(*arg1 + 0x150))(arg1, arg2, 2)
return arg1
