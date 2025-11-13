// 函数: sub_140ee7a30
// 地址: 0x140ee7a30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t result = sx.q(*arg2)
int32_t* r14 = arg2
arg2.b = 0
void* r15_1 = result * 0x70 + *(arg1 + 0x18)

if (*(r15_1 + 0x60) s> 0)
    int32_t rsi_1 = -1
    int64_t rbp_1 = 0
    
    do
        if (arg2.b != 0)
            goto label_140ee7b80
        
        if (*(*(r15_1 + 0x58) + rbp_1 + 0xc) s> r14[3])
            int32_t r13_1 = *(r15_1 + 0x60)
            int32_t rcx_1 = rsi_1
            
            if (rsi_1 s<= 0)
                rcx_1 = 0
            
            *(r15_1 + 0x60) = r13_1 + 1
            
            if (r13_1 + 1 s> *(r15_1 + 0x64))
                sub_1405c4e40(r15_1 + 0x58)
            
            int64_t rdi_2 = sx.q(rcx_1) << 5
            int64_t rdx_2 = *(r15_1 + 0x58) + rdi_2
            memmove(rdx_2 + 0x20, rdx_2, (r13_1 - rcx_1) << 5)
            int32_t* rcx_5 = *(r15_1 + 0x58) + rdi_2
            *rcx_5 = *r14
            *(rcx_5 + 4) = *(r14 + 4)
            rcx_5[3] = r14[3]
            *(rcx_5 + 0x10) = *(r14 + 0x10)
            void* rax_6 = *(r14 + 0x18)
            *(rcx_5 + 0x18) = rax_6
            
            if (rax_6 != 0)
                *(rax_6 + 8) += 1
            
            arg2.b = 1
        
        rsi_1 += 1
        rbp_1 += 0x20
        result = zx.q(rsi_1 + 1)
    while (result.d s< *(r15_1 + 0x60))

if (*(r15_1 + 0x60) s<= 0 || arg2.b == 0)
    int64_t rbx_1 = sx.q(*(r15_1 + 0x60))
    int32_t rax_7 = (rbx_1 + 1).d
    *(r15_1 + 0x60) = rax_7
    
    if (rax_7 s> *(r15_1 + 0x64))
        sub_1405c4e40(r15_1 + 0x58)
    
    int32_t* rcx_9 = (rbx_1 << 5) + *(r15_1 + 0x58)
    *rcx_9 = *r14
    *(rcx_9 + 4) = *(r14 + 4)
    rcx_9[3] = r14[3]
    *(rcx_9 + 0x10) = *(r14 + 0x10)
    result = *(r14 + 0x18)
    *(rcx_9 + 0x18) = result
    
    if (result != 0)
        *(result + 8) += 1

label_140ee7b80:
*(arg1 + 0x88) |= 2
return result
