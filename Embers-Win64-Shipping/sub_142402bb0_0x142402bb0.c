// 函数: sub_142402bb0
// 地址: 0x142402bb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = *arg2
int64_t result = sx.q(arg2[1].d)
void* r14 = &rdi[result * 5]

if (rdi != r14)
    void* rbx_1 = &rdi[3]
    
    do
        int64_t rax = *rdi
        void* rax_3 = sub_1423f71c0(arg3, sub_140b5ead0(rax.d) + rax:4.d, rdi)
        int64_t rdx_1 = sx.q(*(rax_3 + 8))
        void* r8_1 = *rax_3
        int64_t rbp_1 = rdx_1 * 5
        result = r8_1 + (rbp_1 << 3)
        
        if (r8_1 == result)
        label_142402c3f:
            int32_t rax_4 = (rdx_1 + 1).d
            *(rax_3 + 8) = rax_4
            
            if (rax_4 s> *(rax_3 + 0xc))
                sub_1405c4ec0(rax_3)
            
            int64_t rcx_5 = *rax_3
            *(rcx_5 + (rbp_1 << 3)) = *rdi
            *(rcx_5 + (rbp_1 << 3) + 8) = *(rbx_1 - 0x10)
            *(rcx_5 + (rbp_1 << 3) + 0x10) = *(rbx_1 - 8)
            *(rcx_5 + (rbp_1 << 3) + 0x18) = *rbx_1
            result = *(rbx_1 + 8)
            *(rcx_5 + (rbp_1 << 3) + 0x20) = result
            
            if (result != 0)
                *(result + 8) += 1
        else
            while (*(r8_1 + 0x10) != *(rbx_1 - 8))
                r8_1 += 0x28
                
                if (r8_1 == result)
                    goto label_142402c3f
        
        rdi = &rdi[5]
        rbx_1 += 0x28
    while (rdi != r14)

return result
