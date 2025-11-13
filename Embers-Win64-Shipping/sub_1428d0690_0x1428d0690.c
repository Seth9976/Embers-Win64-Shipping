// 函数: sub_1428d0690
// 地址: 0x1428d0690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0x28
__chkstk(0x28)
int32_t* rsi = arg8
int64_t r10 = arg4
int64_t i = arg3
char* r15 = arg2
int64_t rbp = arg1
int32_t result_1 = *rsi

if (result_1 != 0)
    while (i != 0)
        result = zx.q(result_1)
        i -= 1
        char rcx = *(result + arg7) ^ *rbp
        rbp += 1
        *r15 = rcx
        r15 = &r15[1]
        result_1 = (result_1 + 1) & 0xf
        
        if (result_1 == 0)
            break

int64_t r9 = arg9
char* rcx_1 = arg6

if (i u>= 0x10)
    uint64_t i_3 = i u>> 4
    int32_t arg_18 = 0
    i -= i_3 * 0x10
    uint64_t* rsi_2 = r15 - arg7
    uint64_t rax_2 = i_3 << 4
    int64_t* r14_2 = rbp - arg7
    r15 = &r15[rax_2]
    rbp += rax_2
    uint64_t i_1
    
    do
        r9(arg5, arg7, arg4)
        sub_1428d0a80(arg6)
        int64_t j_1 = 2
        int64_t rcx_3 = arg7
        int64_t j
        
        do
            result = *(r14_2 + rcx_3) ^ *rcx_3
            *(rsi_2 + rcx_3) = result
            rcx_3 += 8
            j = j_1
            j_1 -= 1
        while (j != 1)
        rcx_1 = arg6
        rsi_2 = &rsi_2[2]
        r9 = arg9
        r14_2 = &r14_2[2]
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    result_1 = 0
    rsi = arg8
    r10 = arg4

if (i != 0)
    r9(rcx_1, arg7, r10)
    sub_1428d0a80(arg6)
    int64_t i_2
    
    do
        char* result_2 = zx.q(result_1)
        result_1 += 1
        result.b = result_2[rbp] ^ result_2[arg7]
        *(result_2 + r15) = result.b
        i_2 = i
        i -= 1
    while (i_2 != 1)

*rsi = result_1
return result
