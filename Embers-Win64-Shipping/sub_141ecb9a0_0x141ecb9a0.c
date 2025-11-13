// 函数: sub_141ecb9a0
// 地址: 0x141ecb9a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*(arg1 + 8) u>> 4)
void* rdi

if ((result.b & 1) == 0)
    rdi = *(arg1 + 0x20)
else
    rdi = nullptr

void* rdi_1 = *(rdi + 0x348)

if (rdi_1 != 0)
    int64_t* rax_1 = sub_1424c7800()
    void* rax_2 = rax_1[0x23]
    
    if (rax_2 == 0)
        int64_t rdx_1 = *rax_1
        (*(rdx_1 + 0x390))(rax_1, rdx_1)
        rax_2 = rax_1[0x23]
    
    uint64_t* i = *(rax_2 + 0x28)
    result = sx.q(*(rax_2 + 0x30))
    
    for (void* rsi_1 = &i[result * 3]; i != rsi_1; i = &i[3])
        result = *i
        
        if (result == data_143e1df90)
            int128_t zmm0_1 = sub_142411c70(rdi_1)
            result = sub_14241fb50(rdi_1, *(i + 0xc), zmm0_1)
        else if (result == data_143e1dfa8)
            result = sub_14241fb50(rdi_1, sub_142411c00(rdi_1), *(i + 0xc))

return result
