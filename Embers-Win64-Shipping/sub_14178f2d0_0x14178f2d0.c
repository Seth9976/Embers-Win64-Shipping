// 函数: sub_14178f2d0
// 地址: 0x14178f2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* r15 = arg1 + 0x90
*(arg1 + 9) = 0
int32_t temp0 = divs.dp.d(sx.q(arg2[1].d), *(arg1 + 0x78))
*(arg1 + 0x78)

if (temp0 s> *(r15 + 0xc))
    sub_1405dadb0(r15, temp0)

int32_t rax_3 = sub_14173e730(arg1)
int32_t rdx_3 = arg2[1].d
void* rbx_1 = sx.q(rax_3) * 0xb0 + *(arg1 + 0xb0)

if (rdx_3 s> *(rbx_1 + 0x2c))
    sub_1413f6f70(rbx_1 + 0x20, rdx_3)

int32_t r13 = 0
*(arg1 + 0x60) = 0

if (*(arg1 + 0x64) s<= 0xffffffff)
    sub_1413f6f70(arg1 + 0x58, 0)

sub_1417b4bf0(arg1 + 0x38, 0)
*(arg1 + 0x30) = 0

if (*(arg1 + 0x34) s<= 0xffffffff)
    sub_141750500(arg1 + 0x28, 0)

*(arg1 + 0x50) = 0

if (*(arg1 + 0x54) s<= 0xffffffff)
    sub_1413f6f70(arg1 + 0x48, 0)

int32_t rax_4 = *(arg1 + 0x74)
*(arg1 + 0x70) = 0

if (rax_4 s< 0 && rax_4 != 0)
    sub_1405a5410(arg1 + 0x68, 0)

*(arg1 + 0x88) = 0
*(rbx_1 + 4) = (_mm_unpacklo_ps(0x7f7fffff, 0x7f7fffff)).q
int32_t var_d4 = 0x7f7fffff
*(rbx_1 + 0xc) = 0x7f7fffff
*(rbx_1 + 0x10) = (_mm_unpacklo_ps(0xff7fffff, 0xff7fffff)).q
int32_t var_e0 = 0xff7fffff
*(rbx_1 + 0x18) = 0xff7fffff
int64_t* r12_1 = *arg2
int64_t rax_6 = sx.q(arg2[1].d)
void* r10_2 = &r12_1[rax_6 * 2]
void* arg_18 = r10_2

