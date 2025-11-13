// 函数: sub_141a51cf0
// 地址: 0x141a51cf0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg2 = 0
arg2[1] = 0
void* rax_1 = (*(*(arg1 + 0x28) + 8))(arg1 + 0x28)
int32_t* i = *(rax_1 + 0xd8)

for (void* rbp = &i[sx.q(*(rax_1 + 0xe0))]; i != rbp; i = &i[1])
    int32_t* rcx_7
    
    if (*(arg1 + 0xd8) == *(arg1 + 0x104))
    label_141a51db5:
        rcx_7 = nullptr
    else
        void* r8 = arg1 + 0x108
        void* rdx = *(r8 + 8)
        int64_t r9_1 = sx.q(*i)
        
        if (rdx != 0)
            r8 = rdx
        
        int32_t rax_4 = *(r8 + (((sx.q(*(arg1 + 0x118)) - 1) & r9_1) << 2))
        
        if (rax_4 == 0xffffffff)
        label_141a51db5_1:
            rcx_7 = nullptr
        else
            while (true)
                rcx_7 = sx.q(rax_4) * 0xc0 + *(arg1 + 0xd0)
                
                if (*rcx_7 == r9_1.d)
                    break
                
                rax_4 = rcx_7[0x2e]
                
                if (rax_4 == 0xffffffff)
                    goto label_141a51db5_2
            
            if (rax_4 == 0xffffffff)
            label_141a51db5_2:
                rcx_7 = nullptr
    
    int32_t* rbx_1 = &rcx_7[2]
    
    if (rcx_7 == 0)
        rbx_1 = nullptr
    
    int64_t* r9_3
    
    if (rbx_1 == 0)
        int64_t var_48 = 0
        r9_3 = &var_48
        int64_t var_40_1 = 0
    else
        int64_t* rax_5 = sub_140d3c6e0(rbx_1)
        int64_t rax_6
        
        if (rax_5 != 0)
            int64_t rdx_1 = *rax_5
            rax_6 = (*(rdx_1 + 0x280))(rax_5, rdx_1)
        
        int64_t var_58
        
        if (rax_5 == 0 || rax_6 == 0)
            var_58 = 0
            r9_3 = &var_58
            int64_t var_50_1 = 0
        else
            sub_141a630b0(&rbx_1[4])
            sub_141a63190(&rbx_1[0x18])
            (*(*(arg1 + 0x28) + 0x70))(arg1 + 0x28)
            sub_141a4a870(rbx_1, &var_58, arg3, arg1 + 0x28)
            r9_3 = &var_58
    
    uint128_t zmm0 = *r9_3
    int64_t r8_3 = zmm0.q
    int64_t rcx_14 = _mm_bsrli_si128(zmm0, 8).q
    
    if (((r8_3 u>> 0x20).d | (rcx_14 u>> 0x20).d | rcx_14.d | r8_3.d) != 0)
        int32_t rax_10 = *i
        int64_t rbx_2 = sx.q(arg2[1].d)
        char var_34_1 = 1
        int32_t rax_11 = (rbx_2 + 1).d
        uint128_t var_30_1 = *r9_3
        arg2[1].d = rax_11
        
        if (rax_11 s> *(arg2 + 0xc))
            sub_1405a4df0(arg2)
        
        int64_t rax_12 = *arg2
        int64_t rcx_16 = rbx_2 * 3
        *(rax_12 + (rcx_16 << 3)) = rax_10.o
        *(rax_12 + (rcx_16 << 3) + 0x10) = var_30_1:8.q

return arg2
