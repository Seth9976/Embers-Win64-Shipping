// 函数: sub_1409ce3a0
// 地址: 0x1409ce3a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* rbx = *arg3
void* r9 = arg1
int64_t result = sx.q(arg3[1].d)
int32_t* var_40 = rbx
void* rbp = &rbx[result]
void* var_48 = rbp

if (rbx != rbp)
    int64_t* r14_1 = arg1 + 0x40
    int64_t* arg_20 = r14_1
    
    do
        int64_t rdi_2 = sx.q(*rbx)
        int64_t rax = *r14_1
        int64_t rcx = rdi_2 * 3
        void* r12_1 = rax + (rcx << 3)
        void* rdx = *(r9 + 0x78) + sx.q(*(rax + (rcx << 3))) * 0x48
        
        if (*(rax + (rcx << 3) + 0x10) s> 0)
            void* rsi_1 = *(r9 + 0x28)
            
            if (rsi_1 != 0)
                void* r13_1 = *(rsi_1 + 0xc0)
                int64_t* rsi_2 = *(rsi_1 + 0xc8)
                
                if (rsi_2 != 0)
                    rsi_2[1].d += 1
                
                if (r13_1 != 0)
                    int64_t rbp_1 = 0
                    int32_t* r14_2 = *(r12_1 + 8)
                    uint64_t r15_2 = sx.q(*(r12_1 + 0x10)) << 2 u>> 2
                    
                    if (r14_2 u> &r14_2[sx.q(*(r12_1 + 0x10))])
                        r15_2 = 0
                    
                    if (r15_2 != 0)
                        do
                            int64_t rbx_1 = sx.q(*r14_2)
                            sub_140906230(rdx + 0x10, rbx_1.d, 1)
                            int64_t rax_5 = *(r13_1 + 0x220)
                            int64_t rcx_3 = rbx_1 * 3
                            rbp_1 += 1
                            r14_2 = &r14_2[1]
                            *(rax_5 + (rcx_3 << 2)) = -1
                            *(rax_5 + (rcx_3 << 2) + 8) = 0xffffffff
                        while (rbp_1 != r15_2)
                        
                        rdi_2 = zx.q(rdi_2.d)
                        rbx = var_40
                    
                    *(r12_1 + 0x10) = 0
                    
                    if (*(r12_1 + 0x14) s<= 0xffffffff)
                        sub_1405dadb0(r12_1 + 8, 0)
                    
                    rbp = var_48
                    r14_1 = arg_20
                
                if (rsi_2 != 0)
                    rsi_2[1].d -= 1
                    
                    if (rsi_2[1].d == 1)
                        (**rsi_2)(rsi_2)
                        int32_t rax_8 = *(rsi_2 + 0xc)
                        *(rsi_2 + 0xc) -= 1
                        
                        if (rax_8 == 1)
                            (*(*rsi_2 + 8))(rsi_2, 1)
        
        result = sub_1409d8340(r14_1, rdi_2.d, 1)
        r9 = arg1
        rbx = &rbx[1]
        var_40 = rbx
    while (rbx != rbp)

return result
