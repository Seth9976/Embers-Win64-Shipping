// 函数: sub_140631960
// 地址: 0x140631960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = 0
*(arg1 + 0x248) = 0

if (*(arg1 + 0x24c) != 0)
    sub_1405a5130(arg1 + 0x240, 0)

*(arg1 + 0x270) = 0xffffffff
*(arg1 + 0x274) = 0
sub_14059a8e0(arg1 + 0x250, 0)
void* result = zx.q(*(arg1 + 0x288))

if (result.d s> 0)
    uint64_t i_1 = zx.q(result.d)
    uint64_t i
    
    do
        void* result_1 = *(arg1 + 0x280)
        result = arg1 + 0x278
        int64_t rdx_3 = (sx.q(*(arg1 + 0x288)) - 1) & rdi
        
        if (result_1 != 0)
            result = result_1
        
        rdi += 1
        *(result + (rdx_3 << 2)) = 0xffffffff
        i = i_1
        i_1 -= 1
    while (i != 1)

return result
