// 函数: sub_141af90c0
// 地址: 0x141af90c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141a31f70(arg1, arg2)
uint64_t rcx = zx.q(data_14401b1a0)
__builtin_memset(&arg1[0xc], 0, 0x28)
arg1[0xa].d |= 0x11
*arg1 = &data_143051980
TEB* gsbase

if (data_143f2c890 s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (rcx << 3))))
    _Init_thread_header(&data_143f2c890)
    
    if (data_143f2c890 == 0xffffffff)
        sub_140b58170(&data_143f2c888, "Transform", 1)
        _Init_thread_footer(&data_143f2c890)

int64_t var_18
int64_t* rax_2 = sub_140b63b70(&data_143f2c888, &var_18)
arg1[0xc] = data_143f2c888
sub_140597df0(&arg1[0xd], rax_2)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

void arg_8
char rcx_4 = *sub_141a38790(&arg_8)
arg1[0xa].d |= 0x11
*(arg1 + 0x54) = rcx_4
return arg1
