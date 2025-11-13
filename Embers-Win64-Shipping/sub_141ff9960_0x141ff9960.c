// 函数: sub_141ff9960
// 地址: 0x141ff9960
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rax = *arg2

if (rax != 0)
    int16_t r9_1 = *(rax + 0x12)
    
    if (r9_1 != 0)
        void* rax_1 = arg1[1]
        
        for (void** i = *(rax_1 + 8); i != &i[sx.q(*(rax_1 + 0x10)) * 2]; i = &i[2])
            rax = *i
            
            if (rax != 0 && r9_1 == *(rax + 0x12))
                void* rbx_1 = *arg1
                int64_t rdi = sx.q(*(rbx_1 + 0x10))
                int32_t rax_2 = (rdi + 1).d
                *(rbx_1 + 0x10) = rax_2
                
                if (rax_2 s> *(rbx_1 + 0x14))
                    sub_1405a4f90(rbx_1 + 8)
                
                int64_t* rcx_6 = (rdi << 4) + *(rbx_1 + 8)
                *rcx_6 = *arg2
                void* rax_4 = arg2[1]
                rcx_6[1] = rax_4
                
                if (rax_4 != 0)
                    *(rax_4 + 8) += 1
                
                rax_4.b = 1
                return rax_4

rax.b = 0
return rax
