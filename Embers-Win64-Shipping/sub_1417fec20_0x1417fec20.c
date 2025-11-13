// 函数: sub_1417fec20
// 地址: 0x1417fec20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x60)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp2_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp2_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_140745b20(arg1 + 0x48)
sub_140745b20(arg1 + 0x38)
sub_140745b20(arg1 + 0x28)
uint64_t result = sub_140745b20(arg1 + 0x18)
int64_t* rcx_6 = *(arg1 + 0x10)

if (rcx_6 != 0)
    int32_t temp1_1 = *(rcx_6 + 0xc)
    *(rcx_6 + 0xc) -= 1
    
    if (temp1_1 == 1)
        return (*(*rcx_6 + 8))(rcx_6, 1)

return result
