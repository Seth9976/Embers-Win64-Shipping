// 函数: sub_142342500
// 地址: 0x142342500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1 - 0xc8
char rax

if (*(arg1 + 0x1b5) == 0)
    rax = (*(*rdi + 0x58))(rdi)

if (*(arg1 + 0x1b5) != 0 || rax != 0)
    rax = 1

*(arg1 + 0x1b5) = rax
uint64_t result = sub_142334c50(arg1 + 0xc8, 0)
int64_t* rcx_2 = *(arg1 - 0x98)

if (rcx_2 == 0)
    return result

int64_t r9_1 = *rcx_2

if (arg1 == 0xd0)
    rdi = nullptr

return (*(r9_1 + 0xe8))(rcx_2, rdi, arg2, r9_1)
