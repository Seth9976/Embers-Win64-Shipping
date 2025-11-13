// 函数: sub_142c6c410
// 地址: 0x142c6c410
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* arg_10 = arg2
int64_t arg_18 = arg3
int64_t r9
int64_t arg_20 = r9
char* rax_1 = sub_142c56520(arg2, &arg_18, arg4)

if (rax_1 == 0)
    data_143ccb8a0(*arg1)
    data_143ccb8a0(arg1)
    return 0x1b

int64_t r8 = -1

do
    r8 += 1
while (rax_1[r8] != 0)

int32_t rax_2 = sub_142c6c0d0(arg1, rax_1, r8)
data_143ccb8a0(rax_1)
return zx.q(rax_2)
