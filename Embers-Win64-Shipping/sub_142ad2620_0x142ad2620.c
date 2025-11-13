// 函数: sub_142ad2620
// 地址: 0x142ad2620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg2
uint64_t rdx_2

if (arg3 s> 0xb)
    rdx_2 = zx.q(arg3 s/ 0xc)
    r9 += rdx_2.d
    arg3 += rdx_2.d * 0xfffffff4
else if (arg3 s< 0)
    arg3 += 1
    rdx_2 = zx.q(arg3 s/ 0xc)
    r9 = r9 - 1 + rdx_2.d
    arg3 += 0xb - ((rdx_2 * 3).d << 2)
int32_t rax_6 = sub_142ad2a30(arg1, r9, arg3)
int32_t rcx_3
rcx_3.b = arg1[0x4d].d != 3
return zx.q(rax_6 + rcx_3 + 0x1dbb16)
