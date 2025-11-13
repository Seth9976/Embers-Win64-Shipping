// 函数: sub_14223af30
// 地址: 0x14223af30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = 0
arg1[1] = 0
arg1[3] = 0
arg1[4] = 0
arg1[2] = &data_142fc4160
arg1[6] = 0
arg1[7] = 0
arg1[5] = &data_142fc40a0
arg1[9] = 0
arg1[0xa] = 0
arg1[8] = &data_142fc8fc8
sub_1417c7020(&arg1[0xb])
void var_88
sub_141761d40(&arg1[0x64], sub_141761ec0(&var_88))
sub_1417619d0(&arg1[0x96], &arg1[0xb], &arg1[2], &arg1[5], 0, 0, data_143a2f1d4, data_143f51554)
arg1[0xb9].d = data_143a2f1d4[0]
float zmm0_1[0x4] = data_142d3f660
arg1[0xb8] = arg1
arg1[0x19a] = 0
arg1[0x19c].d = 0
*(arg1 + 0xce4) = 8
arg1[0x27e] = 0
arg1[0x280].d = 0
*(arg1 + 0x1404) = 8
arg1[0x3c2] = 0
arg1[0x3c4].d = 0
*(arg1 + 0x1e24) = 8
arg1[0x3c6] = &arg1[0xb8]
arg1[0x3c7] = &arg1[0x96]
*(arg1 + 0x1e40) = zmm0_1
*(arg1 + 0x1e50) = zx.o(0)
*(arg1 + 0x1e60) = _mm_unpacklo_ps(_mm_unpacklo_ps(data_14399f668, data_14399f670.q), 
    _mm_unpacklo_ps(data_14399f66c, 0)[0].q)
arg1[0x3ce].b = 1
arg1[0x3d0] = &data_142fc6ed0
arg1[0x3d1].d = 0
arg1[0x3d2] = &arg1[0x64]
arg1[0x3d3] = &data_142fc6ea0
arg1[0x3d4].d = 1
arg1[0x3d5] = &arg1[0x96]
sub_141705000(&arg1[0x3d6], &arg1[0xb], &arg1[0x3c6], data_143f51550[0])
__builtin_memset(&arg1[0x400], 0, 0x14)
void* rcx_5 = &arg1[0x407]
__builtin_memset(&arg1[0x403], 0, 0x20)
*(rcx_5 + 0x10) = 0
*(rcx_5 + 0x18) = 0
*(rcx_5 + 0x1c) = 0x80
void* rax_2 = *(rcx_5 + 0x10)

if (rax_2 != 0)
    rcx_5 = rax_2

*rcx_5 = 0
*(rcx_5 + 8) = 0
*(arg1 + 0x205c) = 0
arg1[0x40b].d = 0xffffffff
arg1[0x40d] = 0
arg1[0x40e].d = 0
arg1[0x40f] = 0
arg1[0x410] = 0
*(arg1 + 0x2090) = data_143dbb0c0
*(arg1 + 0x20a0) = data_143dbb0d0
*(arg1 + 0x20b0) = data_143dbb0e0
arg1[0x418].d = data_143a2f1b4.d
*(arg1 + 0x20c4) = 1
int32_t rax_3 = data_143a2f1b8
*(arg1 + 0x20cc) = 0
arg1[0x419].d = rax_3
sub_14172eb30(&arg1[0x53], &arg1[5])
sub_14172eb30(&arg1[0x53], &arg1[8])
sub_140d3a600(&arg1[0x3d6], &arg1[0x3d3])
sub_140d3a600(&arg1[0x3d6], &arg1[0x3d0])
sub_141777120(&arg1[0x96])
*(arg1 + 0x52c) = 2
arg1[0x3ce].b = 0
return arg1
