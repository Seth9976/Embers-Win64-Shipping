// 函数: sub_141eb6810
// 地址: 0x141eb6810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_14325ca68
EnterCriticalSection(&arg1[0x2c])
arg1[0x31] = 0
arg1[0x32] = 0
sub_140865470(&arg1[0x22], 0)

if (arg1 != -0x160)
    LeaveCriticalSection(&arg1[0x2c])

sub_140d15fb0(&arg1[0x21])
arg1[0x20].d = 0
int64_t rcx_4 = arg1[0x1f]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

arg1[0x18].d = 0

if (*(arg1 + 0xc4) != 0)
    sub_1405a5410(&arg1[0x17], 0)

arg1[0x1d].d = 0xffffffff
*(arg1 + 0xec) = 0
sub_14059a8e0(&arg1[0x19], 0)
int64_t rcx_7 = arg1[0x1b]

if (rcx_7 != 0)
    sub_140a74f90(rcx_7)

int64_t rcx_8 = arg1[0x17]

if (rcx_8 != 0)
    sub_140a74f90(rcx_8)

return sub_140b4cb40(arg1) __tailcall
