// 函数: sub_1425e59f0
// 地址: 0x1425e59f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* lpCriticalSection = arg1 + 0x28
EnterCriticalSection(lpCriticalSection)
int64_t* rcx_1 = *arg3
uint64_t result = (*(*rcx_1 + 0x48))(rcx_1)
int64_t r8 = sx.q(*(arg1 + 0x20))
int32_t* result_1 = result

if (r8.d != 0)
    void* rdi = arg1
    int32_t rbp_1 = 0
    int32_t r12_1 = 0
    int32_t* rdx = *(rdi + 0x18)
    int32_t rcx_5 = (rdx[3] ^ *(result + 0xc)) | (rdx[1] ^ result_1[1]) | (rdx[2] ^ result_1[2])
    result = zx.q(*result_1) ^ zx.q(*rdx)
    int64_t r13
    r13.b = (rcx_5 | result.d) != 0
    int64_t rsi_1 = 0
    
    do
        int64_t r9_1 = sx.q(rbp_1)
        rsi_1 += 1
        rbp_1 += 1
        
        if (rsi_1 s< r8)
            result = (rsi_1 << 4) + *(rdi + 0x18)
            
            do
                int32_t rcx_13
                rcx_13.b = ((*(result + 4) ^ result_1[1]) | (*(result + 8) ^ result_1[2])
                    | (*(result + 0xc) ^ result_1[3]) | (*result ^ *result_1)) != 0
                
                if (zx.d(r13.b) != rcx_13)
                    break
                
                rbp_1 += 1
                rsi_1 += 1
                result += 0x10
            while (rsi_1 s< r8)
            
            rdi = arg1
        
        int32_t r14_3 = rbp_1 - r9_1.d
        
        if (r13.b != 0)
            if (r12_1 != r9_1.d)
                result = memmove((sx.q(r12_1) << 4) + *(rdi + 0x18), (r9_1 << 4) + *(rdi + 0x18), 
                    r14_3 << 4)
            
            r12_1 += r14_3
        
        r13.b ^= 1
    while (rsi_1 s< r8)
    
    *(rdi + 0x20) = r12_1

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection) __tailcall
