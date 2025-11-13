// 函数: sub_142a7f4d0
// 地址: 0x142a7f4d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_18 = 0
int32_t* rsi = arg3
int64_t* rax = sub_142a7f760(arg3)

if (*rsi s> 0)
    return nullptr

int64_t* result = sub_142a7dd00(0x10)

if (result == 0)
    *rsi = 7
    return result

int128_t* rax_1 = sub_142a95dc0(rsi)
result[1] = rax_1

if (*rsi s<= 0)
    sub_142a95e90(rax_1, arg2)
    char* rax_2 = strrchr(arg1, 0x5c)
    void* rbx_1 = arg1
    
    if (rax_2 != 0)
        rbx_1 = &rax_2[1]
    
    int64_t rax_3 = -1
    
    do
        rax_3 += 1
    while (*(rbx_1 + rax_3) != 0)
    
    char* rax_5 = sub_142a7dd00(sx.q(rax_3.d + 1))
    *result = rax_5
    char* rcx_5 = rax_5
    
    if (rax_5 != 0)
        char i
        
        do
            i = *rbx_1
            rbx_1 += 1
            *rcx_5 = i
            rcx_5 = &rcx_5[1]
        while (i != 0)
        sub_142a860a0(nullptr)
        void* rax_6 = sub_142a86c30(rax, arg1)
        
        if (rax_6 == 0)
            sub_142a86f50(rax, *result, result, &arg_18)
        else
            arg_18 = 0xffffff81
        
        sub_142a860d0(nullptr)
        int32_t rax_7 = arg_18
        
        if (rax_7 != 0xffffff81 && rax_7 s<= 0)
            return result[1]
        
        *rsi = rax_7
        sub_142a7dcd0(*result)
        sub_142a7dcd0(result[1])
        sub_142a7dcd0(result)
        
        if (rax_6 == 0)
            return nullptr
        
        return *(rax_6 + 8)
    
    *rsi = 7
    sub_142a7dcd0(result[1])

sub_142a7dcd0(result)
return nullptr
