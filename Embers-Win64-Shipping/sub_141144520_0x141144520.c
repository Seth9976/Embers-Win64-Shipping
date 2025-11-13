// 函数: sub_141144520
// 地址: 0x141144520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = *(arg3 + 0x10)
int64_t r8 = *(arg2 + 0x1b0)
int64_t arg_8 = r8
sub_1410809a0(arg1, arg2, r8, r9)
int64_t var_38 = 0
int32_t i_3 = 0
sub_141124940(arg1 + 0x118, arg4, &var_38)
int64_t i_2 = sx.q(i_3)
int64_t rbp = var_38
int64_t* rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int32_t rdx_1 = (i_2 << 3).d
int64_t r14 = sx.q(rdx_1)
void* rax = r14 + rbx_2

if (rax u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, rdx_1 + 8)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax = r14 + rbx_2

*(arg2 + 0x30) = rax
int64_t i_1 = i_2

if (i_2.d s> 0)
    int64_t* rax_1 = rbx_2
    int64_t i
    
    do
        *rax_1 = *(rbp - rbx_2 + rax_1)
        rax_1 = &rax_1[1]
        i = i_1
        i_1 -= 1
    while (i != 1)

void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_5[6]

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_5[6]

*(arg2 + 0x30) = rax_2
void** rax_3 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_3 = rcx_5
*(arg2 + 8) = &rcx_5[1]
rcx_5[1] = 0
*rcx_5 = &data_142da7798
rcx_5[2].d = i_2.d
rcx_5[3] = rbx_2
rcx_5[4].d = 1
*(rcx_5 + 0x24) = 3
rcx_5[5] = 0
sub_14077c370(arg1 + 0x118, arg2, &arg_8, arg4 + 0x10)
sub_14077c370(arg1 + 0x120, arg2, &arg_8, arg4 + 0x50)
sub_14077c370(arg1 + 0x128, arg2, &arg_8, arg4 + 0x30)
sub_14077c370(arg1 + 0x130, arg2, &arg_8, arg4 + 0x70)
sub_14077c4b0(arg2, &arg_8, arg1 + 0x138, arg4, 0)
uint64_t result = sub_140741e30(arg2, &arg_8, arg1 + 0x13e, &data_1439b5bb8, 0)

if (rbp == 0)
    return result

return sub_140a74f90(rbp)
