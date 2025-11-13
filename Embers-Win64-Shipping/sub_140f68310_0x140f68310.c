// 函数: sub_140f68310
// 地址: 0x140f68310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ee7778

if (arg1[0xf2].b != 0)
    arg1[0xf2].b = 0

sub_140745b20(&arg1[0xef])
sub_140745b20(&arg1[0xec])
sub_140745b20(&arg1[0xe9])
sub_140745b20(&arg1[0xe6])
sub_140745b20(&arg1[0xe1])
sub_140745b20(&arg1[0xde])
sub_140745b20(&arg1[0xdb])
sub_140745b20(&arg1[0xd8])
int64_t* rdi = arg1[0xd5]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t rax_3 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (rax_3 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_140745b20(&arg1[0xd2])
sub_140745b20(&arg1[0xce])
sub_140745b20(&arg1[0xc9])
sub_140745b20(&arg1[0xc4])
sub_140745b20(&arg1[0xc0])
int64_t* rdi_1 = arg1[0xbe]

if (rdi_1 != 0)
    rdi_1[1].d -= 1
    
    if (rdi_1[1].d == 1)
        (**rdi_1)(rdi_1)
        int32_t temp3_1 = *(rdi_1 + 0xc)
        *(rdi_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rdi_1 + 8))(rdi_1, 1)

sub_140745b20(&arg1[0xb8])
sub_140745b20(&arg1[0xb4])
int64_t* rdi_2 = arg1[0xb0]

if (rdi_2 != 0)
    rdi_2[1].d -= 1
    
    if (rdi_2[1].d == 1)
        (**rdi_2)(rdi_2)
        int32_t temp4_1 = *(rdi_2 + 0xc)
        *(rdi_2 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rdi_2 + 8))(rdi_2, 1)

sub_140de06c0(&arg1[0x5c])
void* rdi_3 = arg1[0x5b]

if (rdi_3 != 0)
    sub_140f67a30(rdi_3)
    j_sub_140a74f90(rdi_3)

sub_140745b20(&arg1[0x59])
int64_t* rdi_4 = arg1[0x56]

if (rdi_4 != 0)
    rdi_4[1].d -= 1
    
    if (rdi_4[1].d == 1)
        (**rdi_4)(rdi_4)
        int32_t rsi_1 = *(rdi_4 + 0xc)
        *(rdi_4 + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rdi_4 + 8))(rdi_4, zx.q(rsi_1))

return sub_140de0ac0(arg1) __tailcall
