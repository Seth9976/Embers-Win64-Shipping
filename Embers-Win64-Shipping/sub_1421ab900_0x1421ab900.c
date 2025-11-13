// 函数: sub_1421ab900
// 地址: 0x1421ab900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1
(*(*rcx + 0x28))(rcx)
int64_t* rcx_2 = *arg1 + 0x38
(*(*rcx_2 + 0x28))(rcx_2)
int64_t* rcx_4 = *arg1 + 0x70
(*(*rcx_4 + 0x28))(rcx_4)
int64_t* rcx_6 = *arg1 + 0x90
(*(*rcx_6 + 0x28))(rcx_6)
void* rax_4 = *arg1
int64_t* rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rcx_7 = *(rax_4 + 0x88)
int64_t rax_5 = *(rax_4 + 0xa8)
void* rax_6 = &rbx_3[2]

if (rax_6 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rbx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_6 = &rbx_3[2]

*(arg2 + 0x30) = rax_6
*rbx_3 = rcx_7
rbx_3[1] = rax_5
void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_8 = &rcx_11[5]

if (rax_8 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x30)
    rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_8 = &rcx_11[5]

*(arg2 + 0x30) = rax_8
void**** rax_9 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_9 = rcx_11
*(arg2 + 8) = &rcx_11[1]
rcx_11[1] = 0
rcx_11[3] = rbx_3
*rcx_11 = &data_142d549c8
rcx_11[2].d = 2
rcx_11[4].d = 0
return &data_142d549c8
