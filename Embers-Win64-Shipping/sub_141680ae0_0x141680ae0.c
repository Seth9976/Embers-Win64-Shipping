// 函数: sub_141680ae0
// 地址: 0x141680ae0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* r15 = arg1 + 0x90
*(arg1 + 9) = 0
int32_t temp0 = divs.dp.d(sx.q(arg2[1].d), *(arg1 + 0x78))
*(arg1 + 0x78)

if (temp0 s> *(r15 + 0xc))
    sub_1405dadb0(r15, temp0)

int32_t rax_3 = sub_14173e730(arg1)
int32_t rdx_3 = arg2[1].d
void* rbp_1 = sx.q(rax_3) * 0xb0 + *(arg1 + 0xb0)
void* var_138 = rbp_1
uint64_t* rdi = rbp_1 + 0x20
uint64_t* var_168 = rdi

if (rdx_3 s> *(rdi + 0xc))
    sub_1405a52a0(rdi, rdx_3)

*(arg1 + 0x60) = 0

if (*(arg1 + 0x64) s<= 0xffffffff)
    sub_1405a52a0(arg1 + 0x58, 0)

sub_14174f160(arg1 + 0x38, 0)
*(arg1 + 0x30) = 0

if (*(arg1 + 0x34) s<= 0xffffffff)
    sub_141750500(arg1 + 0x28, 0)

*(arg1 + 0x50) = 0

if (*(arg1 + 0x54) s<= 0xffffffff)
    sub_1405a52a0(arg1 + 0x48, 0)

int32_t rax_4 = *(arg1 + 0x74)
*(arg1 + 0x70) = 0

if (rax_4 s< 0 && rax_4 != 0)
    sub_1405a5410(arg1 + 0x68, 0)

*(arg1 + 0x88) = 0
*(rbp_1 + 4) = _mm_unpacklo_ps(0x7f7fffff, 0x7f7fffff).q
int32_t var_170 = 0x7f7fffff
*(rbp_1 + 0xc) = 0x7f7fffff
*(rbp_1 + 0x10) = _mm_unpacklo_ps(0xff7fffff, 0xff7fffff).q
int32_t var_140 = 0xff7fffff
*(rbp_1 + 0x18) = 0xff7fffff
void* rsi = *arg2
int64_t rax_5 = sx.q(arg2[1].d)
void* rcx_11 = (rax_5 << 6) + rsi

