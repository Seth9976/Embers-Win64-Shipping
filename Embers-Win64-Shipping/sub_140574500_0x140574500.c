// 函数: sub_140574500
// 地址: 0x140574500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f717e0, 9)
int32_t rax = data_143f717e8 + 9
bool cond:0 = rax s<= data_143f717ec
data_143f717e8 = rax

if (not(cond:0))
    sub_140594770(&data_143f717e0)

__builtin_wcscpy(data_143f717e0, u"NAVREGEN")
data_143f717d8 = sub_140b44ed0(&data_143f717e0, 0, 0)
return atexit(sub_142d12420) __tailcall
