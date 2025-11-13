// 函数: sub_141e2c520
// 地址: 0x141e2c520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdx = 0
int64_t* result = *(arg1 + 0x190)
uint64_t r8_1 = sx.q(*(arg1 + 0x198)) << 3 u>> 3

if (result u> &result[sx.q(*(arg1 + 0x198))])
    r8_1 = 0

if (r8_1 != 0)
    do
        void* rcx_2 = *result
        
        if (rcx_2 != 0)
            *(rcx_2 + 0x1a0) = 0
        
        result = &result[1]
        rdx += 1
    while (rdx != r8_1)

*(arg1 + 0x198) = 0

if (*(arg1 + 0x19c) == 0)
    return result

return sub_1405c5570(arg1 + 0x190, 0) __tailcall
