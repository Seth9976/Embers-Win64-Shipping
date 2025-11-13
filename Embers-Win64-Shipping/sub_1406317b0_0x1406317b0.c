// 函数: sub_1406317b0
// 地址: 0x1406317b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
*(arg1 + 0x298) = 0

if (*(arg1 + 0x29c) != 0)
    sub_1405a5410(arg1 + 0x290, 0)

*(arg1 + 0x2c0) = 0xffffffff
*(arg1 + 0x2c4) = 0
sub_14059a8e0(arg1 + 0x2a0, 0)
void* result = zx.q(*(arg1 + 0x2d8))

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        void* result_1 = *(arg1 + 0x2d0)
        result = arg1 + 0x2c8
        int64_t rdx_3 = (sx.q(*(arg1 + 0x2d8)) - 1) & rdi
        
        if (result_1 != 0)
            result = result_1
        
        rdi += 1
        *(result + (rdx_3 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
