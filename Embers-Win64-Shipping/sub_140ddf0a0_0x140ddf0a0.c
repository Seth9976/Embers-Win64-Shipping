// 函数: sub_140ddf0a0
// 地址: 0x140ddf0a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ec9210
int64_t* rbx = arg1[0xa6]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg1[0xa1]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp3_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp3_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140691a20(&arg1[0x8a])
sub_140691a20(&arg1[0x79])
sub_140691a20(&arg1[0x68])
sub_140691a20(&arg1[0x57])
sub_140691a20(&arg1[0x46])
sub_140691a20(&arg1[0x35])
sub_140691a20(&arg1[0x24])
sub_140691a20(&arg1[0x13])
sub_140691a20(&arg1[2])
*arg1 = &data_142d8ad00
return &data_142d8ad00
