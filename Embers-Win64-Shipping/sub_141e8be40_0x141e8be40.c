// 函数: sub_141e8be40
// 地址: 0x141e8be40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x3a8)
uint64_t* rcx_1 = arg1 + 0x398
int64_t rbp = 0
uint64_t r14 = *rcx_1
int64_t r12 = sx.q(rcx_1[1].d) << 3
int64_t result = r12 + r14
uint64_t r12_1 = r12 u>> 3

if (r14 u> result)
    r12_1 = 0

if (r12_1 != 0)
    do
        int64_t* r8_1 = *(arg1 + 0x388)
        int64_t rdx_1 = sx.q(*(arg1 + 0x390))
        int64_t* rax_1 = r8_1
        int64_t i = *r14
        void* rcx_2 = &r8_1[rdx_1]
        
        if (r8_1 != rcx_2)
            while (*rax_1 != i)
                rax_1 = &rax_1[1]
                
                if (rax_1 == rcx_2)
                    goto label_141e8beec
            
            result = (rax_1 - r8_1) s>> 3
        
        if (r8_1 == rcx_2 || result.d == 0xffffffff)
        label_141e8beec:
            int32_t rax_3 = (rdx_1 + 1).d
            *(arg1 + 0x390) = rax_3
            
            if (rax_3 s> *(arg1 + 0x394))
                sub_1405a4d70(arg1 + 0x388)
            
            result = *(arg1 + 0x388)
            *((rdx_1 << 3) + result) = i
        
        r14 += 8
        rbp += 1
    while (rbp != r12_1)
    
    rcx_1 = arg1 + 0x398

rcx_1[1].d = 0

if (*(rcx_1 + 0xc) s<= 0xffffffff)
    result = sub_1405c5570(rcx_1, 0)

if (arg1 != -0x3a8)
    result = LeaveCriticalSection(arg1 + 0x3a8)

int32_t rdi_2 = *(arg1 + 0x390)
int32_t rdi_3 = rdi_2 - 1

if (rdi_2 - 1 s>= 0)
    void** r14_1 = sx.q(rdi_3) << 3
    void** r15_2 = r14_1
    int32_t temp1_1
    
    do
        void* rsi_1 = *(r14_1 + *(arg1 + 0x388))
        
        if (rsi_1 == 0)
        label_141e8bfae:
            int32_t rdx_4 = *(arg1 + 0x390)
            int32_t rax_9 = rdx_4 - rdi_3 - 1
            
            if (rax_9 s>= 1)
                rax_9 = 1
            
            if (rax_9 != 0)
                void* rcx_7 = *(arg1 + 0x388)
                memcpy(rcx_7 + r15_2, rcx_7 + (sx.q(rdx_4 - rax_9) << 3), rax_9 << 3)
                rdx_4 = *(arg1 + 0x390)
            
            result = zx.q(rdx_4 - 1)
            *(arg1 + 0x390) = result.d
        else
            int32_t rax_6 = 0
            
            if (0 == *(rsi_1 + 0x1a4))
                *(rsi_1 + 0x1a4) = 0
            else
                rax_6 = *(rsi_1 + 0x1a4)
            
            result = EnterCriticalSection(rsi_1 + 0x1a8)
            int32_t rsi_2 = *(rsi_1 + 0x1d8)
            
            if (rsi_1 != -0x1a8)
                result = LeaveCriticalSection(rsi_1 + 0x1a8)
            
            if (rax_6 == 2 && rsi_2 s<= 0)
                goto label_141e8bfae
        
        r15_2 -= 8
        r14_1 -= 8
        temp1_1 = rdi_3
        rdi_3 -= 1
    while (temp1_1 - 1 s>= 0)

return result
