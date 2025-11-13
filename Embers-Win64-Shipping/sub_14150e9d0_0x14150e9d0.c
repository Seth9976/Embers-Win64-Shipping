// 函数: sub_14150e9d0
// 地址: 0x14150e9d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = *(*(arg1 + 8) + 0x24)

if (result != 2)
    int32_t i
    
    do
        int64_t rcx = *(arg1 + 8)
        int64_t r10_2 = sx.q(result) * 2
        i = *(rcx + (r10_2 << 3) + 4)
        *(rcx + (r10_2 << 3)) = 0xffffffff
        *(rcx + (r10_2 << 3) + 0xc) = 0xffffffff
        int64_t r8_1 = *(arg1 + 8)
        void* r9_1 = r8_1 + (r10_2 << 3)
        *(r8_1 + sx.q(*(r9_1 + 8)) * 0x10 + 4) = *(r8_1 + (r10_2 << 3) + 4)
        *(*(arg1 + 8) + sx.q(*(r9_1 + 4)) * 0x10 + 8) = *(r9_1 + 8)
        *(r9_1 + 8) = result
        *(r9_1 + 4) = result
        void* r8_4 = *(arg1 + 8)
        *(r8_4 + (r10_2 << 3) + 4) = 0
        *(r8_4 + (r10_2 << 3) + 8) = *(r8_4 + 8)
        *(*(arg1 + 8) + sx.q(*(r8_4 + 8)) * 0x10 + 4) = result
        *(r8_4 + 8) = result
        result = i
    while (i != 2)

return result
