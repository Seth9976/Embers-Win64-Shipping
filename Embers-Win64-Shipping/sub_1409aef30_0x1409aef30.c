// 函数: sub_1409aef30
// 地址: 0x1409aef30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[1]
int32_t i_1 = arg1[2].d

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 8
    int32_t i
    
    do
        sub_1408464b0(rbx_1)
        rbx_1 = &rbx_1[4]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = arg1[1]

if (rcx != 0)
    sub_140a74f90(rcx)

*arg1 = &data_142e3e590

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
