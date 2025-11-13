// 函数: sub_141f46230
// 地址: 0x141f46230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rcx = *(arg1 + 0x650)

if (rcx != 0)
    sub_141e0ba10(rcx, arg2)

int64_t rdi = 0
int64_t* rbx = *(arg1 + 0x6c0)
void* result = &rbx[sx.q(*(arg1 + 0x6c8))]
uint64_t r14_1 = sx.q(*(arg1 + 0x6c8)) << 3 u>> 3

if (rbx u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        result = sub_141e0ba10(*rbx, arg2)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != r14_1)

void* rcx_2 = *(arg1 + 0x658)

if (rcx_2 == 0)
    return result

return sub_141e0ba10(rcx_2, arg2)
