// 函数: sub_140e54730
// 地址: 0x140e54730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(&arg1[0x9c])
sub_140745b20(&arg1[0x99])
sub_140745b20(&arg1[0x95])
sub_140745b20(&arg1[0x90])
int64_t* rdi = arg1[0x8e]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140745b20(&arg1[0x88])
int64_t* rdi_1 = arg1[0x84]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp5_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg1[0x7c]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp7_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rcx_11 = arg1[0x7a]

if (rcx_11 != 0)
    int32_t temp6_1 = *(rcx_11 + 0xc)
    *(rcx_11 + 0xc) -= 1
    
    if (temp6_1 == 1)
        (*(*rcx_11 + 8))(rcx_11, 1)

sub_140745b20(&arg1[0x77])
int64_t* rdi_3 = arg1[0x74]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rsi_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, zx.q(rsi_1))

arg1[0x72] = &data_142e1cfa8
return sub_1406922a0(arg1) __tailcall
