// 函数: sub_140cb8880
// 地址: 0x140cb8880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* var_20 = arg1
int64_t* var_18
sub_140cad070(&var_18, arg2, *(arg1 + 0x4c) + arg3, *(arg1 + 0x38), 0x10)
int64_t rbx_1 = sx.q(*(arg2 + 0x1f0))
int32_t rbp_3 = (*(arg1 + 0x4c) + arg3) << 0xd | 0x100
int32_t rax = (rbx_1 + 1).d
*(arg2 + 0x1f0) = rax

if (rax s> *(arg2 + 0x1f4))
    sub_1405a4cf0(arg2 + 0x1e8)

uint64_t result = *(arg2 + 0x1e8)
*(result + (rbx_1 << 2)) = rbp_3
int32_t var_10

if (var_10 s> 1)
    int64_t* rax_1 = var_18
    int64_t rcx_2 = sx.q(rax_1[1].d)
    int64_t rax_2 = *rax_1
    result = zx.q(*(rax_2 + (rcx_2 << 2) - 4))
    *(rax_2 + (rcx_2 << 2) - 4) = zx.d((result + 1).b) ^ zx.d(result.b) ^ result.d

return result
