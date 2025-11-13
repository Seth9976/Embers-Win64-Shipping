// 函数: sub_14088d770
// 地址: 0x14088d770
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = zx.q(arg2 u>> 0x10)

if (result.w != 0)
    void* rdi_1 = *arg1
    int64_t r10_1 = *(rdi_1 + 0x20)
    result = rdi_1 + 0x20
    uint32_t r11_1 = zx.d(arg2.w)
    
    if ((r10_1.b & 1) != 0)
        r10_1 = (r10_1 s>> 1) + result
    
    int32_t rcx = 0
    int32_t r9_2 = *(result + 8) - 1
    
    if (r9_2 s> 0)
        do
            int32_t temp0_1
            int32_t temp1_1
            temp0_1:temp1_1 = sx.q(r9_2 + rcx)
            result = zx.q((temp1_1 - temp0_1) s>> 1)
            int64_t r8 = sx.q(result.d)
            
            if (zx.d(*(r10_1 + (r8 << 2))) u>= r11_1)
                r9_2 = r8.d
            else if (rcx != r8.d)
                rcx = r8.d
            else
                rcx += 1
        while (rcx s< r9_2)
    
    if (rcx == r9_2)
        int64_t r9_3 = sx.q(rcx)
        
        if (zx.d(*(r10_1 + (r9_3 << 2))) == r11_1 && rcx s>= 0)
            int32_t temp2_1
            int32_t temp3_1
            temp2_1:temp3_1 = sx.q(rcx)
            int32_t rdx_4 = temp2_1 & 7
            int32_t rax_6 = temp3_1 + rdx_4
            char* r8_4 = zx.q(rax_6 s>> 3)
                + zx.q((*(rdi_1 + 0x28) + *(rdi_1 + 0x18) + *(rdi_1 + 8)) << 3) + arg1[1]
            *r8_4 |= (1 << (((rax_6 & 7) - rdx_4) u% 0x20)).b
            void* rax_9 = *arg1
            result = arg1[1]
            *(zx.q((*(rax_9 + 0x18) + *(rax_9 + 8)) << 3) + (r9_3 << 3) + result) = arg3

return result
