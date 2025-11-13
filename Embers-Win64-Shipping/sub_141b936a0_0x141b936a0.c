// 函数: sub_141b936a0
// 地址: 0x141b936a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

int128_t zmm0 = *arg3
int64_t var_38_1 = 0
int64_t var_30
sub_140d3a3a0(&var_30, nullptr)
var_30 = zmm0.q
int64_t rdi_2 = sx.q(*(arg2 + 0x1d8))
int64_t var_1c_1 = 0
char var_20_1 = 1
int32_t rax_3 = (rdi_2 + 1).d
*(arg2 + 0x1d8) = rax_3

if (rax_3 s> *(arg2 + 0x1dc))
    sub_1405c4ec0(arg2 + 0x1d0)

int64_t rax = *(arg2 + 0x1d0)
int64_t rcx_2 = rdi_2 * 5
*(rax + (rcx_2 << 3)) = arg1.o
*(rax + (rcx_2 << 3) + 0x10) = zmm0:8.q.o
*(rax + (rcx_2 << 3) + 0x20) = var_1c_1
