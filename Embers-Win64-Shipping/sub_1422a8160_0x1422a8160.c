// 函数: sub_1422a8160
// 地址: 0x1422a8160
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = 0
void* rdx = arg1 + 0x28a
int32_t r11 = 0
int32_t r9 = 0
int64_t i_2 = 4
int64_t i

do
    uint32_t rax_1 = zx.d(*(rdx - 2))
    rdx += 4
    r11 += rax_1 & 0x1fff
    r9 += zx.d(*(rdx - 4)) & 7
    i = i_2
    i_2 -= 1
while (i != 1)
uint64_t r10 = zx.q(*(arg1 + 0x229)) * 3
int16_t* rdx_1 = *(arg1 + (r10 << 3) + 0x298)
uint32_t rcx = zx.d(*rdx_1)
int16_t rax_6 = rdx_1[1]

if (rcx.w == 0xffff)
    rcx = 0

if (rax_6 != 0xffff)
    rcx += zx.d(rax_6)

int16_t rax_9 = rdx_1[2]

if (rax_9 != 0xffff)
    rcx += zx.d(rax_9)

int16_t rax_11 = rdx_1[3]

if (rax_11 != 0xffff)
    rcx += zx.d(rax_11)

int16_t rax_13 = rdx_1[4]

if (rax_13 != 0xffff)
    rcx += zx.d(rax_13)

int16_t rax_15 = rdx_1[5]

if (rax_15 != 0xffff)
    rcx += zx.d(rax_15)

int16_t rax_17 = rdx_1[6]

if (rax_17 != 0xffff)
    rcx += zx.d(rax_17)

uint128_t zmm2 = zx.o(0)
int32_t zmm1 = (zx.o(0)).d
void* result = arg1 + 0x2c0
*(arg1 + (r10 << 3) + 0x2a8) = _mm_cvtepi32_ps(zx.o(rcx u/ 7)).d

do
    i_1 += 4
    zmm1 = zmm1 f+ *(result - 0x18) f+ *result f+ *(result + 0x18) f+ *(result + 0x30)
    result += 0x60
while (i_1 u< 4)

*(arg1 + 0x23c) = zmm1 f* 0.25f

if (r9 s> 0)
    zmm2.d = _mm_cvtepi32_ps(zx.o(r11)).d f/ _mm_cvtepi32_ps(zx.o(r9)).d

bool cond:0 = (*(arg1 + 0x22a) & 1) != 0
*(arg1 + 0x238) = zmm2.d

if (cond:0 || *(arg1 + 0xf0) != 3)
    zmm2.d = zmm2.d f* 0.25f
    result = zx.q(int.d(zmm2.d))
    char rcx_5 = result.b
    
    if (result.d s>= 0xff)
        rcx_5 = -1
    
    *(arg1 + 0x228) = rcx_5

return result
