// 函数: sub_1428a6ca0
// 地址: 0x1428a6ca0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
uint64_t i_2 = zx.q(arg2)
char* rbx = arg1

if (arg2 == 0)
    return sub_1428a6a70(1) __tailcall

char* result_1 = sub_1428a6730(sx.q((i_2 * 3).d))
char* result = result_1

if (result_1 == 0)
    sub_1428a5670((&result_1[0xf]).d, (&result_1[0x75]).d, (&result_1[0x41]).d, "crypto\o_str.c", 
        0xcc)
    return 0

if (i_2.d s> 0)
    uint64_t i_1 = i_2
    uint64_t i
    
    do
        uint64_t rcx_3 = zx.q(*rbx)
        rbx = &rbx[1]
        *result_1 = (*"0123456789ABCDEF")[rcx_3 u>> 4]
        result_1[1] = *((zx.q(rbx[-1]) & 0xf) + "0123456789ABCDEF")
        result_1[2] = 0x3a
        result_1 = &result_1[3]
        i = i_1
        i_1 -= 1
    while (i != 1)

result_1[-1] = 0
return result
