// 函数: sub_140476da0
// 地址: 0x140476da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143e51cf0, 0xb)
int32_t rax = data_143e51cf8 + 0xb
bool cond:0 = rax s<= data_143e51cfc
data_143e51cf8 = rax

if (not(cond:0))
    sub_140594770(&data_143e51cf0)

__builtin_wcscpy(data_143e51cf0, u"LightCount")
int64_t rdx_1
rdx_1.b = 1
data_143e51ce8 = sub_140b44ed0(&data_143e51cf0, rdx_1.b, 0)
return atexit(sub_142cd1c10) __tailcall
