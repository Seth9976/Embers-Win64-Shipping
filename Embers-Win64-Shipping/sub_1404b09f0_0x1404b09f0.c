// 函数: sub_1404b09f0
// 地址: 0x1404b09f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

float (* rax)[0x4] = sub_140a82f30(0x10, 0x10)
float var_38[0x4]
var_38[0] = 0
data_1439b6bc8 = rax
float temp0[0x4] = _mm_shuffle_ps(var_38, var_38, 0xe1)
temp0[0] = 0x3f800000
*rax = _mm_shuffle_ps(temp0, temp0, 0xe1)
sub_1419ba620(&data_1439b6ba8)
data_1439b6ba8 = &data_142f710f0

if (sub_140a80f40() == 0)
    sub_141997e80(&data_1439b6ba8)
else
    (*(data_1439b6ba8 + 0x28))(&data_1439b6ba8)

return atexit(sub_142ce0560) __tailcall
