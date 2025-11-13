// 函数: sub_1422a3ab0
// 地址: 0x1422a3ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = data_143dbb1f8.q
arg1[1].d = data_143dbb200
*(arg1 + 0xc) = data_143dbb1f8.q
*(arg1 + 0x14) = data_143dbb200
arg1[3] = data_143dbb1f8.q
arg1[4].d = data_143dbb200
*(arg1 + 0x24) = data_143dbb1f8.q
*(arg1 + 0x2c) = data_143dbb200
arg1[0x1f].d = 0

if (*(arg1 + 0xfc) != 0)
    sub_141eca490(&arg1[6], 0)

arg1[0x20].d = 0
uint128_t zmm1 = zx.o(data_143316760:0xc.q)
__builtin_memset(&arg1[0x21], 0, 0x20)
_mm_shuffle_ps(zmm1, zmm1, 0xe1)
int32_t var_28
*(arg1 + 0x13c) = (var_28 & 0xfffffff0).o
zmm1.d = 0x3f800000
int64_t arg_8 = 0
*(arg1 + 0x14c) = (_mm_shuffle_ps(zmm1, zmm1, 0xe1)).q
arg1[0x25] = -1
arg1[0x26].d = 0xffffffff
*(arg1 + 0x134) = 0
arg1[0x27].d = 0x42000000
arg_8 = 0
return 0
