// 函数: sub_141822da0
// 地址: 0x141822da0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = *arg1
int64_t* rdi = arg1
EnterCriticalSection(lpCriticalSection)
int64_t* rcx_1 = rdi[2]
int64_t rdx = 0
int64_t* arg_10 = rcx_1
int64_t arg_18 = 0
int64_t* result = &rcx_1[rdi[3]]
uint64_t r8_1 = sx.q(rdi[3].d) << 3 u>> 3

if (rcx_1 u> result)
    r8_1 = 0

uint64_t arg_20 = r8_1

if (r8_1 != 0)
    int64_t r15
    int64_t var_40_1 = r15
    
    do
        int64_t* rbx = rdi[1]
        int64_t r13_1 = *rcx_1
        int64_t rcx_2 = sx.q(rbx[1].d)
        
        if (rcx_2.d != 0)
            result = *rbx
            int32_t r12_1 = 0
            int32_t rsi_1 = 0
            int64_t rdi_1 = 0
            r15.b = *result != r13_1
            
            do
                int64_t r9_1 = sx.q(rsi_1)
                rdi_1 += 1
                rsi_1 += 1
                
                if (rdi_1 s< rcx_2)
                    int64_t rcx_3 = *rbx + (rdi_1 << 3)
                    
                    do
                        result.b = *rcx_3 != r13_1
                        
                        if (zx.d(r15.b) != result.d)
                            break
                        
                        rsi_1 += 1
                        rdi_1 += 1
                        rcx_3 += 8
                    while (rdi_1 s< rcx_2)
                
                int32_t rbp_2 = rsi_1 - r9_1.d
                
                if (r15.b != 0)
                    if (r12_1 != r9_1.d)
                        int64_t rcx_4 = *rbx
                        result =
                            memmove(rcx_4 + (sx.q(r12_1) << 3), rcx_4 + (r9_1 << 3), rbp_2 << 3)
                    
                    r12_1 += rbp_2
                
                r15.b ^= 1
            while (rdi_1 s< rcx_2)
            
            rdx = arg_18
            r8_1 = arg_20
            rdi = arg1
            rbx[1].d = r12_1
        
        rdx += 1
        rcx_1 = &arg_10[1]
        arg_18 = rdx
        arg_10 = rcx_1
    while (rdx != r8_1)

if (lpCriticalSection != 0)
    result = LeaveCriticalSection(lpCriticalSection)

int64_t rcx_8 = rdi[2]

if (rcx_8 == 0)
    return result

return sub_140a74f90(rcx_8) __tailcall
