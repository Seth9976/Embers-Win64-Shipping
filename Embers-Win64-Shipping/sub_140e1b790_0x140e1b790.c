// 函数: sub_140e1b790
// 地址: 0x140e1b790
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* arg_20 = arg4
uint128_t zmm2 = *(arg3 + 4)
uint128_t zmm3 = *arg3
int32_t rsi = *(arg1 + 0x64)
int64_t* rcx = *(arg1 + 0x40)
int32_t var_50 = data_143dbb1f0.d.d
uint128_t zmm1
zmm1.d = zmm3.d f* *arg2
int64_t r15 = sx.q(rcx[1].d)
zmm3.d = zmm3.d f* arg2[1]
int32_t rax = *arg6
int32_t var_4c = data_143dbb1f0:4.d.d
uint128_t zmm0
zmm0.d = zmm2.d f* arg2[2]
int32_t rax_1 = (r15 + 1).d
zmm2.d = zmm2.d f* arg2[3]
int32_t var_54 = 0
zmm1.d = zmm1.d f+ zmm0.d
zmm3.d = zmm3.d f+ zmm2.d
zmm1.d = zmm1.d f+ arg2[4]
zmm3.d = zmm3.d f+ arg2[5]
rcx[1].d = rax_1
int32_t var_40 = zmm1.d
int32_t var_3c = zmm3.d

if (rax_1 s> *(rcx + 0xc))
    sub_1405c4ec0(rcx)
    arg4 = arg_20

int64_t rdx_1 = r15 * 5
int64_t rcx_1 = **(arg1 + 0x40)
int32_t var_58
var_58.q = 0
*(rcx_1 + (rdx_1 << 3)) = 0x3f000000.o
uint128_t var_48
*(rcx_1 + (rdx_1 << 3) + 0x10) = var_48
*(rcx_1 + (rdx_1 << 3) + 0x20) = rax.q
*(arg1 + 0x64) += 1
uint128_t zmm4
zmm4.d = (*arg3).d f+ *arg4
zmm3.d = (*(arg3 + 4)).d f+ arg4[1]
int64_t* rcx_2 = *(arg1 + 0x40)
zmm4.d = zmm4.d f+ *arg5
int32_t rax_3 = *arg6
zmm3.d = zmm3.d f+ arg5[1]
int64_t r15_1 = sx.q(rcx_2[1].d)
int32_t var_50_1 = data_143dbb1f0.d.d
zmm0.d = zmm4.d f* *arg2
int32_t rax_4 = (r15_1 + 1).d
zmm4.d = zmm4.d f* arg2[1]
zmm2.d = zmm3.d f* arg2[2]
zmm3.d = zmm3.d f* arg2[3]
zmm2.d = zmm2.d f+ zmm0.d
int32_t var_4c_1 = data_143dbb1f0:4.d.d
zmm3.d = zmm3.d f+ zmm4.d
zmm2.d = zmm2.d f+ arg2[4]
zmm3.d = zmm3.d f+ arg2[5]
rcx_2[1].d = rax_4
int32_t var_40_1 = zmm2.d
int32_t var_3c_1 = zmm3.d

if (rax_4 s> *(rcx_2 + 0xc))
    sub_1405c4ec0(rcx_2)
    arg4 = arg_20

int64_t rdx_3 = r15_1 * 5
zmm0 = var_58.o
var_58.q = 0
int64_t rcx_3 = **(arg1 + 0x40)
*(rcx_3 + (rdx_3 << 3)) = zmm0
*(rcx_3 + (rdx_3 << 3) + 0x10) = var_48
*(rcx_3 + (rdx_3 << 3) + 0x20) = rax_3.q
*(arg1 + 0x64) += 1
zmm3.d = (*arg3).d f+ *arg4
zmm4.d = (*(arg3 + 4)).d f+ arg4[1]
int64_t* rcx_4 = *(arg1 + 0x40)
zmm3.d = zmm3.d f- *arg5
int32_t rax_6 = *arg6
zmm4.d = zmm4.d f- arg5[1]
int64_t r15_2 = sx.q(rcx_4[1].d)
int32_t var_50_2 = data_143dbb1f0.d.d
zmm0.d = zmm3.d f* *arg2
int32_t rax_7 = (r15_2 + 1).d
zmm3.d = zmm3.d f* arg2[1]
zmm2.d = zmm4.d f* arg2[2]
zmm4.d = zmm4.d f* arg2[3]
zmm2.d = zmm2.d f+ zmm0.d
int32_t var_4c_2 = data_143dbb1f0:4.d.d
zmm4.d = zmm4.d f+ zmm3.d
zmm2.d = zmm2.d f+ arg2[4]
zmm4.d = zmm4.d f+ arg2[5]
rcx_4[1].d = rax_7
int32_t var_40_2 = zmm2.d
int32_t var_3c_2 = zmm4.d

