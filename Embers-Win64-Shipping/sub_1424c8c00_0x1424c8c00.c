// 函数: sub_1424c8c00
// 地址: 0x1424c8c00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[7]

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t i_1 = arg1[6].d
void* rcx_1 = arg1[5]

if (i_1 != 0)
    int64_t* rbx_1 = rcx_1 + 0x30
    int32_t i
    
    do
        sub_141e911f0(rbx_1)
        rbx_1 = &rbx_1[0xf]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_1 = arg1[5]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
