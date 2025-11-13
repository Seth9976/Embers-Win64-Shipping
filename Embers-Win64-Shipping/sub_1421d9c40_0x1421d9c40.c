// 函数: sub_1421d9c40
// 地址: 0x1421d9c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1433026b8
sub_1421df910(arg1)
int64_t rcx = arg1[0x15]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t rcx_1 = arg1[0xd]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

sub_1408464b0(&arg1[0xb])
sub_1408464b0(&arg1[9])
int64_t rcx_4 = arg1[7]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[5]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int32_t i_1 = arg1[4].d
void*** rdi = arg1[3]

if (i_1 != 0)
    int32_t i
    
    do
        sub_1423baf20(rdi)
        rdi = &rdi[6]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rdi = arg1[3]

if (rdi != 0)
    sub_140a74f90(rdi)

*arg1 = &data_142d44d70
void* rcx_8 = data_143e1a338

if (rcx_8 != 0 && arg1[1].b != 0)
    sub_140bb6e00(rcx_8, arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
