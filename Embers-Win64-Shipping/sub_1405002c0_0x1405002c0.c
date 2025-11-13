// 函数: sub_1405002c0
// 地址: 0x1405002c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f34a20, 6)
int32_t rax = data_143f34a28 + 6
bool cond:0 = rax s<= data_143f34a2c
data_143f34a28 = rax

if (not(cond:0))
    sub_140594770(&data_143f34a20)

int64_t* rdx_1 = data_143f34a20
*rdx_1 = 0x69006400750041
rdx_1[1].d = 0x6f
rdx_1.b = 1
data_143f34a18 = sub_140b44ed0(&data_143f34a20, rdx_1.b, 0)
return atexit(&data_142cf6960) __tailcall
