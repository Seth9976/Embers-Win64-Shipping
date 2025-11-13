// 函数: sub_140fdbd10
// 地址: 0x140fdbd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x10)
int32_t i_1 = *(arg1 + 0x18)

if (i_1 != 0)
    int64_t* rbx_1 = rcx + 8
    int32_t i
    
    do
        sub_14081c910(rbx_1)
        rbx_1 = &rbx_1[3]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx = *(arg1 + 0x10)

if (rcx != 0)
    sub_140a74f90(rcx)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
