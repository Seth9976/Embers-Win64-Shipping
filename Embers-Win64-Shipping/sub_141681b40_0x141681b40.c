// 函数: sub_141681b40
// 地址: 0x141681b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rsi = arg3

if (arg2 == 0 || *(sx.q(arg2[1].d) + *(*arg2 + 0x398)) != 4)
    arg3.b = 0
else
    arg3.b = 1

int64_t r10

if (rsi == 0 || *(sx.q(rsi[1].d) + *(*rsi + 0x398)) != 4)
    r10.b = 0
else
    r10.b = 1

uint128_t zmm6 = *arg4
uint128_t zmm7 = *(arg4 + 4)
uint128_t zmm2 = *(arg4 + 8)
uint128_t zmm9 = zx.o(0)
uint128_t zmm5 = 0x80000000
uint128_t zmm4 = zx.o(0)
uint128_t zmm10
uint128_t var_68 = zmm10
uint128_t zmm11
uint128_t var_78 = zmm11
uint128_t zmm12
uint128_t var_88 = zmm12
int32_t var_e8 = 0
int32_t arg_10 = 0
uint128_t zmm3
zmm3.d = zmm6.d f* zmm6.d
uint128_t zmm13
uint128_t var_98 = zmm13
uint128_t zmm0
zmm0.d = zmm7.d f* zmm7.d
uint128_t zmm1
zmm1.d = zmm2.d f* zmm2.d
uint128_t zmm14
uint128_t var_a8 = zmm14
zmm3.d = zmm3.d f+ zmm0.d
int32_t var_e0 = zmm6.d
uint128_t zmm15
uint128_t var_b8 = zmm15
zmm3.d = zmm3.d f+ zmm1.d
int32_t arg_20 = zmm3.d
uint32_t var_d0
int32_t var_c0
int32_t arg_18
uint128_t zmm8

