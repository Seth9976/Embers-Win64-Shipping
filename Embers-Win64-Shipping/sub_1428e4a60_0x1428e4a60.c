// 函数: sub_1428e4a60
// 地址: 0x1428e4a60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)

if (arg2 == 0)
    sub_1428a5670(0xd, 0xe3, 0x43, "crypto\asn1\a_int.c", 0x142)
    return 0

int32_t r9 = arg2[1]

if ((r9 & 0xfffffeff) != arg3)
    sub_1428a5670(0xd, 0xe3, 0xe1, "crypto\asn1\a_int.c", 0x146)
    return 0

int64_t r8 = sx.q(*arg2)
int64_t r10 = *(arg2 + 8)

if (r8 u> 8)
    sub_1428a5670(0xd, 0xe1, 0xdf, "crypto\asn1\a_int.c", 0xd5)
else if (r10 != 0)
    int64_t rcx = 0
    void* rdx = nullptr
    
    if (r8 != 0)
        do
            uint64_t rax_5 = zx.q(*(rdx + r10))
            rdx += 1
            rcx = rcx << 8 | rax_5
        while (rdx u< r8)
    
    if ((r9 & 0x100) == 0)
        if (rcx u> 0x7fffffffffffffff)
            sub_1428a5670(0xd, 0xe0, 0xdf, "crypto\asn1\a_int.c", 0x110)
            return 0
        
        *arg1 = rcx
        return 1
    
    if (rcx u> -0x8000000000000000)
        sub_1428a5670(0xd, 0xe0, 0xe0, "crypto\asn1\a_int.c", 0x109)
        return 0
    
    *arg1 = neg.q(rcx)
    return 1

return 0
