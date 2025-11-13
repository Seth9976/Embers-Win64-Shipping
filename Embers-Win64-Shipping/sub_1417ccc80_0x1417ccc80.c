// 函数: sub_1417ccc80
// 地址: 0x1417ccc80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x8048))
void* rbx = arg1 + 0x4040
int64_t rsi = sx.q(arg3)
int32_t rax = (rdi + rsi).d
*(rbx + 0x4008) = rax

if (rax s> *(rbx + 0x400c))
    sub_1417cc0d0(rbx, rdi.d)

void* rax_1 = *(rbx + 0x4000)

if (rax_1 != 0)
    rbx = rax_1

memcpy((rdi << 5) + rbx, arg2, (rsi << 5).d)
int64_t result
result.b = 1
return result
