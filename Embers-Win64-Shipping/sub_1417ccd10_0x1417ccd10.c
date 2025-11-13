// 函数: sub_1417ccd10
// 地址: 0x1417ccd10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(*(arg1 + 0x10068))
void* rbx = arg1 + 0x8060
int64_t rsi = sx.q(arg3)
int32_t rax = (rdi + rsi).d
*(rbx + 0x8008) = rax

if (rax s> *(rbx + 0x800c))
    sub_1417cc1e0(rbx, rdi.d)

void* rax_1 = *(rbx + 0x8000)

if (rax_1 != 0)
    rbx = rax_1

memcpy((rdi << 6) + rbx, arg2, (rsi << 6).d)
int64_t result
result.b = 1
return result
