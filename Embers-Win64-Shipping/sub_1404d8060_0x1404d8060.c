// 函数: sub_1404d8060
// 地址: 0x1404d8060
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f025e0, 0xb)
int32_t rax = data_143f025e8 + 0xb
bool cond:0 = rax s<= data_143f025ec
data_143f025e8 = rax

if (not(cond:0))
    sub_140594770(&data_143f025e0)

__builtin_wcscpy(data_143f025e0, u"RHITStalls")
data_143f025d8 = sub_140b44ed0(&data_143f025e0, 0, 0)
return atexit(sub_142cf0ae0) __tailcall
