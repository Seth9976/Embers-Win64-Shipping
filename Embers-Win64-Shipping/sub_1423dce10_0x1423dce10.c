// 函数: sub_1423dce10
// 地址: 0x1423dce10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r10 = *arg2

if (r10 != 0)
    uint64_t r9_2 = zx.q(r10.d) & 0xffffff
    
    if (r9_2.d s< *(arg1 + 0x10))
        void* rax_1 = *(arg1 + 0x28)
        void* r8_1 = arg1 + 0x18
        
        if (rax_1 != 0)
            r8_1 = rax_1
        
        if (test_bit(*(r8_1 + (zx.q(r9_2.d) u>> 5 << 2)), r9_2.d & 0x1f))
            void* const result = r9_2 * 0x90 + *(arg1 + 8)
            
            if (*(result + 0x70) == r10 && *(result + 1) != 4)
                return result

return nullptr
