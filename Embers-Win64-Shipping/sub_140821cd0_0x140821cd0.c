// 函数: sub_140821cd0
// 地址: 0x140821cd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x2f4) != 0)
    return 

int64_t rax_1 = *(arg1 + 0x2d8)
int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rcx = &rbx_3[1]

if (rcx u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x10)
    rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rcx = &rbx_3[1]

*(arg2 + 0x30) = rcx
*rbx_3 = rax_1
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_2 = &rcx_4[6]

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rcx_4[6]

*(arg2 + 0x30) = rax_2
void**** rax_3 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_3 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
*rcx_4 = &data_142da7798
rcx_4[2].d = 1
rcx_4[3] = rbx_3
rcx_4[4].d = 1
*(rcx_4 + 0x24) = 3
rcx_4[5] = 0
sub_140888020(arg2, *(arg1 + 0x10), arg1 + 0x2d0)
*(arg1 + 0x2f4) = 1
