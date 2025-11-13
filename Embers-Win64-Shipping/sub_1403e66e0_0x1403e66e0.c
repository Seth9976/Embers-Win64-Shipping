// 函数: sub_1403e66e0
// 地址: 0x1403e66e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax_1 = arg2[3] + arg2[2]
int32_t rbp_1 = arg2[1] + *arg2
int32_t r12_1 = arg2[5] + arg2[4]
int32_t r8_1 = arg2[0xb] + arg2[0xa]
int32_t r13_1 = arg2[9] + arg2[8]
int32_t r15_1 = arg2[0xd] + arg2[0xc]
int32_t r14 = rax_1 + rbp_1
int32_t rax_2 = r8_1 + r13_1
int32_t rcx_1 = arg2[7] + arg2[6]
int32_t result_1 = arg2[0xf] + arg2[0xe]
int32_t rcx_2 = rcx_1 + r12_1
int32_t rdx_1 = result_1 + r15_1
int32_t rsi = rcx_2 + r14
int32_t rax_3 = rax_2 + rdx_1
int32_t rax_4 = rax_3 + rsi

if (rax_4 s> 0)
    sub_1403fe400(arg1, rsi, zx.q(*(sx.q(rax_4) + &data_1436fda38)) + &data_1436fd9a0, 8)

if (rsi s> 0)
    sub_1403fe400(arg1, r14, zx.q(*(sx.q(rsi) + &data_1436fda38)) + &data_1436fd900, 8)

if (r14 s> 0)
    sub_1403fe400(arg1, rbp_1, zx.q(*(sx.q(r14) + &data_1436fda38)) + &data_1436fd860, 8)

if (rbp_1 s> 0)
    sub_1403fe400(arg1, *arg2, zx.q(*(sx.q(rbp_1) + &data_1436fda38)) + &data_1436fd7c0, 8)

int64_t rax_8 = sx.q(rax_1)

if (rax_8.d s> 0)
    sub_1403fe400(arg1, arg2[2], zx.q(*(rax_8 + &data_1436fda38)) + &data_1436fd7c0, 8)

int64_t rax_9 = sx.q(rcx_2)

if (rax_9.d s> 0)
    sub_1403fe400(arg1, r12_1, zx.q(*(rax_9 + &data_1436fda38)) + &data_1436fd860, 8)

if (r12_1 s> 0)
    sub_1403fe400(arg1, arg2[4], zx.q(*(sx.q(r12_1) + &data_1436fda38)) + &data_1436fd7c0, 8)

int64_t rax_11 = sx.q(rcx_1)

if (rax_11.d s> 0)
    sub_1403fe400(arg1, arg2[6], zx.q(*(rax_11 + &data_1436fda38)) + &data_1436fd7c0, 8)

int64_t rax_12 = sx.q(rax_3)

if (rax_12.d s> 0)
    sub_1403fe400(arg1, rax_2, zx.q(*(rax_12 + &data_1436fda38)) + &data_1436fd900, 8)

if (rax_2 s> 0)
    sub_1403fe400(arg1, r13_1, zx.q(*(sx.q(rax_2) + &data_1436fda38)) + &data_1436fd860, 8)

if (r13_1 s> 0)
    sub_1403fe400(arg1, arg2[8], zx.q(*(sx.q(r13_1) + &data_1436fda38)) + &data_1436fd7c0, 8)

int64_t rax_15 = sx.q(r8_1)

if (rax_15.d s> 0)
    sub_1403fe400(arg1, arg2[0xa], zx.q(*(rax_15 + &data_1436fda38)) + &data_1436fd7c0, 8)

int64_t rax_16 = sx.q(rdx_1)

if (rax_16.d s> 0)
    sub_1403fe400(arg1, r15_1, zx.q(*(rax_16 + &data_1436fda38)) + &data_1436fd860, 8)

if (r15_1 s> 0)
    sub_1403fe400(arg1, arg2[0xc], zx.q(*(sx.q(r15_1) + &data_1436fda38)) + &data_1436fd7c0, 8)

int64_t result = sx.q(result_1)

if (result.d s<= 0)
    return result

return sub_1403fe400(arg1, arg2[0xe], zx.q(*(result + &data_1436fda38)) + &data_1436fd7c0, 8)
