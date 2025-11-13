// 函数: sub_140f23db0
// 地址: 0x140f23db0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[3]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1 == 1)
            (*(*rbx + 8))(rbx, 1)
        
        *arg1 = &data_142d4cb20
        return &data_142d4cb20

*arg1 = &data_142d4cb20
return &data_142d4cb20
