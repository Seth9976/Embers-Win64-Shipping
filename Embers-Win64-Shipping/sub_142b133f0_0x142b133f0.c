// 函数: sub_142b133f0
// 地址: 0x142b133f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 s> 0)
    int64_t rax
    rax.b = 0
    return rax

if (*(arg1 + 0x150) == 0)
    int64_t* rsi_1 = sub_142b68c10(arg2)
    int64_t* rax_1
    
    if (*arg2 s> 0)
        rax_1.b = 0
        return rax_1
    
    rax_1 = j_sub_142a7dd00(0x90)
    int64_t* arg_10 = rax_1
    
    if (rax_1 == 0)
        rax_1 = nullptr
    else
        __builtin_memset(rax_1, 0, 0x30)
        rax_1[6] = rsi_1
        rax_1[7] = 0x12000000
        __builtin_memset(&rax_1[8], 0, 0x3c)
        rax_1[0x10] = 0
        rax_1[0x11].d = 0
    
    *(arg1 + 0x150) = rax_1
    
    if (rax_1 == 0)
        *arg2 = 7
        rax_1.b = 0
        return rax_1

*(arg1 + 0x18) = *(arg1 + 0x150)
int64_t rax_2
rax_2.b = 1
return rax_2
