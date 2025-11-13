// 函数: sub_140f67c70
// 地址: 0x140f67c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ee86c0
arg1[0x55] = &data_142ee8900
sub_140745b20(&arg1[0x8e])
sub_140745b20(&arg1[0x8b])
sub_140745b20(&arg1[0x87])
sub_140745b20(&arg1[0x85])
int64_t* rcx_4 = arg1[0x82]

if (rcx_4 != 0)
    int32_t temp0_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, 1)

int64_t* rdi = arg1[0x7f]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140745b20(&arg1[0x7c])
sub_140745b20(&arg1[0x7a])
int64_t* rdi_1 = arg1[0x79]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp5_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg1[0x77]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp6_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

sub_140745b20(&arg1[0x74])
sub_140745b20(&arg1[0x72])
sub_140745b20(&arg1[0x70])
sub_140745b20(&arg1[0x6e])
sub_140745b20(&arg1[0x6c])
sub_140745b20(&arg1[0x6a])
sub_140745b20(&arg1[0x67])
sub_140745b20(&arg1[0x64])
sub_140745b20(&arg1[0x61])
sub_140745b20(&arg1[0x5e])
sub_140745b20(&arg1[0x5b])
sub_140745b20(&arg1[0x58])
void* rdi_3 = arg1[0x56]

if (rdi_3 != 0)
    sub_140f67280(rdi_3)
    j_sub_140a74f90(rdi_3)

return sub_140de0ac0(arg1) __tailcall
