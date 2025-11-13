// 函数: sub_140f5b730
// 地址: 0x140f5b730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t result

if ((**(arg1 + 0x2a8))(arg1 + 0x2a8).d s<= 0)
label_140f5b79e:
    result.b = 0
else
    int64_t rdi_1 = 0
    
    while (*arg2 != *(*(*(arg1 + 0x2b8) + rdi_1) + 0x10))
        rbx += 1
        rdi_1 += 8
        
        if (rbx s>= (**(arg1 + 0x2a8))(arg1 + 0x2a8).d)
            goto label_140f5b79e
    
    if (*(arg1 + 0x2c8) == 0)
        int64_t rdi_2 = sx.q(rbx) << 3
        int64_t* rcx_3 = *(rdi_2 + *(arg1 + 0x2b8))
        
        if (rcx_3 != 0)
            (**rcx_3)(rcx_3, 1)
        
        int32_t rcx_5 = *(arg1 + 0x2c0)
        int32_t rax_7 = rcx_5 - rbx
        
        if (rax_7 != 1)
            int64_t r9_1 = *(arg1 + 0x2b8)
            memmove(r9_1 + rdi_2, r9_1 + (sx.q(rbx + 1) << 3), (rax_7 - 1) << 3)
            rcx_5 = *(arg1 + 0x2c0)
        
        *(arg1 + 0x2c0) = rcx_5 - 1
        sub_1405c53d0(arg1 + 0x2b8)
    
    result.b = 1

return result
