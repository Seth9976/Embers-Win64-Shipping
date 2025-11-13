// 函数: sub_14050e360
// 地址: 0x14050e360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f393d8, 0xa)
int32_t rax = data_143f393e0 + 0xa
bool cond:0 = rax s<= data_143f393e4
data_143f393e0 = rax

if (not(cond:0))
    sub_140594770(&data_143f393d8)

__builtin_memcpy(data_143f393d8, u"Animation", 0x14)
data_143f393d0 = sub_140b44ed0(&data_143f393d8, 0, 0)
return atexit(&data_142cf9380) __tailcall
