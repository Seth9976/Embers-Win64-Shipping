// 函数: sub_140bb7f90
// 地址: 0x140bb7f90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rdi = arg1
int64_t* var_70 = nullptr
int32_t var_68 = 0
int64_t rsi = arg2
sub_140b938e0(&arg1[1], arg2, &var_70, 0)
int64_t* rbx = var_70
int64_t* r15 = rbx
void* rax_2 = &rbx[sx.q(var_68)]

if (rbx != rax_2)
    void* r14_1 = &rdi[0x15]
    
    do
        int64_t rbx_1 = sx.q(*(r14_1 + 8))
        int64_t r12_1 = *r15
        int32_t rax_3 = (rbx_1 + 1).d
        *(r14_1 + 8) = rax_3
        
        if (rax_3 s> *(r14_1 + 0xc))
            sub_1405a4d70(r14_1)
        
        *(*r14_1 + (rbx_1 << 3)) = r12_1
        
        if ((*(*rdi + 0x10))(rdi, rsi, r12_1) != 0)
            int64_t* var_60 = nullptr
            int32_t var_58_1 = 0
            sub_140b938e0(&rdi[0x17], r12_1, &var_60, 0)
            int64_t* r13_1 = var_60
            int64_t rbx_2 = 0
            int64_t* rdi_1 = r13_1
            void* rcx_5 = &r13_1[sx.q(var_58_1)]
            uint64_t rbp_4 = (rcx_5 - r13_1 + 7) u>> 3
            
            if (r13_1 u> rcx_5)
                rbp_4 = 0
            
            if (rbp_4 != 0)
                do
                    uint64_t rsi_1 = *rdi_1
                    int64_t rax_9 = sub_140d3cb50(rsi_1)
                    
                    if (rax_9 != 0)
                        sub_140cc45a0(rax_9 + 0x200, rsi_1)
                    
                    rdi_1 = &rdi_1[1]
                    rbx_2 += 1
                while (rbx_2 != rbp_4)
                
                rsi = arg2
            
            sub_140bb6000(&rdi[0x17], r12_1)
            
            if (r13_1 != 0)
                sub_140a74f90(r13_1)
            
            rdi = arg1
        
        *(r14_1 + 8) -= 1
        sub_1405c53d0(r14_1)
        r15 = &r15[1]
    while (r15 != rax_2)
    
    rbx = var_70

uint64_t result = sub_140bb6000(&arg1[1], rsi)

if (rbx == 0)
    return result

return sub_140a74f90(rbx)
