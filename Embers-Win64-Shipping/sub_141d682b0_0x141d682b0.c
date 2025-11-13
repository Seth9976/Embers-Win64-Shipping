// 函数: sub_141d682b0
// 地址: 0x141d682b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = arg1[0x49]

if (rcx != 0)
    sub_141a6a410(rcx, arg3)

void* rax_1 = (*(*arg1 + 0x150))(arg1)
int64_t rax_2 = sx.q(*(rax_1 + 0x90))

if (rax_2.d != 0)
    int32_t rdi_1 = 0
    int32_t r12_1 = 0
    int64_t r15
    r15.b = **(rax_1 + 0x88) != arg1
    int64_t rbx_1 = 0
    
    do
        int64_t r9_1 = sx.q(rdi_1)
        rbx_1 += 1
        rdi_1 += 1
        
        if (rbx_1 s< rax_2)
            int64_t* rcx_3 = *(rax_1 + 0x88) + (rbx_1 << 3)
            
            do
                int32_t rax_4
                rax_4.b = *rcx_3 != arg1
                
                if (zx.d(r15.b) != rax_4)
                    break
                
                rdi_1 += 1
                rbx_1 += 1
                rcx_3 = &rcx_3[1]
            while (rbx_1 s< rax_2)
        
        int32_t rbp_2 = rdi_1 - r9_1.d
        
        if (r15.b != 0)
            if (r12_1 != r9_1.d)
                int64_t rcx_4 = *(rax_1 + 0x88)
                memmove(rcx_4 + (sx.q(r12_1) << 3), rcx_4 + (r9_1 << 3), rbp_2 << 3)
            
            r12_1 += rbp_2
        
        r15.b ^= 1
    while (rbx_1 s< rax_2)
    
    *(rax_1 + 0x90) = r12_1

return sub_141dc1f60(arg1, arg2) __tailcall
