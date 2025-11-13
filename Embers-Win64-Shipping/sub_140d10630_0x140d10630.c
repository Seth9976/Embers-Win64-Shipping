// 函数: sub_140d10630
// 地址: 0x140d10630
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(*arg2 + 8)
char result = *(rcx + 0x2a)

if ((result & 0x20) == 0 || (result & 0x40) != 0 || *(rcx + 0x28) s< 0)
    uint64_t var_20 = 0
    int64_t var_18_1 = 0
    int64_t var_38_1 = *arg3
    int32_t var_30_1 = arg3[1].d
    int64_t var_28_1 = arg3[2]
    sub_140597df0(&var_20, &arg3[3])
    int64_t* rcx_2 = *(*arg2 + 8)
    result = (*(*rcx_2 + 0x118))(rcx_2, arg3)
    uint64_t rcx_3 = var_20
    
    if (rcx_3 != 0)
        return sub_140a74f90(rcx_3)

return result
