// 函数: sub_14183ad90
// 地址: 0x14183ad90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int128_t* rsi = *(arg1 + 0xe8)
void* rbp_2 = &rsi[sx.q(*(arg1 + 0xf0)) * 4]

while (rsi != rbp_2)
    int64_t rdi_1 = sx.q(arg2[1].d)
    int32_t rax_1 = (rdi_1 + 1).d
    arg2[1].d = rax_1
    
    if (rax_1 s> *(arg2 + 0xc))
        sub_1405a4f90(arg2)
    
    int128_t zmm0 = *rsi
    rsi = &rsi[4]
    *(*arg2 + rdi_1 * 0x10) = zmm0
