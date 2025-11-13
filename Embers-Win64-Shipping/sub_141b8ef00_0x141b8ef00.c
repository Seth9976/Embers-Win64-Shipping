// 函数: sub_141b8ef00
// 地址: 0x141b8ef00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x26]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

int64_t rcx_2 = arg1[0x21]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_140660b20(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
