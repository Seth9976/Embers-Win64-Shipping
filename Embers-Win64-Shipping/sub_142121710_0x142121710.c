// 函数: sub_142121710
// 地址: 0x142121710
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* rsi = arg2
arg2.b = 1
sub_142120460(arg1, arg2.b)

if (rsi != 0)
    if (&arg1[0x1e] != rsi + 0xf0)
        int64_t rbp_1 = sx.q(*(rsi + 0xf8))
        int64_t r14_1 = *(rsi + 0xf0)
        int32_t r8_1 = *(arg1 + 0xfc)
        arg1[0x1f].d = rbp_1.d
        
        if (rbp_1.d != 0 || r8_1 != 0)
            sub_1405a4b40(&arg1[0x1e], rbp_1.d, r8_1)
            memcpy(arg1[0x1e], r14_1, (rbp_1 * 0x30).d)
        else
            *(arg1 + 0xfc) = 0
    
    if (&arg1[0x1c] != rsi + 0xe0)
        int64_t rbp_2 = sx.q(*(rsi + 0xe8))
        int64_t r14_2 = *(rsi + 0xe0)
        int32_t r8_5 = *(arg1 + 0xec)
        arg1[0x1d].d = rbp_2.d
        
        if (rbp_2.d != 0 || r8_5 != 0)
            sub_1409912e0(&arg1[0x1c], rbp_2.d, r8_5)
            memcpy(arg1[0x1c], r14_2, (rbp_2 * 0x24).d)
        else
            *(arg1 + 0xec) = 0
    
    if (&arg1[0x20] != rsi + 0x100)
        int64_t rbp_3 = sx.q(*(rsi + 0x108))
        int64_t r14_3 = *(rsi + 0x100)
        int32_t r8_9 = *(arg1 + 0x10c)
        arg1[0x21].d = rbp_3.d
        
        if (rbp_3.d != 0 || r8_9 != 0)
            sub_1407751d0(&arg1[0x20], rbp_3.d, r8_9)
            memcpy(arg1[0x20], r14_3, (rbp_3 * 0x28).d)
        else
            *(arg1 + 0x10c) = 0
    
    if (&arg1[0x24] != rsi + 0x120)
        int64_t rbp_4 = sx.q(*(rsi + 0x128))
        int64_t rsi_2 = *(rsi + 0x120)
        int32_t r8_13 = *(arg1 + 0x12c)
        arg1[0x25].d = rbp_4.d
        
        if (rbp_4.d != 0 || r8_13 != 0)
            sub_1405a4b40(&arg1[0x24], rbp_4.d, r8_13)
            memcpy(arg1[0x24], rsi_2, (rbp_4 * 0x30).d)
        else
            *(arg1 + 0x12c) = 0

return sub_142129e50(arg1) __tailcall
