// 函数: sub_140746c90
// 地址: 0x140746c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = arg1[0x3a]
*arg1 = &data_142d9efc0
sub_1405c2d80(&data_143a2d488, rdx)
sub_1405c2d80(&data_143a2d4a0, arg1[0x3b])
DeleteCriticalSection(&arg1[0x33])
sub_140596e10(&arg1[0x31])
DeleteCriticalSection(&arg1[0x2c])
int64_t rcx_3 = arg1[0x2a]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

DeleteCriticalSection(&arg1[0x25])
sub_140596e10(&arg1[0x23])
arg1[0x22].d = 0
int64_t rcx_6 = arg1[0x21]

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

sub_140745b90(&arg1[0x19])
return sub_1407469d0(arg1) __tailcall
