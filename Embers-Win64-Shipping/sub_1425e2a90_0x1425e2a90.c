// 函数: sub_1425e2a90
// 地址: 0x1425e2a90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[7]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[5]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rcx_4 = arg1[3]

if (rcx_4 != 0)
    int32_t rax_5 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (rax_5 == 1 && rcx_4 != 0)
        (*(*rcx_4 + 8))(rcx_4, 1)

arg1[1] = &IModuleInterface::`vftable'
sub_140b0be90(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
