// 函数: sub_1404d7fe0
// 地址: 0x1404d7fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f029d0, 0xc)
int32_t rax = data_143f029d8 + 0xc
bool cond:0 = rax s<= data_143f029dc
data_143f029d8 = rax

if (not(cond:0))
    sub_140594770(&data_143f029d0)

__builtin_memcpy(data_143f029d0, u"RHITFlushes", 0x18)
data_143f029c8 = sub_140b44ed0(&data_143f029d0, 0, 0)
return atexit(sub_142cf0ac0) __tailcall
