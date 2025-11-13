// 函数: sub_1405141f0
// 地址: 0x1405141f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f3aff8, 0x13)
int32_t rax = data_143f3b000 + 0x13
bool cond:0 = rax s<= data_143f3b004
data_143f3b000 = rax

if (not(cond:0))
    sub_140594770(&data_143f3aff8)

__builtin_wcscpy(data_143f3aff8, u"PrimitiveComponent")
data_143f3aff0 = sub_140b44ed0(&data_143f3aff8, 0, 0)
return atexit(sub_142cfc4d0) __tailcall
