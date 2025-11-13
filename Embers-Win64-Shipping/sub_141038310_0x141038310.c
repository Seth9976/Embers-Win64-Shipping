// 函数: sub_141038310
// 地址: 0x141038310
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = *(arg2 + 0x138)
int64_t* rax = sub_141022ce0(r13)
int64_t r14 = 0
void* rbp = r13
int64_t var_60 = 0
int64_t r12 = *(*(*(*arg1 + 0x40) + 0x10) + 0x20)
uint32_t r8_3 = *(arg1 + 0x24) u>> 2
int64_t rcx_2 = arg1[3] * zx.q(r8_3)
int128_t var_3c
__builtin_memset(&var_3c, 0, 0x14)
int32_t rax_3 = arg1[4].d * r8_3
int64_t var_48 = rcx_2
int32_t var_50 = 0x2a
int32_t var_4c = 1
int32_t var_40 = rax_3
int32_t var_58

if (r13 != 0)
    rbp = r13
    void arg_8
    r14 = *sub_141013ee0(r13 + 0x230, &arg_8, &var_58)

sub_141010dcc(sub_141022ce0(rbp), r12, 0, &var_50, r14)

if (sub_141016130(*(arg2 + 0x32c0), 1) == 0)
    int64_t* rcx_7 = *(arg2 + 0x32c0)
    (*(*rcx_7 + 8))(rcx_7)

int32_t rax_8 = sub_141033be0(*(arg2 + 0x32c0), 1)
void* r9_2 = *(arg2 + 0x32c0)
uint64_t rdx_3 = zx.q(*(r9_2 + 0x38) * rax_8)
int64_t rbx_1 = *(r9_2 + 0x48) + rdx_3
(*(*rax + 0xc0))(rax, 1, *(r9_2 + 0x40) + rdx_3, r14, 0)
void* r9_4 = *arg1
int32_t r8_7 = *(r9_4 + 0x64)
void* rdx_4 = *(*(r9_4 + 0x40) + 0x10)

if (r8_7 == 1)
    sub_141037220(arg2 + 0x1c0, rdx_4, 8, 0)
else if (r8_7 == 4)
    sub_141037220(arg2 + 0x1c0, rdx_4, 8, *(r9_4 + 0x68))
else if (r8_7 == 5 || r8_7 == 8)
    sub_141036f20(arg2 + 0x1c0, rdx_4, 8, r9_4 + 0x50)

*(arg2 + 0x3b88) += 1
void* rsi_1 = *(arg2 + 0x1c8)
int32_t rdx_5 = *(rsi_1 + 0x128)
int64_t* rcx_11 = *(rsi_1 + 0x30)

if (rdx_5 != 0)
    (*(*rcx_11 + 0xd0))(rcx_11, rdx_5, *(rsi_1 + 0x120))
    *(rsi_1 + 0x128) = 0
    rsi_1 = *(arg2 + 0x1c8)

int64_t* rcx_12 = *(rsi_1 + 0x30)
(*(*rcx_12 + 0x188))(rcx_12, rbx_1, r14, r12, arg1[1], 0, 0)
void* rdx_7 = *(*(*arg1 + 0x40) + 0x10)
int64_t result = *(rdx_7 + 0x28)

if (result == 0)
    if (data_1439b4ad4 != 0 && *(rdx_7 + 0x38) != 0)
        result = sub_141026da0(*(*(arg2 + 0x1c8) + 0x118), rdx_7 + 0x30)
else if (data_1439b4ad4 != 0 && *(result + 0x30) != 0)
    result = sub_141026da0(*(*(arg2 + 0x1c8) + 0x118), result + 0x28)

if (*(arg2 + 0x135) != 0)
    result = sub_141031e00(r13, 1, 0)

if (rbp == 0)
    return result

return sub_1410224a0(rbp + 0x230, r14, var_58)
