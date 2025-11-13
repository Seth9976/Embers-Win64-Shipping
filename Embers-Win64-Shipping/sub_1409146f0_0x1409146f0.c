// 函数: sub_1409146f0
// 地址: 0x1409146f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r9 = *arg1
void* rax = r9
void* r8_2 = (sx.q(arg1[1].d) << 4) + r9

if (r9 != r8_2)
    do
        if (((*(rax + 4) ^ arg2[1]) | (*(rax + 8) ^ arg2[2]) | (*(rax + 0xc) ^ arg2[3])
                | (*rax ^ *arg2)) == 0)
            return (rax - r9) s>> 4
        
        rax += 0x10
    while (rax != r8_2)

return 0xffffffff
