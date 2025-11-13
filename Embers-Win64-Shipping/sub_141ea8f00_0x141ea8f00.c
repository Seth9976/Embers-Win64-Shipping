// 函数: sub_141ea8f00
// 地址: 0x141ea8f00
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char rdx = j_sub_141dee490()
void* rcx = arg1[0x26]

if (rcx != 0)
    rdx = sub_1405a46b0(rcx + 0x158, arg1)

sub_141eaabd0(arg1, rdx)
void* const result = (*(*arg1 + 0x150))(arg1)
void* const result_1 = result

if (result != 0)
    int64_t rdx_2 = sx.q(*(result + 0x510))
    
    if (rdx_2.d != 0)
        int32_t rdi_1 = 0
        int32_t r12_1 = 0
        int64_t r15
        r15.b = **(result + 0x508) != arg1
        int64_t rbx_1 = 0
        
        do
            int64_t r9_1 = sx.q(rdi_1)
            rbx_1 += 1
            rdi_1 += 1
            
            if (rbx_1 s< rdx_2)
                int64_t* rcx_5 = *(result_1 + 0x508) + (rbx_1 << 3)
                
                do
                    result.b = *rcx_5 != arg1
                    
                    if (zx.d(r15.b) != result.d)
                        break
                    
                    rdi_1 += 1
                    rbx_1 += 1
                    rcx_5 = &rcx_5[1]
                while (rbx_1 s< rdx_2)
            
            int32_t rbp_2 = rdi_1 - r9_1.d
            
            if (r15.b != 0)
                if (r12_1 != r9_1.d)
                    int64_t rcx_6 = *(result_1 + 0x508)
                    result = memmove(rcx_6 + (sx.q(r12_1) << 3), rcx_6 + (r9_1 << 3), rbp_2 << 3)
                
                r12_1 += rbp_2
            
            r15.b ^= 1
        while (rbx_1 s< rdx_2)
        
        *(result_1 + 0x510) = r12_1

return result
