// 函数: sub_141156800
// 地址: 0x141156800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = *(arg2 + 0x1b0)
sub_14077cfd0(arg1 + 0x118, arg2, rbx)
sub_14077cfd0(arg1 + 0x120, arg2, rbx)
sub_14077cfd0(arg1 + 0x128, arg2, rbx)
sub_14077cfd0(arg1 + 0x130, arg2, rbx)
int64_t var_28 = 0
int32_t i_3 = 0
sub_141124940(arg1 + 0x118, arg4, &var_28)
int64_t i_2 = sx.q(i_3)
int64_t rsi_1 = var_28
int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int32_t rdx_4 = (i_2 << 3).d
int64_t r15 = sx.q(rdx_4)
void* rax = r15 + rbx_3

if (rax u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, rdx_4 + 8)
    rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax = r15 + rbx_3

*(arg2 + 0x30) = rax
int64_t i_1 = i_2

if (i_2.d s> 0)
    int64_t* rcx_6 = rbx_3
    int64_t i
    
    do
        *rcx_6 = *(rsi_1 - rbx_3 + rcx_6)
        rcx_6 = &rcx_6[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

void*** result = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx_7 = &result[6]

if (rcx_7 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    result = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx_7 = &result[6]

*(arg2 + 0x30) = rcx_7
void**** rdx_6 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rdx_6 = result
*(arg2 + 8) = &result[1]
result[1] = 0
*result = &data_142da7798
result[2].d = i_2.d
result[3] = rbx_3
result[4].d = 0
*(result + 0x24) = 3
result[5] = 0

if (rsi_1 == 0)
    return result

return sub_140a74f90(rsi_1)
