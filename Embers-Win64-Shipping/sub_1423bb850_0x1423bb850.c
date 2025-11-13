// 函数: sub_1423bb850
// 地址: 0x1423bb850
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x13]
int32_t i_1 = arg1[0x14].d

if (i_1 != 0)
    void* rbx_1 = rcx + 8
    int32_t i
    
    do
        sub_1423baa40(rbx_1)
        rbx_1 += 0x168
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = arg1[0x13]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[0x12].d = 0
int64_t rcx_2 = arg1[0x11]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1423bab20(&arg1[9])
*arg1 = &data_142e09230
sub_1405d1550(&arg1[4])
sub_1405d1550(&arg1[3])
sub_1405d1550(&arg1[2])
sub_1419948a0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
