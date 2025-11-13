// 函数: sub_140de0590
// 地址: 0x140de0590
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec9390
sub_140691a20(&arg1[0xe8])
sub_140691a20(&arg1[0xd7])
sub_140691a20(&arg1[0xc6])
sub_140691a20(&arg1[0xb5])
sub_140691a20(&arg1[0xa4])
int64_t* rbx = arg1[0xa3]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg1[0x9e]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140691a20(&arg1[0x89])
sub_140691a20(&arg1[0x78])
sub_140691a20(&arg1[0x67])
sub_140691a20(&arg1[0x56])
sub_140691a20(&arg1[0x45])
sub_140691a20(&arg1[0x34])
sub_140691a20(&arg1[0x23])
sub_140691a20(&arg1[0x12])
sub_140691a20(&arg1[1])
*arg1 = &data_142d8ad00
return &data_142d8ad00
