// 函数: sub_140de7d80
// 地址: 0x140de7d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint128_t zmm10 = zx.o(arg2)
uint128_t zmm9
zmm9.d = zmm10.d f- arg1[2].d
uint128_t zmm8
zmm8.d = (*(arg1 + 0x14)).d f- _mm_shuffle_ps(zmm10, zmm10, 0x55).d
uint128_t zmm1
zmm1.d = zmm9.d f* zmm9.d
uint128_t zmm0
zmm0.d = zmm8.d f* zmm8.d
zmm1.d = zmm1.d f+ zmm0.d
uint128_t zmm3

if (zmm1.d f<= 9.99999994e-09f)
    zmm8 = zx.o(0)
    zmm9 = zx.o(0)
else
    zmm3.d = zmm1.d
    float temp0_1[0x4] = _mm_rsqrt_ss(zmm3[0], zmm3.d)
    zmm3.d = zmm3.d f* 0.5f
    zmm0.d = temp0_1.d f* temp0_1[0]
    zmm1.d = zmm3.d f* zmm0.d
    zmm0.d = temp0_1.d f* (0.5f f- zmm1.d)
    temp0_1[0] = temp0_1[0] f+ zmm0.d
    zmm1.d = temp0_1.d f* temp0_1[0]
    zmm3.d = zmm3.d f* zmm1.d
    zmm0.d = temp0_1.d f* (0.5f f- zmm3.d)
    temp0_1[0] = temp0_1[0] f+ zmm0.d
    zmm8.d = zmm8.d f* temp0_1[0]
    zmm9.d = zmm9.d f* temp0_1[0]

int32_t rax = *(arg1 + 0x2c)
uint128_t zmm6
uint128_t var_48 = zmm6
uint128_t zmm7
uint128_t var_58 = zmm7
bool cond:0 = rax s< 2
uint128_t var_c8
float zmm4

if (rax == 2)
    int32_t* rax_1 = arg1[1]
    zmm6 = arg1[5].d
    zmm7.d = zmm6.d f* arg1[4].d
    void* rsi_1 = *arg1
    zmm6.d = zmm6.d f* *(arg1 + 0x24)
    zmm3.d = zmm7.d f+ arg1[3].d
    int32_t var_d0_1 = data_143dbb1f0.d.d
    zmm4 = zmm6.d f+ *(arg1 + 0x1c)
    int64_t* rcx = *(rsi_1 + 0x40)
    int32_t var_cc_1 = data_143dbb1f0:4.d.d
    zmm0 = zmm3
    zmm3.d = zmm3.d f* rax_1[1]
    zmm0.d = zmm0.d f* *rax_1
    int64_t rdi_1 = sx.q(rcx[1].d)
    int32_t rax_2 = *arg3
    int32_t rax_3 = (rdi_1 + 1).d
    float var_c0_1 = zmm4 f* rax_1[2] f+ zmm0.d f+ rax_1[4]
    rcx[1].d = rax_3
    float var_bc_1 = zmm4 f* rax_1[3] f+ zmm3.d f+ rax_1[5]
    
    if (rax_3 s> *(rcx + 0xc))
        sub_1405c4ec0(rcx)
    
    int64_t rdx_1 = rdi_1 * 5
    int64_t rcx_1 = **(rsi_1 + 0x40)
    *(rcx_1 + (rdx_1 << 3)) = 0x3f800000.o
    *(rcx_1 + (rdx_1 << 3) + 0x10) = var_c8
    *(rcx_1 + (rdx_1 << 3) + 0x20) = rax_2.q
    *(rsi_1 + 0x64) += 1
    int32_t* rax_5 = arg1[1]
    zmm3.d = arg1[3].d.d f- zmm7.d
    zmm4 = *(arg1 + 0x1c) f- zmm6.d
    void* rdi_2 = *arg1
    int32_t var_d0_2 = data_143dbb1f0.d.d
    int32_t var_cc_2 = data_143dbb1f0:4.d.d
    zmm0.d = zmm3.d f* *rax_5
    int64_t* rcx_2 = *(rdi_2 + 0x40)
    int64_t rsi_2 = sx.q(rcx_2[1].d)
    zmm3.d = zmm3.d f* rax_5[1]
    int32_t rax_6 = *arg3
    int32_t rax_7 = (rsi_2 + 1).d
    float var_c0_2 = zmm4 f* rax_5[2] f+ zmm0.d f+ rax_5[4]
    rcx_2[1].d = rax_7
    float var_bc_2 = zmm4 f* rax_5[3] f+ zmm3.d f+ rax_5[5]
    
    if (rax_7 s> *(rcx_2 + 0xc))
        sub_1405c4ec0(rcx_2)
    
    int64_t rdx_3 = rsi_2 * 5
    int64_t rcx_3 = **(rdi_2 + 0x40)
    *(rcx_3 + (rdx_3 << 3)) = 0.o
    *(rcx_3 + (rdx_3 << 3) + 0x10) = var_c8
    *(rcx_3 + (rdx_3 << 3) + 0x20) = rax_6.q
    *(rdi_2 + 0x64) += 1
    rax = *(arg1 + 0x2c)
    cond:0 = rax s< 2

