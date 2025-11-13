// 函数: sub_140f680d0
// 地址: 0x140f680d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ee8e20
int64_t* rdi = arg1[0xc8]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140745b20(&arg1[0xc4])
sub_140745b20(&arg1[0xc1])
sub_140745b20(&arg1[0xbe])
sub_140745b20(&arg1[0xbb])
sub_140745b20(&arg1[0xb6])
sub_140745b20(&arg1[0xb3])
sub_140745b20(&arg1[0xb0])
sub_140745b20(&arg1[0xad])
int64_t* rdi_1 = arg1[0xaa]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t rax_5 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (rax_5 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140de06c0(&arg1[0x5c])
void* rdi_2 = arg1[0x5b]

if (rdi_2 != 0)
    sub_140f67a30(rdi_2)
    j_sub_140a74f90(rdi_2)

sub_140745b20(&arg1[0x59])
int64_t* rdi_3 = arg1[0x56]

if (rdi_3 != 0)
    rdi_3[1].d -= 1
    
    if (rdi_3[1].d == 1)
        (**rdi_3)(rdi_3)
        int32_t rsi_1 = *(rdi_3 + 0xc)
        *(rdi_3 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_3 + 8))(rdi_3, zx.q(rsi_1))

return sub_140de0ac0(arg1) __tailcall
