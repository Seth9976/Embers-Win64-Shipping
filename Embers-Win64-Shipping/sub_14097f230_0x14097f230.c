// 函数: sub_14097f230
// 地址: 0x14097f230
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi
int64_t var_8 = rdi
int32_t r14 = 0
int64_t result

if (*(arg1 + 0x60) s<= 0)
label_14097f2f9:
    result.b = 0
else
    int64_t r15_1 = 0
    
    while (true)
        int64_t rax = *(arg1 + 0x58)
        void* rbx_1 = *(r15_1 + rax + 0x30)
        result = sx.q(*(r15_1 + rax + 0x38))
        void* rsi_3 = result * 0x50 + rbx_1
        
        if (rbx_1 != rsi_3)
            while (true)
                int64_t* rcx = *(rbx_1 + 8)
                
                if (rcx != 0)
                    result = (*(*rcx + 0x28))(rcx)
                
                if (rcx == 0 || result.b == 0)
                    rdi.b = 0
                else
                    rdi.b = 1
                
                int64_t* rcx_1 = *(arg2 + 8)
                
                if (rcx_1 != 0)
                    result = (*(*rcx_1 + 0x28))(rcx_1)
                
                if (rcx_1 == 0 || result.b == 0)
                    result.b = 0
                else
                    result.b = 1
                
                if (rdi.b == result.b)
                    if (rdi.b != 0)
                        int64_t* rcx_2 = *(rbx_1 + 8)
                        result = (**rcx_2)(rcx_2, *(arg2 + 8))
                    
                    if (rdi.b == 0 || result.b != 0)
                        if (arg3[1].d s> 1)
                            sub_140597df0(rbx_1 + 0x38, arg3)
                        
                        result.b = 1
                        break
                
                rbx_1 += 0x50
                
                if (rbx_1 == rsi_3)
                    goto label_14097f2e8
            
            break
        
    label_14097f2e8:
        r14 += 1
        r15_1 += 0x50
        
        if (r14 s>= *(arg1 + 0x60))
            goto label_14097f2f9

return result
