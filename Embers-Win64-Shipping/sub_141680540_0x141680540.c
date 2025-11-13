// 函数: sub_141680540
// 地址: 0x141680540
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
uint64_t* var_178 = rdi

if (rdx_3 s> *(rdi + 0xc))
    sub_1405a52a0(rdi, rdx_3)

*(arg1 + 0x60) = 0

if (*(arg1 + 0x64) s<= 0xffffffff)
    sub_1405a52a0(arg1 + 0x58, 0)

int32_t rax_4 = *(arg1 + 0x44)
void* rcx_5 = *(arg1 + 0x38)
int32_t i_3 = *(arg1 + 0x40)

if (rax_4 s< 0)
    if (i_3 != 0)
        void* rdi_2 = rcx_5 + 0x18
        int32_t i
        
        do
            int64_t rcx_7 = *rdi_2
            
            if (rcx_7 != 0)
                sub_140a74f90(rcx_7)
            
            rdi_2 += 0x40
            i = i_3
            i_3 -= 1
        while (i != 1)
        rax_4 = *(arg1 + 0x44)
        rdi = var_178
    
    *(arg1 + 0x40) = 0
    
    if (rax_4 != 0)
        sub_1405a52a0(arg1 + 0x38, 0)
else
    if (i_3 != 0)
        int64_t* rdi_1 = rcx_5 + 0x18
        int32_t i_1
        
        do
            int64_t rcx_6 = *rdi_1
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rdi_1 = &rdi_1[8]
            i_1 = i_3
            i_3 -= 1
        while (i_1 != 1)
        rdi = var_178
    
    *(arg1 + 0x40) = 0

*(arg1 + 0x30) = 0

if (*(arg1 + 0x34) s<= 0xffffffff)
    sub_141750500(arg1 + 0x28, 0)

*(arg1 + 0x50) = 0

if (*(arg1 + 0x54) s<= 0xffffffff)
    sub_1405a52a0(arg1 + 0x48, 0)

int32_t rax_5 = *(arg1 + 0x74)
*(arg1 + 0x70) = 0

if (rax_5 s< 0 && rax_5 != 0)
    sub_1405a5410(arg1 + 0x68, 0)

*(arg1 + 0x88) = 0
*(rbp_1 + 4) = _mm_unpacklo_ps(0x7f7fffff, 0x7f7fffff).q
int32_t var_168 = 0x7f7fffff
*(rbp_1 + 0xc) = 0x7f7fffff
*(rbp_1 + 0x10) = _mm_unpacklo_ps(0xff7fffff, 0xff7fffff).q
int32_t var_140 = 0xff7fffff
*(rbp_1 + 0x18) = 0xff7fffff
void* rsi = *arg2
int64_t rax_7 = sx.q(arg2[1].d)
void* rcx_14 = (rax_7 << 6) + rsi

