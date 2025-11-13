// 函数: sub_1405740c0
// 地址: 0x1405740c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f714b8, 0x11)
int32_t rax = data_143f714c0 + 0x11
bool cond:0 = rax s<= data_143f714c4
data_143f714c0 = rax

if (not(cond:0))
    sub_140594770(&data_143f714b8)

__builtin_wcscpy(data_143f714b8, u"NavigationSystem")
data_143f714b0 = sub_140b44ed0(&data_143f714b8, 0, 0)
return atexit(sub_142d12300) __tailcall
