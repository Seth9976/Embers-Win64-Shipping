// 函数: sub_1421b3e90
// 地址: 0x1421b3e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x80)
int64_t rcx = sx.q(*(r8 + 0xb0))
int64_t rax_2 = rcx ^ 1

if (*(data_143f4dd68 + 4) f<= 0f)
    rax_2 = rcx

int64_t rax_3 = rax_2 * 0x38
int64_t* rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_1 = *(rax_3 + r8 + 0x10)
int64_t rax_4 = *(rax_3 + r8 + 0x20)
void* rax_5 = &rbx_2[2]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rbx_2[2]

*(arg2 + 0x30) = rax_5
*rbx_2 = rcx_1
rbx_2[1] = rax_4
void*** rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_7 = &rcx_5[5]

if (rax_7 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_5 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_7 = &rcx_5[5]

*(arg2 + 0x30) = rax_7
void**** rax_8 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_8 = rcx_5
*(arg2 + 8) = &rcx_5[1]
rcx_5[1] = 0
rcx_5[3] = rbx_2
*rcx_5 = &data_142d549c8
rcx_5[2].d = 2
rcx_5[4].d = 0
return &data_142d549c8
