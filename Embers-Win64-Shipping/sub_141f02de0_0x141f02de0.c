// 函数: sub_141f02de0
// 地址: 0x141f02de0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_141f030e0(arg1, arg2)
*arg1 = &data_14326a1f0
arg1[0x2e].d = arg2[0x64].d
*(arg1 + 0x174) = *(arg2 + 0x324) & 1
*(arg1 + 0x175) = arg2[0x6b].b & 1
arg1[0x2f].d = arg2[0x65].d
*(arg1 + 0x17c) = *(arg2 + 0x32c)
arg1[0x30] = arg2[0x66]
arg1[0x31].d = arg2[0x67].d
*(arg1 + 0x18c) = data_14399f5c0
*(arg1 + 0x19c) = data_14399f5c0
int32_t rax_6 = arg2[0x69].d

if (rax_6 s<= 0)
    rax_6 = 0

arg1[0x36].d = rax_6
*(arg1 + 0x1b4) = *(arg2 + 0x34c)
arg1[0x37].d = arg2[0x6a].d
*(arg1 + 0x1bc) = *(arg2 + 0x354)
uint128_t zmm0

if (*(arg2 + 0x2a4) == 0)
    zmm0 = zx.o(0)
else
    zmm0 = *(arg2 + 0x364)

uint128_t zmm1 = 0x447a0000
arg1[0x38].d = zmm0.d
*(arg1 + 0x1c4) = arg2[0x6d].d
arg1[0x39].d = *(arg2 + 0x36c)
zmm0 = arg2[0x6e].d

if (not(zmm0.d f< 1000f))
    zmm1 = __minss_xmmss_memss(zmm0.d, 0x49742400)

*(arg1 + 0x1cc) = zmm1.d
uint128_t zmm7 = *(arg1 + 0x184)
uint128_t zmm6 = arg1[0x30].d
uint128_t zmm8 = arg1[0x31].d
uint128_t zmm2
zmm2.d = zmm6.d f* zmm6.d
zmm0.d = zmm7.d f* zmm7.d
zmm1.d = zmm8.d f* zmm8.d
zmm2.d = zmm2.d f+ zmm0.d
zmm2.d = zmm2.d f+ zmm1.d

if (not(zmm2.d f<= 9.99999994e-09f))
    uint128_t zmm5_1 = _mm_rsqrt_ss(zmm2.d, zmm2.d)
    uint128_t zmm3_1
    zmm3_1.d = zmm2.d f* 0.5f
    zmm0.d = zmm5_1.d f* zmm5_1.d
    zmm1.d = zmm3_1.d f* zmm0.d
    zmm2.d = 0.5f f- zmm1.d
    zmm0.d = zmm5_1.d f* zmm2.d
    zmm5_1.d = zmm5_1.d f+ zmm0.d
    zmm1.d = zmm5_1.d f* zmm5_1.d
    zmm3_1.d = zmm3_1.d f* zmm1.d
    zmm0.d = zmm5_1.d f* (0.5f f- zmm3_1.d)
    zmm5_1.d = zmm5_1.d f+ zmm0.d
    zmm6.d = zmm6.d f* zmm5_1.d
    zmm7.d = zmm7.d f* zmm5_1.d
    zmm8.d = zmm8.d f* zmm5_1.d
    arg1[0x30].d = zmm6.d
    *(arg1 + 0x184) = zmm7.d
    arg1[0x31].d = zmm8.d

if (*(arg2 + 0x14f) != 2)
    zmm1 = *(arg2 + 0x344)
else
    zmm1 = arg2[0x68].d

*(arg1 + 0x1ac) = zmm1.d

if (*(arg2 + 0x35c) != 0)
    zmm2 = arg2[0x6c].d
    zmm0.d = zmm2.d f- zmm1.d
    
    if (not(zmm0.d f<= 100f))
        arg1[0x2a].d = zmm2.d
        *(arg1 + 0x154) = *(arg2 + 0x35c)

void* rax_13 = sub_141ee6400(arg2)

if (rax_13 != 0)
    rax_13.b = *(rax_13 + 8) s>= 3
else
    rax_13.b = 1

if (*(arg2 + 0x14f) != 1 || (arg2[0x6b].b & 1) != 0 || rax_13.b != 0)
    rax_13.b = 0
else
    rax_13.b = 0x20

char rcx_1 = (*(arg1 + 0x13a) & 0xdf) | rax_13.b
*(arg1 + 0x13a) = rcx_1
*(arg1 + 0x13a) = ((*(arg2 + 0x384) << 4 ^ rcx_1) & 0x10) ^ rcx_1
void var_48
*(arg1 + 0x158) = *sub_140acc920(&var_48, arg2 + 0x388)
arg1[0x2d].d = *(arg2 + 0x38c)
return arg1
