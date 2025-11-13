// 函数: sub_141a27dc0
// 地址: 0x141a27dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct IModuleInterface::VTable** result = arg1
*arg1 = &data_14302d3b0
sub_1405ae200(&arg1[5])
int64_t* rdi = result[4]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rcx_3 = result[2]

if (rcx_3 != 0)
    int32_t temp1_1 = *(rcx_3 + 0xc)
    *(rcx_3 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_3 + 8))(rcx_3, 1)

*result = &IModuleInterface::`vftable'

if ((arg2 & 1) != 0)
    j_sub_140a74f90(result)

return result
