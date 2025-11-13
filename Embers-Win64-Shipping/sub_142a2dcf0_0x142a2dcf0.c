// 函数: sub_142a2dcf0
// 地址: 0x142a2dcf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* r10 = arg1
int64_t i_1 = 4
int32_t result
int64_t i

do
    int32_t rax_3 = zx.d(arg3[1]) * (0x10 - arg5) + 8
    *arg3 = ((zx.d(*arg3) * (0x10 - arg5) + 8 + zx.d(*r10) * arg5) s>> 4).b
    uint32_t rax_4 = zx.d(arg3[2])
    arg3[1] = ((zx.d(r10[1]) * arg5 + rax_3) s>> 4).b
    uint32_t rax_7 = zx.d(arg3[3])
    arg3[2] = ((zx.d(r10[2]) * arg5 + rax_4 * (0x10 - arg5) + 8) s>> 4).b
    uint32_t rcx_13 = zx.d(r10[3])
    r10 = &r10[sx.q(arg2)]
    result = rax_7 * (0x10 - arg5)
    arg3[3] = ((rcx_13 * arg5 + 8 + result) s>> 4).b
    arg3 = &arg3[sx.q(arg4)]
    i = i_1
    i_1 -= 1
while (i != 1)
return result
