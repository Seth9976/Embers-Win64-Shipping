// 函数: sub_1416800b0
// 地址: 0x1416800b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* r12 = arg1 + 0x90
*(arg1 + 9) = 0
int32_t temp0 = divs.dp.d(sx.q(arg2[1].d), *(arg1 + 0x78))
*(arg1 + 0x78)

if (temp0 s> *(r12 + 0xc))
    sub_1405dadb0(r12, temp0)

int32_t rax_3 = sub_14173e730(arg1)
int32_t rdx_3 = arg2[1].d
void* r13_1 = sx.q(rax_3) * 0xb0 + *(arg1 + 0xb0)

if (rdx_3 s> *(r13_1 + 0x2c))
    sub_1413f6f70(r13_1 + 0x20, rdx_3)

*(arg1 + 0x60) = 0

if (*(arg1 + 0x64) s<= 0xffffffff)
    sub_1413f6f70(arg1 + 0x58, 0)

int32_t rax_4 = *(arg1 + 0x44)
int64_t* rbx_1 = *(arg1 + 0x38)
int32_t i_2 = *(arg1 + 0x40)

if (rax_4 s< 0)
    if (i_2 != 0)
        int32_t i
        
        do
            int64_t rcx_6 = *rbx_1
            
            if (rcx_6 != 0)
                sub_140a74f90(rcx_6)
            
            rbx_1 = &rbx_1[5]
            i = i_2
            i_2 -= 1
        while (i != 1)
        rax_4 = *(arg1 + 0x44)
    
    *(arg1 + 0x40) = 0
    
    if (rax_4 != 0)
        sub_1405c5660(arg1 + 0x38, 0)
else
    if (i_2 != 0)
        int32_t i_1
        
        do
            int64_t rcx_5 = *rbx_1
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            rbx_1 = &rbx_1[5]
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)
    
    *(arg1 + 0x40) = 0

*(arg1 + 0x30) = 0

if (*(arg1 + 0x34) s<= 0xffffffff)
    sub_141750500(arg1 + 0x28, 0)

*(arg1 + 0x50) = 0

if (*(arg1 + 0x54) s<= 0xffffffff)
    sub_1413f6f70(arg1 + 0x48, 0)

int32_t rax_5 = *(arg1 + 0x74)
*(arg1 + 0x70) = 0

if (rax_5 s< 0 && rax_5 != 0)
    sub_1405a5410(arg1 + 0x68, 0)

*(arg1 + 0x88) = 0
*(r13_1 + 4) = _mm_unpacklo_ps(0x7f7fffff, 0x7f7fffff).q
int32_t var_100 = 0x7f7fffff
*(r13_1 + 0xc) = 0x7f7fffff
*(r13_1 + 0x10) = _mm_unpacklo_ps(0xff7fffff, 0xff7fffff).q
int32_t var_f0 = 0xff7fffff
*(r13_1 + 0x18) = 0xff7fffff
int32_t* rdi = *arg2
uint64_t rcx_11 = sx.q(arg2[1].d)
void* rdx_5 = rcx_11 * 0x1c + rdi
void* var_108 = rdx_5