if (not(cond:0))
    zmm6.d = zmm8.d f+ arg1[4].d
    zmm7.d = zmm9.d f+ *(arg1 + 0x24)
    zmm1.d = zmm6.d f* zmm6.d
    zmm0.d = zmm7.d f* zmm7.d
    zmm1.d = zmm1.d f+ zmm0.d
    zmm1.d = zmm1.d f* 0.25f
    
    if (zmm1.d f<= 9.99999994e-09f)
        zmm6 = zx.o(0)
        zmm7 = zx.o(0)
    else
        zmm6.d = zmm6.d f* 0.5f
        zmm7.d = zmm7.d f* 0.5f
        float temp0_2[0x4] = _mm_rsqrt_ss(zmm1[0], zmm1.d)
        zmm3.d = zmm1.d f* 0.5f
        zmm0.d = temp0_2.d f* temp0_2[0]
        zmm1.d = zmm3.d f* zmm0.d
        zmm0.d = temp0_2.d f* (0.5f f- zmm1.d)
        temp0_2[0] = temp0_2[0] f+ zmm0.d
        zmm1.d = temp0_2.d f* temp0_2[0]
        zmm3.d = zmm3.d f* zmm1.d
        zmm0.d = temp0_2.d f* (0.5f f- zmm3.d)
        temp0_2[0] = temp0_2[0] f+ zmm0.d
        zmm6.d = zmm6.d f* temp0_2[0]
        zmm7.d = zmm7.d f* temp0_2[0]
    
    int32_t* rax_9 = arg1[1]
    uint128_t zmm11 = arg1[5].d
    void* rsi_3 = *arg1
    int32_t var_d0_3 = data_143dbb1f0.d.d
    uint128_t zmm12
    zmm12.d = zmm11.d f* zmm6.d
    int64_t* rcx_4 = *(rsi_3 + 0x40)
    zmm11.d = zmm11.d f* zmm7.d
    int32_t var_cc_3 = data_143dbb1f0:4.d.d
    zmm3.d = zmm12.d f+ arg1[2].d
    int64_t rdi_3 = sx.q(rcx_4[1].d)
    zmm4 = zmm11.d f+ *(arg1 + 0x14)
    zmm0 = zmm3
    zmm3.d = zmm3.d f* rax_9[1]
    zmm0.d = zmm0.d f* *rax_9
    int32_t rax_10 = *arg3
    int32_t rax_11 = (rdi_3 + 1).d
    float var_c0_3 = zmm4 f* rax_9[2] f+ zmm0.d f+ rax_9[4]
    rcx_4[1].d = rax_11
    float var_bc_3 = zmm4 f* rax_9[3] f+ zmm3.d f+ rax_9[5]
    
    if (rax_11 s> *(rcx_4 + 0xc))
        sub_1405c4ec0(rcx_4)
    
    int64_t rdx_5 = rdi_3 * 5
    int64_t rcx_5 = **(rsi_3 + 0x40)
    *(rcx_5 + (rdx_5 << 3)) = 0x3f800000.o
    *(rcx_5 + (rdx_5 << 3) + 0x10) = var_c8
    *(rcx_5 + (rdx_5 << 3) + 0x20) = rax_10.q
    *(rsi_3 + 0x64) += 1
    int32_t* rax_13 = arg1[1]
    zmm3.d = arg1[2].d.d f- zmm12.d
    zmm4 = *(arg1 + 0x14) f- zmm11.d
    void* rdi_4 = *arg1
    int32_t var_d0_4 = data_143dbb1f0.d.d
    int32_t var_cc_4 = data_143dbb1f0:4.d.d
    zmm0.d = zmm3.d f* *rax_13
    int64_t* rcx_6 = *(rdi_4 + 0x40)
    int64_t rsi_4 = sx.q(rcx_6[1].d)
    zmm3.d = zmm3.d f* rax_13[1]
    int32_t rax_14 = *arg3
    int32_t rax_15 = (rsi_4 + 1).d
    float var_c0_4 = zmm4 f* rax_13[2] f+ zmm0.d f+ rax_13[4]
    rcx_6[1].d = rax_15
    float var_bc_4 = zmm4 f* rax_13[3] f+ zmm3.d f+ rax_13[5]
    
    if (rax_15 s> *(rcx_6 + 0xc))
        sub_1405c4ec0(rcx_6)
    
    int64_t rdx_7 = rsi_4 * 5
    int64_t rcx_7 = **(rdi_4 + 0x40)
    *(rcx_7 + (rdx_7 << 3)) = 0.o
    *(rcx_7 + (rdx_7 << 3) + 0x10) = var_c8
    *(rcx_7 + (rdx_7 << 3) + 0x20) = rax_14.q
    *(rdi_4 + 0x64) += 1
    void* rsi_5 = *arg1
    int64_t* rdi_5 = *(rsi_5 + 0x48)
    int32_t r14_1 = *(rsi_5 + 0x64)
    int64_t r15_1 = sx.q(rdi_5[1].d)
    int32_t rax_17 = (r15_1 + 1).d
    rdi_5[1].d = rax_17
    
    if (rax_17 s> *(rdi_5 + 0xc))
        sub_1405a4cf0(rdi_5)
    
    *(*rdi_5 + (r15_1 << 2)) = r14_1 - 3
    *(rsi_5 + 0x68) += 1
    void* r15_2 = *arg1
    int64_t* rdi_6 = *(r15_2 + 0x48)
    int64_t rsi_6 = sx.q(rdi_6[1].d)
    int32_t rax_19 = (rsi_6 + 1).d
    rdi_6[1].d = rax_19
    
    if (rax_19 s> *(rdi_6 + 0xc))
        sub_1405a4cf0(rdi_6)
    
    *(*rdi_6 + (rsi_6 << 2)) = r14_1 - 4
    *(r15_2 + 0x68) += 1
    void* r15_3 = *arg1
    int64_t* rdi_7 = *(r15_3 + 0x48)
    int64_t rsi_7 = sx.q(rdi_7[1].d)
    int32_t rax_21 = (rsi_7 + 1).d
    rdi_7[1].d = rax_21
    
    if (rax_21 s> *(rdi_7 + 0xc))
        sub_1405a4cf0(rdi_7)
    
    *(*rdi_7 + (rsi_7 << 2)) = r14_1 - 2
    *(r15_3 + 0x68) += 1
    void* r15_4 = *arg1
    int64_t* rdi_8 = *(r15_4 + 0x48)
    int64_t rsi_8 = sx.q(rdi_8[1].d)
    int32_t rax_23 = (rsi_8 + 1).d
    rdi_8[1].d = rax_23
    
    if (rax_23 s> *(rdi_8 + 0xc))
        sub_1405a4cf0(rdi_8)
    
    *(*rdi_8 + (rsi_8 << 2)) = r14_1 - 3
    *(r15_4 + 0x68) += 1
    void* r15_5 = *arg1
    int64_t* rdi_9 = *(r15_5 + 0x48)
    int64_t rsi_9 = sx.q(rdi_9[1].d)
    int32_t rax_25 = (rsi_9 + 1).d
    rdi_9[1].d = rax_25
    
    if (rax_25 s> *(rdi_9 + 0xc))
        sub_1405a4cf0(rdi_9)
    
    *(*rdi_9 + (rsi_9 << 2)) = r14_1 - 2
    *(r15_5 + 0x68) += 1
    void* r14_2 = *arg1
    int64_t* rdi_10 = *(r14_2 + 0x48)
    int64_t rsi_10 = sx.q(rdi_10[1].d)
    int32_t rax_27 = (rsi_10 + 1).d
    rdi_10[1].d = rax_27
    
    if (rax_27 s> *(rdi_10 + 0xc))
        sub_1405a4cf0(rdi_10)
    
    *(*rdi_10 + (rsi_10 << 2)) = r14_1 - 1
    *(r14_2 + 0x68) += 1
    rax = *(arg1 + 0x2c)

zmm0 = zx.o(arg1[2])
arg1[2] = zmm10.q
arg1[4].d = zmm8.d
*(arg1 + 0x24) = zmm9.d
arg1[3] = zmm0.q
*(arg1 + 0x2c) = rax + 1
return rax + 1
