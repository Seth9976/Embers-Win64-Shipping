// 函数: sub_140521900
// 地址: 0x140521900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f48320, 0xb)
int32_t rax = data_143f48328 + 0xb
bool cond:0 = rax s<= data_143f4832c
data_143f48328 = rax

if (not(cond:0))
    sub_140594770(&data_143f48320)

__builtin_wcscpy(data_143f48320, u"ActorCount")
int64_t rdx_1
rdx_1.b = 1
data_143f48318 = sub_140b44ed0(&data_143f48320, rdx_1.b, 0)
return atexit(sub_142d023b0) __tailcall
