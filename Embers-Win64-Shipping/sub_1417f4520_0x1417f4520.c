// 函数: sub_1417f4520
// 地址: 0x1417f4520
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg1[1].d

if (arg2 u<= rbp)
    if (arg2 u< rbp)
        sub_1417f4770(arg1, rbp - arg2)
    
    return 

int32_t rdx = rbp

if (*(arg1 + 0x14) != 0)
    int32_t r14_1 = arg1[2].d
    
    if (r14_1 != 0)
        uint64_t rax_1 = zx.q(r14_1)
        int64_t r12_1 = 0
        int64_t var_28 = 0
        int32_t var_1c_1 = 0
        
        if (r14_1 s> 0)
            sub_140638a00(&var_28)
            rax_1 = zx.q(arg1[2].d)
            r12_1 = var_28
        
        int64_t rdi_1 = *arg1
        memcpy(r12_1, rdi_1, (rax_1 * 0xc).d)
        uint64_t rbx_1 = zx.q(arg1[2].d)
        uint64_t r8_3 = rbx_1 * 0xc
        memcpy(rdi_1, r8_3 + rdi_1, r8_3.d)
        memcpy(rdi_1 + zx.q(rbp - rbx_1.d) * 0xc, r12_1, r14_1 * 0xc)
        arg1[2].d = 0
        
        if (r12_1 != 0)
            sub_140a74f90(r12_1)
    
    rdx = arg1[1].d
    arg1[2].d = rdx

int32_t rcx_7 = rdx - rbp + arg2
arg1[1].d = rcx_7

if (rcx_7 s> *(arg1 + 0xc))
    sub_140638a00(arg1)

*(arg1 + 0x14) = 0
