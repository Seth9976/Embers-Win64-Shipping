// 函数: sub_141eb8240
// 地址: 0x141eb8240
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rdi = arg1[1]
int64_t rbx = sx.q(*(rdi + 0xc8))
int32_t rax = (rbx + 1).d
*(rdi + 0xc8) = rax

if (rax s> *(rdi + 0xcc))
    sub_141a14450(rdi, rbx.d)

void* rax_1 = *(rdi + 0xc0)
int32_t i_2 = 1

if (rax_1 != 0)
    rdi = rax_1

*(rdi + (rbx << 3)) = arg2
void* result = arg1[1]
int32_t rcx_8
int32_t rdx_3

do
    rdx_3 = *(result + 0xc8)
    int64_t i_1 = sx.q(i_2)
    
    if (i_2 s> 0)
        int64_t r12_1 = sx.q(rbx.d) << 3
        int64_t i
        
        do
            int64_t* rcx_1 = arg1[1]
            int64_t* rax_3 = rcx_1[0x18]
            
            if (rax_3 != 0)
                rcx_1 = rax_3
            
            int32_t rdi_1 = 0
            void* r14_1 = *(rcx_1 + r12_1)
            
            if (sub_141d839b0(r14_1) s> 0)
                int32_t rax_7
                
                do
                    void* rax_5 = sub_141f3bc60(r14_1, rdi_1)
                    
                    if (rax_5 != 0 && *(rax_5 + 0xa0) == *arg1)
                        void* rbx_1 = arg1[1]
                        int64_t rbp_1 = sx.q(*(rbx_1 + 0xc8))
                        int32_t rcx_5 = (rbp_1 + 1).d
                        *(rbx_1 + 0xc8) = rcx_5
                        
                        if (rcx_5 s> *(rbx_1 + 0xcc))
                            sub_141a14450(rbx_1, rbp_1.d)
                        
                        void* rax_6 = *(rbx_1 + 0xc0)
                        
                        if (rax_6 != 0)
                            rbx_1 = rax_6
                        
                        *(rbx_1 + (rbp_1 << 3)) = rax_5
                    
                    rdi_1 += 1
                    rax_7 = sub_141d839b0(r14_1)
                while (rdi_1 s< rax_7)
            
            r12_1 += 8
            i = i_1
            i_1 -= 1
        while (i != 1)
        result = arg1[1]
    
    rcx_8 = *(result + 0xc8)
    rbx = zx.q(rdx_3)
    i_2 = rcx_8 - rdx_3
while (rcx_8 != rdx_3)
return result
