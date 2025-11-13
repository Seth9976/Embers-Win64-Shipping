// 函数: sub_140b4b460
// 地址: 0x140b4b460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if ((*(arg1 + 0x29) & 0x20) != 0)
    if ((arg1[5].b & 1) != 0)
        (*(*arg1 + 0x150))(arg1, arg3, 8)
        *arg2 = _bswap(*arg2)
        return arg1
    
    uint64_t rax_5 = *arg2
    uint64_t arg_8
    arg2 = &arg_8
    arg_8 = _bswap(rax_5)

(*(*arg1 + 0x150))(arg1, arg2, 8)
return arg1
