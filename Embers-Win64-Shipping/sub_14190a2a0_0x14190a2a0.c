// 函数: sub_14190a2a0
// 地址: 0x14190a2a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = *(arg2 + 0x18)
int64_t r13 = sx.q(arg3)
int64_t rcx_1 = r13 * 5
int32_t* rbx = result + (rcx_1 << 2)

if (*(result + (rcx_1 << 2)) != arg4 || rbx[1] != arg5 || rbx[2] != arg8 || rbx[3] != arg7
        || rbx[4].b != arg6)
    data_143f00290(zx.q(r13.d), zx.q(arg5), 0, zx.q(arg6), arg7, arg8, arg4)
    *rbx = arg4
    rbx[1] = arg5
    result = zx.q(1 << r13.b)
    rbx[2] = arg8
    rbx[3] = arg7
    rbx[4].b = arg6
    int32_t rcx_4 = *(arg2 + 0x894)
    
    if (arg5 == 0)
        result = zx.q(not.d(result.d)) & zx.q(rcx_4)
        *(arg2 + 0x894) = result.d
    else
        *(arg2 + 0x894) = rcx_4 | result.d

return result
