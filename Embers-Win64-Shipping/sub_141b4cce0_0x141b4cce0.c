// 函数: sub_141b4cce0
// 地址: 0x141b4cce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14306c448
int64_t* rbx = arg1[2]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
