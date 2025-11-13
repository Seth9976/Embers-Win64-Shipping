// 函数: sub_14100f1b0
// 地址: 0x14100f1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

DeleteCriticalSection(&arg1[0x1a])
arg1[0x18].d = 0
int64_t rcx_1 = arg1[0x17]

if (rcx_1 != 0)
    sub_140a74f90(rcx_1)

arg1[0x10].d = 0

if (*(arg1 + 0x84) != 0)
    sub_14092fa50(&arg1[0xf], 0)

arg1[0x15].d = 0xffffffff
*(arg1 + 0xac) = 0
sub_14059a8e0(&arg1[0x11], 0)
int64_t rcx_4 = arg1[0x13]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[0xf]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

return sub_14100f2e0(arg1) __tailcall
