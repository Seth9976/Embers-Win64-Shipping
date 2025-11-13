// 函数: __scrt_is_nonwritable_in_current_image
// 地址: 0x142c933a8
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct Section_Header* const rdx_1 = &__section_headers

while (true)
    struct Section_Header* const var_18_1 = rdx_1
    
    if (rdx_1 == &data_140000460)
        rdx_1 = nullptr
        break
    
    uint64_t virtualAddress = zx.q(rdx_1->virtualAddress)
    
    if (arg1 - &__dos_header u>= virtualAddress
            && arg1 - &__dos_header u< zx.q(rdx_1->virtualSize + virtualAddress.d))
        break
    
    rdx_1 = &rdx_1[1]

uint64_t result

if (rdx_1 == 0)
    result.b = 0
else if (rdx_1->characteristics s>= 0)
    result.b = 1
else
    result.b = 0

return result
