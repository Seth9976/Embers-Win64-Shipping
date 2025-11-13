// 函数: sub_140697fe0
// 地址: 0x140697fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x19]

if (rcx != 0)
    int32_t rax_1 = *(rcx + 0xc)
    *(rcx + 0xc) -= 1
    
    if (rax_1 == 1)
        (*(*rcx + 8))(rcx)

*arg1 = &data_142d8b338
_Mtx_destroy_in_situ(&arg1[0xc])
_Cnd_destroy_in_situ(&arg1[3])
*arg1 = &data_142d8b328

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
