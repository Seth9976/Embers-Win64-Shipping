// 函数: sub_140dde0c0
// 地址: 0x140dde0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[1] = 0
arg1[2] = 0
*arg1 = &data_142ec88b0
arg1[3] = 0
arg1[4] = -1
arg1[5].d = 0x1008606
*(arg1 + 0x2c) = 0
*(arg1 + 0x2e) = 4
arg1[6] = 0
arg1[7] = 0
arg1[0x10].b = 0
sub_140d921c0(&arg1[0x11])
sub_140d921c0(&arg1[0x18])
arg1[0x1f].d = 0xbf800000
*(arg1 + 0xfc) = 0xbf800000
arg1[0x20].d = 0xbf800000
*(arg1 + 0x104) = 0xbf800000
*(arg1 + 0x108) = data_14399f5c0
*(arg1 + 0x118) = data_14399f5c0
float zmm0[0x4] = data_14399f5c0
arg1[0x27] = 0
arg1[0x28] = 0
*(arg1 + 0x128) = __mulps_xmmps_memps(zmm0, data_142ecd450)
char rax = *(arg1 + 0x152)
arg1[0x29] = 0
arg1[0x2a].w = 0xff
*(arg1 + 0x152) = (rax & 0xfd) | 1
arg1[0x2c].b = 0
arg1[0x2d] = 0
arg1[0x2e] = 0
*(arg1 + 0x17c) = 0
arg1[0x30] = 0
arg1[0x31] = 0
arg1[0x32].w = 0x101
arg1[0x33] = 0
arg1[0x34].d = 0
arg1[0x35].b = data_1439ae51c
*(arg1 + 0x1a9) = 1
arg1[0x36] = 0
arg1[0x37].d = 0
arg1[0x38].d = 0x3f800000
arg1[0x3c].b = 0
*(arg1 + 0x1e4) = 0
arg1[0x3d] = 0
arg1[0x3e].d = 0
uint128_t zmm1 = zx.o(data_143dbb1f0)
arg1[0x3f].d = data_143dbb1f0.d[0]
arg1[0x40].b = 1
*(arg1 + 0x1fc) = _mm_shuffle_ps(zmm1, zmm1, 0x55).d
arg1[0x41] = 0
arg1[0x42].d = 0
__builtin_memset(&arg1[0x43], 0, 0x20)
*(arg1 + 0x23c) = 0
arg1[0x48].b = 1
arg1[0x49] = 0
arg1[0x4a].d = 0
__builtin_memset(&arg1[0x4b], 0, 0x3c)
arg1[0x53] = 0
arg1[0x54].d = 0
return arg1
