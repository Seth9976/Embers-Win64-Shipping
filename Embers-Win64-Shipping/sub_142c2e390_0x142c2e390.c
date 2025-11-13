// 函数: sub_142c2e390
// 地址: 0x142c2e390
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = arg1
int32_t result

if (sub_142bfadd0(arg1, arg2, arg3).b == 0)
    result.b = 0
else
    uint64_t r9 = zx.q(*(rbx + 2))
    uint64_t rdx = zx.q(*rbx)
    uint64_t r8 = zx.q(*(rbx + 1))
    uint64_t r10_1 = zx.q(*(rbx + 3))
    
    if ((rdx.d << 0x18) + (r9.d << 8) + (r8.d << 0x10) == neg.d(r10_1.d))
        result.b = 1
    else if (sub_142c33a90(((((r8 + (rdx << 8)) << 8) + r9) << 8) + arg3 + r10_1, arg2, arg4).b
            != 0)
        result.b = 1
    else if (sub_142bf99e0(arg2, rbx, 4).b == 0)
        result.b = 0
    else
        *rbx = 0
        result.b = 1

return result