if (rax_7 s> *(rcx_4 + 0xc))
    sub_1405c4ec0(rcx_4)

int64_t rdx_5 = r15_2 * 5
zmm0 = var_58.o
var_58.q = 0
int64_t rcx_5 = **(arg1 + 0x40)
*(rcx_5 + (rdx_5 << 3)) = zmm0
*(rcx_5 + (rdx_5 << 3) + 0x10) = var_48
*(rcx_5 + (rdx_5 << 3) + 0x20) = rax_6.q
*(arg1 + 0x64) += 1
zmm4.d = (*arg3).d f+ *arg5
zmm3.d = arg5[1].d f+ *(arg3 + 4)
int64_t* rcx_6 = *(arg1 + 0x40)
int32_t rax_9 = *arg6
zmm2.d = zmm4.d f* *arg2
zmm4.d = zmm4.d f* arg2[1]
int64_t r15_3 = sx.q(rcx_6[1].d)
int32_t var_50_3 = data_143dbb1f0.d.d
zmm0.d = zmm3.d f* arg2[2]
int32_t rax_10 = (r15_3 + 1).d
zmm3.d = zmm3.d f* arg2[3]
zmm2.d = zmm2.d f+ zmm0.d
int32_t var_4c_3 = data_143dbb1f0:4.d.d
zmm4.d = zmm4.d f+ zmm3.d
zmm2.d = zmm2.d f+ arg2[4]
zmm4.d = zmm4.d f+ arg2[5]
rcx_6[1].d = rax_10
int32_t var_40_3 = zmm2.d
int32_t var_3c_3 = zmm4.d

if (rax_10 s> *(rcx_6 + 0xc))
    sub_1405c4ec0(rcx_6)

int64_t rdx_7 = r15_3 * 5
zmm0 = var_58.o
var_58.q = 0
int64_t rcx_7 = **(arg1 + 0x40)
*(rcx_7 + (rdx_7 << 3)) = zmm0
*(rcx_7 + (rdx_7 << 3) + 0x10) = var_48
*(rcx_7 + (rdx_7 << 3) + 0x20) = rax_9.q
*(arg1 + 0x64) += 1
zmm4.d = (*arg3).d f- *arg5
zmm3.d = (*(arg3 + 4)).d f- arg5[1]
int64_t* rcx_8 = *(arg1 + 0x40)
int32_t rax_12 = *arg6
zmm2.d = zmm4.d f* *arg2
zmm4.d = zmm4.d f* arg2[1]
int32_t var_50_4 = data_143dbb1f0.d.d
zmm0.d = zmm3.d f* arg2[2]
zmm3.d = zmm3.d f* arg2[3]
zmm2.d = zmm2.d f+ zmm0.d
int32_t var_4c_4 = data_143dbb1f0:4.d.d
zmm4.d = zmm4.d f+ zmm3.d
zmm2.d = zmm2.d f+ arg2[4]
zmm4.d = zmm4.d f+ arg2[5]
int64_t rdi_1 = sx.q(rcx_8[1].d)
int32_t var_40_4 = zmm2.d
int32_t rax_13 = (rdi_1 + 1).d
int32_t var_3c_4 = zmm4.d
rcx_8[1].d = rax_13

if (rax_13 s> *(rcx_8 + 0xc))
    sub_1405c4ec0(rcx_8)

