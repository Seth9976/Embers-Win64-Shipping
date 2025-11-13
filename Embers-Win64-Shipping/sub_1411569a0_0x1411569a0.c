// 函数: sub_1411569a0
// 地址: 0x1411569a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_78
int64_t rax_1 = __security_cookie ^ &var_78
int64_t rdi = *(arg2 + 0x1b0)
sub_14077cfd0(arg1 + 0x118, arg2, rdi)
sub_14077cfd0(arg1 + 0x120, arg2, rdi)
int64_t rdi_1 = *(arg2 + 0x1b0)
sub_14077cfd0(arg1 + 0x13c, arg2, rdi_1)
sub_14077cfd0(arg1 + 0x144, arg2, rdi_1)
sub_14077cfd0(arg1 + 0x14c, arg2, rdi_1)
sub_14077cfd0(arg1 + 0x154, arg2, rdi_1)
int64_t rax_2 = data_143e57100
int64_t r8_6 = data_143e570c0
int64_t rax_3 = data_143e57120
int64_t* rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
int64_t rax_4 = data_143e57140
int64_t rdx_5 = sx.q(*(arg3 + 0x18d0)) << 3
int64_t rcx_6 = *(*(rdx_5 + arg3 + 0x18b8) + 0x30)
int64_t rcx_7 = *(*(rdx_5 + arg3 + 0x18b8) + 0x10)
void* rax_8 = &rbx_2[6]

if (rax_8 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rbx_2 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_8 = &rbx_2[6]

*(arg2 + 0x30) = rax_8
*rbx_2 = r8_6
rbx_2[1] = rax_2
rbx_2[2] = rax_3
rbx_2[3] = rax_4
rbx_2[4] = rcx_6
rbx_2[5] = rcx_7
void*** rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
void* rax_14 = &rcx_11[6]

if (rax_14 u> *(arg2 + 0x38))
    sub_140b0e3d0(arg2 + 0x30, 0x38)
    rcx_11 = (*(arg2 + 0x30) + 7) & 0xfffffffffffffff8
    rax_14 = &rcx_11[6]

*(arg2 + 0x30) = rax_14
void**** rax_15 = *(arg2 + 8)
*(arg2 + 0x14) += 1
*rax_15 = rcx_11
*(arg2 + 8) = &rcx_11[1]
rcx_11[1] = 0
*rcx_11 = &data_142da7798
rcx_11[2].d = 6
rcx_11[3] = rbx_2
rcx_11[4].d = 0
*(rcx_11 + 0x24) = 1
rcx_11[5] = 0
__security_check_cookie(rax_1 ^ &var_78)
return &data_142da7798
