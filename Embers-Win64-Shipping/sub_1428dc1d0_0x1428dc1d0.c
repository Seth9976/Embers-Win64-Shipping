// 函数: sub_1428dc1d0
// 地址: 0x1428dc1d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rbp = 0
int32_t rdi = 0

if (*(arg1 + 0x90) != 1)
    sub_1428dce30(arg1, 0, 0, 0)
    int32_t rax_1 = *(arg1 + 0x90)
    
    if (rax_1 == 2)
        sub_1428a5670(0x24, 0x6b, 0x72, "crypto\rand\drbg_lib.c", 0x243)
        return 0
    
    if (rax_1 == 0)
        sub_1428a5670(rax_1 + 0x24, rax_1 + 0x6b, rax_1 + 0x73, "crypto\rand\drbg_lib.c", 0x247)
        return 0

if (arg3 u> *(arg1 + 0x30))
    sub_1428a5670(0x24, 0x6b, 0x75, "crypto\rand\drbg_lib.c", 0x24d)
    return 0

int64_t rsi = arg6

if (rsi u> *(arg1 + 0x60))
    sub_1428a5670(0x24, 0x6b, 0x66, "crypto\rand\drbg_lib.c", 0x251)
    return 0

int32_t rax_6 = data_144020d50

if (*(arg1 + 0x18) != rax_6)
    *(arg1 + 0x18) = rax_6
    rdi = 1

int32_t rax_7 = *(arg1 + 0x6c)

if (rax_7 != 0 && *(arg1 + 0x68) u>= rax_7)
    rdi = 1

if (*(arg1 + 0x78) s> 0)
    __time64_t rax_8 = _time64(nullptr)
    int64_t rcx_1 = *(arg1 + 0x70)
    
    if (rax_8 s< rcx_1 || rax_8 - rcx_1 s>= *(arg1 + 0x78))
        rdi = 1

int32_t rax_10 = *(arg1 + 0x80)

if (rax_10 == 0)
    if (rdi != 0 || arg4 != 0)
        goto label_1428dc387
    
    rbp = arg5
else
    void* rcx_2 = *(arg1 + 8)
    
    if ((rcx_2 == 0 || rax_10 == *(rcx_2 + 0x80)) && rdi == 0 && arg4 == 0)
        rbp = arg5
    else
    label_1428dc387:
        int32_t rax_11 = sub_1428dc780(arg1, arg5, rsi, arg4)
        
        if (rax_11 == 0)
            sub_1428a5670(rax_11 + 0x24, rax_11 + 0x6b, rax_11 + 0x76, "crypto\rand\drbg_lib.c", 
                0x26b)
            return 0
        
        rsi = 0

int32_t var_38
var_38.q = rsi
int32_t rax_13 = (*(*(arg1 + 0x138) + 0x10))(arg1, arg2, arg3, rbp, var_38)

if (rax_13 != 0)
    *(arg1 + 0x68) += 1
    return 1

*(arg1 + 0x90) = 2
sub_1428a5670(rax_13 + 0x24, rax_13 + 0x6b, rax_13 + 0x70, "crypto\rand\drbg_lib.c", 0x274)
return 0
