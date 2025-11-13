// 函数: sub_141d8ea20
// 地址: 0x141d8ea20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = arg1[0xc]

if (rcx != 0)
    sub_140a74f90(rcx)

arg1[9] = &data_142e1f570
int64_t rcx_1 = arg1[6]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rcx_2 = arg1[4]

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

int64_t* rcx_3 = arg1[3]

if (rcx_3 != 0)
    (**rcx_3)(rcx_3, 1)

int64_t* rcx_4 = arg1[2]

if (rcx_4 != 0)
    (**rcx_4)(rcx_4, 1)

sub_1423bb350(&arg1[1])
*arg1 = &data_1432388f0

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
