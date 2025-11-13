// 函数: sub_140d79070
// 地址: 0x140d79070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax

if (data_143de5480 == 0)
    rax.b = 1
else
    rax.b = GetCurrentThreadId() == data_143de5470

int64_t rdx = *(arg1 + 0x10)
void* rbx_1 = *(arg1 + 8)

if (rax.b != 0)
    return sub_140d808e0(rbx_1, rdx) __tailcall

int64_t rdi = sx.q(*(rbx_1 + 0xb0))
int64_t var_48
__builtin_memset(&var_48, 0, 0x21)
int64_t var_20 = 0
int32_t var_18 = 0
int32_t rax_2 = (rdi + 1).d
int32_t var_58 = 2
int64_t var_50 = rdx
*(rbx_1 + 0xb0) = rax_2

if (rax_2 s> *(rbx_1 + 0xb4))
    sub_140775520(rbx_1 + 0xa8)

sub_140d70160(*(rbx_1 + 0xa8) + rdi * 0x48, &var_58)
sub_140a3c0a0(&var_48)
return 0
