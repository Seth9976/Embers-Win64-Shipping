// 函数: ??1CDebugSSectionWriter@@UEAA@XZ
// 地址: 0x140ee41f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ee1180
arg1[0x55] = &data_142ee13c0
sub_140745b20(&arg1[0xa7])
sub_140745b20(&arg1[0xa4])
sub_140745b20(&arg1[0xa0])
sub_140745b20(&arg1[0x9d])
sub_140745b20(&arg1[0x9b])
int64_t* rdi = arg1[0x9a]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rcx_7 = arg1[0x98]

if (rcx_7 != 0)
    int32_t temp1_1 = *(rcx_7 + 0xc)
    *(rcx_7 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_7 + 8))(rcx_7, 1)

int64_t* rdi_1 = arg1[0x96]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp5_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140745b20(&arg1[0x93])
sub_140745b20(&arg1[0x90])
sub_140745b20(&arg1[0x8e])
sub_140745b20(&arg1[0x8c])
sub_140745b20(&arg1[0x8a])
sub_140745b20(&arg1[0x88])
sub_140745b20(&arg1[0x85])
sub_140745b20(&arg1[0x82])
sub_140745b20(&arg1[0x7f])
sub_140745b20(&arg1[0x7c])
sub_140745b20(&arg1[0x79])
sub_140745b20(&arg1[0x76])
sub_140745b20(&arg1[0x73])
sub_140745b20(&arg1[0x70])
sub_140745b20(&arg1[0x6c])
int64_t* rdi_2 = arg1[0x6a]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp7_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

sub_140745b20(&arg1[0x64])
int64_t* rdi_3 = arg1[0x60]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp8_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp8_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

void* rdi_4 = arg1[0x58]

if (rdi_4 != 0)
    sub_140f67280(rdi_4)
    j_sub_140a74f90(rdi_4)

int64_t* rdi_5 = arg1[0x57]

if (rdi_5 != 0)
    rdi_5[1].d -= 1
    
    if (rdi_5[1].d == 1)
        (**rdi_5)(rdi_5)
        int32_t temp10_1 = *(rdi_5 + 0xc)
        *(rdi_5 + 0xc) -= 1
        
        if (temp10_1 == 1)
            (*(*rdi_5 + 8))(rdi_5, 1)

return sub_140de0ac0(arg1) __tailcall
