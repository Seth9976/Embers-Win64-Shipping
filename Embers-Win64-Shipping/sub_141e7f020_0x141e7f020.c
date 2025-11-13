// 函数: sub_141e7f020
// 地址: 0x141e7f020
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r13 = 0
arg2[1].d = 0

if (*(arg2 + 0xc) != 0)
    sub_1405dadb0(arg2, 0)

arg3[1].d = 0

if (*(arg3 + 0xc) != 0)
    sub_1405dadb0(arg3, 0)

void* r8 = arg1
int64_t rbp = 0
int32_t* rsi = *(r8 + 0x30)
uint64_t r15_1 = sx.q(*(r8 + 0x38)) << 2 u>> 2

if (rsi u> &rsi[sx.q(*(r8 + 0x38))])
    r15_1 = 0

if (r15_1 != 0)
    do
        int32_t* rcx_2 = *(r8 + 0x20)
        int32_t i = *rsi
        void* rdx = &rcx_2[sx.q(*(r8 + 0x28))]
        
        if (rcx_2 == rdx)
        label_141e7f0d0:
            uint64_t rdx_1 = *arg2
            int64_t r8_1 = sx.q(arg2[1].d)
            uint64_t rcx_3 = rdx_1
            int64_t rdi_1 = r8_1 << 2
            int64_t rax_3 = rdi_1 + rdx_1
            
            if (rdx_1 != rax_3)
                while (*rcx_3 != i)
                    rcx_3 += 4
                    
                    if (rcx_3 == rax_3)
                        goto label_141e7f10b
            
            if (rdx_1 == rax_3 || ((rcx_3 - rdx_1) s>> 2).d == 0xffffffff)
            label_141e7f10b:
                int32_t rax_4 = (r8_1 + 1).d
                arg2[1].d = rax_4
                
                if (rax_4 s> *(arg2 + 0xc))
                    sub_1405a4cf0(arg2)
                
                *(rdi_1 + *arg2) = i
            
            r8 = arg1
        else
            while (*rcx_2 != i)
                rcx_2 = &rcx_2[1]
                
                if (rcx_2 == rdx)
                    goto label_141e7f0d0
        
        rsi = &rsi[1]
        rbp += 1
    while (rbp != r15_1)

int32_t* rdi_2 = *(r8 + 0x20)
uint64_t r15_3 = sx.q(*(r8 + 0x28)) << 2 u>> 2

if (rdi_2 u> &rdi_2[sx.q(*(r8 + 0x28))])
    r15_3 = 0

uint64_t result

if (r15_3 != 0)
    do
        result = *(r8 + 0x30)
        int32_t i_1 = *rdi_2
        int64_t rdx_3 = result + (sx.q(*(r8 + 0x38)) << 2)
        
        if (result == rdx_3)
        label_141e7f190:
            uint64_t rdx_4 = *arg3
            int64_t r8_2 = sx.q(arg3[1].d)
            uint64_t rcx_8 = rdx_4
            int64_t rsi_1 = r8_2 << 2
            result = rsi_1 + rdx_4
            
            if (rdx_4 != result)
                while (*rcx_8 != i_1)
                    rcx_8 += 4
                    
                    if (rcx_8 == result)
                        goto label_141e7f1cb
            
            if (rdx_4 == result || ((rcx_8 - rdx_4) s>> 2).d == 0xffffffff)
            label_141e7f1cb:
                int32_t rax_7 = (r8_2 + 1).d
                arg3[1].d = rax_7
                
                if (rax_7 s> *(arg3 + 0xc))
                    sub_1405a4cf0(arg3)
                
                *(rsi_1 + *arg3) = i_1
            
            r8 = arg1
        else
            while (*result != i_1)
                result += 4
                
                if (result == rdx_3)
                    goto label_141e7f190
        
        rdi_2 = &rdi_2[1]
        r13 += 1
    while (r13 != r15_3)

if (arg2[1].d s<= 0 && arg3[1].d s<= 0)
    result.b = 0
    return result

result.b = 1
return result
