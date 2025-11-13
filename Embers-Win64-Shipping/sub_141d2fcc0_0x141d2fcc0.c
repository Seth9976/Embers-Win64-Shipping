// 函数: sub_141d2fcc0
// 地址: 0x141d2fcc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(*arg1)

if (result.d u>= 0x1000000)
    int64_t rbx_1 = *(arg2 + 0x500)
    uint64_t rcx_1 = zx.q(result.d) & 0xffffff
    uint64_t r11_1 = rcx_1 << 2
    uint32_t rcx_2 = zx.d(*(rbx_1 + (rcx_1 << 2) + 3))
    
    if (rcx_2 == result.d u>> 0x18)
        rcx_2.b += 1
        void* result_1 = arg2 + 0x510
        *(rbx_1 + r11_1 + 3) = rcx_2.b
        int32_t rax = result.d & 0xffffff
        result = *(result_1 + 0x10)
        
        if (result != 0)
            result_1 = result
        
        void* r8_1 = result_1 + (zx.q(rax) u>> 5 << 2)
        *r8_1 &= not.d(1 << (rax.b & 0x1f))
        *(arg2 + 0x540) -= 1
        
        if (*(rbx_1 + r11_1 + 3) != 0)
            int32_t rdx_4 = *(arg2 + 0x4f8)
            
            if (rdx_4 != 0xffffff)
                int64_t rcx_7 = *(arg2 + 0x500)
                result = (zx.q(*(rcx_7 + r11_1)) ^ zx.q(rdx_4)) & 0xffffff
                *(rcx_7 + r11_1) ^= result.d
            
            *(arg2 + 0x4f8) = rax

return result
