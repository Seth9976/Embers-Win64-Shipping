// 函数: sub_14084a2f0
// 地址: 0x14084a2f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t rbp = zx.q(*(arg3 + 0xe0))
int64_t r12 = *(arg3 + 0x48)
int32_t r14_1 = *(arg3 + 0x50) - rbp.d
*(arg4 + 0x68) = 0

if (*(arg4 + 0x6c) s<= 2)
    sub_140809940(arg4, 3)

void* rdi = arg4 + 0x70
*(rdi + 0x38) = 0

if (*(rdi + 0x3c) s< 3)
    sub_140809860(rdi, 3)

int64_t rsi = sx.q(*(arg4 + 0x68))
int32_t rax = (rsi + 1).d
*(arg4 + 0x68) = rax

if (rax s> *(arg4 + 0x6c))
    sub_140809460(arg4, rsi.d)

void* rax_1 = *(arg4 + 0x60)
void* rcx_3 = arg4

if (rax_1 != 0)
    rcx_3 = rax_1

*(rcx_3 + (rsi << 3)) = arg2
int64_t rsi_1 = sx.q(*(rdi + 0x38))
int32_t rax_2 = (rsi_1 + 1).d
*(rdi + 0x38) = rax_2

if (rax_2 s> *(rdi + 0x3c))
    sub_140809140(rdi, rsi_1.d)

void* rax_3 = *(rdi + 0x30)

if (rax_3 != 0)
    rdi = rax_3

*(rdi + (rsi_1 << 2)) = 0x10
sub_1407e6350(arg4, r12, rbp.d)
return sub_1407e6350(arg4, r12 + rbp, r14_1) __tailcall
