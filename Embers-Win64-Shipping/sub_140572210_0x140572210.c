// 函数: sub_140572210
// 地址: 0x140572210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f70b40, 0xa)
int32_t rax = data_143f70b48 + 0xa
bool cond:0 = rax s<= data_143f70b4c
data_143f70b48 = rax

if (not(cond:0))
    sub_140594770(&data_143f70b40)

__builtin_memcpy(data_143f70b40, u"AVEncoder", 0x14)
int64_t rdx_1
rdx_1.b = 1
data_143f70b38 = sub_140b44ed0(&data_143f70b40, rdx_1.b, 0)
return atexit(sub_142d11ad0) __tailcall
