// 函数: sub_1408490b0
// 地址: 0x1408490b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ddae48
int64_t rcx = arg1[0xa2]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0xa0]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1408473b0(&arg1[0x7b])
sub_1405d1550(&arg1[0x7a])
sub_140883050(&arg1[0x47])
int32_t i_1 = arg1[0x46].d
void*** rdi = arg1[0x45]

if (i_1 != 0)
    int32_t i
    
    do
        sub_140883050(rdi)
        rdi = &rdi[0x2e]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = arg1[0x45]

if (rdi != 0)
    sub_140a74f90(rdi)

int64_t rcx_7 = arg1[0x43]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_1408461e0(&arg1[0x3a])
int64_t rcx_9 = arg1[0x37]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_14081ccd0(&arg1[0x1f])
sub_14081ccd0(&arg1[8])
sub_140d163b0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
