// 函数: sub_1404d7f60
// 地址: 0x1404d7f60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f022b0, 4)
int32_t rax = data_143f022b8 + 4
bool cond:0 = rax s<= data_143f022bc
data_143f022b8 = rax

if (not(cond:0))
    sub_140594770(&data_143f022b0)

int32_t rdx
rdx.b = 1
*data_143f022b0 = 0x4900480052
data_143f022a8 = sub_140b44ed0(&data_143f022b0, rdx.b, 0)
return atexit(sub_142cf0aa0) __tailcall
