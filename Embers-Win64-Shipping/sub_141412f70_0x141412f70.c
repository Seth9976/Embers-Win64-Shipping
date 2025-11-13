// 函数: sub_141412f70
// 地址: 0x141412f70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x10)

if (rbx != 0)
    rbx[0x1a].d -= 1
    
    if (rbx[0x1a].d == 1)
        sub_1405d16e0(rbx, nullptr)
        sub_14081d930(&rbx[1], nullptr)
        sub_1405d16e0(&rbx[2], nullptr)
        sub_141096260(&rbx[3], 0)
        sub_141096040(&rbx[0xd], 0)

int64_t* rbx_1 = *(arg1 + 8)

if (rbx_1 == 0)
    return 

rbx_1[0x1a].d -= 1

if (rbx_1[0x1a].d != 1)
    return 

sub_1405d16e0(rbx_1, nullptr)
sub_14081d930(&rbx_1[1], nullptr)
sub_1405d16e0(&rbx_1[2], nullptr)
sub_141096260(&rbx_1[3], 0)
sub_141096040(&rbx_1[0xd], 0)
