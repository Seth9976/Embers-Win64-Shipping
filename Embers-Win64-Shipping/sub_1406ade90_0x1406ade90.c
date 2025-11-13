// 函数: sub_1406ade90
// 地址: 0x1406ade90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*(arg1 + 0x74) = 0
int32_t rdi = arg2

if (arg2 == 0)
    return 

while (true)
    int32_t r8_1 = sx.d(arg1[0xf].b)
    int32_t rax
    
    if (r8_1.b - 0x30 u> 9)
        if (r8_1.b - 0x61 u<= 5)
            rax = r8_1 - 0x57
            goto label_1406adedd
        
        if ((r8_1 - 0x41).b u<= 5)
            rax = r8_1 - 0x37
            goto label_1406adedd
    else
        rax = r8_1 - 0x30
    label_1406adedd:
        
        if (rax != 0xffffffff)
            rdi -= 1
            int64_t rax_3 = arg1[2]
            *(arg1 + 0x74) = (*(arg1 + 0x74) << 4) + rax
            char* rcx_3 = *arg1
            
            if (rcx_3 != rax_3)
                if (*rcx_3 == 0x5c)
                    void* rdx = &rcx_3[1]
                    rcx_3 = rdx
                    
                    if (rdx == rax_3)
                        rcx_3 = *arg1
                    else
                        char r8_2 = (arg1[0x10].d).b
                        
                        if (((r8_2 & 8) != 0 || *rdx - 0x28 u> 1)
                                && ((r8_2 & 0x10) != 0 || ((*rdx - 0x7b) & 0xfd) != 0))
                            rcx_3 = *arg1
                
                *arg1 = &rcx_3[1]
            
            sub_1406af960(arg1)
            
            if (rdi == 0)
                break
            
            continue
    
    if (rdi == 0)
        break
    
    sub_1406ad7b0(arg1, error_escape)
    noreturn
