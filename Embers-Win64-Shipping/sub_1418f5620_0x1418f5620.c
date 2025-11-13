// 函数: sub_1418f5620
// 地址: 0x1418f5620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ff1d98
int64_t* rcx = arg1[0x17]

if (rcx != 0)
    (**rcx)(rcx, 1)

int64_t rcx_1 = arg1[0x18]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

int64_t rcx_2 = arg1[0x15]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

arg1[0x14].d = 0
int64_t rcx_3 = arg1[0x13]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_1407547c0(&arg1[0xb], 0)
int64_t rcx_5 = arg1[0xf]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

int64_t rcx_6 = arg1[0xb]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_140dde9c0(&arg1[6])
*arg1 = &data_142ef5810

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
