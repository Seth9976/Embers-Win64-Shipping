// 函数: sub_14091e140
// 地址: 0x14091e140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1f948
int64_t rcx = arg1[6]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t* rcx_1 = arg1[5]

if (rcx_1 != 0)
    int32_t temp0_1 = *(rcx_1 + 0xc)
    *(rcx_1 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_1 + 8))(rcx_1, 1)

int64_t* rdi = arg1[2]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

*arg1 = &data_142e1f828

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
