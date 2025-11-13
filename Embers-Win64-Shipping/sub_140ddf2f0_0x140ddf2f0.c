// 函数: sub_140ddf2f0
// 地址: 0x140ddf2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec93d8
int64_t* rbx = arg1[0xdf]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140691a20(&arg1[0xc7])
sub_140691a20(&arg1[0xb6])
sub_140691a20(&arg1[0xa5])
sub_140691a20(&arg1[0x94])
sub_140691a20(&arg1[0x83])
sub_140691a20(&arg1[0x72])
sub_140691a20(&arg1[0x61])
sub_140691a20(&arg1[0x50])
arg1[1] = &data_142d8ad20
sub_140691a20(&arg1[0x35])
sub_140691a20(&arg1[0x24])
sub_140691a20(&arg1[0x13])
sub_140691a20(&arg1[2])
arg1[1] = &data_142d8ad00
*arg1 = &data_142d8ad00
return &data_142d8ad00
