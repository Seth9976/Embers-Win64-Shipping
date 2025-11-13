// 函数: sub_141f1bb70
// 地址: 0x141f1bb70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i = 0

if (arg1[0x82].d s<= 0)
    return 

do
    int64_t j = (*(*arg1 + 0x548))(arg1, zx.q(i))
    int64_t* r9_1 = *arg2
    int64_t r8_1 = sx.q(arg2[1].d)
    int64_t* rcx_1 = r9_1
    void* rax = &r9_1[r8_1]
    
    if (r9_1 != rax)
        while (*rcx_1 != j)
            rcx_1 = &rcx_1[1]
            
            if (rcx_1 == rax)
                goto label_141f1bbec
    
    if (r9_1 == rax || ((rcx_1 - r9_1) s>> 3).d == 0xffffffff)
    label_141f1bbec:
        int32_t rax_2 = (r8_1 + 1).d
        arg2[1].d = rax_2
        
        if (rax_2 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        *((r8_1 << 3) + *arg2) = j
    
    i += 1
while (i s< arg1[0x82].d)
