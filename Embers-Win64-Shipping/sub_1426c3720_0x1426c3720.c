// 函数: sub_1426c3720
// 地址: 0x1426c3720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t count = zx.q(*(arg1 + 0x13c))
int64_t r14 = sx.q(arg1[4].d)
int32_t rax = (r14 + count).d
arg1[4].d = rax

if (rax s> *(arg1 + 0x24))
    sub_1405daba0(&arg1[3])

memset(arg1[3] + r14, 0, count)
sub_142714680(arg1[3] + r14, arg2)
int64_t rbx = sx.q(arg1[1].d)
int32_t arg_c = r14.d & 0x7fffffff
int32_t rax_1 = (rbx + 1).d
arg1[1].d = rax_1

if (rax_1 s> *(arg1 + 0xc))
    sub_1405a4d70(arg1)

int64_t result = 0.q
*(*arg1 + (rbx << 3)) = result
return result
