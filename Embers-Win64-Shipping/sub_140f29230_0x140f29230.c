// 函数: sub_140f29230
// 地址: 0x140f29230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x61]
int32_t i_2 = arg1[0x62].d

if (i_2 != 0)
    int64_t* rdi_1 = rcx + 8
    int32_t i
    
    do
        sub_140745b20(rdi_1)
        rdi_1 = &rdi_1[3]
        i = i_2
        i_2 -= 1
    while (i != 1)
    rcx = arg1[0x61]

if (rcx != 0)
    sub_140a74f90(rcx)

int32_t i_3 = arg1[0x60].d
void* rcx_2 = arg1[0x5f]

if (i_3 != 0)
    int64_t* rdi_2 = rcx_2 + 8
    int32_t i_1
    
    do
        sub_140745b20(rdi_2)
        rdi_2 = &rdi_2[3]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    rcx_2 = arg1[0x5f]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_4 = arg1[0x5c]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0x5a]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140dde9c0(&arg1[0x57])
arg1[0x55] = &data_142d82a88
sub_140de0ac0(arg1)

if ((arg2 & 1) == 0 || (arg2 & 4) != 0)
    return arg1

sub_140a74f90(arg1)
return arg1
