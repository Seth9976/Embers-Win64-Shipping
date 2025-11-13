// 函数: sub_141a4a1b0
// 地址: 0x141a4a1b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *(arg1 + 0x40)
void* r9 = arg1

if (rax != 0)
    r9 = rax

void* r8_2 = (sx.q(*(arg1 + 0x48)) << 4) + r9
void* rax_1 = r9

if (r9 != r8_2)
    do
        if (((*(rax_1 + 4) ^ arg2[1]) | (*(rax_1 + 8) ^ arg2[2]) | (*(rax_1 + 0xc) ^ arg2[3])
                | (*rax_1 ^ *arg2)) == 0)
            return (rax_1 - r9) s>> 4
        
        rax_1 += 0x10
    while (rax_1 != r8_2)

return 0xffffffff
