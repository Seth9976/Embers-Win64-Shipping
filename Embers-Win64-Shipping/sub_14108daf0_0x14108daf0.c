// 函数: sub_14108daf0
// 地址: 0x14108daf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t r10 = *arg2
int64_t* result = 0xffff

if (r10 != 0xffff)
    result = *arg1
    void* r9_1 = *result
    
    if ((r9_1.b & 1) != 0)
        r9_1 = (r9_1 s>> 1) + result
    
    int32_t rcx = 0
    int32_t r8_1 = result[1].d - 1
    
    if (r8_1 s> 0)
        do
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r8_1 + rcx)
            result = zx.q((temp1_1 - temp0_1) s>> 1)
            
            if (*(r9_1 + (sx.q(result.d) << 2)) u>= r10)
                r8_1 = result.d
            else if (rcx != result.d)
                rcx = result.d
            else
                rcx += 1
        while (rcx s< r8_1)
    
    if (rcx == r8_1)
        int64_t rdx_2 = sx.q(rcx)
        
        if (*(r9_1 + (rdx_2 << 2)) == r10 && rcx s>= 0)
            result = arg1[1]
            result[rdx_2] = arg3

return result
