// 函数: sub_140521990
// 地址: 0x140521990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f48308, 6)
int32_t rax = data_143f48310 + 6
bool cond:0 = rax s<= data_143f48314
data_143f48310 = rax

if (not(cond:0))
    sub_140594770(&data_143f48308)

int64_t* rdx_1 = data_143f48308
*rdx_1 = 0x6b006300690054
rdx_1[1].d = 0x73
rdx_1.b = 1
data_143f48300 = sub_140b44ed0(&data_143f48308, rdx_1.b, 0)
return atexit(sub_142d023d0) __tailcall
