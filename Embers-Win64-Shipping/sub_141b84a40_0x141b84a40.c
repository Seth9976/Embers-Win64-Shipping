// 函数: sub_141b84a40
// 地址: 0x141b84a40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1[0x8f]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp3_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi + 8))(rdi, 1)

int64_t* rdi_1 = arg1[0x8d]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp4_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140745b20(&arg1[0x8a])
sub_140745b20(&arg1[0x88])
sub_14094b310(&arg1[0x86])
int64_t* rdi_2 = arg1[0x83]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t rax_7 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (rax_7 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

int64_t* rdi_3 = arg1[0x80]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rsi_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, zx.q(rsi_1))

sub_140745b20(&arg1[0x7d])
sub_140745b20(&arg1[0x78])
int64_t* rdi_4 = arg1[0x75]

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t temp6_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (temp6_1 == 1)
            (*(*rdi_4 + 8))(rdi_4, 1)

return sub_1406922a0(arg1) __tailcall
