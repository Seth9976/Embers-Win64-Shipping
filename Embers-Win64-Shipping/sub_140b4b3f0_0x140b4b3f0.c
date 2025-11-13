// 函数: sub_140b4b3f0
// 地址: 0x140b4b3f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x29) & 0x20) != 0)
    if ((arg1[5].b & 1) != 0)
        (*(*arg1 + 0x150))(arg1, arg3, 4)
        *arg2 = _bswap(*arg2)
        return arg1
    
    int32_t rax_5 = *arg2
    int32_t arg_8
    arg2 = &arg_8
    arg_8 = _bswap(rax_5)

(*(*arg1 + 0x150))(arg1, arg2, 4)
return arg1