if (r12_1 != r10_2)
    uint128_t zmm6
    uint128_t var_48_1 = zmm6
    uint128_t zmm7
    uint128_t var_58_1 = zmm7
    uint128_t zmm8
    uint128_t var_68_1 = zmm8
    uint128_t zmm9
    uint128_t var_78_1 = zmm9
    int128_t zmm10
    int128_t var_88_1 = zmm10
    uint128_t zmm11
    uint128_t var_98_1 = zmm11
    
    do
        void* rcx_9 = *r12_1
        int64_t r9_1 = *(rcx_9 + 0x38)
        int64_t rdx_4 = *(rcx_9 + 0x60)
        int64_t r8_1 = sx.q(r12_1[1].d) * 3
        uint64_t rcx_10 = zx.q(*(rdx_4 + (r8_1 << 1))) * 3
        uint128_t zmm1_1 = zx.o(*(r9_1 + (rcx_10 << 2)))
        int32_t rax_9 = *(r9_1 + (rcx_10 << 2) + 8)
        uint64_t rax_10 = zx.q(*(rdx_4 + (r8_1 << 1) + 2))
        zmm9 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        zmm8 = _mm_shuffle_ps(zmm1_1, zmm1_1, 0x55)
        uint64_t rcx_11 = rax_10 * 3
        uint64_t rax_11 = zx.q(*(rdx_4 + (r8_1 << 1) + 4))
        zmm7 = __maxss_xmmss_memss(zmm1_1.d, *(r9_1 + (rcx_11 << 2)))
        zmm9 = __maxss_xmmss_memss(zmm9.d, *(r9_1 + (rcx_11 << 2) + 4))
        zmm11 = __maxss_xmmss_memss(rax_9.d, *(r9_1 + (rcx_11 << 2) + 8))
        zmm6 = __minss_xmmss_memss(zmm1_1.d, *(r9_1 + (rcx_11 << 2)))
        zmm8 = __minss_xmmss_memss(zmm8.d, *(r9_1 + (rcx_11 << 2) + 4))
        zmm10 = __minss_xmmss_memss(rax_9.d, *(r9_1 + (rcx_11 << 2) + 8))
        uint64_t rcx_12 = rax_11 * 3
        zmm7 = __maxss_xmmss_memss(zmm7.d, *(r9_1 + (rcx_12 << 2)))
        zmm9 = __maxss_xmmss_memss(zmm9.d, *(r9_1 + (rcx_12 << 2) + 4))
        zmm6 = __minss_xmmss_memss(zmm6.d, *(r9_1 + (rcx_12 << 2)))
        zmm8 = __minss_xmmss_memss(zmm8.d, *(r9_1 + (rcx_12 << 2) + 4))
        zmm11 = __maxss_xmmss_memss(zmm11.d, *(r9_1 + (rcx_12 << 2) + 8))
        zmm10 = __minss_xmmss_memss(zmm10.d, *(r9_1 + (rcx_12 << 2) + 8))
        float zmm0[0x4] = zmm7
        int32_t var_dc_1 = zmm7.d
        zmm0[0] = zmm0[0] f- zmm6.d
        int32_t var_e4_1 = zmm8.d
        uint128_t zmm2
        zmm2.d = zmm9.d f- zmm8.d
        int32_t var_d8_1 = zmm9.d
        int32_t var_e0_1 = zmm10.d
        int32_t var_d4_1 = zmm11.d
        zmm1_1.d = zmm11.d f- zmm10.d
        
        if (zmm0[0] f<= zmm2.d || not(zmm0[0] f> zmm1_1.d))
            zmm0 = _mm_max_ss(zmm2[0], zmm1_1.d)
        
        if (zmm0[0] f> *(arg1 + 0x80))
            int64_t r15_2 = sx.q(*(arg1 + 0x60))
            int32_t rax_17 = (r15_2 + 1).d
            *(arg1 + 0x60) = rax_17
            
            if (rax_17 s> *(arg1 + 0x64))
                sub_1405c50f0(arg1 + 0x58)
                r10_2 = arg_18
            
            int32_t* rcx_18 = r15_2 * 0x1c + *(arg1 + 0x58)
            *rcx_18 = r13
            *(rcx_18 + 4) = zmm6.d.q
            rcx_18[3] = var_e0_1
            *(rcx_18 + 0x10) = var_dc_1.q
            rcx_18[6] = var_d4_1
        else
            int64_t r15_1 = sx.q(*(rbx_1 + 0x28))
            int32_t rax_12 = (r15_1 + 1).d
            *(rbx_1 + 0x28) = rax_12
            
            if (rax_12 s> *(rbx_1 + 0x2c))
                sub_1405c50f0(rbx_1 + 0x20)
                r10_2 = arg_18
            
            zmm0 = _mm_unpacklo_ps(zmm6, zmm8.q)
            int32_t var_e8_1
            var_e8_1.q = zmm0.q
            int32_t* rcx_15 = r15_1 * 0x1c + *(rbx_1 + 0x20)
            *rcx_15 = r13
            *(rcx_15 + 4) = zmm0.q
            rcx_15[3] = var_e0_1
            *(rcx_15 + 0x10) = var_dc_1.q
            rcx_15[6] = var_d4_1
            zmm0 = *(rbx_1 + 0xc)
            zmm2 = _mm_min_ss((*(rbx_1 + 8)).d, zmm8.d)
            zmm6 = __minss_xmmss_memss(zmm6.d, *(rbx_1 + 4))
            zmm7 = __maxss_xmmss_memss(zmm7.d, *(rbx_1 + 0x10))
            zmm0 = _mm_min_ss(zmm0[0], zmm10.d)
            zmm1_1 = _mm_unpacklo_ps(zmm6, zmm2.q)
            float var_c8_1 = zmm0[0]
            zmm2 = _mm_max_ss((*(rbx_1 + 0x14)).d, zmm9.d)
            zmm0 = _mm_max_ss((*(rbx_1 + 0x18))[0], zmm11.d)
            *(rbx_1 + 4) = zmm1_1.q
            *(rbx_1 + 0xc) = var_c8_1
            *(rbx_1 + 0x10) = (_mm_unpacklo_ps(zmm7, zmm2.q)).q
            *(rbx_1 + 0x18) = zmm0[0]
        
        r13 += 1
        r12_1 = &r12_1[2]
    while (r12_1 != r10_2)
    
    r15 = arg1 + 0x90
    rax_6 = zx.q(arg2[1].d)

*(arg1 + 0x88) = rax_6.d
*(rbx_1 + 0x30) = 0
int64_t rbx_2 = sx.q(r15[1].d)
int32_t rax_21 = (rbx_2 + 1).d
r15[1].d = rax_21

if (rax_21 s> *(r15 + 0xc))
    sub_1405a4cf0(r15)

*(*r15 + (rbx_2 << 2)) = rax_3
return sub_1417568d0(arg1) __tailcall
