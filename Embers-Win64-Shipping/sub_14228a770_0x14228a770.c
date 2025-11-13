// 函数: sub_14228a770
// 地址: 0x14228a770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = *arg2
arg1[1] = arg2[1]
arg1[2] = arg2[2]
sub_14081d8c0(&arg1[6], &arg2[6])
arg1[0xa] = arg2[0xa]
arg1[0xb] = arg2[0xb]
sub_1405d16e0(&arg1[0xc], *(arg2 + 0x30))
sub_1405d16e0(&arg1[0xe], *(arg2 + 0x38))
void* rbx = &arg1[0x14]
arg1[0x10].b = arg2[0x10].b
void* r14_1 = arg2 - arg1
int64_t i_1 = 6
int64_t i

do
    sub_14081d8c0(rbx, r14_1 + rbx)
    *(rbx + 0x10) = *(r14_1 + rbx + 0x10)
    *(rbx + 0x14) = *(r14_1 + rbx + 0x14)
    sub_1405d16e0(rbx + 0x18, *(r14_1 + rbx + 0x18))
    sub_1405d16e0(rbx + 0x20, *(r14_1 + rbx + 0x20))
    *(rbx + 0x28) = *(r14_1 + rbx + 0x28)
    rbx += 0x38
    i = i_1
    i_1 -= 1
while (i != 1)
sub_14081d8c0(&arg1[0x68], &arg2[0x68])
arg1[0x6c] = arg2[0x6c]
arg1[0x6d] = arg2[0x6d]
sub_1405d16e0(&arg1[0x6e], *(arg2 + 0x1b8))
sub_1405d16e0(&arg1[0x70], *(arg2 + 0x1c0))
arg1[0x72].b = arg2[0x72].b
sub_14081d8c0(&arg1[0x76], &arg2[0x76])
arg1[0x7a] = arg2[0x7a]
arg1[0x7b] = arg2[0x7b]
sub_1405d16e0(&arg1[0x7c], *(arg2 + 0x1f0))
sub_1405d16e0(&arg1[0x7e], *(arg2 + 0x1f8))
arg1[0x80].b = arg2[0x80].b
return arg1
