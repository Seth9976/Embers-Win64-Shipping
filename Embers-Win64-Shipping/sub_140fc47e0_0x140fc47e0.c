// 函数: sub_140fc47e0
// 地址: 0x140fc47e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ef1ae8
arg1[0xf].d = 0
int64_t rcx = arg1[0xe]

if (rcx != 0)
    sub_140a74f90(rcx)

sub_1405e1cf0(&arg1[6], 0)
int64_t rcx_2 = arg1[0xa]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[6]

if (rcx_3 != 0)
    sub_140a74f90(rcx_3)

return DeleteCriticalSection(&arg1[1]) __tailcall
