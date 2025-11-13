// 函数: sub_1404d7ee0
// 地址: 0x1404d7ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f01f00, 4)
int32_t rax = data_143f01f08 + 4
bool cond:0 = rax s<= data_143f01f0c
data_143f01f08 = rax

if (not(cond:0))
    sub_140594770(&data_143f01f00)

int32_t rdx
rdx.b = 1
*data_143f01f00 = 0x4f00530050
data_143f01ef8 = sub_140b44ed0(&data_143f01f00, rdx.b, 0)
return atexit(sub_142cf0a80) __tailcall
