// 函数: sub_140e982f0
// 地址: 0x140e982f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0xd]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

*arg1 = &data_142edba50
sub_140596d80(&arg1[5])
int64_t result = sub_140596d80(&arg1[3])
int64_t* rbx_1 = arg1[2]

if (rbx_1 != 0)
    rbx_1[1].d -= 1
    
    if (rbx_1[1].d == 1)
        result = (**rbx_1)(rbx_1)
        int32_t temp2_1 = *(rbx_1 + 0xc)
        *(rbx_1 + 0xc) -= 1
        
        if (temp2_1 == 1)
            jump(*(*rbx_1 + 8))

return result
