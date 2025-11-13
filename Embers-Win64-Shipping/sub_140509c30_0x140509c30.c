// 函数: sub_140509c30
// 地址: 0x140509c30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f37910, 0xf)
int32_t rax = data_143f37918 + 0xf
bool cond:0 = rax s<= data_143f3791c
data_143f37918 = rax

if (not(cond:0))
    sub_140594770(&data_143f37910)

__builtin_wcscpy(data_143f37910, u"MediaStreaming")
data_143f37908 = sub_140b44ed0(&data_143f37910, 0, 0)
return atexit(&data_142cf85b0) __tailcall
