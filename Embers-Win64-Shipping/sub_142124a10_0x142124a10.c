// 函数: sub_142124a10
// 地址: 0x142124a10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r14 = sx.q(arg2)
int64_t rax_1 = (*(*arg1 + 0x260))()
int32_t rbx = arg1[r14 * 8 + 0x34].d

if (rax_1 != 0)
    rbx += *((r14 << 6) + rax_1 + 0x2d8)

arg3[1].d = 0

if (*(arg3 + 0xc) != rbx)
    sub_1405a5410(arg3, rbx)

arg4[1].d = 0

if (*(arg4 + 0xc) != rbx)
    sub_1405a5410(arg4, rbx)

int64_t result = sub_14210f1d0(&arg1[0x31], r14.d, 0, arg3, arg4)

if (rax_1 == 0)
    return result

return sub_14210efb0(rax_1 + 0x2c0, r14.d, 0, arg3, arg4)
