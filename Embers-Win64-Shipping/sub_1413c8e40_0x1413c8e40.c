// 函数: sub_1413c8e40
// 地址: 0x1413c8e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *arg1

if (rcx == 0 || (*(rcx + 0x64) & 2) == 0)
    return 

void* rsi_1 = arg1[1]
void* rax
char rax_1

if (*(rsi_1 + 0xf78) == 0 && *(rsi_1 + 8) s< 3)
    rax_1 = sub_1413edce0(*(rcx + 0x20) + 0x30)
    rax = sub_1413edce0(&arg1[2])

if (*(rsi_1 + 0xf78) != 0 || (*(rsi_1 + 8) s< 3 && rax.b != rax_1))
    rax.b = 1
else
    rax.b = 0

*(rsi_1 + 0xf78) = rax.b
sub_141f24c60(*(*arg1 + 0x20), &arg1[2])
*(*(*arg1 + 0x20) + 0xc8) = arg1[4].d
*(*(*arg1 + 0x20) + 0xcc) = *(arg1 + 0x24)
int64_t rcx_8 = sx.q(*(*arg1 + 0x28))

if (rcx_8.d != 0xffffffff)
    *(*(arg1[1] + 0xee8) + rcx_8 * 0x30 + 0x10) = *(arg1 + 0x10)
