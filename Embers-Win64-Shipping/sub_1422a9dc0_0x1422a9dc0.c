// 函数: sub_1422a9dc0
// 地址: 0x1422a9dc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sub_141efdf10(arg2)
int64_t rcx_1 = sx.q(*(arg1 + 0x28))

if (rcx_1.d != 0)
    result = *(arg1 + 0x20)
    int32_t rdi_1 = 0
    int32_t r12_1 = 0
    int64_t rbp
    rbp.b = *result != arg2
    int64_t i = 0
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        i += 1
        rdi_1 += 1
        
        for (; i s< rcx_1; i += 1)
            result.b = *(*(arg1 + 0x20) + (i << 3)) != arg2
            
            if (zx.d(rbp.b) != result.d)
                break
            
            rdi_1 += 1
        
        int32_t r15_2 = rdi_1 - r9_1.d
        
        if (rbp.b != 0)
            if (r12_1 != r9_1.d)
                int64_t rcx_3 = *(arg1 + 0x20)
                result = memmove(rcx_3 + (sx.q(r12_1) << 3), rcx_3 + (r9_1 << 3), r15_2 << 3)
            
            r12_1 += r15_2
        
        rbp.b ^= 1
    while (i s< rcx_1)
    
    *(arg1 + 0x28) = r12_1

if (*(arg1 + 0x40) != 0 && arg2 != 0)
    void* rax_1 = sub_142546fa0()
    void* rdx_2 = arg2[2]
    result = sx.q(*(rax_1 + 0x38))
    
    if (result.d s<= *(rdx_2 + 0x38))
        int64_t result_1 = result
        result = *(rdx_2 + 0x30)
        
        if (*(result + (result_1 << 3)) == rax_1 + 0x30)
            jump(*(*arg2 + 0x888))

return result
