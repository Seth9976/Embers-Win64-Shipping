// 函数: sub_141d2e210
// 地址: 0x141d2e210
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg1[2].d = 4
*arg1 = &data_143222518
arg1[1] = 0
arg1[3] = arg2
arg1[4] = 0
arg1[5] = 0
sub_141d2cef0(&arg1[6])
__builtin_memset(&arg1[0x42], 0, 0x20)
int512_t zmm2
zmm2.o = zx.o(0)
*(arg1 + 0x230) = data_143dbb0c0
*(arg1 + 0x240) = data_143dbb0d0
*(arg1 + 0x250) = data_143dbb0e0
float zmm1[0x4] = data_143f37410
*(arg1 + 0x270) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x260) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x280) = __andps_xmmxud_memxud(data_143f37410, data_143f37420)
arg1[0x52] = data_143dbb1f8.q
arg1[0x53].d = data_143dbb200
*(arg1 + 0x29c) = data_143dbb1f8.q
*(arg1 + 0x2a4) = data_143dbb200
arg1[0x55] = 0
arg1[0x56].w = 2
*(arg1 + 0x2b4) = 0x3dcccccd
*(arg1 + 0x2bc) = 0x32
arg1[0x58].d = 5
*(arg1 + 0x2c4) = 0xa
*(arg1 + 0x2cc) = 0x4019999a
arg1[0x5a].d = 0x3a83126f
*(arg1 + 0x2d4) = 0x49742400
arg1[0x5b].b = 0
arg1[0x5c] = 0
arg1[0x5d] = 0
void var_68
sub_141761d40(&arg1[0x5e], sub_141761ec0(&var_68))
sub_141761a80(&arg1[0x90], &arg1[0x5e], 0)
arg1[0x90] = &data_142fc7038
__builtin_memset(&arg1[0x95], 0, 0x20)
arg1[0x99] = 0
arg1[0x9a] = 0
arg1[0x9b] = 0
arg1[0x9c] = 0
arg1[0x9d] = &arg1[0x97]
arg1[0x9e] = &arg1[0x99]
arg1[0x9f] = &arg1[0x9b]
__builtin_memset(&arg1[0xa0], 0, 0x14)
*(arg1 + 0x51c) = 0
arg1[0xa5].b = 0
arg1[0xa4] = &data_143222510
__builtin_memset(&arg1[0xa6], 0, 0x30)
arg1[0xad].b = 0
arg1[0xac] = &data_143222510
__builtin_memset(&arg1[0xae], 0, 0x41)
*(arg1 + 0x514) = 0
arg1[0xb8] = *arg3
arg1[0xba] = 0

if (arg1[0xb8] != 0)
    void* rax_5 = arg3[2]
    void* rcx_5 = &arg3[4]
    
    if (rax_5 != 0)
        rcx_5 = rax_5
    
    (**rcx_5)(rcx_5, &arg1[0xba], zmm2)

return arg1
