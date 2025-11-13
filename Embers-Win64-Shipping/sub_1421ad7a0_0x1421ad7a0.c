// 函数: sub_1421ad7a0
// 地址: 0x1421ad7a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    void* rax_1 = *(arg1 + 0x80)
    *(rax_1 + 0xb0) ^= 1

int32_t result = *(arg1 + 0xa4)
void* rdi = *(arg1 + 0x98)
int32_t i_2 = *(arg1 + 0xa0)

if (result s>= 0)
    if (i_2 != 0)
        int64_t* rdi_1 = rdi + 0x18
        int32_t i
        
        do
            result = sub_1405ec8a0(rdi_1)
            rdi_1 = &rdi_1[6]
            i = i_2
            i_2 -= 1
        while (i != 1)
    
    *(arg1 + 0xa0) = 0
    return result

if (i_2 != 0)
    void* rdi_2 = rdi + 0x18
    int32_t i_1
    
    do
        sub_1405ec8a0(rdi_2)
        rdi_2 += 0x30
        i_1 = i_2
        i_2 -= 1
    while (i_1 != 1)
    result = *(arg1 + 0xa4)

*(arg1 + 0xa0) = 0

if (result == 0)
    return result

return sub_1405a5220(arg1 + 0x98, 0)
