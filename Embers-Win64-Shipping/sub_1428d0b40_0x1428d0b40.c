// 函数: sub_1428d0b40
// 地址: 0x1428d0b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t result = 0x28
__chkstk(0x28)
int32_t* rsi = arg6
int64_t r10 = arg4
int64_t i = arg3
char* r15 = arg2
int64_t r12 = arg1
int32_t result_1 = *rsi

if (result_1 != 0)
    while (i != 0)
        result = zx.q(result_1)
        i -= 1
        char rcx = *(result + arg5) ^ *r12
        r12 += 1
        *r15 = rcx
        r15 = &r15[1]
        result_1 = (result_1 + 1) & 0xf
        
        if (result_1 == 0)
            break

int64_t r9 = arg7

if (i u>= 0x10)
    uint64_t i_3 = i u>> 4
    void* rsi_2 = r15 - arg5
    int64_t r14_2 = r12 - arg5
    i -= i_3 * 0x10
    uint64_t rax_2 = i_3 << 4
    r12 += rax_2
    uint64_t i_1
    
    do
        result = r9(arg5, arg5, arg4)
        
        if (result_1 u< 0x10)
            result = zx.q(result_1) + arg5
            uint64_t j_1 = zx.q(((0xf - result_1) u>> 3) + 1)
            uint64_t j
            
            do
                *(rsi_2 + result) = *(r14_2 + result) ^ *result
                result += 8
                j = j_1
                j_1 -= 1
            while (j != 1)
        
        r9 = arg7
        rsi_2 += 0x10
        r14_2 += 0x10
        result_1 = 0
        i_1 = i_3
        i_3 -= 1
    while (i_1 != 1)
    r15 = &r15[rax_2]
    r10 = arg4
    rsi = arg6

if (i != 0)
    r9(arg5, arg5, r10)
    int64_t i_2
    
    do
        char* result_2 = zx.q(result_1)
        result_1 += 1
        result.b = result_2[r12] ^ result_2[arg5]
        *(result_2 + r15) = result.b
        i_2 = i
        i -= 1
    while (i_2 != 1)

*rsi = result_1
return result
