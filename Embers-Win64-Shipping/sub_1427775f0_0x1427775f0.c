// 函数: sub_1427775f0
// 地址: 0x1427775f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
void* r15 = arg2

if (arg4 != 0)
    int32_t* rbx_1 = arg3 + 0x30
    int32_t i
    
    do
        char* rcx = r15
        void* rbp_1 = r15
        r15 += 0x58
        *rcx = rbx_1[-0xc].b
        
        if (&rcx[8] != &rbx_1[-0xa])
            int64_t rsi_1 = sx.q(rbx_1[8])
            void* rdi_1 = rbp_1 + 0x40
            sub_1405a4aa0(rdi_1, 0, rsi_1.d, 4)
            void* rcx_2 = *(rdi_1 + 8)
            void* rdx = &rbx_1[4]
            void* rax_1 = *(rbx_1 + 0x18)
            
            if (rax_1 != 0)
                rdx = rax_1
            
            if (rcx_2 != 0)
                rdi_1 = rcx_2
            
            memcpy(rdi_1, rdx, (rsi_1 << 2).d)
            *(rbp_1 + 0x50) = rsi_1.d
            int64_t rsi_2 = sx.q(rbx_1[-8])
            *(rbp_1 + 0x10) = 0
            
            if (*(rbp_1 + 0x14) != rsi_2.d)
                sub_1405a5410(&rcx[8], rsi_2.d)
            
            *(rbp_1 + 0x3c) = 0
            void* rdi_2 = rbp_1 + 0x18
            *(rbp_1 + 0x38) = 0xffffffff
            sub_14059a8e0(rdi_2, rsi_2.d)
            int32_t rax_2 = *(rbp_1 + 0x10) + rsi_2.d
            *(rbp_1 + 0x10) = rax_2
            
            if (rax_2 s> *(rbp_1 + 0x14))
                sub_1405a4f90(&rcx[8])
            
            *(rbp_1 + 0x38) = rbx_1[2]
            *(rbp_1 + 0x3c) = rbx_1[3]
            void* rbp_2 = &rbx_1[-6]
            
            if (rdi_2 != rbp_2)
                sub_14059a8e0(rdi_2, *rbx_1)
                int32_t rax_5 = *rbx_1
                *(rdi_2 + 0x18) = rax_5
                
                if (rax_5 != 0)
                    void* rcx_8 = *(rbx_1 - 8)
                    void* r9 = *(rdi_2 + 0x10)
                    
                    if (rcx_8 != 0)
                        rbp_2 = rcx_8
                    
                    if (r9 != 0)
                        rdi_2 = r9
                    
                    memcpy(rdi_2, rbp_2, (zx.q(rax_5 + 0x1f) u>> 5 << 2).d)
            
            memcpy(*(rcx + 8), *(rbx_1 - 0x28), (rsi_2 << 4).d)
        
        rbx_1 = &rbx_1[0x16]
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
