// 函数: sub_140e98940
// 地址: 0x140e98940
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0xa6]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp1_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140745b20(&arg1[0x9a])

if (*(arg1 + 0x4bc) != 0)
    *(arg1 + 0x4bc) = 0

sub_140745b20(&arg1[0x95])
int64_t* rdi_1 = arg1[0x93]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140745b20(&arg1[0x8d])
int64_t* rdi_2 = arg1[0x8b]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp5_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

sub_140745b20(&arg1[0x85])
sub_140745b20(&arg1[0x77])
sub_140745b20(&arg1[0x75])
return sub_1406922a0(arg1) __tailcall
