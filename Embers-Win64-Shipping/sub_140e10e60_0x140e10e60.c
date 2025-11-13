// 函数: sub_140e10e60
// 地址: 0x140e10e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2c) s< 3)
    return sub_140de7d80(arg1, *arg2, arg3) __tailcall

int32_t* rax_1 = arg1[1]
void* rbp = *arg1
int32_t var_60 = data_143dbb1f0.d.d
uint128_t zmm6 = arg1[5].d
uint128_t zmm7
zmm7.d = zmm6.d f* arg1[4].d
int32_t var_64 = 0
zmm6.d = zmm6.d f* *(arg1 + 0x24)
int32_t var_5c = data_143dbb1f0:4.d.d
uint128_t zmm2
zmm2.d = zmm7.d f+ arg1[2].d
uint128_t zmm3
zmm3.d = zmm6.d f+ *(arg1 + 0x14)
int64_t* rcx_1 = *(rbp + 0x40)
uint128_t zmm0 = zmm2
zmm2.d = zmm2.d f* rax_1[1]
zmm0.d = zmm0.d f* *rax_1
int64_t rsi = sx.q(rcx_1[1].d)
uint128_t zmm1
zmm1.d = zmm3.d f* rax_1[2]
zmm3.d = zmm3.d f* rax_1[3]
zmm1.d = zmm1.d f+ zmm0.d
zmm3.d = zmm3.d f+ zmm2.d
zmm1.d = zmm1.d f+ rax_1[4]
zmm3.d = zmm3.d f+ rax_1[5]
int32_t rax_2 = *arg3
int32_t rax_3 = (rsi + 1).d
int32_t var_50 = zmm1.d
rcx_1[1].d = rax_3
int32_t var_4c = zmm3.d

if (rax_3 s> *(rcx_1 + 0xc))
    sub_1405c4ec0(rcx_1)

int64_t rdx_3 = rsi * 5
int32_t var_68
var_68.q = 0
int64_t rcx_2 = **(rbp + 0x40)
*(rcx_2 + (rdx_3 << 3)) = 0x3f800000.o
uint128_t var_58
*(rcx_2 + (rdx_3 << 3) + 0x10) = var_58
*(rcx_2 + (rdx_3 << 3) + 0x20) = rax_2.q
*(rbp + 0x64) += 1
int32_t* rax_5 = arg1[1]
zmm3.d = arg1[2].d.d f- zmm7.d
uint128_t zmm4
zmm4.d = (*(arg1 + 0x14)).d f- zmm6.d
int32_t var_60_1 = data_143dbb1f0.d.d
zmm0.d = zmm3.d f* *rax_5
zmm2.d = zmm4.d f* rax_5[2]
zmm4.d = zmm4.d f* rax_5[3]
zmm3.d = zmm3.d f* rax_5[1]
zmm2.d = zmm2.d f+ zmm0.d
int32_t var_5c_1 = data_143dbb1f0:4.d.d
zmm4.d = zmm4.d f+ zmm3.d
zmm2.d = zmm2.d f+ rax_5[4]
zmm4.d = zmm4.d f+ rax_5[5]
int32_t rax_6 = *arg3
void* rdi_1 = *arg1
int32_t var_50_1 = zmm2.d
int32_t var_4c_1 = zmm4.d
int64_t* rcx_3 = *(rdi_1 + 0x40)
int64_t rsi_1 = sx.q(rcx_3[1].d)
int32_t rax_7 = (rsi_1 + 1).d
rcx_3[1].d = rax_7

if (rax_7 s> *(rcx_3 + 0xc))
    sub_1405c4ec0(rcx_3)

int64_t rdx_5 = rsi_1 * 5
int64_t rcx_4 = **(rdi_1 + 0x40)
*(rcx_4 + (rdx_5 << 3)) = var_68.o
*(rcx_4 + (rdx_5 << 3) + 0x10) = var_58
*(rcx_4 + (rdx_5 << 3) + 0x20) = rax_6.q
*(rdi_1 + 0x64) += 1
void* rsi_2 = *arg1
int64_t* rdi_2 = *(rsi_2 + 0x48)
int32_t rbp_1 = *(rsi_2 + 0x64)
int64_t r14 = sx.q(rdi_2[1].d)
int32_t rax_9 = (r14 + 1).d
rdi_2[1].d = rax_9

if (rax_9 s> *(rdi_2 + 0xc))
    sub_1405a4cf0(rdi_2)

*(*rdi_2 + (r14 << 2)) = rbp_1 - 3
*(rsi_2 + 0x68) += 1
void* r14_1 = *arg1
int64_t* rdi_3 = *(r14_1 + 0x48)
int64_t rsi_3 = sx.q(rdi_3[1].d)
int32_t rax_11 = (rsi_3 + 1).d
rdi_3[1].d = rax_11

if (rax_11 s> *(rdi_3 + 0xc))
    sub_1405a4cf0(rdi_3)

*(*rdi_3 + (rsi_3 << 2)) = rbp_1 - 4
*(r14_1 + 0x68) += 1
void* r14_2 = *arg1
int64_t* rdi_4 = *(r14_2 + 0x48)
int64_t rsi_4 = sx.q(rdi_4[1].d)
int32_t rax_13 = (rsi_4 + 1).d
rdi_4[1].d = rax_13

if (rax_13 s> *(rdi_4 + 0xc))
    sub_1405a4cf0(rdi_4)

*(*rdi_4 + (rsi_4 << 2)) = rbp_1 - 2
*(r14_2 + 0x68) += 1
void* r14_3 = *arg1
int64_t* rdi_5 = *(r14_3 + 0x48)
int64_t rsi_5 = sx.q(rdi_5[1].d)
int32_t rax_15 = (rsi_5 + 1).d
rdi_5[1].d = rax_15

if (rax_15 s> *(rdi_5 + 0xc))
    sub_1405a4cf0(rdi_5)

*(*rdi_5 + (rsi_5 << 2)) = rbp_1 - 3
*(r14_3 + 0x68) += 1
void* r14_4 = *arg1
int64_t* rdi_6 = *(r14_4 + 0x48)
int64_t rsi_6 = sx.q(rdi_6[1].d)
int32_t rax_17 = (rsi_6 + 1).d
rdi_6[1].d = rax_17

if (rax_17 s> *(rdi_6 + 0xc))
    sub_1405a4cf0(rdi_6)

*(*rdi_6 + (rsi_6 << 2)) = rbp_1 - 2
*(r14_4 + 0x68) += 1
void* rsi_7 = *arg1
int64_t* rbx_1 = *(rsi_7 + 0x48)
int64_t rdi_7 = sx.q(rbx_1[1].d)
int32_t rax_19 = (rdi_7 + 1).d
rbx_1[1].d = rax_19

if (rax_19 s> *(rbx_1 + 0xc))
    sub_1405a4cf0(rbx_1)

int64_t result = *rbx_1
*(result + (rdi_7 << 2)) = rbp_1 - 1
*(rsi_7 + 0x68) += 1
return result
