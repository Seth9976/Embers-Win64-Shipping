// 函数: sub_142b6a840
// 地址: 0x142b6a840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = arg3
int32_t rbx

if (arg4 - arg3 s> 7)
    rbx = 7
    r10 = arg4 - 7
else
    rbx = arg4.d - arg3.d

int32_t arg_10 = rbx
int32_t rax_2 = sub_142a9be90(r10, 0, &arg_10, arg2, 0xff)
int32_t rbx_1 = rbx - arg_10
int64_t r8_1 = sx.q(rax_2)
arg_10 = rbx_1
uint64_t rax_4

if (r8_1.d u<= 0xffff)
    rax_4 = zx.q(zx.d(*(*arg1 + (r8_1 s>> 6 << 1))) + (r8_1.d & 0x3f))
else if (r8_1.d u> 0x10ffff)
    rax_4 = zx.q(*(arg1 + 0x14) - 1)
else if (r8_1.d s< arg1[3].d)
    rax_4 = sub_142b6a760(arg1, r8_1.d)
else
    rax_4 = zx.q(*(arg1 + 0x14) - 2)

return zx.q((rax_4 << 3).d) | zx.q(rbx_1)
