// 函数: sub_142cb4680
// 地址: 0x142cb4680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = data_143ce39b8
int32_t i_1 = data_143ce39c0

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 0x18
    int32_t i
    
    do
        sub_1405ae080(&rbx_1[4])
        sub_140745ac0(rbx_1)
        sub_140745ac0(&rbx_1[-2])
        rbx_1 = &rbx_1[0x11]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = data_143ce39b8

if (rcx == 0)
    return 

return sub_140a74f90(rcx) __tailcall