if (rsi != rcx_11)
    uint128_t zmm6
    uint128_t var_58_1 = zmm6
    void* r15_1 = rsi + 0x28
    uint128_t zmm7
    uint128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int128_t zmm9
    int128_t var_88_1 = zmm9
    uint128_t zmm10
    uint128_t var_98_1 = zmm10
    int128_t zmm13
    int128_t var_c8_1 = zmm13
    int128_t zmm14
    int128_t var_d8_1 = zmm14
    float zmm15[0x4]
    float var_e8_1[0x4] = zmm15
    
    do
        int32_t rax_6 = *(r15_1 + 8)
        zmm7 = zx.o(*(r15_1 + 0xc))
        zmm6 = zx.o(*r15_1)
        zmm8 = *(rsi + 0x10)
        int32_t zmm3 = rax_6
        int64_t zmm0
        zmm0.d = zmm7.q.d f- zmm6.d
        zmm9 = *rsi
        int32_t rax_7 = *(r15_1 + 0x14)
        zmm10 = zx.o(*(rsi + 0x20))
        zmm13 = zmm7.q:4.d
        zmm14 = zmm6.q:4.d
        int64_t zmm2
        zmm2.d = zmm13.q.d f- zmm14.d
        zmm15 = rax_7
        zmm15[0] = zmm15[0] f- zmm3
        
        if (zmm0.d f<= zmm2.d || not(zmm0.d f> zmm15[0]))
            zmm0 = _mm_max_ss(zmm15[0].q.d, zmm2.d).q
        
        if (zmm0.d f> *(arg1 + 0x80))
            int64_t rbp_2 = sx.q(*(arg1 + 0x70))
            int64_t rbx_2 = sx.q(zmm8.d)
            int32_t rax_16 = *(arg1 + 0x60)
            int32_t var_174_1 = 0xffffffff
            
            if (rbx_2.d s>= rbp_2.d)
                int32_t i_1 = rbx_2.d - rbp_2.d + 1
                int32_t rax_17 = i_1 + rbp_2.d
                *(arg1 + 0x70) = rax_17
                
                if (rax_17 s> *(arg1 + 0x74))
                    sub_1405a4f90(arg1 + 0x68)
                
                int64_t* rax_20 = (rbp_2 << 4) + *(arg1 + 0x68)
                
                if (i_1 != 0)
                    int32_t i
                    
                    do
                        *rax_20 = -1
                        rax_20[1].d = 0xffffffff
                        *(rax_20 + 0xc) = 0
                        rax_20 = &rax_20[2]
                        i = i_1
                        i_1 -= 1
                    while (i != 1)
                
                rdi = var_168
            
            int64_t rcx_17 = rbx_2 * 2
            *(*(arg1 + 0x68) + (rcx_17 << 3) + 0xc) = 1
            int64_t rax_22 = *(arg1 + 0x68)
            *(rax_22 + (rcx_17 << 3)) = rax_16.q
            *(rax_22 + (rcx_17 << 3) + 8) = 0xffffffff
            int64_t rbx_3 = sx.q(*(arg1 + 0x60))
            int32_t rax_23 = (rbx_3 + 1).d
            *(arg1 + 0x60) = rax_23
            
            if (rax_23 s> *(arg1 + 0x64))
                sub_1405c4fe0(arg1 + 0x58)
            
            rbp_1 = var_138
            int128_t* rax_26 = (rbx_3 << 6) + *(arg1 + 0x58)
            *rax_26 = zmm9
            rax_26[1] = zmm8
            rax_26[2].q = zmm10.q
            *(rax_26 + 0x28) = zmm6.q
            rax_26[3].d = rax_6
            *(rax_26 + 0x34) = zmm7.q
            *(rax_26 + 0x3c) = rax_7
        else
            int32_t rax_8 = *(r15_1 + 8)
            zmm8 = zmm9
            int64_t rbx_1 = sx.q(rdi[1].d)
            zmm9 = *(rsi + 0x10)
            int32_t rax_9 = *(r15_1 + 0x14)
            int32_t rax_10 = (rbx_1 + 1).d
            rdi[1].d = rax_10
            
            if (rax_10 s> *(rdi + 0xc))
                sub_1405c4fe0(rdi)
                zmm3 = rax_6
            
            int64_t rax_13 = (rbx_1 << 6) + *rdi
            *rax_13 = zmm8
            *(rax_13 + 0x10) = zmm9
            *(rax_13 + 0x20) = zmm10.q
            *(rax_13 + 0x28) = zmm6.q
            *(rax_13 + 0x30) = rax_8
            *(rax_13 + 0x34) = zmm7.q
            *(rax_13 + 0x3c) = rax_9
            zmm2 = *(rbp_1 + 8)
            float zmm1_1[0x4] = _mm_min_ss((*(rbp_1 + 4))[0], zmm6.d)
            zmm0 = *(rbp_1 + 0xc)
            zmm2 = _mm_min_ss(zmm2.d, zmm14.d).q
            zmm0 = _mm_min_ss(zmm0.d, zmm3).q
            zmm1_1 = _mm_unpacklo_ps(zmm1_1, zmm2)
            zmm2 = *(rbp_1 + 0x14)
            *(rbp_1 + 4) = zmm1_1.q
            zmm2 = _mm_max_ss(zmm2.d, zmm13.d).q
            int32_t var_128_1 = zmm0.d
            zmm1_1 = _mm_max_ss((*(rbp_1 + 0x10))[0], zmm7.d)
            zmm0 = _mm_max_ss((*(rbp_1 + 0x18)).d, zmm15[0]).q
            *(rbp_1 + 0xc) = var_128_1
            *(rbp_1 + 0x10) = (_mm_unpacklo_ps(zmm1_1, zmm2)).q
            *(rbp_1 + 0x18) = zmm0.d
        
        rsi += 0x40
        r15_1 += 0x40
    while (rsi != rcx_11)
    
    r15 = arg1 + 0x90
    rax_5 = zx.q(arg2[1].d)

*(arg1 + 0x88) = rax_5.d
*(rbp_1 + 0x30) = 0
int64_t rbx_4 = sx.q(r15[1].d)
int32_t rax_28 = (rbx_4 + 1).d
r15[1].d = rax_28

if (rax_28 s> *(r15 + 0xc))
    sub_1405a4cf0(r15)

*(*r15 + (rbx_4 << 2)) = rax_3
return sub_141757e10(arg1) __tailcall
