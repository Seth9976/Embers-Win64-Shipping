// 函数: sub_140ddf600
// 地址: 0x140ddf600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec93c0
int64_t* rbx = arg1[0x16d]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140691a20(&arg1[0x158])
arg1[0x135] = &data_142ec9378
sub_140691a20(&arg1[0x147])
sub_140691a20(&arg1[0x136])
arg1[0x135] = &data_142d8ad00
sub_140de0500(&arg1[0x9b])
sub_140de0500(&arg1[1])
*arg1 = &data_142d8ad00
return &data_142d8ad00
