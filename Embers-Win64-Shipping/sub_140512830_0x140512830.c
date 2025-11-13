// 函数: sub_140512830
// 地址: 0x140512830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f3a5d0, 0xb)
int32_t rax = data_143f3a5d8 + 0xb
bool cond:0 = rax s<= data_143f3a5dc
data_143f3a5d8 = rax

if (not(cond:0))
    sub_140594770(&data_143f3a5d0)

__builtin_wcscpy(data_143f3a5d0, u"SceneQuery")
data_143f3a5c8 = sub_140b44ed0(&data_143f3a5d0, 0, 0)
return atexit(sub_142cfb5b0) __tailcall
