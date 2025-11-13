// 函数: sub_1420f3d90
// 地址: 0x1420f3d90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_1432c4eb0
sub_142101870(arg1)
int64_t rcx = arg1[0x11]

if (rcx != 0)
    sub_140a74f90(rcx)

DeleteCriticalSection(&arg1[0xb])
arg1[0xa].d = 0
int64_t rcx_2 = arg1[9]

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

sub_1407547c0(&arg1[1], 0)
int64_t rcx_4 = arg1[5]

if (rcx_4 != 0)
    sub_140a74f90(rcx_4)

int64_t rcx_5 = arg1[1]

if (rcx_5 != 0)
    sub_140a74f90(rcx_5)

*arg1 = &data_142d56fa0
return &data_142d56fa0
