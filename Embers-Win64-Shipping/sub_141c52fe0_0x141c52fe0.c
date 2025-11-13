// 函数: sub_141c52fe0
// 地址: 0x141c52fe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r8 = *arg1
int32_t i = 0
void* result = *(r8 + 0x28)
*(r8 + 0x1b4) = *(result + 0x958) * *(r8 + 0x1b0)
void* rdx_2 = *arg1

if (*(rdx_2 + 0x1ac) s> 0)
    void* rcx = nullptr
    int64_t rbp_1 = 0
    int64_t r13_1 = 0
    int64_t arg_10 = 0
    void* arg_8 = nullptr
    
    do
        void* rdi_2 = *(rdx_2 + 0xc8) + r13_1
        
        if ((*(rdi_2 + 0x3d0) & 4) != 0)
            int64_t rax = *(rdx_2 + 0xd8)
            int32_t r8_1 = arg1[1].d
            int32_t r9_1 = *(rcx + rax + 0x2dc)
            void* rsi_1 = rcx + rax
            int32_t rdx_3 = *(rcx + rax + 0x2d8)
            *(rcx + rax + 0x2e0) = r8_1
            sub_141c6cf20(rsi_1 + 0x50, rdx_3, r8_1, r9_1)
            *(rdi_2 + 0x3c8) = 0
            
            if (*(rdi_2 + 0x3cc) s<= 0xffffffff)
                sub_140775b10(rdi_2 + 0x3c0, 0)
            
            int32_t r14_1 = 2
            
            if ((*(rdi_2 + 0x3d1) & 1) == 0)
                r14_1 = *(rdi_2 + 0x3d4)
            
            if ((*(rdi_2 + 0x3d0) & 1) == 0)
                int32_t rax_4 = *(rdi_2 + 0x3cc)
                *(rdi_2 + 0x3c8) = 0
                
                if (rax_4 s< 0 && rax_4 != 0)
                    sub_140775b10(rdi_2 + 0x3c0, 0)
                
                sub_141c5cc70(*(rdi_2 + 0x3d1) u>> 7, r14_1, arg1[1].d, *(rdi_2 + 0x3d0) u>> 1 & 1, 
                    rdi_2 + 0x3c0)
            else
                (*(*arg1 + 0x178))[rbp_1] = 1
                int64_t rdi_3 = sx.q(*(rdi_2 + 0x3c8))
                int32_t rbp_3 = arg1[1].d * r14_1
                int32_t rax_2 = rdi_3.d + rbp_3
                *(rdi_2 + 0x3c8) = rax_2
                
                if (rax_2 s> *(rdi_2 + 0x3cc))
                    sub_140775270(rdi_2 + 0x3c0)
                
                memset(*(rdi_2 + 0x3c0) + (rdi_3 << 2), 0, sx.q(rbp_3) << 2)
                rbp_1 = arg_10
            
            int64_t rbx_2 = *(rdi_2 + 0x3c0)
            result = memcpy(rsi_1 + 0x150, rbx_2, *(rsi_1 + 0x250))
            
            if (*(rsi_1 + 0x254) == 0)
                result = memcpy(rsi_1 + 0x50, rbx_2, *(rsi_1 + 0x250))
                *(rsi_1 + 0x254) = 1
            
            rcx = arg_8
        
        rdx_2 = *arg1
        rbp_1 += 1
        rcx += 0x2f0
        arg_10 = rbp_1
        i += 1
        arg_8 = rcx
        r13_1 += 0x3f0
    while (i s< *(rdx_2 + 0x1ac))

return result
