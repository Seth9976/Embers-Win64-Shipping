// 函数: sub_140dcea40
// 地址: 0x140dcea40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rdx = *(arg2 + 0x30)
int128_t var_88
__builtin_memset(&var_88, 0, 0x20)
int128_t* rax = sub_140e0db30(arg1, rdx, &var_88, 0, 2, 0, 0, 0x11, arg2)
int64_t zmm3 = data_143dbb1f0.d
int128_t zmm2 = data_143dbb1f0:4.d
int64_t zmm1
zmm1.d = zmm3.d f* *(arg2 + 8)
int64_t* rcx = rax[4].q
zmm3.d = zmm3.d f* *(arg2 + 0xc)
int128_t zmm0
zmm0.d = zmm2.d f* *(arg2 + 0x10)
int64_t rbp = sx.q(rcx[1].d)
zmm2.d = zmm2.d f* *(arg2 + 0x14)
int128_t zmm6 = *(arg2 + 0x28)
zmm1.d = zmm1.d f+ zmm0.d
int128_t zmm7 = *(arg2 + 0x2c)
int32_t rax_1 = (rbp + 1).d
zmm3.d = zmm3.d f+ zmm2.d
int128_t zmm8 = data_142d5beb0
zmm1.d = zmm1.d f+ *(arg2 + 0x18)
zmm3.d = zmm3.d f+ *(arg2 + 0x1c)
rcx[1].d = rax_1
int32_t var_50 = zmm1.d
int32_t var_4c = zmm3.d

if (rax_1 s> *(rcx + 0xc))
    sub_1405c4ec0(rcx)

int64_t rdx_3 = rbp * 5
int64_t rcx_1 = *rax[4].q
*(rcx_1 + (rdx_3 << 3)) = zmm8
zmm8 = data_142d8c9c0
int128_t var_58
*(rcx_1 + (rdx_3 << 3) + 0x10) = var_58
*(rcx_1 + (rdx_3 << 3) + 0x20) = arg3.q
*(rax + 0x64) += 1
int64_t* rcx_2 = rax[4].q
zmm1.d = zmm6.q.d f* *(arg2 + 8)
zmm0.d = zmm6.d f* *(arg2 + 0xc)
int64_t rbp_1 = sx.q(rcx_2[1].d)
zmm1.d = zmm1.d f+ *(arg2 + 0x18)
zmm0.d = zmm0.d f+ *(arg2 + 0x1c)
int32_t rax_3 = (rbp_1 + 1).d
rcx_2[1].d = rax_3
int32_t var_50_1 = zmm1.d
int32_t var_4c_1 = zmm0.d

if (rax_3 s> *(rcx_2 + 0xc))
    sub_1405c4ec0(rcx_2)

int64_t rdx_6 = rbp_1 * 5
int64_t rcx_3 = *rax[4].q
*(rcx_3 + (rdx_6 << 3)) = zmm8
zmm8 = data_142ecd480
*(rcx_3 + (rdx_6 << 3) + 0x10) = var_58
*(rcx_3 + (rdx_6 << 3) + 0x20) = arg3.q
*(rax + 0x64) += 1
int64_t* rcx_4 = rax[4].q
zmm1.d = zmm7.q.d f* *(arg2 + 0x10)
zmm0.d = zmm7.d f* *(arg2 + 0x14)
int64_t rbp_2 = sx.q(rcx_4[1].d)
zmm1.d = zmm1.d f+ *(arg2 + 0x18)
zmm0.d = zmm0.d f+ *(arg2 + 0x1c)
int32_t rax_5 = (rbp_2 + 1).d
rcx_4[1].d = rax_5
int32_t var_50_2 = zmm1.d
int32_t var_4c_2 = zmm0.d

if (rax_5 s> *(rcx_4 + 0xc))
    sub_1405c4ec0(rcx_4)

