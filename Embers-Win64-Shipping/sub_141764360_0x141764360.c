// 函数: sub_141764360
// 地址: 0x141764360
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *(arg1 + 0x10)
void* rax = *(arg1 + 0x18)
int32_t rdx_1 = *(r8 + 0x88) + *(rax + 0x20)

if (rdx_1 s> *(rax + 0x24))
    sub_1405a5130(rax + 0x18, rdx_1)
    r8 = *(arg1 + 0x10)

int64_t rsi = 0
int64_t* rdi = *(r8 + 0xa0)
void** result = &rdi[sx.q(*(r8 + 0xa8))]
uint64_t r14_1 = sx.q(*(r8 + 0xa8)) << 3 u>> 3

if (rdi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int32_t* r8_1 = *rdi
        int32_t rdx_4 = *(arg1 + 0x20)
        void* rcx_2 = *(arg1 + 0x18)
        int128_t var_18 = *(*(*(r8_1 + 8) + 0x80) + sx.q(*r8_1) * 0x10)
        result = sub_141763d70(rcx_2, rdx_4, r8_1, &var_18)
        rsi += 1
        rdi = &rdi[1]
    while (rsi != r14_1)

return result
