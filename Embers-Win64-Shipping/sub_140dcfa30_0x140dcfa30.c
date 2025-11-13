// 函数: sub_140dcfa30
// 地址: 0x140dcfa30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *arg2
char rbx = *(arg2 + 0x4d)
int32_t rdi = arg2[6].d
char r8 = arg1[5].b
int128_t var_b8 = *(r15 + 8)
int32_t arg_8
sub_140ae16d0(&var_b8, &arg_8, r8)
char rcx_1 = *(arg2 + 0x4f)
int64_t* r14 = *(r15 + 0x18)
char rax = *(r15 + 0x20) & 2
__builtin_memset(&var_b8, 0, 0x20)
int128_t* rax_1 = sub_140e0db30(arg1, rdi, &var_b8, r14, 2, rax, rbx, rcx_1, arg2)

if (r14 != 0)
    uint8_t rax_2 = *(r15 + 0x20)
    
    if ((rax_2 & 1) == 0)
        *(arg1 + 0x29) |= rax_2 u>> 2 & 1

int64_t zmm7 = arg2[5].d
int64_t zmm8 = *(arg2 + 0x2c)

if (r14 != 0 && (*(r15 + 0x20) & 1) == 0)
    float zmm6_1 = 1f f/ arg2[9].d
    zmm8.d = float.s(zx.q((*(*r14 + 8))(r14)))
    zmm8.d = zmm8.d f* zmm6_1
    zmm7.d = float.s(zx.q((**r14)(r14)))
    zmm7.d = zmm7.d f* zmm6_1

int64_t zmm1 = arg2[3].d
float zmm2 = *(arg2 + 0x1c)
zmm1.d = zmm1.d f+ zmm1.d
int64_t* rcx_5 = rax_1[4].q
int128_t zmm9 = data_142d5beb0
zmm1.d = zmm1.d f+ 0.5f
int64_t rdi_1 = sx.q(rcx_5[1].d)
int32_t var_80 = _mm_cvtepi32_ps(zx.o(int.d(zmm1.d) s>> 1)).d
int32_t rax_13 = arg_8
uint128_t zmm0_1 = _mm_cvtepi32_ps(zx.o(int.d(zmm2 + zmm2 + 0.5f) s>> 1))
int32_t rax_14 = (rdi_1 + 1).d
rcx_5[1].d = rax_14
int32_t var_7c = zmm0_1.d

if (rax_14 s> *(rcx_5 + 0xc))
    sub_1405c4ec0(rcx_5)

int64_t rdx_3 = rdi_1 * 5
int64_t rcx_6 = *rax_1[4].q
*(rcx_6 + (rdx_3 << 3)) = zmm9
zmm9 = data_142d8c9c0
uint128_t var_88
*(rcx_6 + (rdx_3 << 3) + 0x10) = var_88
*(rcx_6 + (rdx_3 << 3) + 0x20) = rax_13.q
*(rax_1 + 0x64) += 1
zmm1 = arg2[1].d
int64_t* rcx_7 = rax_1[4].q
zmm1.d = zmm1.d f+ zmm1.d
int64_t rdi_2 = sx.q(rcx_7[1].d)
zmm1.d = zmm1.d f* zmm7.d
zmm1.d = zmm1.d f+ arg2[3].d
zmm1.d = zmm1.d f+ arg2[3].d
zmm1.d = zmm1.d f+ 0.5f
int32_t rax_17 = int.d(zmm1.d) s>> 1
zmm1.d = zmm7.d f+ zmm7.d
zmm1.d = zmm1.d f* *(arg2 + 0xc)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_17))
zmm1.d = zmm1.d f+ *(arg2 + 0x1c)
int32_t var_80_1 = zmm0_1.d
zmm1.d = zmm1.d f+ *(arg2 + 0x1c)
zmm1.d = zmm1.d f+ 0.5f
int32_t rax_20 = arg_8
zmm0_1 = _mm_cvtepi32_ps(zx.o(int.d(zmm1.d) s>> 1))
int32_t rax_21 = (rdi_2 + 1).d
rcx_7[1].d = rax_21
int32_t var_7c_1 = zmm0_1.d

if (rax_21 s> *(rcx_7 + 0xc))
    sub_1405c4ec0(rcx_7)

int64_t rdx_5 = rdi_2 * 5
int64_t rcx_8 = *rax_1[4].q
*(rcx_8 + (rdx_5 << 3)) = zmm9
zmm9 = data_142ecd480
*(rcx_8 + (rdx_5 << 3) + 0x10) = var_88
*(rcx_8 + (rdx_5 << 3) + 0x20) = rax_20.q
*(rax_1 + 0x64) += 1
zmm1.d = zmm8.d f+ zmm8.d
int64_t* rcx_9 = rax_1[4].q
zmm1.d = zmm1.d f* arg2[2].d
int64_t rdi_3 = sx.q(rcx_9[1].d)
zmm1.d = zmm1.d f+ arg2[3].d
zmm1.d = zmm1.d f+ arg2[3].d
zmm1.d = zmm1.d f+ 0.5f
int32_t rax_24 = int.d(zmm1.d) s>> 1
zmm1.d = zmm8.d f+ zmm8.d
zmm1.d = zmm1.d f* *(arg2 + 0x14)
zmm0_1 = _mm_cvtepi32_ps(zx.o(rax_24))
zmm1.d = zmm1.d f+ *(arg2 + 0x1c)
int32_t var_80_2 = zmm0_1.d
zmm1.d = zmm1.d f+ *(arg2 + 0x1c)
zmm1.d = zmm1.d f+ 0.5f
int32_t rax_27 = arg_8
zmm0_1 = _mm_cvtepi32_ps(zx.o(int.d(zmm1.d) s>> 1))
int32_t rax_28 = (rdi_3 + 1).d
rcx_9[1].d = rax_28
int32_t var_7c_2 = zmm0_1.d

