// 函数: sub_140f23a70
// 地址: 0x140f23a70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(&arg1[0x90])
sub_140745b20(&arg1[0x8e])
int64_t* rdi = arg1[0x8d]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0x8b]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

int64_t* rdi_2 = arg1[0x89]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp6_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

sub_140745b20(&arg1[0x86])
int64_t* rcx_9 = arg1[0x7d]

if (rcx_9 != 0)
    int32_t temp5_1 = *(rcx_9 + 0xc)
    *(rcx_9 + 0xc) -= 1
    
    if (temp5_1 == 1)
        (*(*rcx_9 + 8))(rcx_9, 1)

int64_t* rcx_10 = arg1[0x78]

if (rcx_10 != 0)
    int32_t temp7_1 = *(rcx_10 + 0xc)
    *(rcx_10 + 0xc) -= 1
    
    if (temp7_1 == 1)
        (*(*rcx_10 + 8))(rcx_10, 1)

sub_140745b20(&arg1[0x75])
return sub_140f24e90(arg1) __tailcall
