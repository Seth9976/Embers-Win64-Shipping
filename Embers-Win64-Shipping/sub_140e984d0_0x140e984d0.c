// 函数: sub_140e984d0
// 地址: 0x140e984d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142edb518
int64_t* rbx = arg1[0xf]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t* rbx_1 = arg1[0xd]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        (**rbx_1)(rbx_1)
        int32_t temp4_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp4_1 == 1)
            (*(*rbx_1 + 8))(rbx_1, 1)

sub_140745b20(&arg1[9])
sub_140745b20(&arg1[7])
sub_140745b20(&arg1[5])
uint64_t result = sub_140745b20(&arg1[3])
int64_t* rcx_8 = arg1[2]

if (rcx_8 != 0)
    int32_t temp3_1 = *(rcx_8 + 0xc)
    *(rcx_8 + 0xc) -= 1
    
    if (temp3_1 == 1)
        return (*(*rcx_8 + 8))(rcx_8, 1)

return result
