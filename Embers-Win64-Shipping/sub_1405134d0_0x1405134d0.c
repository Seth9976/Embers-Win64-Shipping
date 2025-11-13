// 函数: sub_1405134d0
// 地址: 0x1405134d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f3a9c0, 0x12)
int32_t rax = data_143f3a9c8 + 0x12
bool cond:0 = rax s<= data_143f3a9cc
data_143f3a9c8 = rax

if (not(cond:0))
    sub_140594770(&data_143f3a9c0)

__builtin_memcpy(data_143f3a9c0, u"CharacterMovement", 0x24)
int64_t rdx_1
rdx_1.b = 1
data_143f3a9b8 = sub_140b44ed0(&data_143f3a9c0, rdx_1.b, 0)
return atexit(sub_142cfbd00) __tailcall
