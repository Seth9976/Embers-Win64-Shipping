// 函数: sub_140d23ed0
// 地址: 0x140d23ed0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = arg1[3].b

if (arg1[4].b != 0)
    rdx = 0
    arg1[4].b = 0

uint64_t result = sub_140d25690(arg1, rdx)

while (result.b != 0)
    int64_t rcx = sx.q(arg1[1].d) * 0x38
    int64_t rax_1 = *arg1
    result = *(*(*(*(rcx + rax_1 - 0x18) + sx.q(*(rcx + rax_1 - 8)) * 0x10) + 8) + 0x10)
    
    if ((*(arg1[2] + 8) & result) != 0)
        break
    
    result = sub_140d25690(arg1, arg1[3].b)

return result
