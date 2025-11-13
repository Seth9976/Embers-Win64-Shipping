// 函数: sub_1428e98e0
// 地址: 0x1428e98e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (sub_142890560(arg1) s< 0x80)
    return sub_1428f5aa0(arg1) __tailcall

char* rax_2 = sub_1428f5d10(arg1)

if (rax_2 == 0)
    return rax_2

int32_t i = 0
char* rcx_2 = rax_2

if (*rax_2 != 0)
    while (i u< 0x80000000)
        rcx_2 = &rcx_2[1]
        i += 1
        
        if (*rcx_2 == 0)
            break

uint64_t rbp = zx.q((i & 0x7fffffff) + 3)
char* rax_5 = sub_1428a6730(zx.q((i & 0x7fffffff) + 3))

if (rax_5 == 0)
    sub_1428a5670((&rax_5[0x22]).d, 0xa7, (&rax_5[0x41]).d, "crypto\x509v3\v3_utl.c", 0x7c)
    sub_1428a6780(rax_2)
    return 0

char rax_7 = *rax_2
char* rdi = &rax_2[1]

if (rax_7 != 0x2d)
    rdi = rax_2

char* rdx_3 = &data_143514a10

if (rax_7 != 0x2d)
    rdx_3 = &data_143467b98

sub_1428a7090(rax_5, rdx_3, rbp)
sub_1428a7010(rax_5, rdi, rbp)
sub_1428a6780(rax_2)
return rax_5
