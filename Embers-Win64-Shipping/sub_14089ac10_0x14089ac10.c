// 函数: sub_14089ac10
// 地址: 0x14089ac10
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = data_143ceaee8

if (lpCriticalSection == 0)
    return 

EnterCriticalSection(lpCriticalSection)
int32_t rdi_1 = data_143ceaedc
int32_t rdx_1 = 0

if (rdi_1 s> 0)
    int64_t* r8_1 = data_143ceaee0
    int64_t* rax = r8_1
    
    do
        if (arg1 == *rax)
            if (rdx_1 s< rdi_1)
                data_143ceaedc = rdi_1 - 1
                
                if (rdi_1 - 1 s<= 0)
                    data_143ceaed8 = 0
                    free(r8_1)
                    data_143ceaee0 = 0
                else if (rdx_1 s< rdi_1 - 1)
                    void* rdi_2 = &r8_1[sx.q(rdx_1)]
                    __builtin_memcpy(rdi_2, rdi_2 + 8, zx.q(rdi_1 - 1 - rdx_1) << 3)
            
            break
        
        rdx_1 += 1
        rax = &rax[1]
    while (rdx_1 s< rdi_1)

CRITICAL_SECTION* rcx_3 = data_143ceaee8

if (rcx_3 != 0)
    return LeaveCriticalSection(rcx_3) __tailcall
