// 函数: sub_140d79140
// 地址: 0x140d79140
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rax

if (data_143de5480 == 0)
    rax.b = 1
else
    rax.b = GetCurrentThreadId() == data_143de5470

int64_t rdx = *(arg1 + 0x10)
void* rcx = *(arg1 + 8)

if (rax.b == 0)
    int64_t r8
    int64_t var_1c_1 = r8
    int64_t var_48
    __builtin_memset(&var_48, 0, 0x21)
    int64_t rdi_1 = sx.q(*(rcx + 0xb0))
    int32_t rax_1 = (rdi_1 + 1).d
    int32_t var_58 = 1
    int64_t var_50_1 = rdx
    int32_t var_20_1 = arg2
    *(rcx + 0xb0) = rax_1
    
    if (rax_1 s> *(rcx + 0xb4))
        sub_140775520(rcx + 0xa8)
    
    sub_140d70160(*(rcx + 0xa8) + rdi_1 * 0x48, &var_58)
    sub_140a3c0a0(&var_48)
else
    int64_t r9
    int64_t var_68_1 = r9
    sub_140d809e0(rcx, rdx, zx.q(arg2))

return 0
