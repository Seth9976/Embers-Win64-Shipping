// 函数: sub_14240f480
// 地址: 0x14240f480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

arg2[1].d = 0

if (*(arg2 + 0xc) s<= 0xffffffff)
    sub_140638c50(arg2, 0)

int64_t* i = *(arg1 + 0x80)
uint64_t result = sx.q(*(arg1 + 0x88))

for (void* rsi = &i[result * 5]; i != rsi; i = &i[5])
    result = sub_140664c50(arg2, i)

int64_t* i_1 = *(arg1 + 0xa0)

for (void* rbp_3 = &i_1[sx.q(*(arg1 + 0xa8)) * 2]; i_1 != rbp_3; i_1 = &i_1[2])
    uint64_t r8_1 = *arg2
    int64_t rdx_1 = sx.q(arg2[1].d)
    uint64_t rax = r8_1
    int64_t j = *i_1
    int64_t r14_1 = rdx_1 << 3
    int64_t rcx_3 = r14_1 + r8_1
    
    if (r8_1 != rcx_3)
        while (*rax != j)
            rax += 8
            
            if (rax == rcx_3)
                goto label_14240f53d
        
        result = (rax - r8_1) s>> 3
    
    if (r8_1 == rcx_3 || result.d == 0xffffffff)
    label_14240f53d:
        int32_t rax_2 = (rdx_1 + 1).d
        arg2[1].d = rax_2
        
        if (rax_2 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        result = *arg2
        *(r14_1 + result) = j

return result
