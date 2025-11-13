// 函数: sub_140dce550
// 地址: 0x140dce550
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg2 + 0x30)
int128_t var_a8
__builtin_memset(&var_a8, 0, 0x20)
int128_t* rax = sub_140e0db30(arg1, rdx, &var_a8, 0, 2, 0, 0, 0x11, arg2)
int128_t zmm6 = data_143dbb1f0:4.d
float zmm3 = *(arg2 + 8)
float zmm2 = data_143dbb1f0.d
int64_t zmm1
zmm1.d = zmm6.q.d f* *(arg2 + 0x10)
zmm6.d = zmm6.d f+ zmm6.d
int64_t* rcx = rax[4].q
float zmm5 = zmm2 f* *(arg2 + 0xc)
zmm6.d = zmm6.d f* *(arg2 + 0x14)
int64_t rbp = sx.q(rcx[1].d)
int128_t zmm7 = *(arg2 + 0x28)
int128_t zmm9 = *(arg2 + 0x2c)
int128_t zmm10 = data_142d5beb0
zmm6.d = zmm6.d f+ zmm5
zmm6.d = zmm6.d f+ *(arg2 + 0x1c)
zmm6.d = zmm6.d f+ zmm5
zmm6.d = zmm6.d f+ *(arg2 + 0x1c)
zmm6.d = zmm6.d f+ 0.5f
int32_t var_70 = _mm_cvtepi32_ps(zx.o(
    int.d((zmm3 + zmm3) * zmm2 f+ zmm1.d f+ *(arg2 + 0x18) f+ zmm1.d f+ *(arg2 + 0x18) + 0.5f)
    s>> 1)).d
int32_t rax_5 = (rbp + 1).d
uint128_t zmm0 = _mm_cvtepi32_ps(zx.o(int.d(zmm6.d) s>> 1))
rcx[1].d = rax_5
int32_t var_6c = zmm0.d

if (rax_5 s> *(rcx + 0xc))
    sub_1405c4ec0(rcx)

int64_t rdx_3 = rbp * 5
int64_t rcx_1 = *rax[4].q
zmm6 = data_142d8c9c0
*(rcx_1 + (rdx_3 << 3)) = zmm10
uint128_t var_78
*(rcx_1 + (rdx_3 << 3) + 0x10) = var_78
*(rcx_1 + (rdx_3 << 3) + 0x20) = arg3.q
*(rax + 0x64) += 1
zmm1.d = zmm7.q.d f* *(arg2 + 8)
int64_t* rcx_2 = rax[4].q
zmm1.d = zmm1.d f+ *(arg2 + 0x18)
int64_t rbp_1 = sx.q(rcx_2[1].d)
zmm2 = zmm7.d f* *(arg2 + 0xc) f+ *(arg2 + 0x1c)
zmm1.d = zmm1.d f+ zmm1.d
zmm1.d = zmm1.d f+ 0.5f
int32_t var_70_1 = _mm_cvtepi32_ps(zx.o(int.d(zmm1.d) s>> 1)).d
int32_t rax_11 = (rbp_1 + 1).d
zmm0 = _mm_cvtepi32_ps(zx.o(int.d(zmm2 + zmm2 + 0.5f) s>> 1))
rcx_2[1].d = rax_11
int32_t var_6c_1 = zmm0.d

if (rax_11 s> *(rcx_2 + 0xc))
    sub_1405c4ec0(rcx_2)

int64_t rdx_6 = rbp_1 * 5
int64_t rcx_3 = *rax[4].q
*(rcx_3 + (rdx_6 << 3)) = zmm6
zmm6 = data_142ecd480
*(rcx_3 + (rdx_6 << 3) + 0x10) = var_78
*(rcx_3 + (rdx_6 << 3) + 0x20) = arg3.q
*(rax + 0x64) += 1
zmm1.d = zmm9.q.d f* *(arg2 + 0x10)
int64_t* rcx_4 = rax[4].q
zmm1.d = zmm1.d f+ *(arg2 + 0x18)
int64_t rbp_2 = sx.q(rcx_4[1].d)
zmm2 = zmm9.d f* *(arg2 + 0x14) f+ *(arg2 + 0x1c)
zmm1.d = zmm1.d f+ zmm1.d
zmm1.d = zmm1.d f+ 0.5f
int32_t var_70_2 = _mm_cvtepi32_ps(zx.o(int.d(zmm1.d) s>> 1)).d
int32_t rax_17 = (rbp_2 + 1).d
zmm0 = _mm_cvtepi32_ps(zx.o(int.d(zmm2 + zmm2 + 0.5f) s>> 1))
rcx_4[1].d = rax_17
int32_t var_6c_2 = zmm0.d

if (rax_17 s> *(rcx_4 + 0xc))
    sub_1405c4ec0(rcx_4)

