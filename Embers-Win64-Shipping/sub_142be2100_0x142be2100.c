// 函数: sub_142be2100
// 地址: 0x142be2100
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = *(arg1 + 0x4d8)
uint64_t result

if (rdi == 0)
    result.b = 0
    return result

if (*(arg5 + 8) != 0)
    goto label_142be2211

int32_t r10_1 = 0
arg5[1] = 0
uint32_t r9 = zx.d(*(rdi + 2))
int32_t r9_1 = r9 - 1

if (r9 - 1 s< 0)
labelid_2:
    result.b = 0
else
    char* r11_2
    
    while (true)
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(r9_1 - r10_1)
        result = zx.q(((temp2_1 - temp1_1) s>> 1) + r10_1)
        r11_2 = sx.q((result * 3).d * 2) + *(rdi + 8)
        uint32_t rcx_3 = zx.d(zx.w(*r11_2) << 8) | zx.d(r11_2[1])
        
        if (rcx_3 u>= arg2)
            if (rcx_3 u<= arg2)
                break
            
            r9_1 = (result - 1).d
        else
            r10_1 = (result + 1).d
        
        if (r10_1 s> r9_1)
            goto label_142be21b1_2
    
    uint16_t rcx_4 = zx.w(r11_2[2]) << 8 | zx.w(r11_2[3])
    uint16_t rdx_2 = zx.w(r11_2[4]) << 8 | zx.w(r11_2[5])
    
    if (rdx_2 == 0)
    labelid_2:
        result.b = 0
    else
        uint64_t rax_6 = zx.q(rdx_2)
        *arg5 = rax_6.d
        uint32_t rcx_6 = zx.d(rcx_4) << 2
        
        if (rcx_6 + (rax_6 << 2).d u> *(rdi + 0x20))
        label_142be21b1:
            result.b = 0
        else
            *(arg5 + 8) = zx.q(rcx_6) + *(rdi + 0x10)
        label_142be2211:
            
            if (arg5[1] u>= *arg5)
            label_142be21b1_1:
                result.b = 0
            else
                *(arg5 + 8) += 2
                void* rax_9 = *(arg5 + 8)
                *arg3 = zx.d(*(rax_9 - 2)) << 8 | zx.d(*(rax_9 - 1))
                *(arg5 + 8) += 2
                void* rax_11 = *(arg5 + 8)
                uint32_t rcx_12 = zx.d(*(rax_11 - 2)) << 8 | zx.d(*(rax_11 - 1))
                *arg4 = rcx_12
                
                if (*arg3 u>= *(arg1 + 0x10)
                    || (rcx_12 != 0xffff && rcx_12 u>= zx.d(*(arg1 + 0x388))))
                label_142be21b1_2:
                    result.b = 0
                else
                    arg5[1] += 1
                    result.b = 1

return result
