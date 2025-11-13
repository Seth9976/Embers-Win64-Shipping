// 函数: sub_140572830
// 地址: 0x140572830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f70bf8, 0x15)
int32_t rax = data_143f70c00 + 0x15
bool cond:0 = rax s<= data_143f70c04
data_143f70c00 = rax

if (not(cond:0))
    sub_140594770(&data_143f70bf8)

void* rdx_1 = data_143f70bf8
__builtin_memcpy(rdx_1, u"GameplayMediaEnc", 0x20)
*(rdx_1 + 0x20) = 0x7200650064006f
*(rdx_1 + 0x28) = 0
rdx_1.b = 1
data_143f70bf0 = sub_140b44ed0(&data_143f70bf8, rdx_1.b, 0)
return atexit(sub_142d11c30) __tailcall
