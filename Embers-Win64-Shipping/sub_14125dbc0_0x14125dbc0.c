// 函数: sub_14125dbc0
// 地址: 0x14125dbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* const result = arg1[1]
*(result + 0x1030) = 1
void* r12 = arg1[1]
int64_t rdx = sx.q(*(r12 + 0x1018))

if (rdx.d != 0)
    result = *arg1
    int32_t rdi_1 = 0
    int32_t r14_1 = 0
    int64_t r15
    r15.b = **(r12 + 0x1010) != result
    int64_t rbx_1 = 0
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< rdx)
            int64_t* rcx_1 = *(r12 + 0x1010) + (rbx_1 << 3)
            
            do
                result.b = *rcx_1 != *arg1
                
                if (zx.d(r15.b) != result.d)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx_1 = &rcx_1[1]
            while (rbx_1 s< rdx)
        
        int32_t rbp_2 = rdi_1 - r9_1.d
        
        if (r15.b != 0)
            if (r14_1 != r9_1.d)
                int64_t rcx_2 = *(r12 + 0x1010)
                result = memmove(rcx_2 + (sx.q(r14_1) << 3), rcx_2 + (r9_1 << 3), rbp_2 << 3)
            
            r14_1 += rbp_2
        
        r15.b ^= 1
    while (rbx_1 s< rdx)
    
    *(r12 + 0x1018) = r14_1

return result
