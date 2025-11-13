// 函数: sub_142c7d700
// 地址: 0x142c7d700
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    *(arg1 + 0x729) = 0

sub_142c7ec10(arg1)
int64_t rcx = arg1[0xe1]

if (rcx != 0)
    void* rax_1 = *arg1
    
    if (*(rax_1 + 0x4e18) == rcx)
        *(rax_1 + 0x4e18) = 0
    
    data_143ccb8a0(arg1[0xe1])
    arg1[0xe1] = 0

sub_142c7e3d0(&arg1[0xd3])
data_143ccb8a0(arg1[0xe7])
int64_t rcx_4 = arg1[0xec]
arg1[0xe7] = 0
data_143ccb8a0(rcx_4)
arg1[0xec] = 0
sub_142c8ec30(&arg1[0xd3])
return 0
