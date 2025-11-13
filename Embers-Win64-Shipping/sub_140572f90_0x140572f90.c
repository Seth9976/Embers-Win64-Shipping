// 函数: sub_140572f90
// 地址: 0x140572f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1405947f0(&data_143f70cf0, 0x1c)
int32_t rax = data_143f70cf8 + 0x1c
bool cond:0 = rax s<= data_143f70cfc
data_143f70cf8 = rax

if (not(cond:0))
    sub_140594770(&data_143f70cf0)

void* rax_1 = data_143f70cf0
int32_t rdx
rdx.b = 1
__builtin_memcpy(rax_1, u"WindowsVideoRecordingSys", 0x30)
*(rax_1 + 0x30) = 0x6d00650074
data_143f70ce8 = sub_140b44ed0(&data_143f70cf0, rdx.b, 0)
return atexit(sub_142d11f80) __tailcall
