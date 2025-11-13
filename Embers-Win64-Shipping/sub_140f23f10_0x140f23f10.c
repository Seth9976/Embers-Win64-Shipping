// 函数: sub_140f23f10
// 地址: 0x140f23f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2c8) != 0)
    *(arg1 + 0x2c8) = 0

if (*(arg1 + 0x2a8) != 0)
    *(arg1 + 0x2a8) = 0

if (*(arg1 + 0x289) != 0)
    *(arg1 + 0x289) = 0

int64_t* rdi = *(arg1 + 0x280)

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = *(arg1 + 0x270)

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140745b20(arg1 + 0x258)
sub_140745b20(arg1 + 0x248)
sub_140745b20(arg1 + 0x238)
sub_140745b20(arg1 + 0x220)
int64_t* rdi_2 = *(arg1 + 0x210)

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp6_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

sub_140745b20(arg1 + 0x1e0)
int64_t* rdi_3 = *(arg1 + 0x1a8)

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t temp7_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (temp7_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, 1)

return sub_140ddea30(arg1) __tailcall
