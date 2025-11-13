// 函数: sub_141f3b3b0
// 地址: 0x141f3b3b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result_2 = *(arg1 + 0x650)
int64_t result_1

if (result_2 != 0)
    int64_t rcx = *(arg2 + 8)
    result_1 = result_2
    (*arg2)(rcx, &result_1)

int64_t rdi = 0
int64_t* rbx = *(arg1 + 0x6c0)
uint64_t r14_1 = sx.q(*(arg1 + 0x6c8)) << 3 u>> 3

if (rbx u> &rbx[sx.q(*(arg1 + 0x6c8))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t result_3 = *rbx
        
        if (result_3 != 0)
            int64_t rcx_1 = *(arg2 + 8)
            result_1 = result_3
            (*arg2)(rcx_1, &result_1)
        
        rbx = &rbx[1]
        rdi += 1
    while (rdi != r14_1)

int64_t result = *(arg1 + 0x658)

if (result == 0)
    return result

int64_t rcx_2 = *(arg2 + 8)
result_1 = result
return (*arg2)(rcx_2, &result_1)
