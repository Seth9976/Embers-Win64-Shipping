// 函数: sub_14093d470
// 地址: 0x14093d470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x20)

if (rcx != 0)
    int64_t rax_1 = *rcx
    int64_t* rcx_1 = rcx[2]
    int32_t arg_8 = 0
    
    if ((*(*rcx_1 + 0x50))(rcx_1, arg2, arg4, &arg_8, rax_1) != 0 && arg_8 == arg3)
        return 1

return 0
