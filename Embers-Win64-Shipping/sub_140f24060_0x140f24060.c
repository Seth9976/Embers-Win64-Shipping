// 函数: sub_140f24060
// 地址: 0x140f24060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(arg1 + 0x310)
sub_140745b20(arg1 + 0x300)
sub_140745b20(arg1 + 0x2e8)
sub_140745b20(arg1 + 0x2c0)

if (*(arg1 + 0x2b0) != 0)
    *(arg1 + 0x2b0) = 0

int64_t* rdi = *(arg1 + 0x298)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = *(arg1 + 0x280)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140745b20(arg1 + 0x268)
sub_140745b20(arg1 + 0x250)
sub_140745b20(arg1 + 0x240)
sub_140745b20(arg1 + 0x230)
sub_140745b20(arg1 + 0x220)
sub_140745b20(arg1 + 0x210)
sub_140745b20(arg1 + 0x200)
sub_140745b20(arg1 + 0x1e0)
sub_140745b20(arg1 + 0x1d0)
sub_140745b20(arg1 + 0x1c0)
sub_140745b20(arg1 + 0x1b0)
sub_140745b20(arg1 + 0x1a0)
return sub_140ddea30(arg1) __tailcall
