// 函数: sub_142a86ee0
// 地址: 0x142a86ee0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
void* const rax = &data_1436416a4

while (*(rax - 4) s< arg4)
    if (*rax s>= arg4)
        r10 += 1
        break
    
    if (*(rax + 4) s>= arg4)
        r10 += 2
        break
    
    if (*(rax + 8) s>= arg4)
        r10 += 3
        break
    
    rax += 0x10
    r10 += 4
    
    if (rax s>= &data_143641714)
        break

return sub_142a86480(arg1, arg2, arg3, zx.q(r10)) __tailcall
