// 函数: sub_1407feb60
// 地址: 0x1407feb60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rsi = sx.q(arg2[1].d)
int32_t rax = (rsi + 1).d
arg2[1].d = rax

if (rax s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

*(*arg2 + (rsi << 3)) = *(arg1 + 0x60)
int64_t rsi_1 = sx.q(arg2[1].d)
int32_t rax_2 = (rsi_1 + 1).d
arg2[1].d = rax_2

if (rax_2 s> *(arg2 + 0xc))
    sub_1405a4d70(arg2)

int64_t result = *(arg1 + 0x38)
*(*arg2 + (rsi_1 << 3)) = result

if (arg3 == 0)
    int64_t rsi_2 = sx.q(arg2[1].d)
    int32_t rax_3 = (rsi_2 + 1).d
    arg2[1].d = rax_3
    
    if (rax_3 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    *(*arg2 + (rsi_2 << 3)) = *(arg1 + 0x88)
    int64_t rsi_3 = sx.q(arg2[1].d)
    int32_t rax_5 = (rsi_3 + 1).d
    arg2[1].d = rax_5
    
    if (rax_5 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    result = *(arg1 + 0xb0)
    *(*arg2 + (rsi_3 << 3)) = result

int32_t i_1 = 0
int32_t i = 0

if (*(arg1 + 0x1d8) s> 0)
    int64_t* rsi_4 = nullptr
    
    do
        int64_t r12_1 = *(arg1 + 0x1d0)
        
        if (*(rsi_4 + r12_1) != 0)
            int64_t r15_1 = sx.q(arg2[1].d)
            int32_t rax_6 = (r15_1 + 1).d
            arg2[1].d = rax_6
            
            if (rax_6 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            result = *(rsi_4 + r12_1)
            *(*arg2 + (r15_1 << 3)) = result
        
        i += 1
        rsi_4 = &rsi_4[0xb]
    while (i s< *(arg1 + 0x1d8))

if (arg3 == 0 && *(arg1 + 0x1e8) s> 0)
    int64_t* r14 = nullptr
    
    do
        result = *(arg1 + 0x1e0)
        void* rsi_5 = *(r14 + result)
        
        if (rsi_5 != 0 && *(rsi_5 + 0x28) != 0)
            int64_t r15_2 = sx.q(arg2[1].d)
            int32_t rax_7 = (r15_2 + 1).d
            arg2[1].d = rax_7
            
            if (rax_7 s> *(arg2 + 0xc))
                sub_1405a4d70(arg2)
            
            result = *(rsi_5 + 0x28)
            *(*arg2 + (r15_2 << 3)) = result
        
        i_1 += 1
        r14 = &r14[1]
    while (i_1 s< *(arg1 + 0x1e8))

if (*(arg1 + 0xd8) == 1)
    int64_t rsi_6 = sx.q(arg2[1].d)
    int32_t rax_8 = (rsi_6 + 1).d
    arg2[1].d = rax_8
    
    if (rax_8 s> *(arg2 + 0xc))
        sub_1405a4d70(arg2)
    
    result = *(arg1 + 0x1f0)
    *(*arg2 + (rsi_6 << 3)) = result

return result
