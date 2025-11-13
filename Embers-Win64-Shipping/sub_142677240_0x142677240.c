// 函数: sub_142677240
// 地址: 0x142677240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0xe8)
float zmm6[0x4] = 0x3f800000
float zmm2[0x4] = 0x3f800000
float zmm1[0x4] = *(rax + 0x418)
int128_t zmm7 = *(rax + 0x420)
int32_t zmm3 = *(rax + 0x414)
uint128_t zmm0 = *(rax + 0x428)
int32_t zmm4 = *(rax + 0x42c)
int32_t zmm5 = *(rax + 0x41c)
*arg2 = 0
arg2[1].d = 0
__builtin_memset(&arg2[3], 0, 0x18)
arg2[0xa] = 0
arg2[0xd] = 0
zmm2[0] = 1f / zmm1[0]
*(arg2 + 0x64) = 7
arg2[0xe].d = 0xa
*(arg2 + 0x74) = 0xffffffff
*(arg2 + 0x84) = 0
*(arg2 + 0x14) = zmm1[0]
zmm1 = zmm2
arg2[2].d = zmm3
zmm1[0] = zmm1[0] f* zmm7.d
arg2[6].d = zmm0.d
int32_t rcx = int.d(zmm1[0])

if (rcx != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx)).d f== zmm1[0]))
    zmm1 =
        _mm_cvtepi32_ps(zx.o(rcx + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1) ^ 1)))

zmm2[0] = zmm2[0] f* zmm4
int32_t rcx_2 = int.d(zmm2[0])
*(arg2 + 0x34) = int.d(zmm1[0])

if (rcx_2 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_2)).d f== zmm2[0]))
    zmm2 =
        _mm_cvtepi32_ps(zx.o(rcx_2 + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm2, zmm2[0].q)) & 1) ^ 1)))

zmm6[0] = 1f f/ zmm3
int32_t rax_8 = int.d(zmm2[0])
zmm1 = zmm6
zmm1[0] = zmm1[0] f* zmm5
arg2[7].d = rax_8
int32_t rcx_4 = int.d(zmm1[0])

if (rcx_4 != 0x80000000 && not(_mm_cvtepi32_ps(zx.o(rcx_4)).d f== zmm1[0]))
    zmm1 =
        _mm_cvtepi32_ps(zx.o(rcx_4 + ((_mm_movemask_ps(_mm_unpacklo_ps(zmm1, zmm1[0].q)) & 1) ^ 1)))

*(arg2 + 0x44) = 0x3fa66666
zmm0.d = zmm6.d f* 1200f
*(arg2 + 0x4c) = 0x190
arg2[0xf].d = zmm7.d
*(arg2 + 0x7c) = zmm4
arg2[0x10].d = zmm5
arg2[0xb].d = 6
*(arg2 + 0x5c) = 0x44160000
arg2[0xc].d = 0x3f800000
int32_t rax_12 = int.d(zmm1[0])
zmm1[0] = zmm1[0] + 3f
*(arg2 + 0x3c) = rax_12
*(arg2 + 0xc) = int.d(zmm1[0])
arg2[8].d = int.d(zmm0.d)
zmm0.d = zmm6.d f* *(*(arg1 + 0xe8) + 0x430)
zmm0.d = zmm0.d f* zmm0.d
arg2[9].d = int.d(zmm0.d)
zmm0.d = zmm6.d f* *(*(arg1 + 0xe8) + 0x434)
zmm0.d = zmm0.d f* zmm0.d
*(arg2 + 0x4c) = int.d(zmm0.d)
*(arg2 + 0x44) = *(*(arg1 + 0xe8) + 0x438)
uint32_t rcx_10 = ((*(*(arg1 + 0xe8) + 0x474) & 2) | 0xc) u>> 1
*(arg2 + 0x64) = rcx_10
int32_t rdx_3 = ((*(*(arg1 + 0xe8) + 0x474) & 4) * 2) | rcx_10
*(arg2 + 0x64) = rdx_3
int32_t r8_3 = ((*(*(arg1 + 0xe8) + 0x474) & 8) * 2) | rdx_3
*(arg2 + 0x64) = r8_3
*(arg2 + 0x64) = ((*(*(arg1 + 0xe8) + 0x474) & 0x10) * 2) | r8_3
int64_t* rcx_15 = *(arg1 + 0xe8)

if ((*(rcx_15 + 0x474) & 4) != 0)
    *(arg2 + 0x34) = 1
    rcx_15 = *(arg1 + 0xe8)

void* rax_25 = (*(*rcx_15 + 0x150))(rcx_15)
int64_t* rdi_1

if (rax_25 == 0)
    rdi_1 = nullptr
else
    rdi_1 = *(rax_25 + 0x120)
    
    if (rdi_1 == 0)
        rdi_1 = nullptr
    else
        void* rax_26 = sub_14269bba0()
        void* rdx_4 = rdi_1[2]
        int64_t rax_27 = sx.q(*(rax_26 + 0x38))
        
        if (rax_27.d s> *(rdx_4 + 0x38) || *(*(rdx_4 + 0x30) + (rax_27 << 3)) != rax_26 + 0x30)
            rdi_1 = nullptr

int32_t rax_29
float zmm6_1
rax_29, zmm6_1 = sub_14265c0d0(rdi_1, *(arg1 + 0xe8))
*(arg2 + 0x84) = rax_29
int32_t r8_5 = int.d(zmm6_1 f* *(*(arg1 + 0xe8) + 0x410))
arg2[1].d = r8_5
arg2[0xa].d = divs.dp.d(sx.q(r8_5), *(*(arg1 + 0xe8) + 0x470))
void* rcx_19 = *(arg1 + 0xe8)
*(rcx_19 + 0x46c)
*(arg2 + 0x6c) = divs.dp.d(sx.q(r8_5), *(rcx_19 + 0x46c))
*(arg2 + 0x54) = zx.d(*(*(arg1 + 0xe8) + 0x469))
void* result = *(arg1 + 0xe8)
arg2[0xd].d = zx.d(*(result + 0x468))
return result
