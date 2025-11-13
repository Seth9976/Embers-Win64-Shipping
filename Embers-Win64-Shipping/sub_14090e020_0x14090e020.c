// 函数: sub_14090e020
// 地址: 0x14090e020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[5]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t rcx_2 = arg1[1]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

*arg1 = &data_142e1cfa8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
