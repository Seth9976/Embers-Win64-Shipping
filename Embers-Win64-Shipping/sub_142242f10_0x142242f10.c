// 函数: sub_142242f10
// 地址: 0x142242f10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdi_1 = *(arg1 + 0x28) << 5
uint32_t zmm15[0x4] = arg2
int32_t i = 0
*(arg1 + 0x110) = sub_142240500(arg1 + 0x40, rdi_1)
float zmm2

if (*(arg1 + 0x16c) s> 0)
    float* rdx_1 = nullptr
    float* r8 = nullptr
    
    do
        int64_t rax_1 = *(arg1 + 0x80)
        int64_t rcx_1 = *(arg1 + 0x50)
        i += 1
        arg2 = *(r8 + rax_1 + 4)
        zmm2 = *(r8 + rax_1 + 8)
        float zmm0_1 = zmm15[0] f* *(r8 + rax_1)
        r8 = &r8[3]
        arg2[0] = arg2[0] f* zmm15[0]
        zmm0_1 = zmm0_1 f+ *(rdx_1 + rcx_1)
        zmm2 = zmm2 f* zmm15[0]
        arg2[0] = arg2[0] f+ *(rdx_1 + rcx_1 + 4)
        zmm2 = zmm2 f+ *(rdx_1 + rcx_1 + 8)
        *(rdx_1 + rcx_1) = zmm0_1
        *(rdx_1 + rcx_1 + 4) = arg2[0]
        *(rdx_1 + rcx_1 + 8) = zmm2
        rdx_1 = &rdx_1[0x18]
    while (i s< *(arg1 + 0x16c))

memset(*(arg1 + 0x80), 0, sx.q(*(arg1 + 0x168)) * 0xc)
memset(*(arg1 + 0x110), 0, sx.q(rdi_1))
arg2 = *(arg3 + 4)
uint64_t r8_4 = zx.q(*(arg1 + 0x16c))
int64_t rdx_2 = *(arg1 + 0x60)
int64_t rcx_4 = *(arg1 + 0x50)
uint32_t var_d8 = (*arg3)[0]
uint32_t var_d0 = (*(arg3 + 8))[0]
uint32_t var_d4 = arg2[0]
PxConstructSolverBodies(rcx_4, rdx_2, r8_4, &var_d8, zmm15[0])
uint64_t rdx_3 = sx.q(*(arg1 + 0x168))
int64_t r14 = sx.q(*(arg1 + 0x28))
int128_t zmm13
zmm13.d = 1f f/ zmm15[0]

