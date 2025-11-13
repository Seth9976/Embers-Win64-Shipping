// 函数: sub_141fdf8c0
// 地址: 0x141fdf8c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rax = *(arg1 + 0x58)
int64_t r8 = *(arg1 + 0x38)
int64_t var_18 = *(arg1 + 0x50)
int32_t var_10 = rax
sub_141fd2dc0(arg2, arg1 + 0x40, r8, &var_18)
int64_t* r14 = *(arg1 + 0x68)
int64_t* rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_1 = &rbx_2[1]

if (rax_1 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_1 = &rbx_2[1]

*(arg2 + 0x30) = rax_1
*rbx_2 = *r14
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_3 = &rcx_4[6]

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rcx_4[6]

*(arg2 + 0x30) = rax_3
void**** rax_4 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_4 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142da7798
rcx_4[2].d = 1
rcx_4[3] = rbx_2
rcx_4[4].d = 3
*(rcx_4 + 0x24) = 3
rcx_4[5] = 0
return sub_1405d16e0(*(arg1 + 0x60), nullptr) __tailcall
