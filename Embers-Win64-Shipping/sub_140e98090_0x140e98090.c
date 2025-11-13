// 函数: sub_140e98090
// 地址: 0x140e98090
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x20a) != 0)
    *(arg1 + 0x20a) = 0

sub_140745b20(arg1 + 0x1f8)
sub_140745b20(arg1 + 0x1e0)
sub_140745b20(arg1 + 0x1d0)
int64_t* rdi = *(arg1 + 0x1c8)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = *(arg1 + 0x1a8)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

return sub_140ddea30(arg1) __tailcall
