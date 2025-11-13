// 函数: sub_14219ebf0
// 地址: 0x14219ebf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = 0
int64_t* rsi = *(arg1 + 0x600)
void* result = &rsi[sx.q(*(arg1 + 0x608))]
uint64_t r14_1 = sx.q(*(arg1 + 0x608)) << 3 u>> 3

if (rsi u> result)
    r14_1 = 0

if (r14_1 != 0)
    do
        int64_t* rcx = *rsi
        
        if (rcx != 0)
            result = (*(*rcx + 0x208))(rcx, arg2, arg3, zx.q(arg4), arg5.d)
        
        rsi = &rsi[1]
        rbp += 1
    while (rbp != r14_1)

return result
