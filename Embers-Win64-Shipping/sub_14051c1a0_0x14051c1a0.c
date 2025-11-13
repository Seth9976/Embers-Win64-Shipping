// 函数: sub_14051c1a0
// 地址: 0x14051c1a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f40640, 5)
int32_t rax = data_143f40648 + 5
bool cond:0 = rax s<= data_143f4064c
data_143f40648 = rax

if (not(cond:0))
    sub_140594770(&data_143f40640)

__builtin_wcscpy(data_143f40640, u"View")
int64_t rdx_1
rdx_1.b = 1
data_143f40638 = sub_140b44ed0(&data_143f40640, rdx_1.b, 0)
return atexit(sub_142d00510) __tailcall
