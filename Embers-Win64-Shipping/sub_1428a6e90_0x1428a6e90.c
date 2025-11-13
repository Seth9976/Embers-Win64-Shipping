// 函数: sub_1428a6e90
// 地址: 0x1428a6e90
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t i = 0
char* rbx = arg1

if (*arg1 != 0)
    while (i u< 0x80000000)
        arg1 = &arg1[1]
        i += 1
        
        if (*arg1 == 0)
            break

char* result = sub_1428a6730(zx.q(i u>> 1) & 0x3fffffff)

if (result == 0)
    sub_1428a5670((&result[0xf]).d, (&result[0x76]).d, (&result[0x41]).d, "crypto\o_str.c", 0x9d)
    return 0

char* result_1 = result

for (char i_1 = *rbx; i_1 != 0; i_1 = *rbx)
    rbx = &rbx[1]
    
    if (i_1 != 0x3a)
        char rcx_4 = *rbx
        rbx = &rbx[1]
        
        if (rcx_4 == 0)
            sub_1428a5670(0xf, 0x76, 0x67, "crypto\o_str.c", 0xa7)
            sub_1428a6780(result)
            return nullptr
        
        int32_t rax_1 = sub_1428a6d80(rcx_4)
        int32_t rax_2 = sub_1428a6d80(i_1)
        
        if (rax_1 s< 0 || rax_2 s< 0)
            sub_1428a6780(result)
            sub_1428a5670(0xf, 0x76, 0x66, "crypto\o_str.c", 0xaf)
            return nullptr
        
        rax_2.b <<= 4
        rax_2.b |= rax_1.b
        *result_1 = rax_2.b
        result_1 = &result_1[1]

if (arg2 != 0)
    *arg2 = result_1.d - result.d

return result
