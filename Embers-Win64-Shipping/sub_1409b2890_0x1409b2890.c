// 函数: sub_1409b2890
// 地址: 0x1409b2890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = 0
int64_t* rdi = *(arg1 + 0x3b8)
int64_t rsi = 0
uint64_t r14_1 = sx.q(*(arg1 + 0x3c0)) << 3 u>> 3

if (rdi u> &rdi[sx.q(*(arg1 + 0x3c0))])
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx = *rdi
        int64_t result_1 = (*(*rcx + 0x2b0))(rcx, arg1, arg2)
        rdi = &rdi[1]
        
        if (result == 0)
            result = result_1
        
        rsi += 1
    while (rsi != r14_1)

return result
