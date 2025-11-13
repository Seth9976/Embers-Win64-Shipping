// 函数: sub_1403df180
// 地址: 0x1403df180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = sx.q(arg1[0x49])
int64_t r12 = sx.q(arg1[0x47] - r10.d) * 2
memcpy(arg1 + ((r10 + 0x54) << 1), arg3, r12.d)
int32_t rcx_2 = arg1[0x42]

if (rcx_2 == 1)
    j_sub_1403e36a0(arg1, arg2, &arg1[0x2a], arg1[0x47])
    j_sub_1403e36a0(arg1, &arg2[sx.q(arg1[0x48])], r12 + arg3, arg4 - arg1[0x47])
else if (rcx_2 == 2)
    sub_1403e2880(arg1, arg2, &arg1[0x2a], arg1[0x47])
    sub_1403e2880(arg1, &arg2[sx.q(arg1[0x48])], r12 + arg3, arg4 - arg1[0x47])
else if (rcx_2 == 3)
    sub_1403e2aa0(arg1, arg2, &arg1[0x2a], arg1[0x47])
    sub_1403e2aa0(arg1, &arg2[sx.q(arg1[0x48])], r12 + arg3, arg4 - arg1[0x47])
else
    memcpy(arg2, &arg1[0x2a], arg1[0x47] * 2)
    memcpy(&arg2[sx.q(arg1[0x48])], r12 + arg3, (arg4 - arg1[0x47]) * 2)

int32_t rax_9 = arg1[0x49]
memcpy(&arg1[0x2a], arg3 + (sx.q(arg4 - rax_9) << 1), rax_9 * 2)
return 0
