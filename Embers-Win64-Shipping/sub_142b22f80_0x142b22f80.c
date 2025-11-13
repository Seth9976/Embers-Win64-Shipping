// 函数: sub_142b22f80
// 地址: 0x142b22f80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r9 = arg1[4]
int32_t r8 = *arg1
int32_t r10 = r8 + arg2
int64_t result

if (r10 s> r9)
    if (*arg3 s> 0)
        result.b = 0
        return result
    
    int32_t rax_1
    
    do
        int32_t rax = 2
        
        if (r9 s< 0x3e8)
            rax = 4
        
        rax_1 = rax * r9
        r9 = rax_1
    while (rax_1 s< r10)
    
    if (sub_142a5da90(&arg1[2], rax_1, r8) == 0)
        *arg3 = 7
        result.b = 0
        return result

result.b = 1
return result
