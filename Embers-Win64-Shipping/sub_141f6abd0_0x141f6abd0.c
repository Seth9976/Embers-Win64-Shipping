// 函数: sub_141f6abd0
// 地址: 0x141f6abd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg3 + 0xd30))
void* rbx = arg3
int32_t rax = (rdi + 1).d
*(arg3 + 0xd30) = rax

if (rax s> *(arg3 + 0xd34))
    sub_141f22b00(rbx, rdi.d)

void* rax_1 = *(rbx + 0xd20)

if (rax_1 != 0)
    rbx = rax_1

int64_t rcx_1 = rdi * 0x230
void* rbx_1 = rbx + rcx_1

if (rbx == neg.q(rcx_1))
    rbx_1 = nullptr
else
    *(rbx_1 + 0x9c) = 0x3f800000
    *(rbx_1 + 0x90) = 0
    *(rbx_1 + 0x98) = 0
    *(rbx_1 + 0xb0) = 0
    *(rbx_1 + 0xb4) = 0x4a000000
    *(rbx_1 + 0xbc) = 0
    *(rbx_1 + 0xc0) = 0x4a000000
    *(rbx_1 + 0x130) = 0
    *(rbx_1 + 0x140) = 0
    *(rbx_1 + 0x144) = 6
    *(rbx_1 + 0x1d0) = 0
    *(rbx_1 + 0x1e0) = 0
    *(rbx_1 + 0x1e4) = 8
    *(rbx_1 + 0x210) = 0
    *(rbx_1 + 0x214) = 0xffffffff
    *(rbx_1 + 0x218) = 0x3f800000
    *(rbx_1 + 0x220) = 0

float var_80 = (*(arg1 + 0xb8) ^ 0x80000000)[0]
*rbx_1 = (_mm_unpacklo_ps(*(arg1 + 0xb0) ^ 0x80000000, (*(arg1 + 0xb4) ^ 0x80000000)[0].q)).q
*(rbx_1 + 8) = var_80
float zmm2[0x4] = *(arg1 + 0x50)
float zmm3[0x4] = *(arg1 + 0x60)
*(rbx_1 + 0x10) = *(arg1 + 0x40)
*(rbx_1 + 0x20) = zmm2
*(rbx_1 + 0x30) = zmm3
*(rbx_1 + 0x40) = 0
float zmm1[0x4] = *(arg1 + 0x1ac)
*(rbx_1 + 0x50) = (_mm_unpacklo_ps(0x3f800000, zmm1[0].q)).q
*(rbx_1 + 0x58) = zmm1[0]
*(rbx_1 + 0x5c) = (_mm_unpacklo_ps(0x3f800000, (zx.o(0)).q)).q
int32_t var_80_2 = 0
*(rbx_1 + 0x64) = 0
zmm1 = *(arg1 + 0x1a0)
zmm2 = *(arg1 + 0x40)
float zmm5 = *(arg1 + 0x60)
float zmm0[0x4] = *(arg1 + 0x170)
int64_t zmm4

if (zmm1[0] >= 0.707106769f)
    zmm3 = 0x3f000000
    zmm3[0] = 0.5f / zmm1[0]
    zmm3[0] = zmm3[0] * zmm0[0]
    zmm0 = zmm3
    zmm4.d = zmm3[0].q.d f* zmm5
    zmm5 = zmm3[0] f* *(arg1 + 0x50)
    zmm0[0] = zmm0[0] * zmm2[0]
else
    zmm4 = zmm0[0].q
    zmm3 = zmm0
    zmm3[0] = zmm3[0] f* *(arg1 + 0x1a8)
    zmm4.d = zmm4.d f* zmm5
    zmm5 = zmm0[0] f* *(arg1 + 0x50)
    zmm0[0] = zmm0[0] * zmm2[0]
    zmm5 = zmm5 * zmm1[0]
    zmm4.d = zmm4.d f* zmm1[0]
    zmm0[0] = zmm0[0] * zmm1[0]

zmm2 = *(arg1 + 0xb0)
zmm1 = *(arg1 + 0xb4)
zmm2[0] = zmm2[0] + zmm0[0]
zmm0 = *(arg1 + 0xb8)
zmm1[0] = zmm1[0] + zmm5
zmm0[0] = zmm0[0] f+ zmm4.d
float var_74 = zmm3[0]
float var_58 = zmm3[0]
zmm2[0] = zmm2[0] f- *(arg1 + 0xb0)
zmm1[0] = zmm1[0] f- *(arg1 + 0xb4)
zmm0[0] = zmm0[0] f- *(arg1 + 0xb8)
*(rbx_1 + 0xa0) = 0x3dcccccd
zmm2 = _mm_unpacklo_ps(zmm2, zmm1[0].q)
float var_80_3 = zmm0[0]
int64_t var_64 = (_mm_unpacklo_ps(zmm3, zmm3[0].q)).q
float var_68 = var_80_3
float var_5c = var_74
float var_70[0x4]
var_70[0].q = zmm2.q
*(rbx_1 + 0x68) = var_70
*(rbx_1 + 0x78) = var_64
*(rbx_1 + 0x90) = data_142d4cc30
*(rbx_1 + 0x80) = var_58
*(rbx_1 + 0xa4) = *(arg1 + 0x170)

if ((*(arg1 + 0x13a) & 8) == 0)
    *(rbx_1 + 0x221) = 0
else
    int64_t rdx_1 = sx.q((*U"1111")[sx.q(sub_1422e48a0(arg2))])
    
    if (rdx_1.d u> 0x1f || not(test_bit(0x88051005, rdx_1.d)))
        int64_t r8 = rdx_1 * 5
        int64_t r9_1 = *((r8 << 2) + &data_143f025f0)
        
        if ((r9_1 == data_143f025b0 && *((r8 << 2) + 0x143f025f8) == 3)
                || (rdx_1.d u<= 0x30 && test_bit(0x1000010100010, rdx_1)))
            *(rbx_1 + 0x221) = 1
        else if (r9_1 != data_143f025c0)
            if ((rdx_1 - 0x19).d u<= 1 || ((*(rdx_1 * 0x14 + &data_143f025fc) u>> 8).b & 1) != 0)
                *(rbx_1 + 0x221) = 1
            else
                *(rbx_1 + 0x221) = 0
        else if (*((r8 << 2) + 0x143f025f8) == 3 || (rdx_1 - 0x19).d u<= 1
                || ((*(rdx_1 * 0x14 + &data_143f025fc) u>> 8).b & 1) != 0)
            *(rbx_1 + 0x221) = 1
        else
            *(rbx_1 + 0x221) = 0
    else
        *(rbx_1 + 0x221) = 1

int32_t result
result.b = 1
return result
