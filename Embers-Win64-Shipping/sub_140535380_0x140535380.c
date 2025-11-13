// 函数: sub_140535380
// 地址: 0x140535380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f59bd8, 0x11)
int32_t rax = data_143f59be0 + 0x11
bool cond:0 = rax s<= data_143f59be4
data_143f59be0 = rax

if (not(cond:0))
    sub_140594770(&data_143f59bd8)

__builtin_wcscpy(data_143f59bd8, u"TextureStreaming")
int64_t rdx_1
rdx_1.b = 1
data_143f59bd0 = sub_140b44ed0(&data_143f59bd8, rdx_1.b, 0)
return atexit(sub_142d0e310) __tailcall
