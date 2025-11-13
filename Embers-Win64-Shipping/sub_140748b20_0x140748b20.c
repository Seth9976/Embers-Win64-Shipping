// 函数: sub_140748b20
// 地址: 0x140748b20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142d9f348
arg1[0x41].d = 0
sub_1405d16e0(&arg1[0x3f], nullptr)
sub_1405d16e0(&arg1[0x40], nullptr)
sub_1405c2d80(&data_143a2d488, arg1[0x45])
sub_1405c2d80(&data_143a2d4a0, arg1[0x46])
DeleteCriticalSection(&arg1[0x47])
int64_t rcx_3 = arg1[0x43]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

sub_1405ec8a0(&arg1[0x40])
sub_1405d1550(&arg1[0x3f])
int64_t rcx_6 = arg1[0x3d]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rcx_7 = arg1[0x3b]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

DeleteCriticalSection(&arg1[0x33])
sub_140596e10(&arg1[0x31])
DeleteCriticalSection(&arg1[0x2c])
int64_t rcx_11 = arg1[0x2a]

if (rcx_11 != 0)
    sub_140a74f90(rcx_11)

DeleteCriticalSection(&arg1[0x25])
sub_140596e10(&arg1[0x23])
arg1[0x22].d = 0
int64_t rcx_14 = arg1[0x21]

if (rcx_14 != 0)
    sub_140a74f90(rcx_14)

sub_140745b90(&arg1[0x19])
sub_1407469d0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
