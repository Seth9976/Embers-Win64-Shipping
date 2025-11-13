// 函数: sub_141e3a5a0
// 地址: 0x141e3a5a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_143247b48
void* rdi = &arg1[0x103]

for (int64_t i = 3; i != 0; )
    int64_t rcx = *(rdi - 0x28)
    rdi -= 0x28
    i -= 1
    
    if (rcx != 0)
        sub_140a74f90(rcx)

sub_141a90330(&arg1[0xef])
arg1[0xe7] = &data_14303f308
sub_1405ae200(&arg1[0xdc])
sub_141a908a0(arg1)

if ((arg2 & 1) != 0)
    j_sub_140a74f90(arg1)

return arg1
