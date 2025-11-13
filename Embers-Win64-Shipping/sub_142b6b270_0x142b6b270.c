// 函数: sub_142b6b270
// 地址: 0x142b6b270
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg3 s> 0)
    return 

void* r10_1 = *(arg1 + 8)
int64_t rdi_1 = sx.q(*(r10_1 + 0x59))
int32_t temp0_1 = rdi_1.d

if (temp0_1 == 0)
    return 

if (temp0_1 s< 0)
    int64_t r8 = *(r10_1 + 0x28)
    int64_t arg_18 = r8
    sub_142b6b360(arg1, &arg_18, r8 - rdi_1 * 2, arg2, arg3)
    return 

int64_t rax_5 = *(*(*(r10_1 + 0x30) + 0x20) + 0x68)

if (rax_5 != 0)
    jump(rax_5)

int32_t var_18_1
uint64_t var_10_1
void* rdx_1
int32_t r8_2

if (*(r10_1 + 0x5e) == 0 || *(r10_1 + 0x8c) u> 0xff)
    var_10_1 = arg3
    r8_2 = rdi_1.d
    var_18_1 = arg2
    rdx_1 = *(r10_1 + 0x28)
else
    var_10_1 = arg3
    r8_2 = 1
    var_18_1 = arg2
    rdx_1 = r10_1 + 0x5e

sub_142b6b510(r10_1, rdx_1, r8_2, arg1 + 0x20, *(arg1 + 0x28), arg1 + 0x30, var_18_1, var_10_1)
