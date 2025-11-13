// 函数: sub_1423bbb00
// 地址: 0x1423bbb00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[0x17]

if (rbx != 0)
    rbx[1].d -= 1
    
    if (rbx[1].d == 1)
        (**rbx)(rbx)
        int32_t temp1_1 = *(rbx + 0xc)
        *(rbx + 0xc) -= 1
        
        if (temp1_1 == 1)
            (*(*rbx + 8))(rbx, 1)

sub_1405d1550(&arg1[0x11])
arg1[9] = &data_142f18c08
sub_1405d1550(&arg1[0xa])
*arg1 = &data_142e09230
sub_1405d1550(&arg1[4])
sub_1405d1550(&arg1[3])
sub_1405d1550(&arg1[2])
sub_1419948a0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
