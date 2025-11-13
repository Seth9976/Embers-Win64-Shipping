// 函数: sub_140d98800
// 地址: 0x140d98800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg1[1].d)
int32_t rax = (rdi + 1).d
arg1[1].d = rax

if (rax s> *(arg1 + 0xc))
    sub_1405fde00(arg1)

int64_t result = rdi * 0x68 + *arg1
__builtin_memset(result, 0, 0x25)
__builtin_memset(result + 0x28, 0, 0x40)
return result
