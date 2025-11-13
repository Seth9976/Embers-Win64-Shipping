// 函数: sub_141b4ca10
// 地址: 0x141b4ca10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0x17]

if (rcx != 0)
    sub_140a74f90(rcx)

if (arg1[0x16].b != 0)
    arg1[0x16].b = 0

int64_t* rbx = arg1[0x14]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg1[0x12]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

arg1[0xe] = &data_142dda848
sub_1405d1550(&arg1[0x10])
sub_1419948a0(&arg1[0xe])
arg1[9] = &data_142e0ef98
sub_14081c9d0(&arg1[0xb])
sub_1419948a0(&arg1[9])
arg1[4] = &data_142dda848
sub_1405d1550(&arg1[6])
sub_1419948a0(&arg1[4])
*arg1 = &data_14306c448
int64_t* rbx_2 = arg1[2]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        (**rbx_2)(rbx_2)
        int32_t temp5_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp5_1 == 1)
            (*(*rbx_2 + 8))(rbx_2, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
