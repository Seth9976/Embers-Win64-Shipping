// 函数: sub_14172d6c0
// 地址: 0x14172d6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142fc56a8
int64_t* rbx = arg1[4]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t rsi_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (rsi_1 == 1)
            (*(*rbx + 8))(rbx, zx.q(rsi_1))

*arg1 = &data_142fc3cd0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
