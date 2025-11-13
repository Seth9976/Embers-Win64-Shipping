// 函数: sub_141d52e80
// 地址: 0x141d52e80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432284a0
arg1[2] = &data_1432284e0
int64_t* rdi = arg1[0x1a]

if (rdi != 0)
    rdi[1].d -= 1
    
    if (rdi[1].d == 1)
        (**rdi)(rdi)
        int32_t temp2_1 = *(rdi + 0xc)
        *(rdi + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rdi + 8))(rdi, 1)

sub_1405d1550(&arg1[0x18])
int64_t* rcx_3 = arg1[0x17]

if (rcx_3 != 0)
    int32_t rax_3 = *(rcx_3 + 0xc)
    *(rcx_3 + 0xc) -= 1
    
    if (rax_3 == 1 && rcx_3 != 0)
        (*(*rcx_3 + 8))(rcx_3, 1)

sub_1405d1550(&arg1[0x11])
sub_1405d1550(&arg1[0x10])
arg1[2] = &data_142e09230
sub_1405d1550(&arg1[6])
sub_1405d1550(&arg1[5])
sub_1405d1550(&arg1[4])
sub_1419948a0(&arg1[2])
*arg1 = &data_142f18c08
sub_1405d1550(&arg1[1])

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
