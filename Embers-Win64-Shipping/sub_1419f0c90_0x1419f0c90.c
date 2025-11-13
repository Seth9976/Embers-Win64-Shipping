// 函数: sub_1419f0c90
// 地址: 0x1419f0c90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x50c) == 0)
    return 

int64_t* i = *(arg1 + 0x2f0)

for (void* r12_1 = &i[sx.q(*(arg1 + 0x2f8))]; i != r12_1; i = &i[1])
    void* rax_1 = *i
    int64_t rsi_1 = 0
    void** rdi_1 = *(rax_1 + 0x450)
    uint64_t r14_2 = sx.q(*(rax_1 + 0x458)) << 3 u>> 3
    
    if (rdi_1 u> &rdi_1[sx.q(*(rax_1 + 0x458))])
        r14_2 = 0
    
    if (r14_2 != 0)
        do
            void* rcx = *rdi_1
            
            if (rcx != 0)
                sub_142131d00(rcx, arg2, arg3)
            
            rdi_1 = &rdi_1[1]
            rsi_1 += 1
        while (rsi_1 != r14_2)