if (rdi != rdx_5)
    uint128_t zmm6
    uint128_t var_58_1 = zmm6
    void* rbx_2 = &rdi[1]
    uint128_t zmm7
    uint128_t var_68_1 = zmm7
    int128_t zmm8
    int128_t var_78_1 = zmm8
    int128_t zmm9
    int128_t var_88_1 = zmm9
    float zmm10[0x4]
    float var_98_1[0x4] = zmm10
    int128_t zmm11
    int128_t var_a8_1 = zmm11
    
    do
        zmm6 = zx.o(*(rbx_2 + 0xc))
        zmm7 = zx.o(*rbx_2)
        int64_t zmm0
        zmm0.d = zmm6.q.d f- zmm7.d
        int32_t r12_1 = *rdi
        int32_t rax_8 = *(rbx_2 + 0x14)
        zmm11 = *(rbx_2 + 8)
        zmm8 = zmm6.q:4.d
        zmm9 = zmm7.q:4.d
        int64_t zmm2
        zmm2.d = zmm8.q.d f- zmm9.d
        zmm10 = rax_8
        zmm10[0] = zmm10[0] f- zmm11.d
        
        if (zmm0.d f<= zmm2.d || not(zmm0.d f> zmm10[0]))
            zmm0 = _mm_max_ss(zmm10[0].q.d, zmm2.d).q
        
        if (zmm0.d f> *(arg1 + 0x80))
            int64_t r14_2 = sx.q(*(arg1 + 0x60))
            zmm6 = zmm7
            int32_t r12_2 = *(rbx_2 + 8)
            zmm7 = zx.o(*(rbx_2 + 0xc))
            int32_t rax_16 = (r14_2 + 1).d
            *(arg1 + 0x60) = rax_16
            
            if (rax_16 s> *(arg1 + 0x64))
                sub_1405c50f0(arg1 + 0x58)
                rdx_5 = var_108
            
            int32_t* rcx_17 = r14_2 * 0x1c + *(arg1 + 0x58)
            *rcx_17 = r12_1
            *(rcx_17 + 4) = zmm6.q
            *(rcx_17 + 0x10) = zmm7.q
            rcx_17[3] = r12_2
            rcx_17[6] = rax_8
        else
            int32_t rax_9 = *(rbx_2 + 8)
            int64_t r14_1 = sx.q(*(r13_1 + 0x28))
            int32_t rax_10 = *(rbx_2 + 0x14)
            int32_t rax_11 = (r14_1 + 1).d
            *(r13_1 + 0x28) = rax_11
            
            if (rax_11 s> *(r13_1 + 0x2c))
                sub_1405c50f0(r13_1 + 0x20)
                rdx_5 = var_108
            
            int32_t* rcx_14 = r14_1 * 0x1c + *(r13_1 + 0x20)
            *rcx_14 = r12_1
            *(rcx_14 + 4) = zmm7.q
            rcx_14[3] = rax_9
            *(rcx_14 + 0x10) = zmm6.q
            rcx_14[6] = rax_10
            zmm2 = *(r13_1 + 8)
            float zmm1[0x4] = _mm_min_ss((*(r13_1 + 4))[0], zmm7.d)
            zmm0 = *(r13_1 + 0xc)
            zmm2 = _mm_min_ss(zmm2.d, zmm9.d).q
            zmm6 = __maxss_xmmss_memss(zmm6.d, *(r13_1 + 0x10))
            zmm0 = _mm_min_ss(zmm0.d, zmm11.d).q
            zmm1 = _mm_unpacklo_ps(zmm1, zmm2)
            int32_t var_f0_1 = zmm0.d
            zmm2 = _mm_max_ss((*(r13_1 + 0x14)).d, zmm8.d).q
            zmm0 = _mm_max_ss((*(r13_1 + 0x18)).d, zmm10[0]).q
            *(r13_1 + 4) = zmm1.q
            *(r13_1 + 0xc) = var_f0_1
            *(r13_1 + 0x10) = (_mm_unpacklo_ps(zmm6, zmm2)).q
            *(r13_1 + 0x18) = zmm0.d
        
        rdi = &rdi[7]
        rbx_2 += 0x1c
    while (rdi != rdx_5)
    
    r12 = arg1 + 0x90
    rcx_11 = zx.q(arg2[1].d)

*(arg1 + 0x88) = rcx_11.d
*(r13_1 + 0x30) = 0
int64_t rbx_3 = sx.q(r12[1].d)
int32_t rax_20 = (rbx_3 + 1).d
r12[1].d = rax_20

if (rax_20 s> *(r12 + 0xc))
    sub_1405a4cf0(r12)

*(*r12 + (rbx_3 << 2)) = rax_3
return sub_1417568d0(arg1) __tailcall
