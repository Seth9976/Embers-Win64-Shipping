// 函数: sub_141e14220
// 地址: 0x141e14220
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void var_48
int64_t* rax = sub_140596d10(&var_48, arg2)
int64_t var_38
sub_140596d10(&var_38, rax)
int64_t rcx_2 = *rax
char var_28 = arg3

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t rdi_1 = sx.q(*(arg1 + 0x10))
int32_t rax_1 = (rdi_1 + 1).d
*(arg1 + 0x10) = rax_1

if (rax_1 s> *(arg1 + 0x14))
    sub_1405c4ec0(arg1 + 8)

int64_t* rdx_2 = *(arg1 + 8) + rdi_1 * 0x28
*rdx_2 = var_38
int32_t var_30
rdx_2[1].d = var_30
int32_t var_2c
*(rdx_2 + 0xc) = var_2c
rdx_2[2].b = arg3
rdx_2[3] = 0
rdx_2[4] = 0
var_38 = 0
var_30.q = 0
int64_t var_20 = 0
int64_t var_18 = 0
sub_141e13280(&var_20)
int64_t rcx_6 = var_38

if (rcx_6 != 0)
    sub_140a74f90(rcx_6)

int64_t rax_6 = sx.q(*(arg1 + 0x10))
int64_t result = *(arg1 + 8)

if (*(result + ((rax_6 * 5 - 2) << 3) + 0xc) s< 0xc)
    result = sub_140775c70(result + ((rax_6 * 5 - 2) << 3), 0xc)

int64_t rcx_10 = *arg2

if (rcx_10 == 0)
    return result

return sub_140a74f90(rcx_10)