if (rax_28 s> *(rcx_9 + 0xc))
    sub_1405c4ec0(rcx_9)

int64_t rdx_7 = rdi_3 * 5
int64_t rcx_10 = *rax_1[4].q
*(rcx_10 + (rdx_7 << 3)) = zmm9
zmm9 = data_142d3f670
*(rcx_10 + (rdx_7 << 3) + 0x10) = var_88
*(rcx_10 + (rdx_7 << 3) + 0x20) = rax_27.q
*(rax_1 + 0x64) += 1
zmm1.d = zmm7.d f+ zmm7.d
zmm2 = zmm8.d f* arg2[2].d
zmm7.d = zmm7.d f+ zmm7.d
int64_t* rcx_11 = rax_1[4].q
zmm8.d = zmm8.d f* *(arg2 + 0x14)
zmm1.d = zmm1.d f* arg2[1].d
int64_t rdi_4 = sx.q(rcx_11[1].d)
zmm7.d = zmm7.d f* *(arg2 + 0xc)
zmm1.d = zmm1.d f+ zmm2
zmm7.d = zmm7.d f+ zmm8.d
zmm1.d = zmm1.d f+ arg2[3].d
zmm7.d = zmm7.d f+ *(arg2 + 0x1c)
zmm1.d = zmm1.d f+ zmm2
zmm7.d = zmm7.d f+ zmm8.d
zmm1.d = zmm1.d f+ arg2[3].d
zmm7.d = zmm7.d f+ *(arg2 + 0x1c)
zmm1.d = zmm1.d f+ 0.5f
zmm7.d = zmm7.d f+ 0.5f
int32_t var_80_3 = _mm_cvtepi32_ps(zx.o(int.d(zmm1.d) s>> 1)).d
int32_t rax_34 = arg_8
zmm0_1 = _mm_cvtepi32_ps(zx.o(int.d(zmm7.d) s>> 1))
int32_t rax_35 = (rdi_4 + 1).d
rcx_11[1].d = rax_35
int32_t var_7c_3 = zmm0_1.d

if (rax_35 s> *(rcx_11 + 0xc))
    sub_1405c4ec0(rcx_11)

int64_t rdx_9 = rdi_4 * 5
int64_t rcx_12 = *rax_1[4].q
*(rcx_12 + (rdx_9 << 3)) = zmm9
*(rcx_12 + (rdx_9 << 3) + 0x10) = var_88
*(rcx_12 + (rdx_9 << 3) + 0x20) = rax_34.q
int64_t* rdi_5 = *(rax_1 + 0x48)
*(rax_1 + 0x64) += 1
int64_t rsi_1 = sx.q(rdi_5[1].d)
int32_t rax_37 = (rsi_1 + 1).d
rdi_5[1].d = rax_37

if (rax_37 s> *(rdi_5 + 0xc))
    sub_1405a4cf0(rdi_5)

*(*rdi_5 + (rsi_1 << 2)) = 0
int64_t* rdi_6 = *(rax_1 + 0x48)
*(rax_1 + 0x68) += 1
int64_t rsi_2 = sx.q(rdi_6[1].d)
int32_t rax_39 = (rsi_2 + 1).d
rdi_6[1].d = rax_39

if (rax_39 s> *(rdi_6 + 0xc))
    sub_1405a4cf0(rdi_6)

*(*rdi_6 + (rsi_2 << 2)) = 1
int64_t* rdi_7 = *(rax_1 + 0x48)
*(rax_1 + 0x68) += 1
int64_t rsi_3 = sx.q(rdi_7[1].d)
int32_t rax_41 = (rsi_3 + 1).d
rdi_7[1].d = rax_41

if (rax_41 s> *(rdi_7 + 0xc))
    sub_1405a4cf0(rdi_7)

*(*rdi_7 + (rsi_3 << 2)) = 2
int64_t* rdi_8 = *(rax_1 + 0x48)
*(rax_1 + 0x68) += 1
int64_t rsi_4 = sx.q(rdi_8[1].d)
int32_t rax_43 = (rsi_4 + 1).d
rdi_8[1].d = rax_43

if (rax_43 s> *(rdi_8 + 0xc))
    sub_1405a4cf0(rdi_8)

*(*rdi_8 + (rsi_4 << 2)) = 2
int64_t* rdi_9 = *(rax_1 + 0x48)
*(rax_1 + 0x68) += 1
int64_t rsi_5 = sx.q(rdi_9[1].d)
int32_t rax_45 = (rsi_5 + 1).d
rdi_9[1].d = rax_45

if (rax_45 s> *(rdi_9 + 0xc))
    sub_1405a4cf0(rdi_9)

*(*rdi_9 + (rsi_5 << 2)) = 1
int64_t* rdi_10 = *(rax_1 + 0x48)
*(rax_1 + 0x68) += 1
int64_t rsi_6 = sx.q(rdi_10[1].d)
int32_t rax_47 = (rsi_6 + 1).d
rdi_10[1].d = rax_47

if (rax_47 s> *(rdi_10 + 0xc))
    sub_1405a4cf0(rdi_10)

int64_t result = *rdi_10
*(result + (rsi_6 << 2)) = 3
*(rax_1 + 0x68) += 1
return result
