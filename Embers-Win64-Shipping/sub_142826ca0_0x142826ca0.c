// 函数: sub_142826ca0
// 地址: 0x142826ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x20)
int64_t r9 = rcx
int64_t r8 = *(arg1 + 0x18)

if (((rcx + r8).b & 1) == 0 && *(arg1 + 0x10) u<= (rcx + 2) u>> 1)
    sub_142828950(arg1, 1)
    r8 = *(arg1 + 0x18)
    r9 = *(arg1 + 0x20)

int64_t rcx_2 = *(arg1 + 0x10)
void* rax_4 = ((rcx_2 << 1) + -ffffffffffffffff) & r8
*(arg1 + 0x18) = rax_4
int64_t rcx_3 = *(arg1 + 8)
void* rdi = rax_4 + r9
int64_t rsi_1 = (rcx_2 - 1) & rdi u>> 1

if (*(rcx_3 + (rsi_1 << 3)) == 0)
    *(*(arg1 + 8) + (rsi_1 << 3)) = sub_14058b9f0(0x10)
    rcx_3 = *(arg1 + 8)

int64_t result = *arg2
*(*(rcx_3 + (rsi_1 << 3)) + ((zx.q(rdi.d) & 1) << 3)) = result
*(arg1 + 0x20) += 1
return result
