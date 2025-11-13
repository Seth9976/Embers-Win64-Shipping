// 函数: sub_141b84e00
// 地址: 0x141b84e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x7e]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140745b20(&arg1[0x7b])
sub_140745b20(&arg1[0x77])
int64_t* rcx_4 = arg1[0x75]

if (rcx_4 != 0)
    int32_t temp1_1 = *(rcx_4 + 0xc)
    *(rcx_4 + 0xc) -= 1
    
    if (temp1_1 == 1)
        (*(*rcx_4 + 8))(rcx_4, 1)

int64_t* rcx_5 = arg1[0x73]

if (rcx_5 != 0)
    int32_t temp3_1 = *(rcx_5 + 0xc)
    *(rcx_5 + 0xc) -= 1
    
    if (temp3_1 == 1)
        (*(*rcx_5 + 8))(rcx_5, 1)

return sub_1406922a0(arg1) __tailcall
