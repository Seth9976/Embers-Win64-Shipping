// 函数: sub_140ee8240
// 地址: 0x140ee8240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*arg2)
int32_t* r14 = arg2
arg2.b = 0
void* r13_1 = result * 0x70 + *(arg1 + 0x18)

if (*(r13_1 + 0x50) s> 0)
    int32_t rbx_1 = -1
    int64_t r15_1 = 0
    
    do
        if (arg2.b != 0)
            goto label_140ee839e
        
        int64_t rcx = *(r13_1 + 0x48)
        
        if (*(rcx + r15_1 + 4) s> r14[1])
            int32_t rbp_1 = *(r13_1 + 0x50)
            int32_t rcx_1 = rbx_1
            
            if (rbx_1 s<= 0)
                rcx_1 = 0
            
            *(r13_1 + 0x50) = rbp_1 + 1
            
            if (rbp_1 + 1 s> *(r13_1 + 0x54))
                sub_1405c4e40(r13_1 + 0x48)
            
            int64_t rdi_2 = sx.q(rcx_1) << 5
            int64_t rdx_2 = *(r13_1 + 0x48) + rdi_2
            memmove(rdx_2 + 0x20, rdx_2, (rbp_1 - rcx_1) << 5)
            int32_t* rcx_5 = *(r13_1 + 0x48) + rdi_2
            *rcx_5 = *r14
            *(rcx_5 + 4) = *(r14 + 4)
            *(rcx_5 + 0x10) = *(r14 + 0x10)
            void* rax_5 = *(r14 + 0x18)
            *(rcx_5 + 0x18) = rax_5
            
            if (rax_5 != 0)
                *(rax_5 + 8) += 1
            
            arg2.b = 1
        else if (*(rcx + r15_1 + 8) s> r14[2])
            int32_t r8_3 = rbx_1
            
            if (rbx_1 s<= 0)
                r8_3 = 0
            
            sub_140f06850(r13_1 + 0x48, r14, r8_3)
            arg2.b = 1
        
        rbx_1 += 1
        r15_1 += 0x20
        result = zx.q(rbx_1 + 1)
    while (result.d s< *(r13_1 + 0x50))

if (*(r13_1 + 0x50) s<= 0 || arg2.b == 0)
    int64_t rbx_2 = sx.q(*(r13_1 + 0x50))
    int32_t rax_7 = (rbx_2 + 1).d
    *(r13_1 + 0x50) = rax_7
    
    if (rax_7 s> *(r13_1 + 0x54))
        sub_1405c4e40(r13_1 + 0x48)
    
    int32_t* rcx_10 = (rbx_2 << 5) + *(r13_1 + 0x48)
    *rcx_10 = *r14
    *(rcx_10 + 4) = *(r14 + 4)
    *(rcx_10 + 0x10) = *(r14 + 0x10)
    result = *(r14 + 0x18)
    *(rcx_10 + 0x18) = result
    
    if (result != 0)
        *(result + 8) += 1

label_140ee839e:
*(arg1 + 0x88) |= 1
return result
