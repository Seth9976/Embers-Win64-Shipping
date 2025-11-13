// 函数: sub_142b22ec0
// 地址: 0x142b22ec0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = arg1[0x2f]
int32_t rdi = arg2

if (rcx != 0 && (*(rcx + 8) & 0xffe0) != 0)
    rdi = sub_142b22e30(rcx, arg2)

(*(*arg1 + 0x60))(arg1, zx.q(rdi), arg3)
int32_t result = arg1[0x30].d

if (result s>= 0)
    result += rdi
    arg1[0x30].d = result

return result
