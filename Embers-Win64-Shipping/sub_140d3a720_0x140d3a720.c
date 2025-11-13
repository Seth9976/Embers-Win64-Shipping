// 函数: sub_140d3a720
// 地址: 0x140d3a720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = 0
int64_t* r14 = *arg2
int64_t result = &r14[arg2[1]]
uint64_t r12_1 = sx.q(arg2[1].d) << 3 u>> 3

if (r14 u> result)
    r12_1 = 0

if (r12_1 != 0)
    do
        int64_t* rdx = *(arg1 + 0x10)
        int64_t r8_1 = sx.q(*(arg1 + 0x18))
        int64_t* rax_1 = rdx
        int64_t i = *r14
        void* rcx = &rdx[r8_1]
        
        if (rdx != rcx)
            while (*rax_1 != i)
                rax_1 = &rax_1[1]
                
                if (rax_1 == rcx)
                    goto label_140d3a7ac
            
            result = (rax_1 - rdx) s>> 3
        
        if (rdx == rcx || result.d == 0xffffffff)
        label_140d3a7ac:
            int32_t rax_3 = (r8_1 + 1).d
            *(arg1 + 0x18) = rax_3
            
            if (rax_3 s> *(arg1 + 0x1c))
                sub_1405a4d70(arg1 + 0x10)
            
            result = *(arg1 + 0x10)
            *((r8_1 << 3) + result) = i
        
        r14 = &r14[1]
        rsi += 1
    while (rsi != r12_1)

return result
