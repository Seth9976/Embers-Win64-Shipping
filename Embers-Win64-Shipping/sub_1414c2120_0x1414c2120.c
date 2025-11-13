// 函数: sub_1414c2120
// 地址: 0x1414c2120
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = data_1439b705c
int32_t rax = arg1[3].d
void* var_58 = arg1[2]
int32_t temp2
int32_t temp3
temp2:temp3 = sx.q(var_58.d - 1 + r9)
int32_t temp8
int32_t temp9
temp8:temp9 = sx.q(r9 - 1 + (var_58 u>> 0x20).d)
int128_t var_48
sub_1419a2ec0(*(arg1[1] + 0x5150), &var_48, &data_143ee9a70, 0)
int128_t zmm0_1 = var_48
int64_t rbp = 0
void* rcx_2 = zmm0_1.q
var_58.o = zmm0_1
void* rsi = nullptr

if (rcx_2 != 0)
    int64_t rdx_3 = sx.q(*(rcx_2 + 0x10c))
    int64_t* rbx_1 = *(var_48:8.q + 0x10)
    int64_t rsi_1 = rdx_3 << 3
    int64_t rax_11 = rbx_1[3]
    
    if (*(rsi_1 + rax_11) == 0)
        sub_1419ccf30(rbx_1, rdx_3.d)
        rax_11 = rbx_1[3]
    
    rsi = *(rsi_1 + rax_11)

*(arg2 + 0x1b0) = rsi
sub_14198aa60(rsi)
void*** rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_12 = &rcx_7[3]

if (rax_12 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x20)
    rcx_7 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_12 = &rcx_7[3]

*(arg2 + 0x30) = rax_12
void**** rax_13 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_13 = rcx_7
*(arg2 + 8) = &rcx_7[1]
rcx_7[2] = rsi
void* rsi_2 = var_58
rcx_7[1] = 0
*rcx_7 = &data_142dd5b40
void* rbx_2 = arg1[1]
int64_t r8_2 = *(arg2 + 0x1b0)
int64_t arg_10 = r8_2
sub_1410809a0(rsi_2, arg2, r8_2, *(rbx_2 + 0x10))
sub_1414b9130(rsi_2 + 0x118, arg2, &arg_10, rbx_2)
void* r15 = rax.q
int64_t r8_4 = 0

if (rsi_2 != 0)
    int64_t* rbx_3 = *(r15 + 0x10)
    int64_t rdx_6 = sx.q(*(rsi_2 + 0x10c))
    int64_t rax_15 = rbx_3[3]
    int64_t r14_1 = rdx_6 << 3
    
    if (*(r14_1 + rax_15) == 0)
        sub_1419ccf30(rbx_3, rdx_6.d)
        rax_15 = rbx_3[3]
    
    r8_4 = *(r14_1 + rax_15)

sub_1414be080(arg2, &var_58, r8_4, *arg1)
sub_1419cd1c0(arg2, rsi_2, divs.dp.d(temp2:temp3, r9), divs.dp.d(temp8:temp9, r9), 1)

if (rsi_2 != 0)
    int64_t* rbx_4 = *(r15 + 0x10)
    int64_t rdx_9 = sx.q(*(rsi_2 + 0x10c))
    int64_t rax_16 = rbx_4[3]
    int64_t rsi_3 = rdx_9 << 3
    
    if (*(rsi_3 + rax_16) == 0)
        sub_1419ccf30(rbx_4, rdx_9.d)
        rax_16 = rbx_4[3]
    
    rbp = *(rsi_3 + rax_16)

return sub_14116d320(arg2, &var_58, rbp)
