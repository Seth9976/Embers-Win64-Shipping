// 函数: sub_142913f80
// 地址: 0x142913f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x28)

if (arg3 == 0)
    return 0

int64_t i = 0
int64_t rdx = 0

while (true)
    char rax_2 = arg2[rdx]
    rdx += 1
    
    if (rax_2 != *(rdx + 0x1434e8c1b))
        break
    
    if (rdx == 4)
        return sub_1428bcf80(arg1, 6, arg3) __tailcall

do
    char rax_4 = arg2[i]
    i += 1
    
    if (rax_4 != *(i + 0x14351e6ff))
        return 0xfffffffe
while (i != 7)

return sub_1428bce00(arg1, (i - 1).d, arg3) __tailcall
