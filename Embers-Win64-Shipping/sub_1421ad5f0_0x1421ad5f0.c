// 函数: sub_1421ad5f0
// 地址: 0x1421ad5f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r10 = 0
uint64_t result = zx.q(arg2 u>> 0x10)

if (result.w != 0)
    void* rsi_1 = *arg1
    int64_t rbx_1 = *(rsi_1 + 0x20)
    result = rsi_1 + 0x20
    uint32_t rdi_1 = zx.d(arg2.w)
    
    if ((rbx_1.b & 1) != 0)
        rbx_1 = (rbx_1 s>> 1) + result
    
    int32_t r9 = 0
    int32_t r11_2 = *(result + 8) - 1
    
    if (r11_2 s> 0)
        do
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(r11_2 + r9)
            result = zx.q((temp3_1 - temp2_1) s>> 1)
            
            if (zx.d(*(rbx_1 + (sx.q(result.d) << 2))) u>= rdi_1)
                r11_2 = result.d
            else if (r9 != result.d)
                r9 = result.d
            else
                r9 += 1
        while (r9 s< r11_2)
    
    if (r9 == r11_2)
        int64_t rcx_1 = sx.q(r9)
        result = zx.q(*(rbx_1 + (rcx_1 << 2)))
        
        if (result.d == rdi_1 && r9 s>= 0)
            result = arg5
            *(zx.q((*(rsi_1 + 0x18) + *(rsi_1 + 8)) << 3) + (rcx_1 << 3) + arg1[1]) = result

if (arg3:2.w u> 0)
    void* rbx_3 = *arg1
    int64_t r9_1 = *(rbx_3 + 0x10)
    result = rbx_3 + 0x10
    uint32_t r11_3 = zx.d(arg3.w)
    
    if ((r9_1.b & 1) != 0)
        r9_1 = (r9_1 s>> 1) + result
    
    int32_t r8_1 = *(result + 8) - 1
    
    if (r8_1 s> 0)
        do
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r8_1 + r10)
            result = zx.q((temp1_1 - temp0_1) s>> 1)
            
            if (zx.d(*(r9_1 + (sx.q(result.d) << 2))) u>= r11_3)
                r8_1 = result.d
            else if (r10 != result.d)
                r10 = result.d
            else
                r10 += 1
        while (r10 s< r8_1)
    
    if (r10 == r8_1)
        int64_t rcx_4 = sx.q(r10)
        result = zx.q(*(r9_1 + (rcx_4 << 2)))
        
        if (result.d == r11_3 && r10 s>= 0)
            result = arg1[1]
            *(zx.q(*(rbx_3 + 8) << 3) + (rcx_4 << 3) + result) = arg4

return result
