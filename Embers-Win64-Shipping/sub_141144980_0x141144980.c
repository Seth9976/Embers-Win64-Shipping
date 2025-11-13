// 函数: sub_141144980
// 地址: 0x141144980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx_1 = *(arg2 + 0x30) + 7
int64_t arg_8 = *(arg2 + 0x1b0)
int64_t rax_1 = *(arg5 + 0x30)
int64_t* rbx_2 = rbx_1 & 0xfffffffffffffff8
int64_t r10 = *(arg5 + 0x10)
void* rax_2 = &rbx_2[2]

if (rax_2 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x18)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_2 = &rbx_2[2]

*(arg2 + 0x30) = rax_2
*rbx_2 = r10
rbx_2[1] = rax_1
void*** rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_4 = &rcx_3[6]

if (rax_4 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_3 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_4 = &rcx_3[6]

*(arg2 + 0x30) = rax_4
void**** rax_5 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_5 = rcx_3
*(arg2 + 8) = &rcx_3[1]
rcx_3[1] = 0
*rcx_3 = &data_142da7798
rcx_3[2].d = 2
rcx_3[3] = rbx_2
rcx_3[4].d = 2
*(rcx_3 + 0x24) = 3
rcx_3[5] = 0
sub_14077c370(arg1 + 0x118, arg2, &arg_8, arg5 + 8)
sub_14077c370(arg1 + 0x120, arg2, &arg_8, arg5 + 0x28)
sub_14077c370(arg1 + 0x128, arg2, &arg_8, arg3 + 8)
sub_14077c370(arg1 + 0x130, arg2, &arg_8, arg3 + 0x28)
sub_14077c370(arg1 + 0x138, arg2, &arg_8, arg4 + 8)
void arg_30
return sub_140741e30(arg2, &arg_8, arg1 + 0x140, &arg_30, 0)
