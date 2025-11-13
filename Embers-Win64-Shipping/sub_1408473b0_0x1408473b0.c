// 函数: sub_1408473b0
// 地址: 0x1408473b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_140846450(&arg1[0x23])
sub_140846240(&arg1[0x20])
int64_t rcx_2 = arg1[0x1e]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int32_t i_1 = arg1[0x1d].d
void* rcx_3 = arg1[0x1c]

if (i_1 != 0)
    int64_t* rdi_1 = rcx_3 + 0x10
    int32_t i
    
    do
        sub_140745ac0(rdi_1)
        rdi_1 = &rdi_1[4]
        i = i_1
        i_1 -= 1
    while (i != 1)
    rcx_3 = arg1[0x1c]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

int64_t rcx_5 = arg1[0x1a]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

sub_140846510(&arg1[0x18])
int64_t rcx_7 = arg1[0x16]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_140745ac0(&arg1[0x13])
arg1[0x12].d = 0
int64_t rcx_9 = arg1[0x11]

if (rcx_9 != 0)
    sub_140a74f90(rcx_9)

sub_140846970(&arg1[9])
sub_140745ac0(&arg1[7])
int64_t result = sub_140745ac0(&arg1[5])
int64_t rcx_13 = arg1[2]

if (rcx_13 != 0)
    result = sub_140a74f90(rcx_13)

int64_t rcx_14 = *arg1

if (rcx_14 == 0)
    return result

return sub_140a74f90(rcx_14)
