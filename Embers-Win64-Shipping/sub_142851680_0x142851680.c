// 函数: sub_142851680
// 地址: 0x142851680
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
char* rdi = arg1

if (*(*(arg2 + 0x598) + 0x380) == 0)
    return 1

void* rsi = nullptr
int32_t i = 0

if (*arg1 != 0)
    while (i u< 0x80000000)
        arg1 = &arg1[1]
        i += 1
        
        if (*arg1 == 0)
            break

uint64_t r15_1 = zx.q(i) & 0x7fffffff
int64_t rax_3 = sub_1428a6730(((arg4 + arg6) << 1) + 3 + r15_1)

if (rax_3 == 0)
    sub_142856580(arg2, (rax_3 + 0x50).d, 0x1f4, (rax_3 + 0x41).d, "ssl\ssl_lib.c", 0x13ff)
    return 0

char* rcx_4 = rax_3 - rdi
char i_1

do
    i_1 = *rdi
    *(rcx_4 + rdi) = i_1
    rdi = &rdi[1]
while (i_1 != 0)
char* rbx_1 = rax_3 + r15_1
void* rdi_1 = nullptr
*rbx_1 = 0x20
void* rbx_2 = &rbx_1[1]

if (arg4 != 0)
    do
        sub_1425f2950(rbx_2, "%02x", zx.q(*(rdi_1 + arg3)))
        rbx_2 += 2
        rdi_1 += 1
    while (rdi_1 u< arg4)

*rbx_2 = 0x20
void* rbx_3 = rbx_2 + 1

if (arg6 != 0)
    do
        sub_1425f2950(rbx_3, "%02x", zx.q(*(rsi + arg5)))
        rbx_3 += 2
        rsi += 1
    while (rsi u< arg6)

*rbx_3 = 0
(*(*(arg2 + 0x598) + 0x380))(arg2, rax_3)
sub_1428a6780(rax_3)
return 1
