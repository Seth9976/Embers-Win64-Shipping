// 函数: sub_142b4e3d0
// 地址: 0x142b4e3d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbx = -1

do
    rbx += 1
while (arg2[rbx] != 0)

int64_t rbp = sx.q(rbx.d + 1)
int64_t result = sub_142a7dd00(rbp)
int64_t result_1 = result

if (result != 0)
    memcpy(result_1, arg2, rbp.d)
    result = result_1
    *(sx.q(rbx.d) + result_1) = 0
else
    *arg3 = 7

return result
