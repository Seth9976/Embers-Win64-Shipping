// 函数: sub_1426bf010
// 地址: 0x1426bf010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rdi = zx.d(arg3)
(*(*arg1 + 0x7e8))(arg1, zx.q(rdi.b))

if (rdi s>= arg1[0x59].d)
    sub_1426bf1b0(&arg1[0x58], rdi + 1, 1)

uint64_t rcx_1 = zx.q(rdi.b) * 5
int64_t rax_2 = arg1[0x58]
*(rax_2 + (rcx_1 << 2) + 8) = *arg2
int32_t result = arg2[1].d
*(rax_2 + (rcx_1 << 2) + 0x10) = result
return result
