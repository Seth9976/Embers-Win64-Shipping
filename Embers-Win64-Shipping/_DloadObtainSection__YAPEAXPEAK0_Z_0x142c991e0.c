// 函数: ?DloadObtainSection@@YAPEAXPEAK0@Z
// 地址: 0x142c991e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0
struct Section_Header* const rcx = &__section_headers

do
    uint32_t virtualAddress = rcx->virtualAddress
    
    if (0x3cd5548 u>= virtualAddress)
        uint32_t virtualSize = rcx->virtualSize
        
        if (0x3cd5548 u< virtualAddress + virtualSize)
            *arg1 = virtualSize
            *arg2 = rcx->characteristics
            return &__dos_header.e_magic[zx.q(rcx->virtualAddress)]
    
    i += 1
    rcx = &rcx[1]
while (i u< 9)

return nullptr
