// 函数: sub_142923730
// 地址: 0x142923730
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = 0
int64_t rsi = sx.q(arg4)
uint32_t count = -1
char* r14 = arg3
char* r15 = nullptr

if (arg2 s< 0 || arg4 s< 0)
    return 0xffffffff

int64_t rbx_1 = sx.q(arg5)

if (rsi.d s<= rbx_1.d && rbx_1.d s>= 0xb)
    if (rsi.d != rbx_1.d)
        char* rax_1 = sub_1428a6a70(rbx_1)
        r15 = rax_1
        
        if (rax_1 == 0)
            sub_1428a5670(4, 0x71, 0x41, "crypto\rsa\rsa_pk1.c", 0xb5)
            return 0xffffffff
        
        memcpy(&rax_1[rbx_1 - rsi], r14, rsi.d)
        r14 = r15
    
    int32_t i = 2
    int32_t rax_4 = zx.d(r14[1]) ^ 2
    int32_t r10_1 = 0
    
    if (rbx_1.d s> 2)
        void* r9 = &r14[2]
        
        do
            uint32_t rdx_2 = zx.d(*r9)
            r9 += 1
            int32_t rdx_5 = neg.d((rdx_2 - 1) u>> 0x1f)
            int32_t rcx_4 = not.d(r10_1) & rdx_5
            r10_1 |= rdx_5
            int32_t rcx_5 = rcx_4 & i
            i += 1
            rbp = (rbp & not.d(rcx_4)) | rcx_5
        while (i s< rbx_1.d)
    
    count = rbx_1.d - (rbp + 1)
    
    if ((neg.d((rax_4 - 1) u>> 0x1f & not.d(rax_4) u>> 0x1f) & neg.d((zx.d(*r14) - 1) u>> 0x1f)
            & ((((((arg2 - count) ^ count) | (count ^ arg2)) ^ arg2) u>> 0x1f) - 1)
            & (((((rbp - 0xa) | rbp) ^ rbp) u>> 0x1f) - 1)) != 0)
        memcpy(arg1, &r14[sx.q(rbp + 1)], count)
    else
        count = -1

sub_1428a6890(r15, rbx_1, "crypto\rsa\rsa_pk1.c", 0xf1)

if (count == 0xffffffff)
    sub_1428a5670(count + 5, count + 0x72, count + 0xa0, "crypto\rsa\rsa_pk1.c", 0xf4)

return zx.q(count)
