// 函数: sub_140ee3f60
// 地址: 0x140ee3f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ee0d20
sub_140de06c0(&arg1[0x11])
int64_t* rbx = arg1[0x10]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140ee3ef0(&arg1[3])
int64_t* rcx_4 = arg1[2]

if (rcx_4 != 0)
    int32_t temp1_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, 1)

*arg1 = &data_142edf448
return &data_142edf448
