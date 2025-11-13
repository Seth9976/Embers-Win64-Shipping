// 函数: sub_141aff480
// 地址: 0x141aff480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg1[0x43].d
int64_t* rbx = arg1[0x42]

if (i_1 != 0)
    int32_t i
    
    do
        int64_t rcx = *rbx
        
        if (rcx != 0)
            sub_140a74f90(rcx)
        
        rbx = &rbx[2]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[0x42]

if (rbx != 0)
    sub_140a74f90(rbx)

arg1[0x32] = &data_14302e030
int64_t rcx_2 = arg1[0x3f]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[0x32] = &data_142d6a040
int64_t rcx_3 = arg1[0x3d]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_1405ae180(&arg1[0x33])
sub_141afd200(&arg1[0x1c])
int64_t* rbx_1 = arg1[0x1b]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_1408ec310(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
