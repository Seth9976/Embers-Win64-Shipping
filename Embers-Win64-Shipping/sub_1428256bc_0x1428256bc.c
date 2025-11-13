// 函数: sub_1428256bc
// 地址: 0x1428256bc
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x20)
int64_t r9 = rcx
int64_t r8 = *(arg1 + 0x18)

if (((rcx + r8).b & 3) == 0 && *(arg1 + 0x10) u<= (rcx + 4) u>> 2)
    sub_142825efc(arg1, 1)
    r8 = *(arg1 + 0x18)
    r9 = *(arg1 + 0x20)

int64_t rcx_2 = *(arg1 + 0x10)
void* rax_4 = ((rcx_2 << 2) + -ffffffffffffffff) & r8
*(arg1 + 0x18) = rax_4
int64_t rcx_3 = *(arg1 + 8)
void* rdi = rax_4 + r9
int64_t rsi_1 = (rcx_2 - 1) & rdi u>> 2

if (*(rcx_3 + (rsi_1 << 3)) == 0)
    *(*(arg1 + 8) + (rsi_1 << 3)) = sub_14058b9f0(0x10)
    rcx_3 = *(arg1 + 8)

int32_t result = *arg2
*(*(rcx_3 + (rsi_1 << 3)) + ((zx.q(rdi.d) & 3) << 2)) = result
*(arg1 + 0x20) += 1
return result
