// 函数: sub_140f9b4a0
// 地址: 0x140f9b4a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(&arg1[0x80])
sub_140745b20(&arg1[0x7d])
sub_140745b20(&arg1[0x7a])
sub_140745b20(&arg1[0x78])
sub_140745b20(&arg1[0x76])
int64_t* rcx_5 = arg1[0x75]

if (rcx_5 != 0)
    int32_t temp0_1 = *(rcx_5 + 0xc)
    *(rcx_5 + 0xc) -= 1
    
    if (temp0_1 == 1)
        (*(*rcx_5 + 8))(rcx_5, 1)

int64_t* rbx = arg1[0x73]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

return sub_1406922a0(arg1) __tailcall
