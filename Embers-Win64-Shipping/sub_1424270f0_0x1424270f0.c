// 函数: sub_1424270f0
// 地址: 0x1424270f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t i_2 = arg1[1].d
int32_t rdi = 0
int64_t r11 = *arg1
void* r9 = *arg2
int64_t* rsi = arg1
int32_t i = i_2

if (i_2 s> 0)
    do
        int32_t rcx_1 = i & 0x80000001
        
        if (rcx_1 s< 0)
            rcx_1 = ((rcx_1 - 1) | 0xfffffffe) + 1
        
        int32_t temp1_1
        int32_t temp2_1
        temp1_1:temp2_1 = sx.q(i)
        int32_t i_1 = (temp2_1 - temp1_1) s>> 1
        i = i_1
        int32_t rax_4 = i_1 + rdi
        void* rax_5 = *((sx.q(rax_4) << 4) + r11)
        
        if (rax_5 == 0)
            rax_5.b = rax_5 != 0
        else if (r9 == 0)
            rax_5.b = rax_5 != 0
        else
            arg1 = zx.q(*(rax_5 + 0xb4))
            int32_t temp5_1 = *(r9 + 0xb4)
            
            if (arg1.d != temp5_1)
                rax_5.b = arg1.d s< temp5_1
            else
                rax_5.b = rax_5 u< r9
        
        if (rax_5.b != 0)
            rdi = rax_4 + rcx_1
    while (i s> 0)
    
    if (rdi s< 0 || rdi s>= i_2)
        goto label_1424271d2
    
    goto label_142427194

void** rax_8

if (rdi s>= i_2)
label_1424271d2:
    rsi[1].d = i_2 + 1
    
    if (i_2 + 1 s> *(rsi + 0xc))
        sub_1405a4f90(rsi)
    
    int64_t rbx_2 = sx.q(rdi) << 4
    int64_t rdx_4 = *rsi + rbx_2
    memmove(rdx_4 + 0x10, rdx_4, (i_2 - rdi) << 4)
    r9 = *arg2
    rax_8 = *rsi + rbx_2
else
label_142427194:
    rax_8 = (sx.q(rdi) << 4) + r11
    
    if (r9 == 0)
        arg1.b = r9 != 0
    else
        arg1 = *rax_8
        
        if (arg1 == 0)
            arg1.b = r9 != 0
        else
            int32_t rdx_1 = *(r9 + 0xb4)
            int32_t temp4_1 = *(arg1 + 0xb4)
            
            if (rdx_1 != temp4_1)
                arg1.b = rdx_1 s< temp4_1
            else
                arg1.b = r9 u< arg1
    
    if (arg1.b != 0)
        goto label_1424271d2

*rax_8 = r9
rax_8[1].b = *arg3
return &rax_8[1]