int64_t rdx_9 = rbp_2 * 5
int64_t rcx_5 = *rax[4].q
*(rcx_5 + (rdx_9 << 3)) = zmm8
zmm8 = data_142d3f670
*(rcx_5 + (rdx_9 << 3) + 0x10) = var_58
*(rcx_5 + (rdx_9 << 3) + 0x20) = arg3.q
*(rax + 0x64) += 1
zmm1.d = zmm6.q.d f* *(arg2 + 8)
int64_t* rcx_6 = rax[4].q
zmm6.d = zmm6.d f* *(arg2 + 0xc)
zmm0.d = zmm7.d f* *(arg2 + 0x10)
int64_t rbx_1 = sx.q(rcx_6[1].d)
zmm7.d = zmm7.d f* *(arg2 + 0x14)
zmm1.d = zmm1.d f+ zmm0.d
int32_t rax_7 = (rbx_1 + 1).d
zmm6.d = zmm6.d f+ zmm7.d
zmm1.d = zmm1.d f+ *(arg2 + 0x18)
zmm6.d = zmm6.d f+ *(arg2 + 0x1c)
rcx_6[1].d = rax_7
int32_t var_50_3 = zmm1.d
int32_t var_4c_3 = zmm6.d

if (rax_7 s> *(rcx_6 + 0xc))
    sub_1405c4ec0(rcx_6)

int64_t rdx_11 = rbx_1 * 5
int64_t rcx_7 = *rax[4].q
*(rcx_7 + (rdx_11 << 3)) = zmm8
*(rcx_7 + (rdx_11 << 3) + 0x10) = var_58
*(rcx_7 + (rdx_11 << 3) + 0x20) = arg3.q
int64_t* rbx_2 = *(rax + 0x48)
*(rax + 0x64) += 1
int64_t rsi_1 = sx.q(rbx_2[1].d)
int32_t rax_9 = (rsi_1 + 1).d
rbx_2[1].d = rax_9

if (rax_9 s> *(rbx_2 + 0xc))
    sub_1405a4cf0(rbx_2)

*(*rbx_2 + (rsi_1 << 2)) = 0
int64_t* rbx_3 = *(rax + 0x48)
*(rax + 0x68) += 1
int64_t rsi_2 = sx.q(rbx_3[1].d)
int32_t rax_11 = (rsi_2 + 1).d
rbx_3[1].d = rax_11

if (rax_11 s> *(rbx_3 + 0xc))
    sub_1405a4cf0(rbx_3)

*(*rbx_3 + (rsi_2 << 2)) = 1
int64_t* rbx_4 = *(rax + 0x48)
*(rax + 0x68) += 1
int64_t rsi_3 = sx.q(rbx_4[1].d)
int32_t rax_13 = (rsi_3 + 1).d
rbx_4[1].d = rax_13

if (rax_13 s> *(rbx_4 + 0xc))
    sub_1405a4cf0(rbx_4)

*(*rbx_4 + (rsi_3 << 2)) = 2
int64_t* rbx_5 = *(rax + 0x48)
*(rax + 0x68) += 1
int64_t rsi_4 = sx.q(rbx_5[1].d)
int32_t rax_15 = (rsi_4 + 1).d
rbx_5[1].d = rax_15

if (rax_15 s> *(rbx_5 + 0xc))
    sub_1405a4cf0(rbx_5)

*(*rbx_5 + (rsi_4 << 2)) = 2
int64_t* rbx_6 = *(rax + 0x48)
*(rax + 0x68) += 1
int64_t rsi_5 = sx.q(rbx_6[1].d)
int32_t rax_17 = (rsi_5 + 1).d
rbx_6[1].d = rax_17

if (rax_17 s> *(rbx_6 + 0xc))
    sub_1405a4cf0(rbx_6)

*(*rbx_6 + (rsi_5 << 2)) = 1
int64_t* rbx_7 = *(rax + 0x48)
*(rax + 0x68) += 1
int64_t rsi_6 = sx.q(rbx_7[1].d)
int32_t rax_19 = (rsi_6 + 1).d
rbx_7[1].d = rax_19

if (rax_19 s> *(rbx_7 + 0xc))
    sub_1405a4cf0(rbx_7)

int64_t result = *rbx_7
*(result + (rsi_6 << 2)) = 3
*(rax + 0x68) += 1
return result