int64_t rdx_9 = rbp_2 * 5
int64_t rcx_5 = *rax[4].q
*(rcx_5 + (rdx_9 << 3)) = zmm6
zmm6 = data_142d3f670
*(rcx_5 + (rdx_9 << 3) + 0x10) = var_78
*(rcx_5 + (rdx_9 << 3) + 0x20) = arg3.q
*(rax + 0x64) += 1
zmm1.d = zmm7.q.d f+ zmm7.d
zmm2 = zmm9.d f* *(arg2 + 0x10)
zmm7.d = zmm7.d f+ zmm7.d
int64_t* rcx_6 = rax[4].q
zmm9.d = zmm9.d f* *(arg2 + 0x14)
zmm1.d = zmm1.d f* *(arg2 + 8)
int64_t rbx_1 = sx.q(rcx_6[1].d)
zmm7.d = zmm7.d f* *(arg2 + 0xc)
zmm1.d = zmm1.d f+ zmm2
zmm7.d = zmm7.d f+ zmm9.d
zmm1.d = zmm1.d f+ *(arg2 + 0x18)
zmm7.d = zmm7.d f+ *(arg2 + 0x1c)
zmm1.d = zmm1.d f+ zmm2
zmm7.d = zmm7.d f+ zmm9.d
zmm1.d = zmm1.d f+ *(arg2 + 0x18)
zmm7.d = zmm7.d f+ *(arg2 + 0x1c)
zmm1.d = zmm1.d f+ 0.5f
zmm7.d = zmm7.d f+ 0.5f
int32_t var_70_3 = _mm_cvtepi32_ps(zx.o(int.d(zmm1.d) s>> 1)).d
int32_t rax_23 = (rbx_1 + 1).d
zmm0 = _mm_cvtepi32_ps(zx.o(int.d(zmm7.d) s>> 1))
rcx_6[1].d = rax_23
int32_t var_6c_3 = zmm0.d

if (rax_23 s> *(rcx_6 + 0xc))
    sub_1405c4ec0(rcx_6)

int64_t rdx_11 = rbx_1 * 5
int64_t rcx_7 = *rax[4].q
*(rcx_7 + (rdx_11 << 3)) = zmm6
*(rcx_7 + (rdx_11 << 3) + 0x10) = var_78
*(rcx_7 + (rdx_11 << 3) + 0x20) = arg3.q
int64_t* rbx_2 = *(rax + 0x48)
*(rax + 0x64) += 1
int64_t rsi_1 = sx.q(rbx_2[1].d)
int32_t rax_25 = (rsi_1 + 1).d
rbx_2[1].d = rax_25

if (rax_25 s> *(rbx_2 + 0xc))
    sub_1405a4cf0(rbx_2)

*(*rbx_2 + (rsi_1 << 2)) = 0
int64_t* rbx_3 = *(rax + 0x48)
*(rax + 0x68) += 1
int64_t rsi_2 = sx.q(rbx_3[1].d)
int32_t rax_27 = (rsi_2 + 1).d
rbx_3[1].d = rax_27

if (rax_27 s> *(rbx_3 + 0xc))
    sub_1405a4cf0(rbx_3)

*(*rbx_3 + (rsi_2 << 2)) = 1
int64_t* rbx_4 = *(rax + 0x48)
*(rax + 0x68) += 1
int64_t rsi_3 = sx.q(rbx_4[1].d)
int32_t rax_29 = (rsi_3 + 1).d
rbx_4[1].d = rax_29

if (rax_29 s> *(rbx_4 + 0xc))
    sub_1405a4cf0(rbx_4)

*(*rbx_4 + (rsi_3 << 2)) = 2
int64_t* rbx_5 = *(rax + 0x48)
*(rax + 0x68) += 1
int64_t rsi_4 = sx.q(rbx_5[1].d)
int32_t rax_31 = (rsi_4 + 1).d
rbx_5[1].d = rax_31

if (rax_31 s> *(rbx_5 + 0xc))
    sub_1405a4cf0(rbx_5)

*(*rbx_5 + (rsi_4 << 2)) = 2
int64_t* rbx_6 = *(rax + 0x48)
*(rax + 0x68) += 1
int64_t rsi_5 = sx.q(rbx_6[1].d)
int32_t rax_33 = (rsi_5 + 1).d
rbx_6[1].d = rax_33

if (rax_33 s> *(rbx_6 + 0xc))
    sub_1405a4cf0(rbx_6)

*(*rbx_6 + (rsi_5 << 2)) = 1
int64_t* rbx_7 = *(rax + 0x48)
*(rax + 0x68) += 1
int64_t rsi_6 = sx.q(rbx_7[1].d)
int32_t rax_35 = (rsi_6 + 1).d
rbx_7[1].d = rax_35

if (rax_35 s> *(rbx_7 + 0xc))
    sub_1405a4cf0(rbx_7)

int64_t result = *rbx_7
*(result + (rsi_6 << 2)) = 3
*(rax + 0x68) += 1
return result
