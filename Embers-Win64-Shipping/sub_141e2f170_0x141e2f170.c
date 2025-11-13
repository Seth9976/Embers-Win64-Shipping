// 函数: sub_141e2f170
// 地址: 0x141e2f170
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x30) == 0)
    return 

int32_t i = 0

if (*(arg1 + 0x40) s<= 0)
    return 

int64_t* rsi_1 = nullptr

do
    int64_t* rcx_1 = *(rsi_1 + *(arg1 + 0x38))
    int64_t rdx_1 = sx.q(*(rcx_1 + 0x4c)) + arg2
    int64_t r10_2 = sx.q(*(*(rsi_1 + *(arg1 + 0x48)) + 0x4c)) + *(arg1 + 0x30)
    
    if (r10_2 != rdx_1)
        if (not(test_bit(zx.q(rcx_1[8].d), 0x1e)))
            (*(*rcx_1 + 0xb0))(rcx_1, r10_2, rdx_1, zx.q(rcx_1[7].d))
        else
            memcpy(r10_2, rdx_1, *(rcx_1 + 0x3c) * rcx_1[7].d)
    
    i += 1
    rsi_1 = &rsi_1[1]
while (i s< *(arg1 + 0x40))
