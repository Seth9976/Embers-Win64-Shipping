// 函数: sub_14090e2a0
// 地址: 0x14090e2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e1ce68
char rbp = arg2.b
arg1[1] = &data_142e1ce98
int64_t* rcx = arg1[0x1a]

if (rcx != 0)
    arg2.b = 1
    arg2 = (*(*rcx + 0x10))(rcx, arg2)
    int64_t* rcx_1 = arg1[0x1a]
    
    if (rcx_1 != 0)
        arg2 = (*(*rcx_1 + 0x20))(rcx_1, 1)

sub_1409138e0(&arg1[1], arg2)

while (arg1[0x19] != 0)
    int64_t* rcx_3 = arg1[0x19]
    arg1[0x19] = *rcx_3
    j_sub_140a74f90(rcx_3)

sub_14090db80(&arg1[0x16])
sub_14090da70(&arg1[0x14])
arg1[0x13].d = 0
int64_t rcx_6 = arg1[0x12]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_14090fe30(&arg1[0xa], 0)
int64_t rcx_8 = arg1[0xe]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

int64_t rcx_9 = arg1[0xa]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_140596d80(&arg1[8])
int64_t rcx_11 = arg1[3]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

arg1[1] = &data_142e1ce40
*arg1 = &data_142d565e8

if ((rbp & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
