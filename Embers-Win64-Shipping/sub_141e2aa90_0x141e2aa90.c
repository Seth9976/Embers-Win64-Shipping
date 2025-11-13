// 函数: sub_141e2aa90
// 地址: 0x141e2aa90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r15 = arg1
void** result = (*(*arg1 + 0x90))()
void* r14 = *arg2
int64_t* r14_1

if (r14 == 0)
    r14_1 = nullptr
else
    r14_1 = *(r14 + 0xa8)

void* rbp = r15[5]
int64_t* arg_18 = r14_1
void* var_58 = rbp

if (rbp != 0)
    r15[4].d = 0
    *(r15 + 0x1c) = 0xffffffff
    
    if (*(rbp + 0x18) s> 0)
        void* rdi_1 = &r15[8]
        *(rdi_1 + 8) = 0
        void* arg_20 = rdi_1
        
        if (*(rdi_1 + 0xc) s<= 0xffffffff)
            sub_1405a5410(rdi_1, 0)
        
        int32_t rax_1 = *(rbp + 0x18)
        
        if (rax_1 s> *(rdi_1 + 0xc))
            sub_1405a5410(rdi_1, rax_1)
            rax_1 = *(rbp + 0x18)
        
        int32_t i_2 = 0
        
        if (rax_1 s> 0)
            int64_t rsi_1 = 0
            int32_t i
            
            do
                int64_t rbx_1 = sx.q(*(rdi_1 + 8))
                int64_t r15_1 = *(rbp + 0x10)
                int32_t rax_2 = (rbx_1 + 1).d
                *(rdi_1 + 8) = rax_2
                
                if (rax_2 s> *(rdi_1 + 0xc))
                    sub_1405a4f90(rdi_1)
                
                int64_t rbx_2 = rbx_1 << 4
                int64_t* rbx_3 = rbx_2 + *rdi_1
                
                if (rbx_2 == neg.q(*rdi_1))
                    rbx_3 = nullptr
                else
                    *rbx_3 = 0
                    rbx_3[1] = 0
                    *rbx_3 = 0xffffffff
                
                if (*(rsi_1 + r15_1 + 0x18) != 0xffffffff)
                    *rbx_3 = *((*(*r14_1 + 0x20))(r14_1) + 8) - *(rsi_1 + r15_1 + 0x18) - 1
                
                int32_t r8_1 = *(rsi_1 + r15_1 + 0x2c)
                int64_t* rbx_4 = arg_18
                
                if (r8_1 != 0xffffffff)
                    int64_t* rax_6 = sub_141df1e10(*(*arg2 + 0xa0), rbx_4, r8_1)
                    
                    if (rax_6 != 0)
                        int64_t r8_2 = *rax_6
                        (*r8_2)(rax_6, arg2, r8_2)
                
                int32_t rbp_1 = 0
                
                if (*(rsi_1 + r15_1 + 0x10) s> 0)
                    int32_t* r14_2 = nullptr
                    
                    while (true)
                        int32_t r12_1 = *(r14_2 + *(rsi_1 + r15_1 + 8))
                        
                        if (r12_1 != 0xffffffff)
                            int64_t rdi_2 = *(*arg2 + 0xa0)
                            int32_t rbx_5 = *((*(*rbx_4 + 0x20))(rbx_4) + 8)
                            int64_t rcx_13 = sx.q(*(
                                *(*(*(*arg_18 + 0x20))(arg_18) + (sx.q(rbx_5 - r12_1) << 3) - 8)
                                + 0x4c))
                            int64_t* rcx_14 = rcx_13 + rdi_2
                            
                            if (rcx_13 != neg.q(rdi_2))
                                (**rcx_14)(rcx_14, arg2)
                        
                        rbp_1 += 1
                        r14_2 = &r14_2[8]
                        
                        if (rbp_1 s>= *(rsi_1 + r15_1 + 0x10))
                            break
                        
                        rbx_4 = arg_18
                    
                    rdi_1 = arg_20
                
                rsi_1 += 0x58
                rbp = var_58
                i = i_2 + 1
                r14_1 = arg_18
                i_2 = i
            while (i s< *(rbp + 0x18))
            r15 = arg1
        
        int32_t rax_15 = *(r15 + 0x5c)
        r15[0xb].d = 0
        
        if (rax_15 s< 0 && rax_15 != 0)
            sub_1405dadb0(&r15[0xa], 0)
        
        sub_141e30220(&r15[6], 0)
        int32_t rdx_5 = *(rbp + 0x18)
        r15[0x15].d = 0
        
        if (rdx_5 s> *(r15 + 0xac))
            sub_1405a5410(&r15[0x14], rdx_5)
        
        int32_t i_3 = *(rbp + 0x18)
        int64_t rsi_2 = sx.q(r15[0x15].d)
        int32_t rax_16 = rsi_2.d + i_3
        r15[0x15].d = rax_16
        
        if (rax_16 s> *(r15 + 0xac))
            sub_1405a4f90(&r15[0x14])
        
        int64_t* rax_19 = (rsi_2 << 4) + r15[0x14]
        
        if (i_3 != 0)
            int32_t i_1
            
            do
                *rax_19 = -1
                rax_19[1].d = 0xffff
                rax_19 = &rax_19[2]
                i_1 = i_3
                i_3 -= 1
            while (i_1 != 1)
        
        result = sub_141e312c0(r15, arg2, *(rbp + 8))
        *(r15 + 0x1a) = 1

return result
