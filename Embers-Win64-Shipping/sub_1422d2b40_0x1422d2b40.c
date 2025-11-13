// 函数: sub_1422d2b40
// 地址: 0x1422d2b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = *(arg2 + 8)
int32_t rbp = *(arg2 + 4)
int32_t rdx = rbp
int32_t r12 = *(arg5 + 0x1304)
int32_t r14_1 = r8 - rbp

while (rbp s< r8)
    int32_t rax_2 = rbp & 0x8000001f
    
    if (rax_2 s< 0)
        rax_2 = ((rax_2 - 1) | 0xffffffe0) + 1
    
    void* rdi_3 = (sx.q(rax_2) << 5) + arg2
    
    if (*(rdi_3 + 0x30) == 0xffffffff)
        break
    
    if (r12 s>= *(rdi_3 + 0x34))
    label_1422d2bda:
        
        if (*(rdi_3 + 0x48) != 0 || r14_1 == 0x20)
            goto label_1422d2be6
        
    label_1422d2c55:
        *(rdi_3 + 0x30) = -1
        bool cond:0_1 = *(rdi_3 + 0x44) == 0
        *(rdi_3 + 0x40) = 0
        
        if (not(cond:0_1))
            sub_1405947f0(rdi_3 + 0x38, 0)
        
        *(rdi_3 + 0x48) = 0
        *(arg2 + 4) += 1
    else
        if (*(rdi_3 + 0x48) != 0)
        label_1422d2be6:
            uint64_t rax_5 = *arg6
            *arg6 = 0
            uint64_t var_38 = rax_5
            int32_t var_30_1 = arg6[1].d
            int32_t var_2c_1 = *(arg6 + 0xc)
            arg6[1] = 0
            sub_1422ca850(arg1, arg4, rdi_3 + 0x38, &var_38, arg6)
            
            if (*(rdi_3 + 0x48) != 0)
                *(arg2 + 0xc) -= 1
            
            uint64_t rcx_1 = var_38
            
            if (rcx_1 != 0)
                sub_140a74f90(rcx_1)
            
            goto label_1422d2c55
        
        if (r14_1 == 0x20)
            goto label_1422d2bda
    
    r8 = *(arg2 + 8)
    rbp += 1
    rdx = *(arg2 + 4)

int32_t rax_9 = rdx & 0x8000001f

if (rax_9 s< 0)
    rax_9 = ((rax_9 - 1) | 0xffffffe0) + 1

*(arg2 + 4) = rax_9
int32_t result = rax_9 - rdx + r8
*(arg2 + 8) = result
return result
