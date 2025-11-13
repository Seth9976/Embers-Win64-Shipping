// 函数: sub_1423d1be0
// 地址: 0x1423d1be0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t zmm0 = *arg3
int64_t var_48 = 0
int64_t var_40
sub_140d3a3a0(&var_40, nullptr)
var_40 = zmm0.q
int64_t var_38 = zmm0:8.q
int64_t rbx_1 = sx.q(*(arg1 + 0xf8))
int64_t var_20
__builtin_memset(&var_20, 0, 0x14)
int32_t rax_3 = (rbx_1 + 1).d
*(arg1 + 0xf8) = rax_3

if (rax_3 s> *(arg1 + 0xfc))
    sub_1405c4fe0(arg1 + 0xf0)

int64_t* rcx_4 = (rbx_1 << 6) + *(arg1 + 0xf0)
*rcx_4 = arg2
*(rcx_4 + 8) = var_40.o
rcx_4[3] = arg5
rcx_4[4] = arg4
rcx_4[5] = var_20
rcx_4[6] = 0
rcx_4[7].d = 0
int64_t var_18
sub_1407473e0(&rcx_4[6], &var_18)
return sub_140745b20(&var_18)
