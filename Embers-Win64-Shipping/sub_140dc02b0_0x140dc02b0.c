// 函数: sub_140dc02b0
// 地址: 0x140dc02b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int32_t* rbx = *(arg1 + 0xe0)
int64_t rsi = 0
uint64_t r14_1 = sx.q(*(arg1 + 0xe8)) << 2 u>> 2

if (rbx u> &rbx[sx.q(*(arg1 + 0xe8))])
    r14_1 = 0

if (r14_1 != 0)
    do
        void* rcx_2 = *(*(arg1 + 0x110) + sx.q(*rbx) * 0x10)
        (*(*(rcx_2 + 8) + 8))(rcx_2 + 8)
        rsi += 1
        rbx = &rbx[1]
    while (rsi != r14_1)

int32_t* rbx_1 = *(arg1 + 0xf0)
void* result = &rbx_1[sx.q(*(arg1 + 0xf8))]
uint64_t rsi_2 = sx.q(*(arg1 + 0xf8)) << 2 u>> 2

if (rbx_1 u> result)
    rsi_2 = 0

if (rsi_2 != 0)
    do
        void* rcx_6 = *(*(arg1 + 0x110) + sx.q(*rbx_1) * 0x10)
        result = (*(*(rcx_6 + 8) + 8))(rcx_6 + 8)
        rdi += 1
        rbx_1 = &rbx_1[1]
    while (rdi != rsi_2)

return result
