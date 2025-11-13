// 函数: sub_141dd92c0
// 地址: 0x141dd92c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx_3 = ((zx.q(arg2) + 0x11) << 4) + arg1
void* i = *rbx_3
int64_t r8 = sx.q(rbx_3[1].d)
void* rsi = r8 * 0xb0

for (void* rdx = rsi + i; i != rdx; i += 0xb0)
    if (*(i + 8) == *(arg3 + 8))
        int32_t result = *(arg3 + 0x10)
        *(i + 0x10) = result
        return result

int32_t rax_2 = (r8 + 1).d
rbx_3[1].d = rax_2

if (rax_2 s> *(rbx_3 + 0xc))
    sub_140a05e50(rbx_3)

return sub_141db7be0(*rbx_3 + rsi, arg3) __tailcall
