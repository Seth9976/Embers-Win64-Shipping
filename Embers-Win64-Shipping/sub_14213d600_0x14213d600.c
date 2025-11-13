// 函数: sub_14213d600
// 地址: 0x14213d600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x208))
int64_t rsi = sx.q(arg3)
void* rbx = arg1
int32_t rax = (rdi + rsi).d
*(arg1 + 0x208) = rax

if (rax s> *(arg1 + 0x20c))
    sub_142152df0(arg1, rdi.d)

void* rax_1 = *(rbx + 0x200)

if (rax_1 != 0)
    rbx = rax_1

return memcpy(rbx + (rdi << 2), arg2, (rsi << 2).d) __tailcall
