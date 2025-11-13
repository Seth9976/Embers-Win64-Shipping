// 函数: sub_141a717a0
// 地址: 0x141a717a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_1 = arg4
int64_t* rdi = arg3
void* rbp = arg2

if (arg4 != 0)
    int32_t i
    
    do
        char rax_1 = rdi[0x10].b
        void* r14_1 = rbp
        int64_t** rbx_1 = rbp
        rbp += 0x88
        
        if ((rax_1 & 1) == 0)
            char rax = rbx_1[0x10].b
            
            if ((rax & 1) != 0)
                int64_t* rcx_7 = rbx_1
                
                if ((rax & 2) == 0)
                    rcx_7 = *rbx_1
                
                rbx_1[0x10].b = rax & 0xfe
                (**rcx_7)(rcx_7, 0)
                
                if ((rbx_1[0x10].b & 2) == 0)
                    sub_140a74f90(*rbx_1)
        else
            int64_t* rcx = rdi
            
            if ((rax_1 & 2) == 0)
                rcx = *rdi
            
            int64_t* rsi_1 = *((*(*rcx + 0x20))(rcx) + 0xb8)
            char rax_4 = rbx_1[0x10].b
            int32_t r15_1 = *(rsi_1 + 0xc)
            uint64_t r12_1 = zx.q(rsi_1[1].d)
            
            if ((rax_4 & 1) != 0)
                int64_t* rcx_2 = rbx_1
                
                if ((rax_4 & 2) == 0)
                    rcx_2 = *rbx_1
                
                rbx_1[0x10].b = rax_4 & 0xfe
                (**rcx_2)(rcx_2, 0)
                rax_4 = rbx_1[0x10].b
                
                if ((rax_4 & 2) == 0)
                    sub_140a74f90(*rbx_1)
                    rax_4 = *(r14_1 + 0x80)
            
            char rcx_1
            
            if (r12_1.d u> 0x80 || r15_1 u> 8)
                rcx_1 = 0
            else
                rcx_1 = 2
            
            rax_4 = (rax_4 & 0xfd) | rcx_1
            rbx_1[0x10].b = rax_4
            
            if ((rax_4 & 2) == 0)
                *rbx_1 = sub_140a82f30(r12_1, zx.q(r15_1))
                rax_4 = rbx_1[0x10].b
            
            rax_4 |= 1
            rbx_1[0x10].b = rax_4
            
            if ((rax_4 & 2) == 0)
                rbx_1 = *rbx_1
            
            (*(*rsi_1 + 0x18))(rsi_1, rbx_1)
            int64_t* r8 = rdi
            
            if ((rdi[0x10].b & 2) == 0)
                r8 = *rdi
            
            (*(*rsi_1 + 0xa8))(rsi_1, rbx_1, r8, 1)
        
        rdi = &rdi[0x11]
        i = i_1
        i_1 -= 1
    while (i != 1)

return 1
