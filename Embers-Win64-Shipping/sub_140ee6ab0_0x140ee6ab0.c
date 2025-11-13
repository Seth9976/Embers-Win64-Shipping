// 函数: sub_140ee6ab0
// 地址: 0x140ee6ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ee10d8
sub_140596d80(&arg1[0x18])

if (*(arg1 + 0xbc) != 0)
    *(arg1 + 0xbc) = 0

int64_t* rdi = arg1[0x15]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0x12]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140ee3ef0(&arg1[5])
int64_t* rcx_6 = arg1[4]

if (rcx_6 != 0)
    int32_t temp3_1 = *(rcx_6 + 0xc)
    *(rcx_6 + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*rcx_6 + 8))(rcx_6, 1)

int64_t* rcx_7 = arg1[2]

if (rcx_7 != 0)
    int32_t temp5_1 = *(rcx_7 + 0xc)
    *(rcx_7 + 0xc) -= 1
    
    if (temp5_1 == 1)
        (*(*rcx_7 + 8))(rcx_7, 1)

*arg1 = &data_142edf448

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
