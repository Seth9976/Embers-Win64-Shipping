// 函数: sub_142932010
// 地址: 0x142932010
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rsi = 0
int32_t i = 0
char* rax = arg2

if (*arg2 != 0)
    while (i u< 0x80000000)
        rax = &rax[1]
        i += 1
        
        if (*rax == 0)
            break

int32_t rax_4

if (strstr(arg2, &data_142d63b88) != 0)
    rax_4 = 1
else if (strstr(arg2, U"\") != 0)
    rax_4 = 1
else
    char* rax_3 = strstr(arg2, &data_142d6bc34)
    
    if (rax_3 != 0)
        rax_4 = 1
    else
        rsi = (&rax_3[1]).d
        rax_4 = rsi + 4

char* result = sub_1428a6730(sx.q(rax_4 + (i & 0x7fffffff)))

if (result == 0)
    sub_1428a5670((&result[0x25]).d, (&result[0x7d]).d, (&result[0x6d]).d, 
        "crypto\dso\dso_win32.c", 0x1d4)
    return 0

char* rdx_2 = "%s.dll"

if (rsi == 0)
    rdx_2 = &data_142dfae04

sub_1425f2950(result, rdx_2, arg2)
return result
