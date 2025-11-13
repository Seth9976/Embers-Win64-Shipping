// 函数: sub_140525ce0
// 地址: 0x140525ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f4d0c8, 0x10)
int32_t rax = data_143f4d0d0 + 0x10
bool cond:0 = rax s<= data_143f4d0d4
data_143f4d0d0 = rax

if (not(cond:0))
    sub_140594770(&data_143f4d0c8)

int32_t rdx
rdx.b = 1
__builtin_memcpy(data_143f4d0c8, u"ReplicationRPCs", 0x20)
data_143f4d0c0 = sub_140b44ed0(&data_143f4d0c8, rdx.b, 0)
return atexit(sub_142d06ab0) __tailcall
