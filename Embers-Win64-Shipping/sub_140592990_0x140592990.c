// 函数: sub_140592990
// 地址: 0x140592990
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rcx = *(arg1 + 0x20)
int64_t r9 = rcx
int64_t r8 = *(arg1 + 0x18)

if (((rcx + r8).b & 1) == 0 && *(arg1 + 0x10) u<= (rcx + 2) u>> 1)
    sub_140593fd0(arg1)
    r8 = *(arg1 + 0x18)
    r9 = *(arg1 + 0x20)

int64_t rcx_2 = *(arg1 + 0x10)
void* rax_4 = ((rcx_2 << 1) + -ffffffffffffffff) & r8
*(arg1 + 0x18) = rax_4
void* rdi = rax_4 + r9
int64_t rcx_4 = (rcx_2 - 1) & rdi u>> 1
int64_t rax_7 = *(arg1 + 8)
int64_t rsi = rcx_4 << 3

if (*(rax_7 + (rcx_4 << 3)) == 0)
    *(rsi + *(arg1 + 8)) = j_sub_140a82f30(0x10)
    rax_7 = *(arg1 + 8)

int64_t* rcx_6 = *(rsi + rax_7) + ((zx.q(rdi.d) & 1) << 3)
int64_t result = *arg2
*arg2 = 0
*rcx_6 = result
*(arg1 + 0x20) += 1
return result
