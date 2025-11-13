// 函数: sub_142c7a530
// 地址: 0x142c7a530
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* rbx = -ffffffffffffffff
char* rdi = *(*arg1 + 0xa80)
bool cond:0_1

do
    cond:0_1 = *(rdi + rbx + 1) != 0
    rbx = &rbx[1]
while (cond:0_1)

if (arg2 == 0x2a)
    *(rbx + rdi) = 0xa
    int64_t result = sub_142c645e0(arg1, 1, rdi, &rbx[1], arg3)
    *(rbx + rdi) = 0
    return result

if (arg2 != 0x4f)
    return 0x15

arg1[0xe1].d = 0
return 0
