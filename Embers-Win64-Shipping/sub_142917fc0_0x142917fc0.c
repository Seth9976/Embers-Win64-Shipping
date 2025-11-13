// 函数: sub_142917fc0
// 地址: 0x142917fc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x20)

if (arg3 == 0)
    return 0

if (strcmp(arg2, "digestsize") == 0)
    int64_t rbx_1 = sx.q(atoi(arg3))
    return sub_142950d40(sub_142896660(arg1) + 0x18, rbx_1)

int64_t i = 0
int64_t rdx_1 = 0

while (true)
    char rcx_4 = arg2[rdx_1]
    rdx_1 += 1
    
    if (rcx_4 != *(rdx_1 + 0x1434e8c1b))
        break
    
    if (rdx_1 == 4)
        return sub_1428bcf80(arg1, 6, arg3) __tailcall

do
    char rcx_7 = arg2[i]
    i += 1
    
    if (rcx_7 != *(i + 0x14351e6ff))
        return 0xfffffffe
while (i != 7)

return sub_1428bce00(arg1, (i - 1).d, arg3) __tailcall
