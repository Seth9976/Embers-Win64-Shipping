// 函数: sub_1428f4c40
// 地址: 0x1428f4c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t s = sx.q(arg1)
int32_t optval = 1

if (s.d == 0xffffffff)
    sub_1428a5670(0x20, 0x8a, 0x87, "crypto\bio\b_sock2.c", 0x52)
    return 0

if (sub_1428e37b0(s.d, arg3 u>> 3 & 1) != 0)
    int32_t rax_2
    
    if ((arg3.b & 4) != 0)
        rax_2 = setsockopt(s, 0xffff, 8, &optval, 4)
    
    if ((arg3.b & 4) == 0 || rax_2 == 0)
        int32_t rax_5
        
        if ((arg3.b & 0x10) != 0)
            rax_5 = setsockopt(s, 6, 1, &optval, 4)
        
        if ((arg3.b & 0x10) == 0 || rax_5 == 0)
            int32_t namelen = sub_1428c2320(arg2)
            int32_t rax_8 = connect(s, sub_14058e700(arg2), namelen)
            
            if (rax_8 != 0xffffffff)
                return 1
            
            if (sub_1428a7be0(rax_8) == 0)
                sub_1428a5670(2, 2, WSAGetLastError(), "crypto\bio\b_sock2.c", 0x6e)
                sub_1428a5670(0x20, 0x8a, 0x67, "crypto\bio\b_sock2.c", 0x6f)
        else
            sub_1428a5670(2, 0xe, WSAGetLastError(), "crypto\bio\b_sock2.c", 0x65)
            sub_1428a5670(0x20, 0x8a, 0x8a, "crypto\bio\b_sock2.c", 0x66)
    else
        sub_1428a5670(2, 0xe, WSAGetLastError(), "crypto\bio\b_sock2.c", 0x5c)
        sub_1428a5670(0x20, 0x8a, 0x89, "crypto\bio\b_sock2.c", 0x5d)

return 0
