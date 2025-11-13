// 函数: sub_1417d05e0
// 地址: 0x1417d05e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
int64_t* rbx = *(arg1 + 0x428)
uint64_t r14_1 = sx.q(*(arg1 + 0x430)) << 3 u>> 3

if (rbx u> &rbx[sx.q(*(arg1 + 0x430))])
    r14_1 = 0

if (r14_1 != 0)
    do
        (*(*arg2 + 0x30))(arg2, *rbx, arg1 + 0x1c0)
        rdi += 1
        rbx = &rbx[1]
    while (rdi != r14_1)

void* result
result.b = 0
return result
