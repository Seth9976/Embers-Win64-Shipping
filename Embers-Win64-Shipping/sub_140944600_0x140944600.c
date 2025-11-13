// 函数: sub_140944600
// 地址: 0x140944600
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rbp = arg1
(*(*(arg1 - 8) + 0x30))(arg1 - 8)
void* lpCriticalSection = rbp + 0x80
int64_t rsi = 0
uint64_t rdi = 0
int32_t arg_10 = 0
uint64_t var_60 = 0
int32_t var_54 = 0
void* lpCriticalSection_1 = lpCriticalSection
EnterCriticalSection(lpCriticalSection)
void* r14 = rbp + 0x70
void* arg_20 = r14

if (&var_60 != r14)
    rsi = sx.q(*(r14 + 8))
    int64_t rdi_1 = *r14
    arg_10 = rsi.d
    int32_t var_58_1 = rsi.d
    
    if (rsi.d == 0)
        rdi = var_60
    else
        sub_1405c4a00(&var_60, rsi.d, 0)
        rdi = var_60
        memcpy(rdi, rdi_1, (rsi << 3).d)
        rsi = zx.q(var_58_1)
        arg_10 = rsi.d

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

int32_t r12 = 0

while (true)
    int32_t arg_18 = r12
    
    if (r12 s< 0)
        break
    
    if (r12 s>= rsi.d)
        break
    
    int64_t* r15_1 = *(rdi + (sx.q(r12) << 3))
    (*(*r15_1 + 0x38))(r15_1)
    
    if ((*(*r15_1 + 0x28))(r15_1) != 0)
        (*(*r15_1 + 0x30))(r15_1)
        EnterCriticalSection(lpCriticalSection)
        int64_t rcx_9 = sx.q(*(r14 + 8))
        
        if (rcx_9.d != 0)
            int32_t r13_1 = 0
            int32_t rsi_1 = 0
            int64_t rdi_2 = 0
            r12.b = **arg_20 != r15_1
            
            do
                int64_t r9_1 = sx.q(rsi_1)
                rdi_2 += 1
                rsi_1 += 1
                
                if (rdi_2 s< rcx_9)
                    int64_t* rcx_10 = *arg_20 + (rdi_2 << 3)
                    
                    do
                        int32_t rax_8
                        rax_8.b = *rcx_10 != r15_1
                        
                        if (zx.d(r12.b) != rax_8)
                            break
                        
                        rsi_1 += 1
                        rdi_2 += 1
                        rcx_10 = &rcx_10[1]
                    while (rdi_2 s< rcx_9)
                
                int32_t rbp_2 = rsi_1 - r9_1.d
                
                if (r12.b != 0)
                    if (r13_1 != r9_1.d)
                        int64_t rcx_11 = *arg_20
                        memmove(rcx_11 + (sx.q(r13_1) << 3), rcx_11 + (r9_1 << 3), rbp_2 << 3)
                    
                    r13_1 += rbp_2
                
                r12.b ^= 1
            while (rdi_2 s< rcx_9)
            
            r14 = arg_20
            r12 = arg_18
            rbp = arg1
            *(arg_20 + 8) = r13_1
            lpCriticalSection = lpCriticalSection_1
        
        if (lpCriticalSection != 0)
            LeaveCriticalSection(lpCriticalSection)
        
        EnterCriticalSection(rbp + 0xb8)
        int64_t rbp_3 = sx.q(*(rbp + 0xb0))
        int32_t rax_10 = (rbp_3 + 1).d
        *(rbp + 0xb0) = rax_10
        
        if (rax_10 s> *(rbp + 0xb4))
            sub_1405a4d70(rbp + 0xa8)
        
        *(*(rbp + 0xa8) + (rbp_3 << 3)) = r15_1
        
        if (rbp != -0xb8)
            LeaveCriticalSection(rbp + 0xb8)
        
        rdi = var_60
        rsi = zx.q(arg_10)
        rbp = arg1
    
    r12 += 1

if (rdi != 0)
    sub_140a74f90(rdi)

char result = EnterCriticalSection(rbp + 0x10)
int64_t* rdi_4 = *(rbp + 8)

if (rbp != -0x10)
    result = LeaveCriticalSection(rbp + 0x10)

if (rdi_4 != 0)
    (*(*rdi_4 + 0x38))(rdi_4)
    result = (*(*rdi_4 + 0x28))(rdi_4)
    
    if (result != 0)
        (*(*rdi_4 + 0x30))(rdi_4)
        sub_14093d2f0(rbp - 8, rdi_4)
        result = EnterCriticalSection(rbp + 0x10)
        *(rbp + 8) = 0
        
        if (rbp != -0x10)
            return LeaveCriticalSection(rbp + 0x10)

return result
