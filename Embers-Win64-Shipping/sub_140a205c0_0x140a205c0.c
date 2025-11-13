// 函数: sub_140a205c0
// 地址: 0x140a205c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = &arg1[0x85]
int64_t i_1 = 2
int64_t i

do
    int64_t* rcx = *(rdi - 8)
    rdi -= 0x1f8
    sub_140a4fc50(rcx)
    *(rdi + 0x1f0) = 0
    `vector destructor iterator'(rdi, 0xd0, 2, sub_140594850)
    i = i_1
    i_1 -= 1
while (i != 1)
int64_t rcx_2 = arg1[4]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[1] = &data_142d4ba00
*arg1 = &data_142d565e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
