// 函数: sub_1428c0320
// 地址: 0x1428c0320
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char const (** r10)[0x6] = &data_143b857e0

for (int64_t i = 0; i u< 0xf; )
    char const (* rax_1)[0x6] = *r10
    void* r8_2 = arg1 - rax_1
    uint32_t j
    uint32_t rdx_1
    
    do
        rdx_1 = zx.d(*rax_1)
        j = zx.d(*(rax_1 + r8_2))
        
        if (rdx_1 != j)
            break
        
        rax_1 = &(*rax_1)[1]
    while (j != 0)
    
    if (rdx_1 - j == 0)
        return zx.q(*(i * 0x10 + &data_143b857e8))
    
    i += 1
    r10 = &r10[2]

return 0
