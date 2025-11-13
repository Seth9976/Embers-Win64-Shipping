// 函数: sub_140f67b40
// 地址: 0x140f67b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142ee7c68
arg1[0x72] = &data_142ee7ea8
sub_140db2ea0(&arg1[0x72])
void* rcx_1 = data_143e20d08

if (rcx_1 != 0)
    sub_1405a46b0(rcx_1 + 0xd0, arg1)

if (arg1[0x10f].b != 0)
    arg1[0x10f].b = 0
    
    if (*(arg1 + 0x86c) != 0)
        *(arg1 + 0x86c) = 0
    
    int64_t rcx_3 = arg1[0x107]
    
    if (rcx_3 != 0)
        sub_140a74f90(rcx_3)

sub_140d955c0(&arg1[0xef])
sub_140745b20(&arg1[0xed])
sub_140de03c0(&arg1[0xe5])
arg1[0xe3] = &data_142d82a88
sub_140d95d20(&arg1[0x72])
return sub_1406922a0(arg1) __tailcall
