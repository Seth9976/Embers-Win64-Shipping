// 函数: sub_140a3d470
// 地址: 0x140a3d470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e5e0a8
sub_140a45450(arg1, arg3)
char rax_1 = (*arg1)[0x42](arg1)

if (rax_1 == 0)
    *(arg1 + 0x29) |= 1
    
    if (arg1[0x1b].b == rax_1 && ((arg1[0x14].d u>> 5).b & 1) == 0)
        arg1[0x1b].b = 0

int64_t rcx_1 = arg1[0x17]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t* rcx_2 = arg1[0x16]

if (rcx_2 != 0)
    (**rcx_2)(rcx_2, 1)

int64_t rcx_3 = arg1[0x12]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_140b4cb40(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
