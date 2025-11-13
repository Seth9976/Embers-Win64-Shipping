// 函数: sub_1414340d0
// 地址: 0x1414340d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
int128_t zmm8 = 0x3f800000
int32_t rax_2 = *(r8 + 0x5088)
uint128_t zmm3 = _mm_cvtepi32_ps(zx.o(*(r8 + 0x15a0) - *(r8 + 0x1598)))
int32_t rax_5 = *(r8 + 0x15a4) - *(r8 + 0x159c)
zmm3.d = zmm3.d f/ _mm_cvtepi32_ps(zx.o(rax_2 * 2)).d
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(*(r8 + 0x508c) * 2))
uint128_t zmm1
zmm1.d = _mm_cvtepi32_ps(zx.o(rax_5)).d f/ zmm0.d
zmm0.d = 1f f/ zmm3.d
_mm_shuffle_ps(zmm3, zmm3, 0xe1)
zmm3.d = zmm1.d
_mm_shuffle_ps(zmm3, zmm3, 0xc6)
zmm3.d = zmm0.d
_mm_shuffle_ps(zmm3, zmm3, 0x27)
zmm3.d = 1f f/ zmm1.d
*arg2 = _mm_shuffle_ps(zmm3, zmm3, 0x39)
void* rdx = *arg1
uint64_t rdi = *(rdx + 0x1598)
int32_t r9_1 = *(rdx + 0x15a0) - rdi.d
uint32_t r11_1 = (rdi u>> 0x20).d
uint64_t rax_9 = *(*(arg1[1] + 8) + 0x44)
int32_t r8_2 = *(rdx + 0x15a4) - r11_1
uint32_t rsi_1 = (rax_9 u>> 0x20).d

if (*(rdx + 0x4d90) != 0)
    uint32_t rax_10 = *(rdx + 0x4dac)
    r11_1 = rax_10
    int32_t rcx_1 = *(rdx + 0x4da8)
    rdi = zx.q(rcx_1)
    r9_1 = *(rdx + 0x4db0) - rcx_1
    rsi_1 = *(rdx + 0x4da4)
    r8_2 = *(rdx + 0x4db4) - rax_10
    rax_9 = zx.q(*(rdx + 0x4da0))

*(arg2 + 0x48) = 0
zmm0.d = float.s(rax_9.d)
zmm1.d = float.s(rsi_1)
zmm3.d = float.s(rdi.d)
float zmm4 = 1f f/ zmm0.d
zmm0.d = float.s(r9_1)
int128_t zmm6
zmm6.d = 1f f/ zmm1.d
zmm0.d = zmm0.d f* 0.5f
uint128_t zmm7
zmm7.d = zmm0.d f* zmm4
zmm3.d = zmm3.d f+ zmm0.d
_mm_shuffle_ps(zmm7, zmm7, 0xe1)
zmm0.d = float.s(r11_1)
zmm7.d = float.s(neg.d(r8_2)) * 0.5f f* zmm6.d
zmm3.d = zmm3.d f* zmm4
_mm_shuffle_ps(zmm7, zmm7, 0xc6)
zmm7.d = zmm3.d
_mm_shuffle_ps(zmm7, zmm7, 0x27)
zmm7.d = (float.s(r8_2) * 0.5f f+ zmm0.d) f* zmm6.d
arg2[1] = _mm_shuffle_ps(zmm7, zmm7, 0x39)

if (*arg1[4] != *arg1[5])
    void* rax_15 = *arg1
    zmm8.d = (*(rax_15 + 0x4fd4)).d f/ *(rax_15 + 0x4d40)

arg2[2].d = zmm8.d
*(arg2 + 0x28) = *arg1[4]
int64_t rax_17 = data_14395fa10

if (data_143ed551c != 0)
    rax_17 = data_14395f4d0

arg2[3].q = rax_17
*(arg2 + 0x38) = sub_1410fccd0(arg1[2], *arg1 + 0x5030, u"External", 0)
int64_t result = data_14395fa10
arg2[4].q = result
return result
