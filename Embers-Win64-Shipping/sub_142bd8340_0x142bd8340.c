// 函数: sub_142bd8340
// 地址: 0x142bd8340
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = arg1[7]
int64_t rdi = *arg1
int32_t result_1
int64_t rax = sub_142b99860(rbp, arg2.d, &result_1)
*arg1 = rax
int32_t result = result_1

if (result != 0)
    *arg1 = rdi
    return result

if (rdi != 0)
    memcpy(rax, rdi, (arg1[2]).d)
    int64_t* i = arg1[5]
    int64_t rdx_2 = *arg1 - rdi
    
    for (void* r9_1 = &i[sx.q(*(arg1 + 0x1c))]; i u< r9_1; i = &i[1])
        int64_t r8_2 = *i
        
        if (r8_2 != 0)
            *i = r8_2 + rdx_2
    
    sub_142b99980(rbp, rdi)

arg1[2] = arg2
return 0
