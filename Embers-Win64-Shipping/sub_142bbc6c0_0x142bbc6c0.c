// 函数: sub_142bbc6c0
// 地址: 0x142bbc6c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r10 = *(arg1 + 0x20)
void* rdi = *(arg1 + 0x38)

if (*(arg1 + 0x28) u< &r10[5])
    return 0xa1

char* r10_1 = *r10
char rax_1 = *r10_1
int32_t rcx_2

if (rax_1 == 0x1e)
    rcx_2 = sub_142bc0db0(r10_1, *(arg1 + 0x10), 0, nullptr) s>> 0x10
else if (rax_1 != 0xff)
    rcx_2 = sub_142bc0c90(r10_1, *(arg1 + 0x10))
else
    rcx_2 = sx.d(((((zx.d(r10_1[1]) << 8 | zx.d(r10_1[2])) << 8 | zx.d(r10_1[3])) + 0x80) u>> 8).w)

if (rcx_2 - 2 u> 0xe)
    return 3

*(rdi + 0xb0) = rcx_2.w
*(rdi + 0xb2) = (zx.q(*(arg1 + 0x28) - *(arg1 + 0x20)) s>> 3).w - 4
*(arg1 + 0x40) = rcx_2.w
*(arg1 + 0x42) = *(rdi + 0xb2)
return 0
