// 函数: sub_141ed2810
// 地址: 0x141ed2810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = 0
*arg1 = &data_1432642e8
arg1[1] = 0
arg1[2].d = 0
__builtin_memset(&arg1[3], 0, 0x40)
arg1[0xb].d = 0x60
*(arg1 + 0x5c) = 0x60
arg1[0xc].b = 0
*(arg1 + 0x64) = 0
float zmm1[0x4] = data_143f3a950
*(arg1 + 0x80) = zx.o(0)
zmm1[0].q = zx.o(0) u>> 0x40
*(arg1 + 0x70) = _mm_shuffle_ps(zx.o(0), zmm1, 0xc4)
*(arg1 + 0x90) = __andps_xmmxud_memxud(data_143f3a950, data_143f3a960)
arg1[0x14].d &= 0xfffffffc
__builtin_memset(arg1 + 0xa4, 0, 0x18)
*(arg1 + 0xc0) = data_14399f720
*(arg1 + 0xd0) = data_14399f720
float zmm0[0x4] = data_14399f720
arg1[0x23] = 0
*(arg1 + 0xe0) = zmm0
arg1[0x1e] = 0
arg1[0x1f].d = 0x3f000000
__builtin_memset(&arg1[0x20], 0, 0x15)
arg1[0x24] = 0
arg1[0x25].d = 0x3e000000
*(arg1 + 0x12c) = 0x3e000000
arg1[0x26] = data_143dbb1f8.q
arg1[0x27].d = data_143dbb200
*(arg1 + 0x13c) = data_143dbb1f8.q
*(arg1 + 0x144) = data_143dbb200
arg1[0x29].d = 0
__builtin_memset(&arg1[0x2a], 0, 0x14)
arg1[0x23].d = *(arg2 + 0x2d0)
*(arg1 + 0x11c) = *(arg2 + 0x2d4)
int64_t* rcx = *(arg2 + 0xa0)

if (rcx != 0)
    r8 = sub_141dcdc50(rcx)

if (r8 != 2)
    zmm0 = *(arg2 + 0x2b8)
else
    zmm0 = *(arg2 + 0x2c0)

arg1[0x24].d = zmm0[0]

if (r8 != 2)
    zmm0 = *(arg2 + 0x2bc)
else
    zmm0 = *(arg2 + 0x2c4)

*(arg1 + 0x124) = zmm0[0]
int64_t* rax_5 = sub_1424b0d70()
void* rcx_1 = rax_5[0x23]

if (rcx_1 != 0)
label_141ed2a2c:
    zmm1 = *(rcx_1 + 0x280)
    float zmm0_1 = zmm1[0]
    *(arg1 + 0x12c) = zmm1[0]
    arg1[0x1f].d = __maxss_xmmss_memss(zmm0_1 + zmm1[0], *(rcx_1 + 0x284))
else
    int64_t rdx = *rax_5
    (*(rdx + 0x390))(rax_5, rdx)
    rcx_1 = rax_5[0x23]
    
    if (rcx_1 != 0)
        goto label_141ed2a2c
    
    zmm1 = *(arg1 + 0x12c)

arg1[0x25].d = zmm1[0]
void* rax_6 = *(arg2 + 0xa0)

if (rax_6 != 0 && *(rax_6 + 0xf0) == 2)
    int32_t rdx_1 = *(arg1 + 0x5c)
    
    if (rdx_1 s> *(arg1 + 0x24))
        sub_1405a5410(&arg1[3], rdx_1)
    
    int32_t rdx_2 = arg1[0xb].d
    
    if (rdx_2 s> *(arg1 + 0x34))
        sub_1405a5410(&arg1[5], rdx_2)

return arg1
