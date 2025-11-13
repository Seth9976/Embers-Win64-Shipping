// 函数: sub_141011af0
// 地址: 0x141011af0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t i_1 = 4
*arg1 = &data_142effb48
void* rdi = &arg1[0xe]
int64_t i = 4
void* r14 = &arg1[0x12]

do
    void* rcx = *(r14 - 8)
    r14 -= 8
    i -= 1
    
    if (rcx != 0)
        (*(*(rcx + 0x20) + 0x10))(rcx + 0x20)
while (i != 0)

do
    void* rcx_2 = *(rdi - 8)
    rdi -= 8
    i_1 -= 1
    
    if (rcx_2 != 0)
        (*(*(rcx_2 + 0x20) + 0x10))(rcx_2 + 0x20)
while (i_1 != 0)

sub_14081c9d0(&arg1[9])
int32_t i_3 = arg1[7].d
int64_t* rbx = arg1[6]

if (i_3 != 0)
    int32_t i_2
    
    do
        sub_1405d1550(rbx)
        rbx = &rbx[4]
        i_2 = i_3
        i_3 -= 1
    while (i_2 != 1)
    rbx = arg1[6]

if (rbx != 0)
    sub_140a74f90(rbx)

*arg1 = &data_142d3ff08

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
