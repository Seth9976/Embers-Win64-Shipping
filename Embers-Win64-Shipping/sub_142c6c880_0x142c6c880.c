// 函数: sub_142c6c880
// 地址: 0x142c6c880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = -1

do
    rdi += 1
while (arg2[rdi] != 0)

void* rbx = *arg1
char** i

if (*(arg1 + 0x3f5) == 0 || *(rbx + 0x3d8) == 0)
    i = *(rbx + 0x3c0)
else
    i = *(rbx + 0x3c8)

for (; i != 0; i = i[1])
    if (sub_142c704d0(*i, arg2, rdi) != 0)
        return *i

return 0