if (arg3.b != 0)
    uint64_t var_c8_1
    int32_t var_c0_1
    
    if (r10.b != 0)
        var_c8_1 = 0
        var_c0_1 = 0
    else
        var_c8_1 = *arg8
        var_c0_1 = arg8[1].d
    
    int64_t r8 = sx.q(arg2[1].d)
    zmm12 = zx.o(var_c8_1)
    void* rdx_1 = *arg2
    var_c0 = var_c0_1
    zmm3 = *(arg5 + 8)
    zmm15 = *arg5
    zmm1 = *(arg5 + 4)
    zmm0.d = zmm3.d f* zmm7.d
    uint128_t* rax_11 = (r8 << 4) + *(rdx_1 + 0x3e0)
    zmm4.d = zmm1.d f* zmm2.d
    zmm3.d = zmm3.d f* zmm6.d
    zmm9 = *(rax_11 + 0xc)
    zmm4.d = zmm4.d f- zmm0.d
    zmm14 = *rax_11
    zmm11 = *(rax_11 + 4)
    zmm13 = *(rax_11 + 8)
    zmm0.d = zmm15.d f* zmm2.d
    zmm1.d = zmm1.d f* zmm6.d
    zmm2 = zmm13 ^ 0x80000000
    zmm15.d = zmm15.d f* zmm7.d
    zmm3.d = zmm3.d f- zmm0.d
    zmm8.d = zmm4.d f* zmm2.d
    zmm15.d = zmm15.d f- zmm1.d
    int32_t var_e4_1 = zmm4.d
    zmm7 = zmm14 ^ 0x80000000
    zmm6 = zmm11 ^ 0x80000000
    arg_10 = zmm3.d
    zmm0.d = zmm3.d f* zmm2.d
    zmm3.d = zmm3.d f* zmm7.d
    zmm5.d = zmm15.d f* zmm6.d
    zmm5.d = zmm5.d f- zmm0.d
    zmm0.d = zmm15.d f* zmm7.d
    zmm8.d = zmm8.d f- zmm0.d
    zmm0.d = zmm4.d f* zmm6.d
    zmm5.d = zmm5.d f+ zmm5.d
    zmm3.d = zmm3.d f- zmm0.d
    zmm8.d = zmm8.d f+ zmm8.d
    zmm1.d = zmm9.d f* zmm5.d
    zmm1.d = zmm1.d f+ zmm4.d
    zmm4.d = zmm5.d f* zmm2.d
    zmm0.d = zmm8.d f* zmm2.d
    zmm3.d = zmm3.d f+ zmm3.d
    zmm5.d = zmm5.d f* zmm6.d
    zmm10.d = zmm3.d f* zmm6.d
    zmm10.d = zmm10.d f- zmm0.d
    zmm0.d = zmm3.d f* zmm7.d
    zmm4.d = zmm4.d f- zmm0.d
    zmm10.d = zmm10.d f+ zmm1.d
    zmm0.d = zmm9.d f* zmm3.d
    zmm1.d = zmm9.d f* zmm8.d
    zmm8.d = zmm8.d f* zmm7.d
    zmm0.d = zmm0.d f+ zmm15.d
    zmm1.d = zmm1.d f+ arg_10
    zmm8.d = zmm8.d f- zmm5.d
    zmm4.d = zmm4.d f+ zmm1.d
    zmm8.d = zmm8.d f+ zmm0.d
    int32_t* rax_14 = (r8 << 6) + *(rdx_1 + 0x2a8)
    int64_t rcx_1 = r8 * 3
    arg_18 = zmm12.d
    zmm0.d = zmm10.d f* *rax_14
    zmm5 = zmm11
    zmm1.d = zmm8.d f* rax_14[2]
    zmm6.d = zmm10.d f* rax_14[4]
    zmm7.d = zmm4.d f* rax_14[1]
    zmm10.d = zmm10.d f* rax_14[8]
    zmm7.d = zmm7.d f+ zmm0.d
    zmm0.d = zmm4.d f* rax_14[5]
    zmm4.d = zmm4.d f* rax_14[9]
    zmm6.d = zmm6.d f+ zmm0.d
    zmm7.d = zmm7.d f+ zmm1.d
    zmm1.d = zmm8.d f* rax_14[6]
    zmm10.d = zmm10.d f+ zmm4.d
    zmm8.d = zmm8.d f* rax_14[0xa]
    int64_t rax_15 = *(rdx_1 + 0x1b8)
    zmm6.d = zmm6.d f+ zmm1.d
    zmm2.d = zmm7.d f* zmm13.d
    zmm10.d = zmm10.d f+ zmm8.d
    zmm4.d = (*(rax_15 + (rcx_1 << 2))).d f- zmm12.d
    zmm0.d = zmm6.d f* zmm13.d
    zmm1.d = zmm6.d f* zmm14.d
    zmm3.d = zmm10.d f* zmm11.d
    zmm3.d = zmm3.d f- zmm0.d
    zmm0.d = zmm10.d f* zmm14.d
    zmm2.d = zmm2.d f- zmm0.d
    zmm0.d = zmm7.d f* zmm11.d
    zmm3.d = zmm3.d f+ zmm3.d
    zmm1.d = zmm1.d f- zmm0.d
    zmm0 = zmm13
    zmm13.d = zmm13.d f* zmm3.d
    zmm2.d = zmm2.d f+ zmm2.d
    zmm11.d = zmm11.d f* zmm3.d
    zmm1.d = zmm1.d f+ zmm1.d
    zmm3.d = zmm3.d f* zmm9.d
    zmm0.d = zmm0.d f* zmm2.d
    zmm7.d = zmm7.d f+ zmm3.d
    zmm3.d = (*(rax_15 + (rcx_1 << 2) + 8)).d f- var_c0
    zmm5.d = zmm5.d f* zmm1.d
    zmm5.d = zmm5.d f- zmm0.d
    zmm0.d = zmm14.d f* zmm1.d
    zmm14.d = zmm14.d f* zmm2.d
    zmm13.d = zmm13.d f- zmm0.d
    zmm2.d = zmm2.d f* zmm9.d
    zmm0 = zmm12.q:4.d
    zmm5.d = zmm5.d f+ zmm7.d
    zmm1.d = zmm1.d f* zmm9.d
    zmm14.d = zmm14.d f- zmm11.d
    zmm6.d = zmm6.d f+ zmm2.d
    var_d0 = zmm0.d
    int64_t rax_16 = *(rdx_1 + 0x1d0)
    zmm10.d = zmm10.d f+ zmm1.d
    zmm2.d = (*(rax_15 + (rcx_1 << 2) + 4)).d f- zmm0.d
    zmm13.d = zmm13.d f+ zmm6.d
    zmm0.d = zmm5.d f* *(rax_16 + (rcx_1 << 2))
    zmm14.d = zmm14.d f+ zmm10.d
    zmm6.d = zmm13.d f* *(rax_16 + (rcx_1 << 2) + 4)
    zmm1.d = zmm14.d f* *(rax_16 + (rcx_1 << 2) + 8)
    zmm6.d = zmm6.d f+ zmm0.d
    zmm4.d = zmm4.d f* *arg4
    zmm6.d = zmm6.d f+ zmm1.d
    zmm7 = *(arg4 + 4)
    zmm10.d = arg_20.d f/ *(*(rdx_1 + 0x2c0) + (r8 << 2))
    zmm9 = 0
    zmm1.d = var_e4_1.d f* zmm5.d
    zmm5 = 0x80000000
    zmm2.d = zmm2.d f* zmm7.d
    zmm0.d = arg_10.d f* zmm13.d
    zmm4.d = zmm4.d f+ zmm2.d
    zmm15.d = zmm15.d f* zmm14.d
    zmm2 = *(arg4 + 8)
    zmm1.d = zmm1.d f+ zmm0.d
    zmm3.d = zmm3.d f* zmm2.d
    zmm4.d = zmm4.d f+ zmm3.d
    zmm1.d = zmm1.d f+ zmm15.d
    zmm6.d = zmm6.d f+ zmm4.d
    zmm4 = 0
    zmm10.d = zmm10.d f+ zmm1.d
    var_e8 = zmm6.d
    zmm6 = var_e0
    arg_10 = zmm10.d
