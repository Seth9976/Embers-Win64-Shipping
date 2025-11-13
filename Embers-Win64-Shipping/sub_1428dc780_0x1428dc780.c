// 函数: sub_1428dc780
// 地址: 0x1428dc780
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rax = *(arg1 + 0x90)
int64_t rdx = 0
int64_t arg_8 = 0
int64_t rbp = arg3
int64_t rsi = 0

if (rax == 2)
    sub_1428a5670(0x24, 0x6e, 0x72, "crypto\rand\drbg_lib.c", 0x196)
    return 0

if (rax == 0)
    sub_1428a5670(rax + 0x24, rax + 0x6e, rax + 0x73, "crypto\rand\drbg_lib.c", 0x19a)
    return 0

if (arg2 == 0)
    rbp = 0
else if (arg3 u> *(arg1 + 0x60))
    sub_1428a5670(0x24, 0x6e, 0x66, "crypto\rand\drbg_lib.c", 0x1a1)
    return 0

int64_t r10_1 = *(arg1 + 0x140)
*(arg1 + 0x90) = 2
int32_t var_28
int32_t var_20

if (r10_1 != 0)
    var_20 = arg4
    var_28.q = *(arg1 + 0x40)
    int64_t rax_3 = r10_1(arg1, &arg_8, zx.q(*(arg1 + 0x28)), *(arg1 + 0x38), var_28, var_20)
    rdx = arg_8
    rsi = rax_3

if (rsi u< *(arg1 + 0x38) || rsi u> *(arg1 + 0x40))
    sub_1428a5670(0x24, 0x6e, 0x6e, "crypto\rand\drbg_lib.c", 0x1ad)
else
    var_28.q = rbp
    
    if ((*(*(arg1 + 0x138) + 8))(arg1, rdx, rsi, arg2, var_28, var_20) != 0)
        *(arg1 + 0x90) = 1
        *(arg1 + 0x68) = 0
        __time64_t rax_6 = _time64(nullptr)
        int32_t rcx_2 = *(arg1 + 0x80)
        *(arg1 + 0x70) = rax_6
        
        if (rcx_2 != 0)
            void* rax_7 = *(arg1 + 8)
            
            if (rax_7 != 0)
                *(arg1 + 0x80) = *(rax_7 + 0x80)
            else
                *(arg1 + 0x80) = rcx_2 + 1

int64_t rdx_3 = arg_8

if (rdx_3 != 0)
    int64_t rax_10 = *(arg1 + 0x148)
    
    if (rax_10 != 0)
        rax_10(arg1, rdx_3, rsi)

int32_t rdi
rdi.b = *(arg1 + 0x90) == 1
return zx.q(rdi)
