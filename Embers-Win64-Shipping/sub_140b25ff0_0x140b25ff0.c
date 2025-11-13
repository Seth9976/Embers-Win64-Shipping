// 函数: sub_140b25ff0
// 地址: 0x140b25ff0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
int64_t var_20 = r12
int64_t rdi
rdi.b = 0
CRITICAL_SECTION* lpCriticalSection = arg1 + 0x330
CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection
void* rsi = arg1
uint64_t result

while (true)
    EnterCriticalSection(lpCriticalSection)
    result = 0
    bool z_1
    
    if (0 == *(rsi + 0x358))
        *(rsi + 0x358) = 0
        z_1 = true
    else
        result = zx.q(*(rsi + 0x358))
        z_1 = false
    
    if (z_1)
        int64_t rcx_1 = sx.q(*(rsi + 0x2b8))
        
        if (rcx_1.d != 0)
            int32_t r13_1 = 0
            int32_t rsi_1 = 0
            rdi = 0
            result = *(arg1 + 0x2b0)
            r12.b = *result != arg2
            
            do
                int64_t r9_1 = sx.q(rsi_1)
                rdi += 1
                rsi_1 += 1
                
                if (rdi s< rcx_1)
                    int64_t rcx_2 = *(arg1 + 0x2b0) + (rdi << 3)
                    
                    do
                        result.b = *rcx_2 != arg2
                        
                        if (zx.d(r12.b) != result.d)
                            break
                        
                        rsi_1 += 1
                        rdi += 1
                        rcx_2 += 8
                    while (rdi s< rcx_1)
                
                int32_t r14_2 = rsi_1 - r9_1.d
                
                if (r12.b != 0)
                    if (r13_1 != r9_1.d)
                        int64_t rcx_3 = *(arg1 + 0x2b0)
                        result =
                            memmove(rcx_3 + (sx.q(r13_1) << 3), rcx_3 + (r9_1 << 3), r14_2 << 3)
                    
                    r13_1 += r14_2
                
                r12.b ^= 1
            while (rdi s< rcx_1)
            
            rsi = arg1
            lpCriticalSection = lpCriticalSection_1
            *(rsi + 0x2b8) = r13_1
        
        int64_t rcx_5 = sx.q(*(rsi + 0x2c8))
        
        if (rcx_5.d != 0)
            int32_t r13_2 = 0
            int32_t rsi_2 = 0
            rdi = 0
            result = *(arg1 + 0x2c0)
            r12.b = *result != arg2
            
            do
                int64_t r9_2 = sx.q(rsi_2)
                rdi += 1
                rsi_2 += 1
                
                if (rdi s< rcx_5)
                    int64_t rcx_6 = *(arg1 + 0x2c0) + (rdi << 3)
                    
                    do
                        result.b = *rcx_6 != arg2
                        
                        if (zx.d(r12.b) != result.d)
                            break
                        
                        rsi_2 += 1
                        rdi += 1
                        rcx_6 += 8
                    while (rdi s< rcx_5)
                
                int32_t r14_4 = rsi_2 - r9_2.d
                
                if (r12.b != 0)
                    if (r13_2 != r9_2.d)
                        int64_t rcx_7 = *(arg1 + 0x2c0)
                        result =
                            memmove(rcx_7 + (sx.q(r13_2) << 3), rcx_7 + (r9_2 << 3), r14_4 << 3)
                    
                    r13_2 += r14_4
                
                r12.b ^= 1
            while (rdi s< rcx_5)
            
            rsi = arg1
            lpCriticalSection = lpCriticalSection_1
            *(rsi + 0x2c8) = r13_2
        
        rdi.b = 1
    
    if (lpCriticalSection != 0)
        result = LeaveCriticalSection(lpCriticalSection)
    
    if (rdi.b != 0)
        break
    
    sub_140b73230(zx.o(0))

return result
