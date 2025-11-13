// 函数: sub_140e978a0
// 地址: 0x140e978a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x320) != 0)
    *(arg1 + 0x320) = 0

if (*(arg1 + 0x300) != 0)
    *(arg1 + 0x300) = 0

if (*(arg1 + 0x2e0) != 0)
    *(arg1 + 0x2e0) = 0

sub_140745b20(arg1 + 0x2b8)
sub_140745b20(arg1 + 0x2a0)
int64_t* rdi = *(arg1 + 0x290)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140745b20(arg1 + 0x260)
int64_t* rdi_1 = *(arg1 + 0x250)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140745b20(arg1 + 0x220)
sub_140745b20(arg1 + 0x208)
sub_140745b20(arg1 + 0x1d8)
sub_140745b20(arg1 + 0x1c0)

if (*(arg1 + 0x1bc) != 0)
    *(arg1 + 0x1bc) = 0

int64_t* rdi_2 = *(arg1 + 0x1a8)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp5_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

return sub_140ddea30(arg1) __tailcall
