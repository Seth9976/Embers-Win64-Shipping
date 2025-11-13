// 函数: sub_141fc3620
// 地址: 0x141fc3620
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1[1].d == *(arg1 + 0x34))
    return 0

void* r8 = arg1[8]
int32_t rbp = 0
void* r15 = &arg1[7]
void* rax_6 = r15
int64_t rdx_2 = (sx.q((arg2 u>> 0x20).d) ^ sx.q(arg2.d)) & sx.q(arg1[9].d - 1)

if (r8 != 0)
    rax_6 = r8

void* rsi = rax_6 + (rdx_2 << 2)
int32_t i = *(rax_6 + (rdx_2 << 2))

while (i != 0xffffffff)
    int64_t arg_8 = arg2
    int64_t rcx_1 = sx.q(i) * 5
    int64_t rax_8 = *arg1
    void* r14_1 = rax_8 + (rcx_1 << 2)
    int64_t arg_18 = *(rax_8 + (rcx_1 << 2))
    
    if (sub_140664af0(&arg_18, &arg_8) != 0)
        int64_t rdx_4 = sx.q(*rsi)
        
        if (arg1[1].d != *(arg1 + 0x34))
            void* r8_1 = *(r15 + 8)
            int64_t r9_1 = *arg1
            void* r10_1 = r9_1 + rdx_4 * 0x14
            int64_t rcx_5 = sx.q(arg1[9].d - 1) & sx.q(*(r10_1 + 0x10))
            
            if (r8_1 != 0)
                r15 = r8_1
            
            int32_t j = *(r15 + (rcx_5 << 2))
            void* r8_2 = r15 + (rcx_5 << 2)
            
            while (j != 0xffffffff)
                if (j == rdx_4.d)
                    *r8_2 = *(r10_1 + 0xc)
                    break
                
                int64_t j_1 = sx.q(j)
                j = *(r9_1 + ((j_1 * 5 + 3) << 2))
                r8_2 = r9_1 + ((j_1 * 5 + 3) << 2)
        
        rbp = 1
        sub_1405c3870(arg1, rdx_4.d, 1)
        break
    
    i = *(r14_1 + 0xc)
    rsi = r14_1 + 0xc

return zx.q(rbp)
