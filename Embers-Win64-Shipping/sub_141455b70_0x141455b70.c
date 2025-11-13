// 函数: sub_141455b70
// 地址: 0x141455b70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *arg2
int32_t r10 = arg2[2].d
int32_t r9 = *(arg2 + 0x14)
int32_t r11 = arg2[1].d
int128_t zmm10
zmm10.d = float.s(*(arg2 + 0xc))
uint32_t r8_1 = (rax u>> 0x20).d
int128_t zmm7
zmm7.d = float.s(r10)
int128_t zmm8
zmm8.d = float.s(r9)
int128_t zmm9
zmm9.d = float.s(r11)
float zmm5 = zmm8.d f- zmm10.d
int32_t zmm0 = float.s(rax.d)
int32_t zmm2 = float.s(r8_1)
int128_t zmm6
zmm6.d = zmm7.d f- zmm9.d

if ((rax.d != data_143dbb180.d || r8_1 != data_143dbb180:4.d)
        && (r10 != r11 || r9 != *(arg2 + 0xc)))
    *arg1 = zmm0
    arg1[1] = zmm2
    arg1[2] = 1f f/ zmm0
    arg1[3] = 1f f/ zmm2
    zmm2 = zmm6.d f* 0.5f
    arg1[5] = zmm5 f* -0.5f
    arg1[4] = zmm2
    arg1[6] = zmm9.d f+ zmm2
    arg1[7] = zmm5 f* 0.5f f+ zmm10.d
    arg1[8] = arg2[1].d
    arg1[9] = *(arg2 + 0xc)
    arg1[0xa] = arg2[2].d
    arg1[0xb] = *(arg2 + 0x14)
    arg1[0xe] = 1f f/ zmm6.d
    arg1[0xc] = zmm6.d
    arg1[0xf] = 1f / zmm5
    arg1[0xd] = zmm5
    zmm9.d = zmm9.d f* arg1[2]
    zmm10.d = zmm10.d f* arg1[3]
    arg1[0x10] = zmm9.d
    arg1[0x11] = zmm10.d
    zmm7.d = zmm7.d f* arg1[2]
    zmm8.d = zmm8.d f* arg1[3]
    arg1[0x12] = zmm7.d
    zmm7.d = zmm7.d f- zmm9.d
    arg1[0x13] = zmm8.d
    zmm8.d = zmm8.d f- zmm10.d
    arg1[0x14] = zmm7.d
    arg1[0x16] = 1f f/ zmm7.d
    arg1[0x15] = zmm8.d
    arg1[0x17] = 1f f/ zmm8.d
    float zmm1 = arg1[2] f* 0.5f f+ zmm9.d
    arg1[0x19] = arg1[3] f* 0.5f f+ zmm10.d
    arg1[0x18] = zmm1
    zmm0 = arg1[0x13] f- arg1[3] f* 0.5f
    arg1[0x1a] = arg1[0x12] f- arg1[2] f* 0.5f
    arg1[0x1b] = zmm0

return arg1
