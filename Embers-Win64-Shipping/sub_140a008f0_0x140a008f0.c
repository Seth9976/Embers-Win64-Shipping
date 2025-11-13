// 函数: sub_140a008f0
// 地址: 0x140a008f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg3[1].d = 0

if (*(arg3 + 0xc) != 0)
    sub_1405dadb0(arg3, 0)

arg4[1].d = 0

if (*(arg4 + 0xc) != 0)
    sub_140638cc0(arg4, 0)

uint64_t* rsi = arg5
rsi[1].d = 0

if (*(rsi + 0xc) != 0)
    sub_1405c5570(rsi, 0)

uint64_t* rdi = arg6
rdi[1].d = 0

if (*(rdi + 0xc) != 0)
    sub_1405c5570(rdi, 0)

if (arg1 s< 2 || arg2 s< 2)
    return 

int32_t rcx_4 = 0
int128_t zmm11 = arg7
arg6.d = arg2 - 1
int32_t arg_18 = 0
uint128_t zmm1 = _mm_cvtepi32_ps(zx.o(arg1))
uint128_t zmm2 = _mm_cvtepi32_ps(zx.o(arg2))
int32_t var_124_1 = zmm1.d
uint128_t zmm6
zmm6.d = zmm1.d f* zmm11.d
float zmm0[0x4] = zmm2
zmm0[0] = zmm0[0] f* zmm11.d
int32_t var_120_1 = zmm2.d
zmm6.d = zmm6.d f* 0.5f
zmm0[0] = zmm0[0] * 0.5f
arg5.d = zmm6.d
float var_128_1 = zmm0[0]

if (arg2 - 1 s<= 0)
    return 

int32_t rdx = arg6.d
int32_t rax = arg1 - 1
uint128_t zmm7
uint128_t var_58_1 = zmm7
uint128_t zmm8
uint128_t var_68_1 = zmm8
uint128_t zmm9
uint128_t var_78_1 = zmm9
uint128_t zmm10
uint128_t var_88_1 = zmm10
uint128_t zmm12
uint128_t var_a8_1 = zmm12
uint128_t zmm13
uint128_t var_b8_1 = zmm13
int128_t zmm14
int128_t var_c8_1 = zmm14
int32_t arg_20 = rax

