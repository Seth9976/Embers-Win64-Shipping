// 函数: sub_14094f460
// 地址: 0x14094f460
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e266d8
arg1[0xe].d = 0
int64_t rcx = arg1[0xd]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_14094b400(&arg1[5])
int32_t i_1 = arg1[2].d
void* rbx = arg1[1]

if (i_1 != 0)
    int32_t i
    
    do
        sub_14091b530(rbx)
        rbx += 0xb8
        i = i_1
        i_1 -= 1
    while (i != 1)
    rbx = arg1[1]

if (rbx != 0)
    sub_140a74f90(rbx)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
