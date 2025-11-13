// 函数: sub_141b837e0
// 地址: 0x141b837e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(&arg1[0x8f])
sub_140745b20(&arg1[0x8d])
int64_t* rdi = arg1[0x8c]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0x8a]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140745b20(&arg1[0x86])
int64_t* rcx_7 = arg1[0x7d]

if (rcx_7 != 0)
    int32_t temp3_1 = *(rcx_7 + 0xc)
    *(rcx_7 + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*rcx_7 + 8))(rcx_7, 1)

int64_t* rcx_8 = arg1[0x78]

if (rcx_8 != 0)
    int32_t temp5_1 = *(rcx_8 + 0xc)
    *(rcx_8 + 0xc) -= 1
    
    if (temp5_1 == 1)
        (*(*rcx_8 + 8))(rcx_8, 1)

sub_140745b20(&arg1[0x75])
return sub_140f24e90(arg1) __tailcall
