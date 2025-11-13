// 函数: sub_140525c60
// 地址: 0x140525c60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f4d0f0, 0xc)
int32_t rax = data_143f4d0f8 + 0xc
bool cond:0 = rax s<= data_143f4d0fc
data_143f4d0f8 = rax

if (not(cond:0))
    sub_140594770(&data_143f4d0f0)

int32_t rdx
rdx.b = 1
__builtin_memcpy(data_143f4d0f0, u"Replication", 0x18)
data_143f4d0e8 = sub_140b44ed0(&data_143f4d0f0, rdx.b, 0)
return atexit(&data_142d06a90) __tailcall
