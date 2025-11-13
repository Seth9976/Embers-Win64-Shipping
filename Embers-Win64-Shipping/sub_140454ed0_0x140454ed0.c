// 函数: sub_140454ed0
// 地址: 0x140454ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143e1d728, 8)
int32_t rax = data_143e1d730 + 8
bool cond:0 = rax s<= data_143e1d734
data_143e1d730 = rax

if (not(cond:0))
    sub_140594770(&data_143e1d728)

*data_143e1d728 = *u"UObject"
data_143e1d720 = sub_140b44ed0(&data_143e1d728, 0, 0)
return atexit(&data_142cc35d0) __tailcall
