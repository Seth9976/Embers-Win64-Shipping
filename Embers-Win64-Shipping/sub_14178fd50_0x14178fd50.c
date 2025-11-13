// 函数: sub_14178fd50
// 地址: 0x14178fd50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t* r12 = arg1 + 0x90
*(arg1 + 9) = 0
int32_t temp0 = divs.dp.d(sx.q(*(arg2 + 0x10)), *(arg1 + 0x78))
*(arg1 + 0x78)

if (temp0 s> *(r12 + 0xc))
    sub_1405dadb0(r12, temp0)

int32_t rax_3 = sub_14173e730(arg1)
int32_t rdx_3 = *(arg2 + 0x10)
void* rbx_1 = sx.q(rax_3) * 0xb0 + *(arg1 + 0xb0)
void* var_168 = rbx_1
uint64_t* rdi = rbx_1 + 0x20
uint64_t* var_170 = rdi

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

uint128_t zmm8 = 0x7f7fffff
uint128_t zmm9 = 0xff7fffff
*(arg1 + 0x88) = 0
*(rbx_1 + 4) = _mm_unpacklo_ps(0x7f7fffff, 0x7f7fffff).q
*(rbx_1 + 0x10) = _mm_unpacklo_ps(0xff7fffff, 0xff7fffff).q
int32_t var_190 = 0x7f7fffff
*(rbx_1 + 0xc) = 0x7f7fffff
int32_t var_158 = 0xff7fffff
*(rbx_1 + 0x18) = 0xff7fffff
void* var_1c8 = arg2
int64_t* var_1c0 = nullptr
void* i_1 = nullptr
int32_t var_1b0 = 0xffffffff
int32_t var_1a8 = 0
sub_1417b4db0(&var_1c8)
void* i = i_1

