// 函数: sub_14238e610
// 地址: 0x14238e610
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*(arg1 + 0x10) == 0)
    return 

int64_t* i = *(arg1 + 0x68)
int64_t rax

for (void* r15_1 = &i[sx.q(*(arg1 + 0x70)) * 3]; i != r15_1; i = &i[3])
    if (sub_142391cf0(arg1) == 0)
        rax = sub_140d2bce0(i)
        int64_t rsi_2 = sx.q(arg2[1].d)
        int32_t rcx_4 = (rsi_2 + 1).d
        arg2[1].d = rcx_4
        
        if (rcx_4 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        *(*arg2 + (rsi_2 << 3)) = rax
    else
        int64_t* rax_2 = sub_14238cd90(*(arg1 + 0x98), i)
        int64_t rsi_1
        
        if (rax_2 != 0)
            rsi_1 = *rax_2
        
        if (rax_2 == 0 || rsi_1 == 0)
            rsi_1 = 0
        
        int64_t rbp_1 = sx.q(arg2[1].d)
        int32_t rax_3 = (rbp_1 + 1).d
        arg2[1].d = rax_3
        
        if (rax_3 s> *(arg2 + 0xc))
            sub_1405a4d70(arg2)
        
        *(*arg2 + (rbp_1 << 3)) = rsi_1

int64_t* i_1 = *(arg1 + 0x78)

for (void* r13_3 = &i_1[sx.q(*(arg1 + 0x80)) * 2]; i_1 != r13_3; i_1 = &i_1[2])
    void* rax_4 = *i_1
    int64_t* j = *(rax_4 + 0x68)
    
    for (void* r15_2 = &j[sx.q(*(rax_4 + 0x70)) * 3]; j != r15_2; j = &j[3])
        if (sub_142391cf0(arg1) == 0)
            rax = sub_140d2bce0(j)
            int64_t rsi_4 = sx.q(arg2[1].d)
            int32_t rcx_12 = (rsi_4 + 1).d
            arg2[1].d = rcx_12
            
            if (rcx_12 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rsi_4 << 3)) = rax
        else
            int64_t* rax_6 = sub_14238cd90(*(arg1 + 0x98), j)
            int64_t rsi_3
            
            if (rax_6 != 0)
                rsi_3 = *rax_6
            
            if (rax_6 == 0 || rsi_3 == 0)
                rsi_3 = 0
            
            int64_t rbp_3 = sx.q(arg2[1].d)
            int32_t rax_7 = (rbp_3 + 1).d
            arg2[1].d = rax_7
            
            if (rax_7 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            *(*arg2 + (rbp_3 << 3)) = rsi_3
