// 函数: sub_142254620
// 地址: 0x142254620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = data_143a2f188.d
uint32_t r8 = zx.d(*(arg1 + 0xb5))
uint32_t r9 = zx.d(*(arg1 + 0xb6))
arg2[4] = zx.d(*(arg1 + 0xb4))
arg2[5] = r8
arg2[6] = r9
arg2[7] = *(arg1 + 0xb0)
arg2[8] = zx.d(*(arg1 + 0xf0))
arg2[0xa] = zx.d(*(arg1 + 0xd4))
arg2[9] = zx.d(*(arg1 + 0xd5))
int64_t zmm0
zmm0.d = (*(arg1 + 0xec)).d f* 0.0174532924f
arg2[0xb] = zmm0.d
zmm0.d = (*(arg1 + 0xcc)).d f* 0.0174532924f
arg2[0xd] = zmm0.d
arg2[0xc] = *(arg1 + 0xd0) * 0.0174532924f

if ((*(arg1 + 0x18c) & 4) == 0)
    zmm0 = data_143f51540
else
    zmm0 = data_143a2f1ac

arg2[1] = zmm0.d

if ((*(arg1 + 0x18c) & 4) == 0)
    zmm0 = data_143f51544
else
    zmm0 = data_143a2f1b0

arg2[2] = zmm0.d

if ((*(arg1 + 0x18c) & 2) == 0)
    zmm0 = 0x3f800000
else
    zmm0 = (zx.o(0)).q

arg2[3] = zmm0.d
arg2[0xe].b = *(arg1 + 0xac) & 1
*(arg2 + 0x39) = *(arg1 + 0xe8) & 1
*(arg2 + 0x3a) = *(arg1 + 0xc8) & 1
zmm0.d = data_143a2f19c.d f* *(arg1 + 0x9c)
arg2[0x11] = zmm0.d
arg2[0x12] = data_143a2f1a0 f* *(arg1 + 0xa0)
zmm0.d = data_143a2f1a4.d f* *(arg1 + 0xd8)
arg2[0x13] = zmm0.d
arg2[0x14] = data_143a2f1a8 f* *(arg1 + 0xdc)
zmm0.d = data_143a2f1a4.d f* *(arg1 + 0xb8)
arg2[0x15] = zmm0.d
arg2[0x16] = data_143a2f1a8 f* *(arg1 + 0xbc)
int32_t rax_8
rax_8.b = data_143f51538 != 0
arg2[0xf] = rax_8
int32_t rax_9
rax_9.b = data_143f5153c != 0
arg2[0x10] = rax_9
int32_t rax_10 = *(arg1 + 0xfc)
*(arg2 + 0x5c) = *(arg1 + 0xf4)
arg2[0x19] = rax_10
arg2[0x1a].b = *(arg1 + 0x118) & 1
*(arg2 + 0x69) = *(arg1 + 0x128) & 1
*(arg2 + 0x6a) = *(arg1 + 0x138) & 1
*(arg2 + 0x6b) = *(arg1 + 0x118) u>> 1 & 1
arg2[0x1b].b = *(arg1 + 0x128) u>> 1 & 1
*(arg2 + 0x6d) = *(arg1 + 0x138) u>> 1 & 1
zmm0.d = data_143a2f18c.d f* *(arg1 + 0x10c)
arg2[0x1d] = zmm0.d
float zmm1 = data_143a2f190 f* *(arg1 + 0x110)
arg2[0x1c] = 0
arg2[0x1e] = zmm1
float var_28[0x4]
float (* rax_17)[0x4]
float zmm6
rax_17, zmm6 = sub_140ade170(arg1 + 0x170, &var_28)
*(arg2 + 0x80) = *rax_17
int32_t rax_18 = *(arg1 + 0x184)
*(arg2 + 0x9c) = *(arg1 + 0x17c)
arg2[0x29] = rax_18
float zmm0_1[0x4] = *(arg1 + 0x178)
zmm0_1[0] = zmm0_1[0] * zmm6
arg2[0x24] = zmm0_1[0]
arg2[0x26] = *(arg1 + 0x174) * zmm6
zmm0_1 = *(arg1 + 0x170)
zmm0_1[0] = zmm0_1[0] * zmm6
arg2[0x25] = zmm0_1[0]
uint8_t result

if (*(arg1 + 0x188) != 0)
    *(arg2 + 0xaa) = *(arg1 + 0x14c) & 1
    *(arg2 + 0xab) = *(arg1 + 0x14c) u>> 1 & 1
    arg2[0x2b].b = *(arg1 + 0x15c) & 1
    result = *(arg1 + 0x15c) u>> 1 & 1
    *(arg2 + 0xad) = result
else
    arg2[0x2a].b = *(arg1 + 0x16c) & 1
    result = *(arg1 + 0x16c) u>> 1 & 1
    *(arg2 + 0xa9) = result

zmm0_1 = data_143a2f194
zmm0_1[0] = zmm0_1[0] f* *(arg1 + 0x140)
arg2[0x2d] = zmm0_1[0]
float zmm1_1 = data_143a2f198 f* *(arg1 + 0x144)
arg2[0x2c] = 0
zmm0_1 = _mm_cvtps_pd(arg2[7][0].q)
arg2[0x2e] = zmm1_1

if (not(zmm0_1[0].q f>= 0.10000000000000001))
    if (arg2[4] == 1)
        arg2[4] = 2
    
    if (arg2[5] == 1)
        arg2[5] = 2
    
    if (arg2[6] == 1)
        arg2[6] = 2

return result
