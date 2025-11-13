// 函数: sub_1421be5d0
// 地址: 0x1421be5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x80)
int64_t* rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rax_1 = sx.q(*(r8 + 0xb0)) * 0x38
int64_t rcx = *(rax_1 + r8 + 0x10)
int64_t rax_2 = *(rax_1 + r8 + 0x20)
void* rax_3 = &rbx_2[2]

if (rax_3 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_3 = &rbx_2[2]

*(arg2 + 0x30) = rax_3
*rbx_2 = rcx
rbx_2[1] = rax_2
void*** rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_5 = &rcx_4[5]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_4 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rcx_4[5]

*(arg2 + 0x30) = rax_5
void**** rax_6 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_6 = rcx_4
*(arg2 + 8) = &rcx_4[1]
rcx_4[1] = 0
rcx_4[3] = rbx_2
*rcx_4 = &data_142d549c8
rcx_4[2].d = 2
rcx_4[4].d = 1
return &data_142d549c8
