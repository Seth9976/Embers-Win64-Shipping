// 函数: sub_141b841a0
// 地址: 0x141b841a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140596d80(arg1 + 0x310)
sub_140745b20(arg1 + 0x300)
int64_t* rdi = *(arg1 + 0x2f0)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140596d80(arg1 + 0x2d8)

if (*(arg1 + 0x2d3) != 0)
    *(arg1 + 0x2d3) = 0

if (*(arg1 + 0x2d1) != 0)
    *(arg1 + 0x2d1) = 0

sub_140745b20(arg1 + 0x2c0)
sub_140745b20(arg1 + 0x2a8)
sub_140745b20(arg1 + 0x290)
sub_140745b20(arg1 + 0x258)
int64_t* rdi_1 = *(arg1 + 0x250)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140745b20(arg1 + 0x238)
sub_140745b20(arg1 + 0x220)
sub_140745b20(arg1 + 0x208)
sub_140745b20(arg1 + 0x1f0)
int64_t* rdi_2 = *(arg1 + 0x1d8)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rax_7 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

sub_140745b20(arg1 + 0x1c0)
int64_t* rdi_3 = *(arg1 + 0x1a8)

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rsi_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, zx.q(rsi_1))

return sub_140ddea30(arg1) __tailcall
