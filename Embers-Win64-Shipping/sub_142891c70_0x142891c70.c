// 函数: sub_142891c70
// 地址: 0x142891c70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg2 == 0 || *arg2 == 0)
    sub_1428a5670(6, 0x6e, 0x6f, "crypto\evp\digest.c", 0xd5)
    return 0

void* rcx = arg2[1]

if (rcx != 0)
    int32_t rax_1 = sub_1428af800(rcx)
    
    if (rax_1 == 0)
        sub_1428a5670(rax_1 + 6, rax_1 + 0x6e, rax_1 + 0x26, "crypto\evp\digest.c", 0xdb)
        return 0

int64_t rsi

if (*arg1 != *arg2)
    rsi = 0
else
    rsi = arg1[3]
    sub_1428915a0(arg1, 4)

sub_142891f10(arg1)
*arg1 = *arg2
*(arg1 + 0x10) = *(arg2 + 0x10)
*(arg1 + 0x20) = *(arg2 + 0x20)
sub_142891570(arg1, 0x400)
arg1[3] = 0
arg1[4] = 0

if (arg2[3] != 0)
    int64_t rax_4 = *arg1
    int64_t rcx_5 = sx.q(*(rax_4 + 0x3c))
    
    if (rcx_5.d != 0)
        if (rsi == 0)
            int64_t rax_5 = sub_1428a6730(rcx_5)
            arg1[3] = rax_5
            rsi = rax_5
            
            if (rax_5 == 0)
                sub_1428a5670((rax_5 + 6).d, (rax_5 + 0x6e).d, (rax_5 + 0x41).d, 
                    "crypto\evp\digest.c", 0xf8)
                return 0
            
            rax_4 = *arg1
        else
            arg1[3] = rsi
        
        memcpy(rsi, arg2[3], *(rax_4 + 0x3c))

arg1[5] = arg2[5]
int64_t* rcx_8 = arg2[4]

if (rcx_8 != 0)
    int64_t* rax_8 = sub_1428bcc60(rcx_8)
    arg1[4] = rax_8
    
    if (rax_8 == 0)
        sub_142891f10(arg1)
        return 0

int64_t r8_5 = *(*arg1 + 0x28)

if (r8_5 == 0)
    return 1

jump(r8_5)
