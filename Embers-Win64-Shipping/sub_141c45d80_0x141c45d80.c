// 函数: sub_141c45d80
// 地址: 0x141c45d80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const* result = &__return_addr
int32_t i = 0
*(arg1 + 0xe1) = arg2

if (*(arg1 + 0x80) s> 0)
    int64_t rbx_1 = 0
    int128_t zmm6
    int128_t var_18_1 = zmm6
    
    do
        int64_t rdi_1 = *(arg1 + 0x78)
        *(rbx_1 + rdi_1 + 0x24) = arg2
        float zmm0
        
        zmm0 = arg2 == 0 ? -4605.17041f : -1002.39349f
        
        zmm6 = *(rbx_1 + rdi_1 + 0xc)
        *(rbx_1 + rdi_1 + 0x14) = expf(zmm0 / (zmm6.d f* *(rbx_1 + rdi_1 + 0x10)))
        float zmm0_1
        
        zmm0_1 = arg2 == 0 ? -4605.17041f : -1002.39349f
        
        zmm6.d = zmm6.d f* *(rbx_1 + rdi_1 + 0x18)
        zmm0, result = expf(zmm0_1 f/ zmm6.d)
        *(rbx_1 + rdi_1 + 0x1c) = zmm0
        i += 1
        rbx_1 += 0x28
    while (i s< *(arg1 + 0x80))

return result