do
    int32_t r12_1 = 0
    
    if (rax s> 0)
        uint64_t r14_2 = zx.q(rax * rcx_4)
        zmm10 = _mm_cvtepi32_ps(zx.o(rcx_4))
        int32_t arg_8 = r14_2.d
        zmm14.d = 1f f/ zmm1.d
        int32_t r13_1 = ((r14_2 << 2) + 1).d
        zmm13 = zmm10
        zmm10.d = zmm10.d f+ 0.5f
        zmm13.d = zmm13.d f* zmm11.d
        zmm13.d = zmm13.d f- zmm0[0]
        zmm10.d = zmm10.d f/ zmm2.d
        int32_t var_114_1 = zmm13.d
        zmm12.d = zmm13.d f+ zmm11.d
        
        do
            int64_t rbp_1 = sx.q(arg3[1].d)
            int32_t rax_1 = (rbp_1 + 1).d
            arg3[1].d = rax_1
            
            if (rax_1 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            *(*arg3 + (rbp_1 << 2)) = r13_1 + 2
            int64_t rbp_2 = sx.q(arg3[1].d)
            int32_t rax_3 = (rbp_2 + 1).d
            arg3[1].d = rax_3
            
            if (rax_3 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            *(*arg3 + (rbp_2 << 2)) = r13_1
            int64_t rbp_3 = sx.q(arg3[1].d)
            int32_t rax_5 = (rbp_3 + 1).d
            arg3[1].d = rax_5
            
            if (rax_5 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            *(*arg3 + (rbp_3 << 2)) = r13_1 - 1
            int64_t rbp_4 = sx.q(arg3[1].d)
            int32_t rax_7 = (rbp_4 + 1).d
            arg3[1].d = rax_7
            
            if (rax_7 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            *(*arg3 + (rbp_4 << 2)) = r13_1 + 2
            int64_t rbp_5 = sx.q(arg3[1].d)
            int32_t rax_9 = (rbp_5 + 1).d
            arg3[1].d = rax_9
            
            if (rax_9 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            *(*arg3 + (rbp_5 << 2)) = r13_1 + 1
            int64_t rbp_6 = sx.q(arg3[1].d)
            int32_t rax_11 = (rbp_6 + 1).d
            arg3[1].d = rax_11
            
            if (rax_11 s> *(arg3 + 0xc))
                sub_1405a4cf0(arg3)
            
            uint64_t rax_12 = *arg3
            zmm9 = _mm_cvtepi32_ps(zx.o(r12_1))
            *(rax_12 + (rbp_6 << 2)) = r13_1
            zmm8.d = zmm9.d f* zmm11.d
            zmm8.d = zmm8.d f- zmm6.d
            int32_t var_118_1 = zmm8.d
            zmm0, zmm8, zmm9 = sub_140a454f0(_mm_cvtepi32_ps(zx.o(arg_8)), 0x40a00000)
            int64_t rbp_7 = sx.q(arg4[1].d)
            zmm6.d = zmm0.d f* zmm11.d
            int32_t rax_13 = (rbp_7 + 1).d
            arg4[1].d = rax_13
            
            if (rax_13 s> *(arg4 + 0xc))
                sub_140638a00(arg4)
            
            int64_t rcx_12 = *arg4
            int64_t rdx_11 = rbp_7 * 3
            zmm7.d = zmm8.d f+ zmm11.d
            int32_t var_104_1 = zmm13.d
            *(rcx_12 + (rdx_11 << 2)) = var_118_1.q
            *(rcx_12 + (rdx_11 << 2) + 8) = zmm6.d
            int64_t rbp_8 = sx.q(arg4[1].d)
            int32_t rax_15 = (rbp_8 + 1).d
            arg4[1].d = rax_15
            
            if (rax_15 s> *(arg4 + 0xc))
                sub_140638a00(arg4)
            
            int64_t rcx_14 = *arg4
            int64_t rdx_14 = rbp_8 * 3
            int32_t var_f8_1 = zmm12.d
            *(rcx_14 + (rdx_14 << 2)) = zmm7.d.q
            *(rcx_14 + (rdx_14 << 2) + 8) = zmm6.d
            int64_t rbp_9 = sx.q(arg4[1].d)
            int32_t rax_17 = (rbp_9 + 1).d
            arg4[1].d = rax_17
            
            if (rax_17 s> *(arg4 + 0xc))
                sub_140638a00(arg4)
            
            int64_t rcx_16 = *arg4
            int64_t rdx_17 = rbp_9 * 3
            int32_t var_ec_1 = zmm12.d
            *(rcx_16 + (rdx_17 << 2)) = zmm7.d.q
            *(rcx_16 + (rdx_17 << 2) + 8) = zmm6.d
            int64_t rbp_10 = sx.q(arg4[1].d)
            int32_t rax_19 = (rbp_10 + 1).d
            arg4[1].d = rax_19
            
            if (rax_19 s> *(arg4 + 0xc))
                sub_140638a00(arg4)
            
            int64_t rcx_18 = *arg4
            int64_t rdx_20 = rbp_10 * 3
            *(rcx_18 + (rdx_20 << 2)) = zmm8.d.q
            *(rcx_18 + (rdx_20 << 2) + 8) = zmm6.d
            int64_t rbp_11 = sx.q(rsi[1].d)
            int32_t rax_21 = (rbp_11 + 1).d
            rsi[1].d = rax_21
            
            if (rax_21 s> *(rsi + 0xc))
                sub_1405a4d70(rsi)
            
            *(*rsi + (rbp_11 << 3)) = 0
            int64_t rbp_12 = sx.q(rsi[1].d)
            int32_t rax_23 = (rbp_12 + 1).d
            rsi[1].d = rax_23
            
            if (rax_23 s> *(rsi + 0xc))
                sub_1405a4d70(rsi)
            
            *(*rsi + (rbp_12 << 3)) = 0x3f800000
            int64_t rbp_13 = sx.q(rsi[1].d)
            int32_t rax_25 = (rbp_13 + 1).d
            rsi[1].d = rax_25
            
            if (rax_25 s> *(rsi + 0xc))
                sub_1405a4d70(rsi)
            
            uint64_t rax_26 = *rsi
            *(rax_26 + (rbp_13 << 3)) = 0x3f800000
            *(rax_26 + (rbp_13 << 3) + 4) = 0x3f800000
            int64_t rbp_14 = sx.q(rsi[1].d)
            int32_t rax_27 = (rbp_14 + 1).d
            rsi[1].d = rax_27
            
            if (rax_27 s> *(rsi + 0xc))
                sub_1405a4d70(rsi)
            
            uint64_t rax_28 = *rsi
            zmm9.d = zmm9.d f+ 0.5f
            *(rax_28 + (rbp_14 << 3)) = 0
            *(rax_28 + (rbp_14 << 3) + 4) = 0x3f800000
            int64_t rbp_15 = sx.q(rdi[1].d)
            zmm9.d = zmm9.d f* zmm14.d
            int32_t rax_29 = (rbp_15 + 1).d
            rdi[1].d = rax_29
            
            if (rax_29 s> *(rdi + 0xc))
                sub_1405a4d70(rdi)
            
            uint64_t rax_30 = *rdi
            *(rax_30 + (rbp_15 << 3)) = zmm9.d
            *(rax_30 + (rbp_15 << 3) + 4) = zmm10.d
            int64_t rbp_16 = sx.q(rdi[1].d)
            int32_t rax_31 = (rbp_16 + 1).d
            rdi[1].d = rax_31
            
            if (rax_31 s> *(rdi + 0xc))
                sub_1405a4d70(rdi)
            
            uint64_t rax_32 = *rdi
            *(rax_32 + (rbp_16 << 3)) = zmm9.d
            *(rax_32 + (rbp_16 << 3) + 4) = zmm10.d
            int64_t rbp_17 = sx.q(rdi[1].d)
            int32_t rax_33 = (rbp_17 + 1).d
            rdi[1].d = rax_33
            
            if (rax_33 s> *(rdi + 0xc))
                sub_1405a4d70(rdi)
            
            uint64_t rax_34 = *rdi
            *(rax_34 + (rbp_17 << 3)) = zmm9.d
            *(rax_34 + (rbp_17 << 3) + 4) = zmm10.d
            int64_t rbp_18 = sx.q(rdi[1].d)
            int32_t rax_35 = (rbp_18 + 1).d
            rdi[1].d = rax_35
            
            if (rax_35 s> *(rdi + 0xc))
                sub_1405a4d70(rdi)
            
            uint64_t rax_36 = *rdi
            zmm6 = arg5.d
            r12_1 += 1
            r13_1 += 4
            arg_8 += 1
            *(rax_36 + (rbp_18 << 3)) = zmm9.d
            *(rax_36 + (rbp_18 << 3) + 4) = zmm10.d
            rax = arg_20
        while (r12_1 s< rax)
        
        zmm0 = var_128_1
        zmm1 = var_124_1
        zmm2 = var_120_1
        rcx_4 = arg_18
        rdx = arg6.d
    
    rcx_4 += 1
    arg_18 = rcx_4
while (rcx_4 s< rdx)