int64_t rdx_9 = rdi_1 * 5
int64_t rcx_9 = **(arg1 + 0x40)
*(rcx_9 + (rdx_9 << 3)) = var_58.o
*(rcx_9 + (rdx_9 << 3) + 0x10) = var_48
*(rcx_9 + (rdx_9 << 3) + 0x20) = rax_12.q
int64_t* rdi_2 = *(arg1 + 0x48)
*(arg1 + 0x64) += 1
int64_t r14_1 = sx.q(rdi_2[1].d)
int32_t rax_15 = (r14_1 + 1).d
rdi_2[1].d = rax_15

if (rax_15 s> *(rdi_2 + 0xc))
    sub_1405a4cf0(rdi_2)

*(*rdi_2 + (r14_1 << 2)) = rsi
int64_t* rdi_3 = *(arg1 + 0x48)
*(arg1 + 0x68) += 1
int64_t r14_2 = sx.q(rdi_3[1].d)
int32_t rax_17 = (r14_2 + 1).d
rdi_3[1].d = rax_17

if (rax_17 s> *(rdi_3 + 0xc))
    sub_1405a4cf0(rdi_3)

*(*rdi_3 + (r14_2 << 2)) = rsi + 3
int64_t* rdi_4 = *(arg1 + 0x48)
*(arg1 + 0x68) += 1
int64_t r14_3 = sx.q(rdi_4[1].d)
int32_t rax_19 = (r14_3 + 1).d
rdi_4[1].d = rax_19

if (rax_19 s> *(rdi_4 + 0xc))
    sub_1405a4cf0(rdi_4)

*(*rdi_4 + (r14_3 << 2)) = rsi + 1
int64_t* rdi_5 = *(arg1 + 0x48)
*(arg1 + 0x68) += 1
int64_t r14_4 = sx.q(rdi_5[1].d)
int32_t rax_21 = (r14_4 + 1).d
rdi_5[1].d = rax_21

if (rax_21 s> *(rdi_5 + 0xc))
    sub_1405a4cf0(rdi_5)

*(*rdi_5 + (r14_4 << 2)) = rsi
int64_t* rdi_6 = *(arg1 + 0x48)
*(arg1 + 0x68) += 1
int64_t r14_5 = sx.q(rdi_6[1].d)
int32_t rax_23 = (r14_5 + 1).d
rdi_6[1].d = rax_23

if (rax_23 s> *(rdi_6 + 0xc))
    sub_1405a4cf0(rdi_6)

*(*rdi_6 + (r14_5 << 2)) = rsi + 1
int64_t* rdi_7 = *(arg1 + 0x48)
*(arg1 + 0x68) += 1
int64_t r14_6 = sx.q(rdi_7[1].d)
int32_t rax_25 = (r14_6 + 1).d
rdi_7[1].d = rax_25

if (rax_25 s> *(rdi_7 + 0xc))
    sub_1405a4cf0(rdi_7)

*(*rdi_7 + (r14_6 << 2)) = rsi + 2
int64_t* rdi_8 = *(arg1 + 0x48)
*(arg1 + 0x68) += 1
int64_t r14_7 = sx.q(rdi_8[1].d)
int32_t rax_27 = (r14_7 + 1).d
rdi_8[1].d = rax_27

if (rax_27 s> *(rdi_8 + 0xc))
    sub_1405a4cf0(rdi_8)

*(*rdi_8 + (r14_7 << 2)) = rsi
int64_t* rdi_9 = *(arg1 + 0x48)
*(arg1 + 0x68) += 1
int64_t r14_8 = sx.q(rdi_9[1].d)
int32_t rax_29 = (r14_8 + 1).d
rdi_9[1].d = rax_29

if (rax_29 s> *(rdi_9 + 0xc))
    sub_1405a4cf0(rdi_9)

*(*rdi_9 + (r14_8 << 2)) = rsi + 2
int64_t* rdi_10 = *(arg1 + 0x48)
*(arg1 + 0x68) += 1
int64_t rsi_1 = sx.q(rdi_10[1].d)
int32_t rax_31 = (rsi_1 + 1).d
rdi_10[1].d = rax_31

if (rax_31 s> *(rdi_10 + 0xc))
    sub_1405a4cf0(rdi_10)

int64_t result = *rdi_10
*(result + (rsi_1 << 2)) = rsi + 4
*(arg1 + 0x68) += 1
return result
