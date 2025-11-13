// 函数: sub_140e9f8a0
// 地址: 0x140e9f8a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142edb548
sub_140745b20(&arg1[0xf])
sub_140596d80(&arg1[0xa])
sub_140596d80(&arg1[8])
int64_t* rdi = arg1[6]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140745b20(&arg1[3])
int64_t* rcx_6 = arg1[2]

if (rcx_6 != 0)
    int32_t temp1_1 = *(rcx_6 + 0xc)
    *(rcx_6 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_6 + 8))(rcx_6, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
