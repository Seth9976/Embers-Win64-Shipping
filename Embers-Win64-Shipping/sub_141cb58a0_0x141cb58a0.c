// 函数: sub_141cb58a0
// 地址: 0x141cb58a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* lpCriticalSection = arg1 + 8
int32_t r14 = arg2
EnterCriticalSection(lpCriticalSection)
uint64_t result = zx.q(*(arg1 + 0x38))
void* rdx = arg1 + 0x30

if (result.d != 0)
    result = zx.q(result.d - 1)
    
    if (result.d s> 0)
        result = zx.q(*(arg1 + 0x50))
        int32_t rdi_1 = 0
        int32_t arg_10
        
        if (r14 != 0xffffffff)
            if (result.d s<= r14)
                r14 = result.d
            
            arg_10 = r14
        else
            arg_10 = result.d
        
        int32_t i = 0
        
        if (result.d s> 0)
            int64_t r14_1 = 0
            int64_t* r12_1 = nullptr
            int64_t r13_1 = 0
            int64_t r15_1 = 0
            
            do
                result = sub_140a32a50((sx.q(i) << 4) + *(arg1 + 0x48), rdx, 1)
                
                if (result.b != 0)
                    if (r15_1 != r14_1)
                        int64_t* rax = *(arg1 + 0x48)
                        int64_t rcx_4 = *(r12_1 + rax)
                        int64_t* rdx_1 = r12_1 + rax
                        void* r8_1 = rax + r13_1
                        *rdx_1 = *(rax + r13_1)
                        *r8_1 = rcx_4
                        result = *(r8_1 + 8)
                        int64_t rcx_5 = rdx_1[1]
                        rdx_1[1] = result
                        *(r8_1 + 8) = rcx_5
                    
                    r14_1 += 1
                    r13_1 += 0x10
                    rdi_1 += 1
                    
                    if (rdi_1 s>= arg_10)
                        break
                
                i += 1
                rdx = arg1 + 0x30
                r15_1 += 1
                r12_1 = &r12_1[2]
            while (i s< *(arg1 + 0x50))

if (lpCriticalSection == 0)
    return result

return LeaveCriticalSection(lpCriticalSection) __tailcall
