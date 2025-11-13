// 函数: sub_142907880
// 地址: 0x142907880
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t temp0
int32_t temp1
temp0:temp1 = sx.q(arg2)
int32_t rdx_1 = temp0 & 0x3f
int32_t rax_1 = temp1 + rdx_1
int32_t rax_3 = (rax_1 & 0x3f) - rdx_1
int32_t r8_1 = rax_1 s>> 6
char rcx = rax_3.b

if (r8_1 s>= 0)
    int32_t r9_1 = arg1[1].d
    
    if (r8_1 s< r9_1)
        int64_t r11_1 = *arg1
        int64_t r10 = sx.q(r8_1)
        uint64_t result = *(r11_1 + (r10 << 3))
        
        if (rax_3 != 0)
            result u>>= rcx
            
            if (r8_1 + 1 s< r9_1)
                return *(r11_1 + (r10 << 3) + 8) << (0x40 - rcx) | result
        
        return result

return 0
