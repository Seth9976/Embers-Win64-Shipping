// 函数: sub_140e535a0
// 地址: 0x140e535a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140745b20(arg1 + 0x40)
sub_140745b20(arg1 + 0x30)
sub_140745b20(arg1 + 0x20)
uint64_t result = sub_140745b20(arg1 + 0x10)
int64_t* rbx = *(arg1 + 8)

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        result = (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            return (*(*rbx + 8))(rbx, 1)

return result
