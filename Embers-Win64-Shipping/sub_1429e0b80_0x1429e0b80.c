// 函数: sub_1429e0b80
// 地址: 0x1429e0b80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r9 = arg1[2]
char* r10_1 = *arg1 + (r9 u>> 3)

if (r10_1 u>= arg1[1])
    arg1[4](arg1[3], arg2, arg1)
    return 0

uint32_t rax_2 = zx.d(*r10_1) u>> (7 - (r9.b & 7))
arg1[2] = r9 + 1
return zx.q(rax_2) & 1
