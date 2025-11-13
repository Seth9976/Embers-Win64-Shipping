// 函数: sub_142bf9f90
// 地址: 0x142bf9f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg1
int32_t result

if (sub_142bfadd0(arg1, arg2, arg3).b != 0)
    uint64_t r9_1 = zx.q(*(rbx + 2))
    uint64_t rdx = zx.q(*rbx)
    uint64_t r8 = zx.q(*(rbx + 1))
    uint64_t r10_1 = zx.q(*(rbx + 3))
    
    if ((rdx.d << 0x18) + (r9_1.d << 8) + (r8.d << 0x10) == neg.d(r10_1.d))
        result.b = 1
        return result
    
    if (sub_142bfa3a0(((((r8 + (rdx << 8)) << 8) + r9_1) << 8) + arg3 + r10_1, arg2).b != 0)
        result.b = 1
        return result
    
    if (sub_142bf99e0(arg2, rbx, 4).b != 0)
        *rbx = 0
        result.b = 1
        return result

result.b = 0
return result