else
    zmm0 = zx.o(*arg7)
    int32_t rax_4 = arg7[1].d
    var_d0 = (_mm_shuffle_ps(zmm0, zmm0, 0x55)).d
    arg_18 = zmm0.q.d.d
    var_c0 = rax_4

if (r10.b != 0)
    int64_t r8_1 = sx.q(rsi[1].d)
    void* rdx_2 = *rsi
    zmm15 = *(arg6 + 8)
    zmm14 = *arg6
    zmm1 = *(arg6 + 4)
    zmm0.d = zmm15.d f* zmm7.d
    int128_t* rax_21 = (r8_1 << 4) + *(rdx_2 + 0x3e0)
    zmm4.d = zmm1.d f* zmm2.d
    zmm1.d = zmm1.d f* zmm6.d
    zmm9 = *(rax_21 + 0xc)
    zmm4.d = zmm4.d f- zmm0.d
    zmm13 = *rax_21
    zmm11 = *(rax_21 + 4)
    zmm12 = *(rax_21 + 8)
    zmm0.d = zmm14.d f* zmm2.d
    zmm2 = zmm12 ^ zmm5
    zmm14.d = zmm14.d f* zmm7.d
    int32_t* rax_24 = (r8_1 << 6) + *(rdx_2 + 0x2a8)
    zmm15.d = zmm15.d f* zmm6.d
    zmm14.d = zmm14.d f- zmm1.d
    zmm8.d = zmm4.d f* zmm2.d
    zmm15.d = zmm15.d f- zmm0.d
    int32_t var_d8_1 = zmm4.d
    zmm7 = zmm13 ^ zmm5
    zmm6 = zmm11 ^ zmm5
    zmm5.d = zmm14.d f* zmm6.d
    zmm0.d = zmm15.d f* zmm2.d
    zmm3.d = zmm15.d f* zmm7.d
    zmm5.d = zmm5.d f- zmm0.d
    zmm0.d = zmm14.d f* zmm7.d
    zmm8.d = zmm8.d f- zmm0.d
    zmm0.d = zmm4.d f* zmm6.d
    zmm5.d = zmm5.d f+ zmm5.d
    zmm3.d = zmm3.d f- zmm0.d
    zmm8.d = zmm8.d f+ zmm8.d
    zmm1.d = zmm9.d f* zmm5.d
    zmm1.d = zmm1.d f+ zmm4.d
    zmm4.d = zmm5.d f* zmm2.d
    zmm0.d = zmm8.d f* zmm2.d
    zmm3.d = zmm3.d f+ zmm3.d
    zmm5.d = zmm5.d f* zmm6.d
    zmm10.d = zmm3.d f* zmm6.d
    zmm10.d = zmm10.d f- zmm0.d
    zmm0.d = zmm3.d f* zmm7.d
    zmm4.d = zmm4.d f- zmm0.d
    zmm10.d = zmm10.d f+ zmm1.d
    zmm0.d = zmm9.d f* zmm3.d
    zmm1.d = zmm9.d f* zmm8.d
    zmm8.d = zmm8.d f* zmm7.d
    zmm0.d = zmm0.d f+ zmm14.d
    zmm1.d = zmm1.d f+ zmm15.d
    zmm8.d = zmm8.d f- zmm5.d
    zmm4.d = zmm4.d f+ zmm1.d
    zmm8.d = zmm8.d f+ zmm0.d
    zmm7.d = zmm4.d f* rax_24[1]
    zmm0.d = zmm10.d f* *rax_24
    int64_t rcx_2 = r8_1 * 3
    zmm1.d = zmm8.d f* rax_24[2]
    zmm5 = zmm11
    zmm6.d = zmm10.d f* rax_24[4]
    zmm7.d = zmm7.d f+ zmm0.d
    zmm10.d = zmm10.d f* rax_24[8]
    zmm0.d = zmm4.d f* rax_24[5]
    zmm4.d = zmm4.d f* rax_24[9]
    zmm7.d = zmm7.d f+ zmm1.d
    zmm6.d = zmm6.d f+ zmm0.d
    zmm1 = zmm8
    zmm8.d = zmm8.d f* rax_24[0xa]
    zmm1.d = zmm1.d f* rax_24[6]
    zmm10.d = zmm10.d f+ zmm4.d
    int64_t rax_25 = *(rdx_2 + 0x1b8)
    zmm3.d = zmm7.d f* zmm12.d
    zmm6.d = zmm6.d f+ zmm1.d
    zmm4.d = (*(rax_25 + (rcx_2 << 2))).d f- arg_18
    zmm10.d = zmm10.d f+ zmm8.d
    zmm0.d = zmm6.d f* zmm12.d
    zmm2.d = zmm6.d f* zmm13.d
    zmm1.d = zmm10.d f* zmm11.d
    zmm1.d = zmm1.d f- zmm0.d
    zmm0.d = zmm10.d f* zmm13.d
    zmm3.d = zmm3.d f- zmm0.d
    zmm0.d = zmm7.d f* zmm11.d
    zmm1.d = zmm1.d f+ zmm1.d
    zmm2.d = zmm2.d f- zmm0.d
    zmm0 = zmm12
    zmm12.d = zmm12.d f* zmm1.d
    zmm3.d = zmm3.d f+ zmm3.d
    zmm11.d = zmm11.d f* zmm1.d
    zmm2.d = zmm2.d f+ zmm2.d
    zmm0.d = zmm0.d f* zmm3.d
    zmm5.d = zmm5.d f* zmm2.d
    zmm5.d = zmm5.d f- zmm0.d
    zmm0.d = zmm13.d f* zmm2.d
    zmm13.d = zmm13.d f* zmm3.d
    zmm12.d = zmm12.d f- zmm0.d
    zmm0.d = zmm9.d f* zmm1.d
    zmm1 = zmm9
    zmm9.d = zmm9.d f* zmm2.d
    zmm13.d = zmm13.d f- zmm11.d
    zmm7.d = zmm7.d f+ zmm0.d
    zmm2.d = (*(rax_25 + (rcx_2 << 2) + 4)).d f- var_d0
    zmm1.d = zmm1.d f* zmm3.d
    zmm10.d = zmm10.d f+ zmm9.d
    int64_t rax_26 = *(rdx_2 + 0x1d0)
    zmm5.d = zmm5.d f+ zmm7.d
    zmm7 = *(arg4 + 4)
    zmm6.d = zmm6.d f+ zmm1.d
    zmm3.d = (*(rax_25 + (rcx_2 << 2) + 8)).d f- var_c0
    zmm13.d = zmm13.d f+ zmm10.d
    zmm2.d = zmm2.d f* zmm7.d
    zmm0.d = zmm5.d f* *(rax_26 + (rcx_2 << 2))
    zmm12.d = zmm12.d f+ zmm6.d
    zmm6 = *arg4
    zmm1.d = zmm13.d f* *(rax_26 + (rcx_2 << 2) + 8)
    zmm4.d = zmm4.d f* zmm6.d
    zmm9.d = zmm12.d f* *(rax_26 + (rcx_2 << 2) + 4)
    zmm4.d = zmm4.d f+ zmm2.d
    zmm9.d = zmm9.d f+ zmm0.d
    zmm9.d = zmm9.d f+ zmm1.d
    zmm2 = *(arg4 + 8)
    zmm3.d = zmm3.d f* zmm2.d
    zmm0.d = var_d8_1.d f* zmm5.d
    zmm4.d = zmm4.d f+ zmm3.d
    zmm15.d = zmm15.d f* zmm12.d
    zmm14.d = zmm14.d f* zmm13.d
    zmm0.d = zmm0.d f+ zmm15.d
    zmm9.d = zmm9.d f+ zmm4.d
    zmm4.d = arg_20.d f/ *(*(rdx_2 + 0x2c0) + (r8_1 << 2))
    zmm0.d = zmm0.d f+ zmm14.d
    zmm4.d = zmm4.d f+ zmm0.d

zmm1.d = var_e8.d f- zmm9.d
zmm1.d = zmm1.d f* -2f
int32_t rax_28

if (zmm1.d f>= 0f)
    zmm4.d = zmm4.d f+ arg_10
    uint64_t var_c8
    int32_t var_c0_2
    
    if (zmm1.d f>= zmm4.d)
        var_c8 = *arg4
        var_c0_2 = *(arg4 + 8)
    else
        zmm0.d = 1f f/ zmm4.d
        zmm6.d = zmm6.d f* zmm1.d
        zmm7.d = zmm7.d f* zmm1.d
        zmm2.d = zmm2.d f* zmm1.d
        zmm6.d = zmm6.d f* zmm0.d
        zmm7.d = zmm7.d f* zmm0.d
        zmm2.d = zmm2.d f* zmm0.d
        var_c8.d = zmm6.d
        var_c8:4.d = zmm7.d
        var_c0_2 = zmm2.d
    
    rax_28 = var_c0_2
    *arg1 = var_c8
else
    rax_28 = 0
    *arg1 = 0

arg1[1].d = rax_28
return arg1