if (i != 0)
    int64_t* r12_1 = var_1c0
    uint128_t zmm6
    uint128_t var_58_1 = zmm6
    uint128_t zmm7
    uint128_t var_68_1 = zmm7
    uint128_t zmm10
    uint128_t var_98_1 = zmm10
    uint128_t zmm14
    uint128_t var_d8_1 = zmm14
    uint128_t zmm15
    uint128_t var_e8_1 = zmm15
    int128_t zmm11
    int128_t var_a8_1 = zmm11
    uint128_t zmm12
    uint128_t var_b8_1 = zmm12
    int128_t zmm13
    int128_t var_c8_1 = zmm13
    
    do
        int64_t r8_1 = *(i + 0x40)
        int64_t rcx_10 = sx.q(var_1b0)
        int64_t r10_1 = *(i + 0x58)
        int64_t rdx_4 = rcx_10 * 3
        int32_t r11_1 = *(r8_1 + (rdx_4 << 3) + 8)
        int64_t r9_1 = rcx_10 * 5
        zmm14 = *(r10_1 + (r9_1 << 3) + 0x10)
        int32_t arg_8 = r11_1
        zmm10 = zx.o(*(r10_1 + (r9_1 << 3) + 0x20))
        zmm6 = zx.o(*(r8_1 + (rdx_4 << 3)))
        zmm7 = zx.o(*(r8_1 + (rdx_4 << 3) + 0xc))
        zmm15 = *(r10_1 + (r9_1 << 3))
        int32_t r11_2 = *(r8_1 + (rdx_4 << 3) + 0x14)
        int32_t var_100_1 = zmm14.d
        int32_t arg_18 = r11_2
        uint64_t var_160_1 = zmm10.q
        uint64_t var_188_1 = zmm6.q
        uint64_t var_17c_1 = zmm7.q
        
        if (*(rcx_10 + *(i + 0x28)) == 0)
            int32_t var_120_1 = 0xff7fffff
            arg_8 = 0xff7fffff
            int32_t var_114_1 = 0x7f7fffff
            arg_18 = 0x7f7fffff
            zmm6 = _mm_unpacklo_ps(zmm9, zmm9.q)
            zmm7 = _mm_unpacklo_ps(zmm8, zmm8.q)
        label_141790132:
            int64_t r14_2 = sx.q(*(arg1 + 0x70))
            int64_t rbx_3 = sx.q(var_100_1)
            int32_t rax_12 = *(arg1 + 0x60)
            int32_t var_194_1 = 0xffffffff
            
            if (rbx_3.d s>= r14_2.d)
                int32_t j_1 = rbx_3.d - r14_2.d + 1
                int32_t rax_13 = r14_2.d + j_1
                *(arg1 + 0x70) = rax_13
                
                if (rax_13 s> *(arg1 + 0x74))
                    sub_1405a4f90(arg1 + 0x68)
                
                int64_t* rax_16 = (r14_2 << 4) + *(arg1 + 0x68)
                
                if (j_1 != 0)
                    int32_t j
                    
                    do
                        *rax_16 = -1
                        rax_16[1].d = 0xffffffff
                        *(rax_16 + 0xc) = 0
                        rax_16 = &rax_16[2]
                        j = j_1
                        j_1 -= 1
                    while (j != 1)
                
                rdi = var_170
            
            int64_t rcx_15 = rbx_3 * 2
            *(*(arg1 + 0x68) + (rcx_15 << 3) + 0xc) = 1
            int64_t rax_18 = *(arg1 + 0x68)
            *(rax_18 + (rcx_15 << 3)) = rax_12.q
            *(rax_18 + (rcx_15 << 3) + 8) = 0xffffffff
            int64_t rbx_4 = sx.q(*(arg1 + 0x60))
            int32_t rax_19 = (rbx_4 + 1).d
            *(arg1 + 0x60) = rax_19
            
            if (rax_19 s> *(arg1 + 0x64))
                sub_1405c4fe0(arg1 + 0x58)
            
            rbx_1 = var_168
            int128_t* rax_22 = (rbx_4 << 6) + *(arg1 + 0x58)
            *rax_22 = zmm15
            rax_22[1] = zmm14
            rax_22[2].q = zmm10.q
            *(rax_22 + 0x28) = zmm6.q
            rax_22[3].d = arg_8
            *(rax_22 + 0x34) = zmm7.q
            *(rax_22 + 0x3c) = arg_18
        else
            zmm9 = var_17c_1.d
            zmm10 = var_17c_1:4.d
            zmm8 = var_188_1.d
            zmm11 = var_188_1:4.d
            uint128_t zmm0_1
            zmm0_1.d = zmm9.d f- zmm8.d
            zmm12 = r11_2
            int64_t zmm2
            zmm2.d = zmm10.q.d f- zmm11.d
            zmm13 = r11_1
            uint128_t zmm1_1
            zmm1_1.d = zmm12.d f- zmm13.d
            
            if (zmm0_1.d f<= zmm2.d || not(zmm0_1.d f> zmm1_1.d))
                zmm0_1 = _mm_max_ss(zmm1_1.d, zmm2.d)
            
            if (zmm0_1.d f> *(arg1 + 0x80))
                zmm10 = zx.o(var_160_1)
                goto label_141790132
            
            int64_t rbx_2 = sx.q(rdi[1].d)
            zmm6 = zmm15
            zmm7 = zmm14
            zmm14 = zx.o(*(r10_1 + (r9_1 << 3) + 0x20))
            zmm15 = zx.o(*(r8_1 + (rdx_4 << 3)))
            int32_t r14_1 = *(r8_1 + (rdx_4 << 3) + 8)
            int32_t rax_6 = (rbx_2 + 1).d
            arg_18.q = *(r8_1 + (rdx_4 << 3) + 0xc)
            rdi[1].d = rax_6
            
            if (rax_6 s> *(rdi + 0xc))
                sub_1405c4fe0(rdi)
            
            rbx_1 = var_168
            int64_t rax_9 = (rbx_2 << 6) + *rdi
            *rax_9 = zmm6
            *(rax_9 + 0x10) = zmm7
            *(rax_9 + 0x20) = zmm14.q
            *(rax_9 + 0x34) = arg_18.q
            *(rax_9 + 0x28) = zmm15.q
            *(rax_9 + 0x30) = r14_1
            *(rax_9 + 0x3c) = r11_2
            zmm0_1 = *(rbx_1 + 0xc)
            zmm2 = _mm_min_ss((*(rbx_1 + 8)).d, zmm11.d).q
            zmm8 = __minss_xmmss_memss(zmm8.d, *(rbx_1 + 4))
            zmm0_1 = _mm_min_ss(zmm0_1.d, zmm13.d)
            zmm1_1 = _mm_unpacklo_ps(zmm8, zmm2)
            zmm2 = *(rbx_1 + 0x14)
            *(rbx_1 + 4) = zmm1_1.q
            zmm2 = _mm_max_ss(zmm2.d, zmm10.d).q
            int32_t var_138_1 = zmm0_1.d
            zmm1_1 = _mm_max_ss((*(rbx_1 + 0x10)).d, zmm9.d)
            zmm0_1 = _mm_max_ss((*(rbx_1 + 0x18)).d, zmm12.d)
            *(rbx_1 + 0xc) = var_138_1
            *(rbx_1 + 0x10) = (_mm_unpacklo_ps(zmm1_1, zmm2)).q
            *(rbx_1 + 0x18) = zmm0_1.d
        
        if (r12_1 != 0)
            int32_t var_1a0
            int32_t rax_31 = var_1a0 + 1
            var_1a0 = rax_31
            
            if (rax_31 s>= r12_1[1].d)
            label_141790235:
                var_1a8 += 1
                sub_1417b4db0(&var_1c8)
                r12_1 = var_1c0
                i = i_1
            else
                int64_t* rdx_11 = *(*r12_1 + (sx.q(rax_31) << 3))
                int32_t var_148_1 = rdx_11[1].d
                i_1.o = (*rdx_11).o
                i = i_1
        else
            int32_t rax_24 = var_1b0 + 1
            var_1b0 = rax_24
            int32_t var_1a4
            
            if (rax_24 s>= var_1a4)
                goto label_141790235
        
        zmm8 = 0x7f7fffff
        zmm9 = 0xff7fffff
    while (i != 0)
    
    r12 = arg1 + 0x90

*(arg1 + 0x88) = *(arg2 + 0x10)
*(rbx_1 + 0x30) = 0
int64_t rbx_5 = sx.q(r12[1].d)
int32_t rax_27 = (rbx_5 + 1).d
r12[1].d = rax_27

if (rax_27 s> *(r12 + 0xc))
    sub_1405a4cf0(r12)

*(*r12 + (rbx_5 << 2)) = rax_3
return sub_141757e10(arg1) __tailcall
