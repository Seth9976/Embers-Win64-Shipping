// 函数: sub_141bb8800
// 地址: 0x141bb8800
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8_1 = *(arg1 + 0x1c8)
int32_t result

if (r8_1 != 0)
    int32_t rax = *(r8_1 + 0x118)
    
    if (rax - 1 s>= 0)
        int64_t r9_1 = sx.q(rax - 1)
        int64_t* rcx_2 = (r9_1 << 4) + *(r8_1 + 0x110)
        int64_t temp1_1
        
        do
            if (*(*rcx_2 + 4) == arg2)
                result.b = 1
                return result
            
            rcx_2 -= 0x10
            temp1_1 = r9_1
            r9_1 -= 1
        while (temp1_1 - 1 s>= 0)

result.b = 0
return result
