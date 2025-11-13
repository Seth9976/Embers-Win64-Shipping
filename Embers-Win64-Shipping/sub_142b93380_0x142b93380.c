// 函数: sub_142b93380
// 地址: 0x142b93380
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 == 0 || (*(arg1 + 8) & 8) == 0)
    return 0x23

int64_t* rcx = *(arg1 + 0x90)
int64_t r10_1 = *(*rcx + 0x30)

if (r10_1 != 0)
    int64_t rax_1 = r10_1(rcx, "sfnt-table")
    
    if (rax_1 != 0)
        return (*rax_1)(arg1, zx.q(arg2), zx.q(arg3), arg4, arg5)

return 7
