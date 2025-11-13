// 函数: sub_140a9db20
// 地址: 0x140a9db20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e65250
int64_t* rcx = arg1[0x4a]

if (rcx != 0)
    (*(*rcx + 0x20))(rcx, 1)

DeleteCriticalSection(&arg1[0x4b])
void* i = arg1[0x42]

while (i != 0)
    void* i_2 = i
    i = *(i + 0x10000)
    j_sub_140a74f90(i_2)

__builtin_memset(&arg1[0x42], 0, 0x14)
DeleteCriticalSection(&arg1[0x45])
void* i_1 = arg1[0x3a]

while (i_1 != 0)
    void* i_3 = i_1
    i_1 = *(i_1 + 0x1b0000)
    j_sub_140a74f90(i_3)

__builtin_memset(&arg1[0x3a], 0, 0x14)
DeleteCriticalSection(&arg1[0x3d])
sub_140a990c0(&arg1[0x2d])
sub_140a990c0(&arg1[0x22])
sub_1405ae100(&arg1[0x18])
int64_t rcx_7 = arg1[0x16]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

sub_140a3c430(&arg1[2])
sub_140a3c490(&arg1[1])
*arg1 = &data_142d565e8

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
