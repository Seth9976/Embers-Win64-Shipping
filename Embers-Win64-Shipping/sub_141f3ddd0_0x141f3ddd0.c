// 函数: sub_141f3ddd0
// 地址: 0x141f3ddd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbx = arg3

if (sub_1422e48a0(arg2) s< 3 || data_143a2d754 == 0)
    int32_t rax
    rax.b = 0
    return rax

int64_t rdi = sx.q(*(rbx + 0xd30))
int32_t rax_1 = (rdi + 1).d
*(rbx + 0xd30) = rax_1

if (rax_1 s> *(rbx + 0xd34))
    sub_141f22b00(rbx, rdi.d)

void* rax_2 = *(rbx + 0xd20)

if (rax_2 != 0)
    rbx = rax_2

void* rdi_1 = rdi * 0x230
void* rdi_2 = rdi_1 + rbx

if (rdi_1 == neg.q(rbx))
    rdi_2 = nullptr
else
    *(rdi_2 + 0x9c) = 0x3f800000
    *(rdi_2 + 0x90) = 0
    *(rdi_2 + 0x98) = 0
    *(rdi_2 + 0xb0) = 0
    *(rdi_2 + 0xb4) = 0x4a000000
    *(rdi_2 + 0xbc) = 0
    *(rdi_2 + 0xc0) = 0x4a000000
    *(rdi_2 + 0x130) = 0
    *(rdi_2 + 0x140) = 0
    *(rdi_2 + 0x144) = 6
    *(rdi_2 + 0x1d0) = 0
    *(rdi_2 + 0x1e0) = 0
    *(rdi_2 + 0x1e4) = 8
    *(rdi_2 + 0x210) = 0
    *(rdi_2 + 0x214) = 0xffffffff
    *(rdi_2 + 0x218) = 0x3f800000
    *(rdi_2 + 0x220) = 0

int64_t zmm4 = (zx.o(0)).q
float var_90 = (*(arg1 + 0xb8) ^ 0x80000000)[0]
*rdi_2 = (_mm_unpacklo_ps(*(arg1 + 0xb0) ^ 0x80000000, (*(arg1 + 0xb4) ^ 0x80000000)[0].q)).q
*(rdi_2 + 8) = var_90
float zmm2[0x4] = *(arg1 + 0x50)
float zmm3[0x4] = *(arg1 + 0x60)
*(rdi_2 + 0x10) = *(arg1 + 0x40)
int32_t var_90_1 = 0x3f800000
*(rdi_2 + 0x20) = zmm2
int32_t var_90_2 = 0x3f800000
*(rdi_2 + 0x30) = zmm3
*(rdi_2 + 0x40) = 0
*(rdi_2 + 0x50) = (_mm_unpacklo_ps(0x3f800000, 0x3f800000)).q
*(rdi_2 + 0x5c) = (_mm_unpacklo_ps(zx.o(0), zmm4)).q
float zmm0[0x4] = _mm_unpacklo_ps(zx.o(0), zmm4)
*(rdi_2 + 0x58) = 0x3f800000
*(rdi_2 + 0x64) = 0x3f800000
zmm2 = *(arg1 + 0x170)
float var_84 = zmm2[0]
int64_t var_74 = (_mm_unpacklo_ps(zmm2, zmm2[0].q)).q
float var_68 = zmm2[0]
*(rdi_2 + 0xa0) = 0x3dcccccd
int32_t var_90_3 = 0
int32_t var_78 = 0
float var_6c = var_84
float var_80[0x4]
var_80[0].q = zmm0.q
*(rdi_2 + 0x68) = var_80
*(rdi_2 + 0x78) = var_74
*(rdi_2 + 0x90) = data_142d4cc30
*(rdi_2 + 0x80) = var_68
*(rdi_2 + 0xa4) = *(arg1 + 0x170)
int64_t rbx_1 = sx.q((*U"1111")[sx.q(sub_1422e48a0(arg2))])
uint64_t rax_9

if (sub_1405fba70(rbx_1.d, 3) == 0 || (rbx_1.d u<= 0x1f && test_bit(0xc8451800, rbx_1.d)))
label_141f3e0bf:
    int64_t rbx_2 = sx.q((*U"1111")[sx.q(sub_1422e48a0(arg2))])
    
    if (sub_1405fba70(rbx_2.d, 3).b == 0 || ((rbx_2.d u> 0x1f || not(test_bit(0xc8451800, rbx_2.d)))
            && *(rbx_2 * 0x14 + &data_143f025f0) != data_143f025b0))
        rax_9.b = 0
    else if (rbx_2.d u> 0x1b)
        if (((*(rbx_2 * 0x14 + &data_143f025fc) u>> 2).b & 1) == 0)
            rax_9.b = 0
        else
            rax_9.b = 1
    else if (test_bit(0x857c041, rbx_2.d) || ((*(rbx_2 * 0x14 + &data_143f025fc) u>> 2).b & 1) != 0)
        rax_9.b = 1
    else
        rax_9.b = 0
else
    int64_t rdx_1 = rbx_1 * 5
    int64_t rcx_5 = *((rdx_1 << 2) + &data_143f025f0)
    
    if (rcx_5 == data_143f025b0 || (((rbx_1 - 0x11).d & 0xfffffff3) == 0 && rbx_1.d != 0x19))
        goto label_141f3e0bf
    
    if (rcx_5 != data_143f025c0)
        if (rbx_1.d == 0x30)
            goto label_141f3e0bf
        
        rax_9.b = 1
    else
        if ((*((rdx_1 << 2) + &data_143f025fc) & 1) != 0 || rbx_1.d == 0x30)
            goto label_141f3e0bf
        
        rax_9.b = 1

*(rdi_2 + 0x220) = rax_9.b

if ((*(arg1 + 0x13a) & 8) == 0)
    rax_9.b = 0
else
    int64_t rdx_2 = sx.q((*U"1111")[sx.q(sub_1422e48a0(arg2).d)])
    
    if (rdx_2.d u> 0x1f || not(test_bit(0x88051005, rdx_2.d)))
        int64_t r8 = rdx_2 * 5
        int64_t r9_1 = *((r8 << 2) + &data_143f025f0)
        
        if ((r9_1 == data_143f025b0 && *((r8 << 2) + 0x143f025f8) == 3)
                || (rdx_2.d u<= 0x30 && test_bit(0x1000010100010, rdx_2)))
            rax_9.b = 1
        else if (r9_1 != data_143f025c0)
            if ((rdx_2 - 0x19).d u<= 1 || ((*(rdx_2 * 0x14 + &data_143f025fc) u>> 8).b & 1) != 0)
                rax_9.b = 1
            else
                rax_9.b = 0
        else if (*((r8 << 2) + 0x143f025f8) == 3 || (rdx_2 - 0x19).d u<= 1
                || ((*(rdx_2 * 0x14 + &data_143f025fc) u>> 8).b & 1) != 0)
            rax_9.b = 1
        else
            rax_9.b = 0
    else
        rax_9.b = 1

*(rdi_2 + 0x221) = rax_9.b
rax_9.b = 1
return rax_9
