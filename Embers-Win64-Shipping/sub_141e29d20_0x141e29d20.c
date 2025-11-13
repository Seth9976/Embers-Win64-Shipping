// 函数: sub_141e29d20
// 地址: 0x141e29d20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r13 = arg1

if (*(arg3 + 4) != 0xffffffff)
    int64_t* r12_1 = *arg2
    
    if (r12_1 != 0)
        r12_1 = r12_1[0x15]
    
    if (r12_1 != 0)
        int32_t rdx_2 = *((*(*r12_1 + 0x20))(r12_1) + 8) - *(arg3 + 4) - 1
        *(r13 + 0x20) = rdx_2
        int64_t* rcx_1 = *(r13 + 0x28)
        int64_t* rax = *arg2
        int64_t* arg_18 = rax
        
        if (rcx_1 != 0)
            (**rcx_1)(rcx_1, &arg_18)
        else
            if (rdx_2 != 0xffffffff)
                int64_t* rcx_2
                
                if (rax == 0)
                    rcx_2 = nullptr
                else
                    rcx_2 = rax[0x15]
                
                rax = (*(*rcx_2 + 0x20))(rcx_2)
                int64_t rcx_3 = sx.q(*(r13 + 0x20))
                
                if (rcx_3.d s< 0 || rcx_3.d s>= rax[1].d)
                    rcx_1 = *(r13 + 0x28)
                else
                    rcx_1 = arg_18[0x14] + sx.q(*(*(*rax + (rcx_3 << 3)) + 0x4c))
                    *(r13 + 0x28) = rcx_1
            
            if (rcx_1 != 0)
                (**rcx_1)(rcx_1, &arg_18)
        
        if (*arg2 != 0)
            int32_t i = 0
            
            if (*(arg3 + 0x18) s> 0)
                int32_t* rsi_1 = nullptr
                
                do
                    int64_t rax_7 = *(*arg2 + 0xa0)
                    int32_t r14_1 = *(rsi_1 + *(arg3 + 0x10))
                    int64_t r14_3
                    
                    if (r14_1 == 0xffffffff)
                        r14_3 = 0
                    else
                        int32_t rbx_1 = *((*(*r12_1 + 0x20))(r12_1) + 8)
                        r14_3 = sx.q(*
                            (*(*(*(*r12_1 + 0x20))(r12_1) + (sx.q(rbx_1 - r14_1) << 3) - 8) + 0x4c))
                            + rax_7
                    
                    int64_t rbx_3 = sx.q(*(r13 + 0x50))
                    int32_t rax_14 = (rbx_3 + 1).d
                    *(r13 + 0x50) = rax_14
                    
                    if (rax_14 s> *(r13 + 0x54))
                        sub_1405a4d70(r13 + 0x48)
                    
                    i += 1
                    rsi_1 = &rsi_1[1]
                    (*(r13 + 0x48))[rbx_3] = r14_3
                while (i s< *(arg3 + 0x18))
                
                r13 = arg1

if (*(r13 + 0xb8) == 0)
    return 

int64_t rdi_2 = sx.q(*(r13 + 0x60))
int32_t rax_15 = (rdi_2 + 2).d
*(r13 + 0x60) = rax_15

if (rax_15 s> *(r13 + 0x64))
    sub_1405c4fe0(r13 + 0x58)

memset((rdi_2 << 6) + *(r13 + 0x58), 0, 0x80)
void* rdi_3 = *(r13 + 0x58)
int64_t rbp_1 = sx.q(*(*(r13 + 0xb8) + 0x40))
int64_t rsi_2 = sx.q(*(rdi_3 + 0x38))
int32_t rax_17 = (rsi_2 + rbp_1).d
*(rdi_3 + 0x38) = rax_17

if (rax_17 s> *(rdi_3 + 0x3c))
    sub_1406105e0(rdi_3 + 0x30)

memset(*(rdi_3 + 0x30) + (rsi_2 << 2), 0, rbp_1 << 2)
void* rbx_4 = *(r13 + 0x58)
int64_t rsi_3 = sx.q(*(*(r13 + 0xb8) + 0x40))
int64_t rdi_4 = sx.q(*(rbx_4 + 0x78))
int32_t rax_20 = (rdi_4 + rsi_3).d
*(rbx_4 + 0x78) = rax_20

if (rax_20 s> *(rbx_4 + 0x7c))
    sub_1406105e0(rbx_4 + 0x70)

memset(*(rbx_4 + 0x70) + (rdi_4 << 2), 0, rsi_3 << 2)
