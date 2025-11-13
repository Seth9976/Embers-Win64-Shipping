// 函数: sub_141d36e00
// 地址: 0x141d36e00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
int64_t* rsi = *(arg1 + 0x58)
void* result = &rsi[sx.q(*(arg1 + 0x60))]
uint64_t r14_1 = sx.q(*(arg1 + 0x60)) << 3 u>> 3

if (rsi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx = *(arg1 + 0x50)
        int64_t* rdi_1 = *rsi
        result = (*(*rdi_1 + 8))(rdi_1, (*(*rcx + 0x20))(rcx))
        rbp += 1
        rsi = &rsi[1]
    while (rbp != r14_1)

return result
