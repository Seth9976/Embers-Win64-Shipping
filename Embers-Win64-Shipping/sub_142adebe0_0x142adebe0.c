// 函数: sub_142adebe0
// 地址: 0x142adebe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r13 = arg5

if (*r13 s> 0)
    return 

if ((*(arg2 + 8) & 1) == 0)
    *(arg2 + 8) &= 0x1f
else
    *(arg2 + 8) = 2

uint64_t rsi
rsi.b = 0
int32_t r14_1 = 0

if (sub_142a4a1f0(arg1) s<= 0)
    return 

int16_t* r12_1 = nullptr

while (true)
    int16_t rcx = *(arg1 + 8)
    int32_t rax_2
    
    if (rcx s< 0)
        rax_2 = *(arg1 + 0xc)
    else
        rax_2 = sx.d(rcx) s>> 5
    
    int16_t rdx
    
    if (r14_1 u>= rax_2)
        rdx = -1
    else
        void* rax_3 = arg1 + 0xa
        
        if ((rcx.b & 2) == 0)
            rax_3 = *(arg1 + 0x18)
        
        rdx = *(r12_1 + rax_3)
    
    if (rsi.b != 0)
        char rcx_1 = 0
        
        if (rdx != 0x27)
            rcx_1 = rsi.b
        
        rsi = zx.q(rcx_1)
        goto label_142aded0f
    
    if (rdx != 0x27)
        if (rdx u>= 0x80 || *(zx.q(rdx) + &data_14365a0c0) == 0)
            goto label_142aded0f
        
        int16_t rax_7 = *(arg3 + 8)
        int32_t r9_1
        
        if (rax_7 s< 0)
            r9_1 = *(arg3 + 0xc)
        else
            r9_1 = sx.d(rax_7) s>> 5
        
        int32_t rax = sub_142a491f0(arg3, rdx, 0, r9_1)
        
        if (rax != 0xffffffff)
            int16_t rdx_1 = *(arg4 + 8)
            int32_t rcx_4
            
            if (rdx_1 s< 0)
                rcx_4 = *(arg4 + 0xc)
            else
                rcx_4 = sx.d(rdx_1) s>> 5
            
            if (rax u>= rcx_4)
                rdx = -1
            else
                void* rcx_5 = arg4 + 0xa
                
                if ((rdx_1.b & 2) == 0)
                    rcx_5 = *(arg4 + 0x18)
                
                rdx = *(rcx_5 + (sx.q(rax) << 1))
            
            goto label_142aded0f
    else
        rsi.b = 1
    label_142aded0f:
        arg5.w = rdx
        sub_142a48d70(arg2, &arg5, 0, 1)
        r14_1 += 1
        r12_1 = &r12_1[1]
        
        if (r14_1 s< sub_142a4a1f0(arg1))
            continue
        else if (rsi.b == 0)
            break
    
    *r13 = 3
    break
