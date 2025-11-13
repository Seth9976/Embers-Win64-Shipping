// 函数: sub_142bbc7a0
// 地址: 0x142bbc7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = *(arg1 + 0x20)
void* rsi = *(arg1 + 0x38)

if (*(arg1 + 0x28) u< &rbx[3])
    return 0xa1

char* r10 = *rbx
char rax_1 = *r10
int32_t rax_3

if (rax_1 == 0x1e)
    rax_3 = sub_142bc0db0(r10, *(arg1 + 0x10), 0, nullptr) s>> 0x10
else if (rax_1 != 0xff)
    rax_3 = sub_142bc0c90(r10, *(arg1 + 0x10))
else
    rax_3 = sx.d((((zx.d(r10[3]) | (zx.d(r10[1]) << 8 | zx.d(r10[2])) << 8) + 0x80) u>> 8).w)

*(rsi + 0x84) = rax_3
char* r10_1 = rbx[1]
char rax_9 = *r10_1
int32_t rax_11

if (rax_9 == 0x1e)
    rax_11 = sub_142bc0db0(r10_1, *(arg1 + 0x10), 0, nullptr) s>> 0x10
else if (rax_9 != 0xff)
    rax_11 = sub_142bc0c90(r10_1, *(arg1 + 0x10))
else
    rax_11 = sx.d((((zx.d(r10_1[3]) | (zx.d(r10_1[1]) << 8 | zx.d(r10_1[2])) << 8) + 0x80) u>> 8).w)

*(rsi + 0x88) = rax_11
char* r10_2 = rbx[2]
char rax_17 = *r10_2

if (rax_17 == 0x1e)
    *(rsi + 0x8c) = sub_142bc0db0(r10_2, *(arg1 + 0x10), 0, nullptr) s>> 0x10
    return 0

if (rax_17 != 0xff)
    *(rsi + 0x8c) = sub_142bc0c90(r10_2, *(arg1 + 0x10))
    return 0

*(rsi + 0x8c) =
    sx.d((((zx.d(r10_2[3]) | (zx.d(r10_2[1]) << 8 | zx.d(r10_2[2])) << 8) + 0x80) u>> 8).w)
return 0
