// 函数: sub_141156480
// 地址: 0x141156480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_68
int64_t rax_1 = __security_cookie ^ &var_68
int64_t rdi = *(arg2 + 0x1b0)
sub_14077cfd0(arg1 + 0x118, arg2, rdi)
sub_14077cfd0(arg1 + 0x120, arg2, rdi)
int64_t rdi_1 = *(arg2 + 0x1b0)
sub_14077cfd0(arg1 + 0x13c, arg2, rdi_1)
sub_14077cfd0(arg1 + 0x144, arg2, rdi_1)
sub_14077cfd0(arg1 + 0x14c, arg2, rdi_1)
sub_14077cfd0(arg1 + 0x154, arg2, rdi_1)
int64_t rax_2 = data_1439b5e30
int64_t rcx_6 = data_1439b5df0
int64_t* rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rax_3 = data_1439b5e50
int64_t rax_4 = data_1439b5e70
void* rax_5 = &rbx_2[4]

if (rax_5 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x28)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_5 = &rbx_2[4]

*(arg2 + 0x30) = rax_5
*rbx_2 = rcx_6
rbx_2[1] = rax_2
rbx_2[2] = rax_3
rbx_2[3] = rax_4
void*** rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_9 = &rcx_10[6]

if (rax_9 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_10 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_9 = &rcx_10[6]

*(arg2 + 0x30) = rax_9
void**** rax_10 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_10 = rcx_10
*(arg2 + 8) = &rcx_10[1]
rcx_10[1] = 0
*rcx_10 = &data_142da7798
rcx_10[2].d = 4
rcx_10[3] = rbx_2
rcx_10[4].d = 0
*(rcx_10 + 0x24) = 3
rcx_10[5] = 0
__security_check_cookie(rax_1 ^ &var_68)
return &data_142da7798
