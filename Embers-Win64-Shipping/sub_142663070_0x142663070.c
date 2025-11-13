// 函数: sub_142663070
// 地址: 0x142663070
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* lpCriticalSection = &arg1[0x6e]
int64_t result = EnterCriticalSection(lpCriticalSection)
int32_t rbp = arg1[0x15].d

if (rbp != 0)
    int32_t r13_1 = 0
    int32_t result_1 = rbp - 1
    
    if (rbp - 1 s>= 0)
        result = sx.q(result_1)
        int64_t r15_1 = result << 3
        int64_t r12_1 = r15_1
        int32_t result_2
        
        do
            int64_t* rdi_2 = *(r15_1 + arg1[0x14])
            
            if (rdi_2 != 0)
                result = sub_141dc9840(rdi_2)
                
                if (result != 0 && (*(result + 0x1f4) & 0x20) != 0)
                    if ((((*(*arg1 + 0x3a8))(arg1, rdi_2) - 1) & 0xfffffffb) != 0)
                        (*(*rdi_2 + 0x630))(rdi_2)
                        
                        if (rdi_2 == arg1[5])
                            arg1[5] = 0
                    
                    int32_t rdx_4 = arg1[0x15].d
                    r13_1 += 1
                    int32_t rax_6 = rdx_4 - result_1 - 1
                    
                    if (rax_6 s>= 1)
                        rax_6 = 1
                    
                    if (rax_6 != 0)
                        int64_t rcx_4 = arg1[0x14]
                        memcpy(rcx_4 + r12_1, rcx_4 + (sx.q(rdx_4 - rax_6) << 3), rax_6 << 3)
                        rdx_4 = arg1[0x15].d
                    
                    arg1[0x15].d = rdx_4 - 1
                    result = sub_1405c53d0(&arg1[0x14])
            
            r12_1 -= 8
            r15_1 -= 8
            result_2 = result_1
            result_1 -= 1
        while (result_2 - 1 s>= 0)
        lpCriticalSection = &arg1[0x6e]
        
        if (r13_1 != 0)
            result = sub_142657070(arg1, 0)
            bool cond:0_1 = arg1[0x53] != 0
            arg1[5] = result
            
            if (not(cond:0_1))
                result = sub_142666f20(arg1)
                
                if (result.b == 1)
                    result = (*(*arg1 + 0x320))(arg1)

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection) __tailcall
