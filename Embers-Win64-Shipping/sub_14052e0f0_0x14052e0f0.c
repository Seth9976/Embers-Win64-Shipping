// 函数: sub_14052e0f0
// 地址: 0x14052e0f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_14117ab70(&data_143a2f3f0)
int512_t zmm0
int512_t zmm1
zmm0, zmm1 = sub_142287930(&data_143a2f620)
zmm0.o = zx.o(0)
zmm1.o = zx.o(0)
__builtin_memset(&data_143a2f710, 0, 0x30)
data_143a2f3d0 = &data_143312b68

if (sub_140a80f40() == 0)
    sub_141997e80(&data_143a2f3d0, zmm1)
    return atexit(sub_142d0ade0) __tailcall

(*(data_143a2f3d0 + 0x28))(zmm0, zmm1)
return atexit(sub_142d0ade0) __tailcall
