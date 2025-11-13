// 函数: sub_1405128c0
// 地址: 0x1405128c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f3a690, 0xf)
int32_t rax = data_143f3a698 + 0xf
bool cond:0 = rax s<= data_143f3a69c
data_143f3a698 = rax

if (not(cond:0))
    sub_140594770(&data_143f3a690)

__builtin_wcscpy(data_143f3a690, u"WorldCollision")
int64_t rdx_1
rdx_1.b = 1
data_143f3a688 = sub_140b44ed0(&data_143f3a690, rdx_1.b, 0)
return atexit(sub_142cfb5d0) __tailcall