if (rsi != rcx_14)
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
        int32_t rax_8 = *(r15_1 + 8)
        zmm6 = zx.o(*(r15_1 + 0xc))
        zmm7 = zx.o(*r15_1)
        zmm8 = *(rsi + 0x10)
        int32_t zmm3 = rax_8
        int64_t zmm0
        zmm0.d = zmm6.q.d f- zmm7.d
        zmm9 = *rsi
        int32_t rax_9 = *(r15_1 + 0x14)
        zmm10 = zx.o(*(rsi + 0x20))
        zmm13 = zmm6.q:4.d
        zmm14 = zmm7.q:4.d
        int64_t zmm2
        zmm2.d = zmm13.q.d f- zmm14.d
        zmm15 = rax_9
        zmm15[0] = zmm15[0] f- zmm3
        
        if (zmm0.d f<= zmm2.d || not(zmm0.d f> zmm15[0]))
            zmm0 = _mm_max_ss(zmm15[0].q.d, zmm2.d).q
        
        if (zmm0.d f> *(arg1 + 0x80))
            int64_t rbp_2 = sx.q(*(arg1 + 0x70))
            int64_t rbx_2 = sx.q(zmm8.d)
            int32_t rax_18 = *(arg1 + 0x60)
            int32_t var_16c_1 = 0xffffffff
            
            if (rbx_2.d s>= rbp_2.d)
                int32_t i_4 = rbx_2.d - rbp_2.d + 1
                int32_t rax_19 = i_4 + rbp_2.d
                *(arg1 + 0x70) = rax_19
                
                if (rax_19 s> *(arg1 + 0x74))
                    sub_1405a4f90(arg1 + 0x68)
                
                int64_t* rax_22 = (rbp_2 << 4) + *(arg1 + 0x68)
                
                if (i_4 != 0)
                    int32_t i_2
                    
                    do
                        *rax_22 = -1
                        rax_22[1].d = 0xffffffff
                        *(rax_22 + 0xc) = 0
                        rax_22 = &rax_22[2]
                        i_2 = i_4
                        i_4 -= 1
                    while (i_2 != 1)
            
            int64_t rcx_20 = rbx_2 * 2
            *(*(arg1 + 0x68) + (rcx_20 << 3) + 0xc) = 1
            int64_t rax_24 = *(arg1 + 0x68)
            *(rax_24 + (rcx_20 << 3)) = rax_18.q
            *(rax_24 + (rcx_20 << 3) + 8) = 0xffffffff
            int64_t rbx_3 = sx.q(*(arg1 + 0x60))
            int32_t rax_25 = (rbx_3 + 1).d
            *(arg1 + 0x60) = rax_25
            
            if (rax_25 s> *(arg1 + 0x64))
                sub_1405c4fe0(arg1 + 0x58)
            
            rdi = var_178
            rbp_1 = var_138
            int128_t* rax_28 = (rbx_3 << 6) + *(arg1 + 0x58)
            *rax_28 = zmm9
            rax_28[1] = zmm8
            rax_28[2].q = zmm10.q
            *(rax_28 + 0x28) = zmm7.q
            rax_28[3].d = rax_8
            *(rax_28 + 0x34) = zmm6.q
            *(rax_28 + 0x3c) = rax_9
        else
            int32_t rax_10 = *(r15_1 + 8)
            zmm8 = zmm9
            int64_t rbx_1 = sx.q(rdi[1].d)
            zmm9 = *(rsi + 0x10)
            int32_t rax_11 = *(r15_1 + 0x14)
            int32_t rax_12 = (rbx_1 + 1).d
            rdi[1].d = rax_12
            
            if (rax_12 s> *(rdi + 0xc))
                sub_1405c4fe0(rdi)
                zmm3 = rax_8
            
            int64_t rax_15 = (rbx_1 << 6) + *rdi
            *rax_15 = zmm8
            *(rax_15 + 0x10) = zmm9
            *(rax_15 + 0x20) = zmm10.q
            *(rax_15 + 0x28) = zmm7.q
            *(rax_15 + 0x30) = rax_10
            *(rax_15 + 0x34) = zmm6.q
            *(rax_15 + 0x3c) = rax_11
            zmm2 = *(rbp_1 + 8)
            float zmm1[0x4] = _mm_min_ss((*(rbp_1 + 4))[0], zmm7.d)
            zmm0 = *(rbp_1 + 0xc)
            zmm2 = _mm_min_ss(zmm2.d, zmm14.d).q
            zmm6 = __maxss_xmmss_memss(zmm6.d, *(rbp_1 + 0x10))
            zmm0 = _mm_min_ss(zmm0.d, zmm3).q
            zmm1 = _mm_unpacklo_ps(zmm1, zmm2)
            int32_t var_128_1 = zmm0.d
            zmm2 = _mm_max_ss((*(rbp_1 + 0x14)).d, zmm13.d).q
            zmm0 = _mm_max_ss((*(rbp_1 + 0x18)).d, zmm15[0]).q
            *(rbp_1 + 4) = zmm1.q
            *(rbp_1 + 0xc) = var_128_1
            *(rbp_1 + 0x10) = (_mm_unpacklo_ps(zmm6, zmm2)).q
            *(rbp_1 + 0x18) = zmm0.d
        
        rsi += 0x40
        r15_1 += 0x40
    while (rsi != rcx_14)
    
    r15 = arg1 + 0x90
    rax_7 = zx.q(arg2[1].d)

*(arg1 + 0x88) = rax_7.d
*(rbp_1 + 0x30) = 0
int64_t rbx_4 = sx.q(r15[1].d)
int32_t rax_30 = (rbx_4 + 1).d
r15[1].d = rax_30

if (rax_30 s> *(r15 + 0xc))
    sub_1405a4cf0(r15)

*(*r15 + (rbx_4 << 2)) = rax_3
return sub_141757400(arg1) __tailcall
