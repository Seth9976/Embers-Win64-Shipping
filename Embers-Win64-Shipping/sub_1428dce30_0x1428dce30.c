// 函数: sub_1428dce30
// 地址: 0x1428dce30
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t r12 = 0
int64_t r15 = 0
uint64_t r13 = 0

if (*(arg1 + 0x20) != 0)
    sub_1428a5670(0x24, 0x66, 0x44, "crypto\rand\drbg_lib.c", 0x1df)
    sub_1428985b0(*(arg1 + 0x20))
    *(arg1 + 0x20) = 0

if (arg2 != 0)
    if (arg4 == 0)
        if (*(arg1 + 0x60) u< arg3)
            sub_1428a5670(0x24, 0x66, 0x66, "crypto\rand\drbg_lib.c", 0x1fa)
            return 0
        
        r15 = arg2
        r13 = arg3
    else
        if (*(arg1 + 0x40) u< arg3)
            sub_1428a5670(0x24, 0x66, 0x6a, "crypto\rand\drbg_lib.c", 0x1e8)
            return 0
        
        if (arg4 u> arg3 << 3)
            sub_1428a5670(0x24, 0x66, 0x7c, "crypto\rand\drbg_lib.c", 0x1ed)
            return 0
        
        int64_t* rax_3 = sub_142898600(arg4.d, arg3, arg3)
        *(arg1 + 0x20) = rax_3
        
        if (rax_3 == 0)
            return 0
        
        sub_142898390(rax_3, arg2, arg3, arg4)

if (*(arg1 + 0x90) == 2)
    int64_t rax_4 = *(arg1 + 0x138)
    
    if (rax_4 != 0)
        (*(rax_4 + 0x18))(arg1)
        sub_1428dc960(arg1, *(arg1 + 0x14), zx.d(*(arg1 + 0x1c)))
    else
        int32_t rdx_2 = (rax_4 + 0x76).d
        sub_1428a5670((rax_4 + 0x24).d, rdx_2, rdx_2 + 0xa, "crypto\rand\drbg_lib.c", 0x17b)

int32_t rax_5 = *(arg1 + 0x90)

if (rax_5 == 0)
    sub_1428dc4b0(arg1, "OpenSSL NIST SP 800-90A DRBG", zx.q(rax_5 + 0x1c))
    rax_5 = *(arg1 + 0x90)
    r12.b = rax_5 == 1

if (rax_5 == 1)
    if (r15 != 0)
        (*(*(arg1 + 0x138) + 8))(arg1, r15, r13, 0, 0)
    else if (r12 == 0)
        sub_1428dc780(arg1, 0, 0, 0)

if (*(arg1 + 0x20) == 0)
    int32_t rdi
    rdi.b = *(arg1 + 0x90) == 1
    return zx.q(rdi)

*(arg1 + 0x90) = 2
sub_1428a5670(0x24, 0x66, 0x44, "crypto\rand\drbg_lib.c", 0x225)
sub_1428985b0(*(arg1 + 0x20))
*(arg1 + 0x20) = 0
return 0