if (rdx_3 s< r14)
    int128_t zmm6
    int128_t var_38_1 = zmm6
    int128_t zmm7
    int128_t var_48_1 = zmm7
    int128_t zmm8
    int128_t var_58_1 = zmm8
    uint32_t zmm9[0x4]
    uint32_t var_68_1[0x4] = zmm9
    uint32_t zmm10[0x4]
    uint32_t var_78_1[0x4] = zmm10
    uint64_t rdi_3 = rdx_3 * 0x60
    uint64_t rbp_2 = rdx_3 << 5
    uint32_t zmm11[0x4]
    uint32_t var_88_1[0x4] = zmm11
    int64_t i_2 = r14 - rdx_3
    uint32_t zmm12[0x4]
    uint32_t var_98_1[0x4] = zmm12
    int64_t i_1
    
    do
        int64_t rax_3 = *(arg1 + 0x70)
        
        if (*(rax_3 + rbp_2 + 0x1c) != 0)
            int64_t rsi_1 = *(arg1 + 0x50)
            uint32_t zmm3[0x4] = *(rax_3 + rbp_2)
            zmm12 = *(rax_3 + rbp_2 + 0xc)
            zmm9 = zmm3
            uint32_t zmm4_1[0x4] = *(rax_3 + rbp_2 + 4)
            zmm2 = *(rdi_3 + rsi_1 + 0x3c)
            uint32_t zmm5_1[0x4] = *(rax_3 + rbp_2 + 8)
            zmm10 = zmm4_1
            uint32_t zmm0_2[0x4] = *(rax_3 + rbp_2 + 0x10)
            zmm11 = zmm5_1
            zmm0_2[0] = zmm0_2[0] f- *(rdi_3 + rsi_1 + 0x40)
            zmm6 = *(rdi_3 + rsi_1 + 0x30) ^ 0x80000000
            zmm7 = *(rdi_3 + rsi_1 + 0x34)
            zmm8 = *(rdi_3 + rsi_1 + 0x38) ^ 0x80000000
            zmm4_1[0] = zmm4_1[0] f* zmm8.d
            zmm7 ^= 0x80000000
            uint32_t arg_10 = zmm0_2[0]
            zmm0_2 = *(rax_3 + rbp_2 + 0x14)
            zmm0_2[0] = zmm0_2[0] f- *(rdi_3 + rsi_1 + 0x44)
            zmm9[0] = zmm9[0] f* zmm2
            zmm10[0] = zmm10[0] f* zmm2
            float arg_8 = zmm0_2[0]
            zmm0_2 = *(rax_3 + rbp_2 + 0x18)
            zmm0_2[0] = zmm0_2[0] f- *(rdi_3 + rsi_1 + 0x48)
            zmm11[0] = zmm11[0] f* zmm2
            uint32_t arg_18 = zmm0_2[0]
            zmm12[0] = zmm12[0] f* zmm6.d
            zmm9[0] = zmm9[0] f+ zmm12[0]
            zmm5_1[0] = zmm5_1[0] f* zmm7.d
            zmm9[0] = zmm9[0] f+ zmm4_1[0]
            zmm5_1[0] = zmm5_1[0] f* zmm6.d
            zmm5_1[0] = zmm5_1[0] f* zmm8.d
            zmm9[0] = zmm9[0] f- zmm5_1[0]
            zmm12[0] = zmm12[0] f* zmm7.d
            zmm10[0] = zmm10[0] f+ zmm12[0]
            zmm3[0] = zmm3[0] f* zmm8.d
            zmm10[0] = zmm10[0] f+ zmm5_1[0]
            zmm3[0] = zmm3[0] f* zmm6.d
            zmm3[0] = zmm3[0] f* zmm7.d
            zmm10[0] = zmm10[0] f- zmm3[0]
            zmm12[0] = zmm12[0] f* zmm8.d
            zmm12[0] = zmm12[0] f* zmm2
            zmm11[0] = zmm11[0] f+ zmm12[0]
            zmm4_1[0] = zmm4_1[0] f* zmm7.d
            zmm12[0] = zmm12[0] f- zmm3[0]
            zmm4_1[0] = zmm4_1[0] f* zmm6.d
            zmm11[0] = zmm11[0] f+ zmm3[0]
            zmm12[0] = zmm12[0] f- zmm4_1[0]
            zmm11[0] = zmm11[0] f- zmm4_1[0]
            zmm12[0] = zmm12[0] f- zmm5_1[0]
            
            if (not(zmm12[0] f>= 0f))
                zmm9 ^= 0x80000000
                zmm10 ^= 0x80000000
                zmm11 ^= 0x80000000
                zmm12 ^= 0x80000000
            
            zmm2 = zmm10[0] f* zmm10[0]
            zmm9[0] = zmm9[0] f* zmm9[0]
            zmm11[0] = zmm11[0] f* zmm11[0]
            zmm0_2 = zx.o(0)
            zmm2 = zmm2 f+ zmm9[0] f+ zmm11[0]
            
            if (zmm2 >= 1.00000002e-16f)
                zmm3 = 0x3f800000
                zmm3[0] = 1f f/ _mm_sqrt_ss(0, zmm2)[0]
                bool cond:0_1 = __andps_xmmxud_memxud(zmm12, data_142d3f770)[0] f>= 9.99999994e-09f
                zmm9[0] = zmm9[0] f* zmm3[0]
                zmm10[0] = zmm10[0] f* zmm3[0]
                zmm11[0] = zmm11[0] f* zmm3[0]
                
                if (cond:0_1)
                    zmm3[0] = zmm3[0] f* zmm2
                    zmm0_2 = atan2f(zmm3[0], zmm12[0])
                    zmm0_2[0] = zmm0_2[0] f+ zmm0_2[0]
                else
                    zmm0_2 = 0x40490fdb
            else
                zmm9 = 0x3f800000
                zmm10 = zx.o(0)
                zmm11 = zx.o(0)
            
            arg2 = arg_10
            zmm3 = arg_18
            zmm9[0] = zmm9[0] f* zmm0_2[0]
            zmm10[0] = zmm10[0] f* zmm0_2[0]
            zmm11[0] = zmm11[0] f* zmm0_2[0]
            arg2[0] = arg2[0] f* zmm13.d
            *(rdi_3 + rsi_1) = arg2[0]
            zmm3[0] = zmm3[0] f* zmm13.d
            *(rdi_3 + rsi_1 + 4) = arg_8 f* zmm13.d
            zmm9[0] = zmm9[0] f* zmm13.d
            *(rdi_3 + rsi_1 + 8) = zmm3[0]
            zmm10[0] = zmm10[0] f* zmm13.d
            zmm11[0] = zmm11[0] f* zmm13.d
            *(rdi_3 + rsi_1 + 0x10) = zmm9[0]
            *(rdi_3 + rsi_1 + 0x14) = zmm10[0]
            *(rdi_3 + rsi_1 + 0x18) = zmm11[0]
        
        rbp_2 += 0x20
        rdi_3 += 0x60
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    rdx_3 = zx.q(*(arg1 + 0x168))

int64_t rax_4 = sx.q(*(arg1 + 0x16c))
var_d8.q = 0
int32_t var_d0_1 = 0
int64_t result = PxConstructSolverBodies(rax_4 * 0x60 + *(arg1 + 0x50), 
    rax_4 * 0x70 + *(arg1 + 0x60), zx.q(*(arg1 + 0x170) - rax_4.d + rdx_3.d), &var_d8, zmm15[0])
return result
