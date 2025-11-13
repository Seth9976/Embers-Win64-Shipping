// 函数: sub_142bea0c0
// 地址: 0x142bea0c0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint32_t rsi = zx.d(*(arg1 + 8))
char* rbx = *(arg1 + 0x10)
int32_t rdi = 0
int32_t arg_8
char* result = sub_142b99a90(arg2, 1, 0, rsi + 1, 0, &arg_8)

if (arg_8 != 0)
    return 0

if (rsi != 0)
    char* result_1 = result
    
    do
        uint32_t rax_2 = zx.d(*rbx)
        rbx = &rbx[1]
        
        if (rax_2 == 0)
            break
        
        if (rax_2 - 0x20 u> 0x5f)
            rax_2 = 0x3f
        
        rdi += 1
        *result_1 = rax_2.b
        result_1 = &result_1[1]
    while (rdi u< rsi)

result[zx.q(rdi)] = 0
return result
