// 函数: sub_141144720
// 地址: 0x141144720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg2 + 0x1b0)
int64_t r9 = *(arg3 + 0x10)
int64_t arg_8 = rbx
sub_1410809a0(arg1, arg2, rbx, r9)
void* r9_1 = data_143a2dd48
int32_t var_38 = *(r9_1 + 0x60)
int32_t var_34 = *(r9_1 + 0x64)
int32_t i_3 = *(r9_1 + 0x68)
sub_1410e8980(arg1 + 0x118, arg2, rbx, &data_143e570b0, r9_1, &var_38, 0)
var_38.q = 0
i_3.q = 0
void* r13 = *(*(arg3 + 8) + 0xd40)
sub_141124a40(arg1 + 0x14a, r13, &var_38)
int64_t i_2 = sx.q(i_3)
int64_t rsi_1 = var_38.q
int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int32_t rdx_2 = (i_2 << 3).d
int64_t r14 = sx.q(rdx_2)
void* rax_4 = r14 + rbx_3

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, rdx_2 + 8)
    rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = r14 + rbx_3

*(arg2 + 0x30) = rax_4
int64_t i_1 = i_2

if (i_2.d s> 0)
    int64_t* rax_5 = rbx_3
    int64_t i
    
    do
        *rax_5 = *(rsi_1 - rbx_3 + rax_5)
        rax_5 = &rax_5[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

void*** rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_6 = &rcx_6[6]

if (rax_6 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_6 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rcx_6[6]

*(arg2 + 0x30) = rax_6
void**** rax_7 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_7 = rcx_6
*(arg2 + 8) = &rcx_6[1]
rcx_6[1] = 0
rcx_6[5] = 0
*rcx_6 = &data_142da7798
rcx_6[2].d = i_2.d
rcx_6[3] = rbx_3
rcx_6[4].d = 1
*(rcx_6 + 0x24) = 3
sub_14077c4b0(arg2, &arg_8, arg1 + 0x14a, r13 + 0xd0, 0)
sub_14077c370(arg1 + 0x150, arg2, &arg_8, r13 + 0x50)
sub_14077c370(arg1 + 0x158, arg2, &arg_8, r13 + 0x70)
sub_14077c370(arg1 + 0x160, arg2, &arg_8, r13 + 0x90)
int64_t result = sub_14077c370(arg1 + 0x168, arg2, &arg_8, r13 + 0xb0)

if (rsi_1 == 0)
    return result

return sub_140a74f90(rsi_1)
