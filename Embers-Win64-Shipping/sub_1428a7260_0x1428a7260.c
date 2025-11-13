// 函数: sub_1428a7260
// 地址: 0x1428a7260
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t rax = *arg1

if (rax u< arg2)
    if (arg1[2] u< arg2)
        if (arg2 u> 0x5ffffffc)
            sub_1428a5670(7, 0x64, 0x41, "crypto\buffer\buffer.c", 0x5a)
            return 0
        
        uint64_t rsi_2 = ((arg2 + 3) u/ 3) << 2
        int64_t rax_4
        
        if ((arg1[3].b & 1) == 0)
            rax_4 = sub_1428a67c0(arg1[1], rsi_2, "crypto\buffer\buffer.c", 0x61)
        else
            rax_4 = sub_1428a7620(arg1, rsi_2)
        
        if (rax_4 == 0)
            sub_1428a5670((rax_4 + 7).d, (rax_4 + 0x64).d, (rax_4 + 0x41).d, 
                "crypto\buffer\buffer.c", 0x63)
            return 0
        
        arg1[1] = rax_4
        uint64_t count = arg2 - *arg1
        int64_t rcx_7 = rax_4 + *arg1
        arg1[2] = rsi_2
        memset(rcx_7, 0, count)
        *arg1 = arg2
        return arg2
    
    int64_t rcx = arg1[1]
    
    if (rcx != 0)
        memset(rcx + rax, 0, arg2 - rax)

*arg1 = arg2
return arg2
