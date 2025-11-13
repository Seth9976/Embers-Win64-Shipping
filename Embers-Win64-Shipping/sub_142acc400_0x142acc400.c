// 函数: sub_142acc400
// 地址: 0x142acc400
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int16_t rax = *(arg1 + 8)
int32_t r9_1

if (rax s< 0)
    r9_1 = *(arg1 + 0xc)
else
    r9_1 = sx.d(rax) s>> 5

if (sub_142a491f0(arg1, 0x27, 0, r9_1) s< 0)
    sub_142a48aa0(arg2, arg1, 0)
    return arg2

if ((*(arg2 + 8) & 1) == 0)
    *(arg2 + 8) &= 0x1f
else
    *(arg2 + 8) = 2

int64_t rsi
rsi.b = 0
int32_t rbp = 0

if (sub_142a4a1f0(arg1) s> 0)
    int16_t* r14_1 = nullptr
    int32_t rax_8
    
    do
        int16_t rcx_2 = *(arg1 + 8)
        int32_t rax_5
        
        if (rcx_2 s< 0)
            rax_5 = *(arg1 + 0xc)
        else
            rax_5 = sx.d(rcx_2) s>> 5
        
        int16_t arg_8
        int16_t rax_7
        
        if (rbp u>= rax_5)
            rax_7 = -1
        label_142acc4f2:
            rsi.b = 0
            arg_8 = rax_7
            sub_142a48d70(arg2, &arg_8, 0, 1)
        else
            void* rax_6 = arg1 + 0xa
            
            if ((rcx_2.b & 2) == 0)
                rax_6 = *(arg1 + 0x18)
            
            rax_7 = *(r14_1 + rax_6)
            
            if (rax_7 != 0x27)
                goto label_142acc4f2
            
            if (rsi.b == 0)
                rsi.b = 1
            else
                arg_8 = 0x27
                sub_142a48d70(arg2, &arg_8, 0, 1)
                rsi.b = 0
        rbp += 1
        r14_1 = &r14_1[1]
        rax_8 = sub_142a4a1f0(arg1)
    while (rbp s< rax_8)

return arg2
