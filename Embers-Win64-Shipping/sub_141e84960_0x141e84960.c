// 函数: sub_141e84960
// 地址: 0x141e84960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t result = sub_141eefcf0(*(arg2 + 0x28), 0)
int32_t rbx = 0
int32_t result_1 = *(arg1 + 0x380)

if (result_1 s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t r9_1 = *(arg1 + 0x378)
        result = result_1
        
        if (*(rdi_1 + r9_1) == arg2)
            int32_t rax_1 = result - rbx - 1
            
            if (rax_1 s>= 1)
                rax_1 = 1
            
            if (rax_1 != 0)
                memcpy(r9_1 + (sx.q(rbx) << 3), r9_1 + (sx.q(result_1 - rax_1) << 3), rax_1 << 3)
                result_1 = *(arg1 + 0x380)
            
            *(arg1 + 0x380) = result_1 - 1
            sub_1405c53d0(arg1 + 0x378)
            result = *(arg1 + 0x380)
            rbx -= 1
            rdi_1 -= 8
        
        rbx += 1
        rdi_1 = &rdi_1[1]
        result_1 = result
    while (rbx s< result)

return result
