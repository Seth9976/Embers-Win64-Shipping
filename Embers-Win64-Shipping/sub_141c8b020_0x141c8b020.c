// 函数: sub_141c8b020
// 地址: 0x141c8b020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* r13 = arg2
void* rsi = arg1

if (*(arg1 + 0xa0) == 0)
    return 

int64_t* rcx = *arg2
void* var_68 = nullptr
int64_t var_60_1 = 0
void* r14_1

if (*((*(*rcx + 0x30))(rcx) + 8) s<= 0)
label_141c8b214:
    int64_t* rcx_14 = *(rsi + 0xc8)
    (*(*rcx_14 + 0x18))(rcx_14, r13, &var_68)
    r14_1 = var_68
else
    int64_t* rcx_1 = *r13
    int64_t* rax_4 = (*(*rcx_1 + 0x30))(rcx_1)
    r14_1 = nullptr
    void* var_58 = nullptr
    int32_t rbp_1 = 0
    int32_t var_4c_1 = 0
    int32_t r12_1 = 0
    CRITICAL_SECTION* lpCriticalSection = *(rsi + 0x38)
    EnterCriticalSection(lpCriticalSection)
    char* r15_1 = *rax_4
    void* rax = &r15_1[sx.q(rax_4[1].d) << 4]
    
    if (r15_1 != rax)
        do
            int32_t arg_18
            sub_141c88700(rsi + 0x40, &arg_18, r15_1)
            int64_t rax_7 = sx.q(arg_18)
            void* const rcx_4
            
            if (rax_7.d == 0xffffffff)
                rcx_4 = nullptr
            else
                rcx_4 = *(rsi + 0x40) + rax_7 * 0x28
            
            int128_t* rdi_2 = rcx_4 + 0x10
            
            if (rcx_4 == 0)
                rdi_2 = nullptr
            
            if (rdi_2 != 0)
                void* rax_9 = r14_1
                void* r8_4 = (sx.q(rbp_1) << 4) + r14_1
                
                if (r14_1 != r8_4)
                    while (true)
                        int32_t rdx_6 = (*(rax_9 + 4) ^ *(rdi_2 + 4))
                            | (*(rax_9 + 8) ^ *(rdi_2 + 8)) | (*(rax_9 + 0xc) ^ *(rdi_2 + 0xc))
                            | (*rdi_2 ^ *rax_9)
                        
                        if (rdx_6 == 0)
                            break
                        
                        rax_9 += 0x10
                        
                        if (rax_9 == r8_4)
                            goto label_141c8b175
                
                if (r14_1 == r8_4 || ((rax_9 - r14_1) s>> 4).d == 0xffffffff)
                label_141c8b175:
                    int64_t rsi_2 = sx.q(rbp_1)
                    rbp_1 = (rsi_2 + 1).d
                    
                    if (rbp_1 s> r12_1)
                        sub_1405a4f90(&var_58)
                        r12_1 = var_4c_1
                        r14_1 = var_58
                    
                    *(r14_1 + rsi_2 * 0x10) = *rdi_2
            
            r15_1 = &r15_1[0x10]
        while (r15_1 != rax)
        
        rsi = arg1
        r13 = arg2
    
    if (lpCriticalSection != 0)
        LeaveCriticalSection(lpCriticalSection)
    
    void* rcx_13 = var_68
    
    if (rcx_13 != 0)
        sub_140a74f90(rcx_13)
    
    var_60_1.d = rbp_1
    var_60_1:4.d = r12_1
    var_68 = r14_1
    
    if (rbp_1 != 0)
        goto label_141c8b214

if (r14_1 != 0)
    sub_140a74f90(r14_1)
