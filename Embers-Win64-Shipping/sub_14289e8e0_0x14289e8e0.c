// 函数: sub_14289e8e0
// 地址: 0x14289e8e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
void* rsi = *(arg1 + 0xe8)

if (*(arg1 + 8) == 0)
    sub_1428a5670(0xb, 0x7f, 0x69, "crypto\x509\x509_vfy.c", 0x103)
    *(arg1 + 0xb0) = 0x45
    return 0xffffffff

if (*(arg1 + 0x98) != 0)
    sub_1428a5670(0xb, 0x7f, 0x42, "crypto\x509\x509_vfy.c", 0x10d)
    *(arg1 + 0xb0) = 0x45
    return 0xffffffff

int32_t* rax_2 = sub_142898ba0()
*(arg1 + 0x98) = rax_2

if (rax_2 != 0 && sub_142898d50(rax_2, *(arg1 + 8)) != 0)
    sub_1428a3ba0(*(arg1 + 8))
    void* rdx_2 = *(arg1 + 8)
    *(arg1 + 0x94) = 1
    int32_t rdi = 0
    
    if (sub_1428a0230(arg1, rdx_2) == 0)
        int64_t rax_5 = *(arg1 + 8)
        *(arg1 + 0xac) = 0
        
        if (rax_5 == 0)
            rax_5 = sub_142898ea0(*(arg1 + 0x98), 0)
        
        *(arg1 + 0xb8) = rax_5
        *(arg1 + 0xb0) = 0x42
        int32_t result = (*(arg1 + 0x38))(0, arg1)
        
        if (result == 0)
            return result
    
    int32_t rax_10
    
    if (rsi == 0)
    label_14289eb4d:
        rax_10 = sub_1428a1f30(arg1)
    label_14289eb52:
        rdi = rax_10
        
        if (rax_10 s<= 0)
            goto label_14289eb58
    else
        if (sub_142898c70(*(rsi + 8)) s<= 0)
            goto label_14289eb4d
        
        void* rbp_1 = *(arg1 + 0xe8)
        int64_t* rsi_1 = *(arg1 + 8)
        sub_1428a2c50(*(rbp_1 + 0x20))
        *(rbp_1 + 0x20) = 0
        *(rbp_1 + 0x18) = 0
        *(rbp_1 + 0x2c) = -1
        int32_t rax_7 = sub_1428a13c0(arg1, *(arg1 + 8), 0)
        
        if (rax_7 == 0 && ((*(rbp_1 + 0x28) & 5) != 0 || *(rbp_1 + 0x2c) s>= 0))
            goto label_14289eb4d
        
        sub_14289e720(nullptr, *(arg1 + 0x98))
        
        if (rax_7 s> 0)
            if (sub_1428a02a0(arg1, rsi_1) != 0)
                int32_t rax_9
                
                if ((*(rbp_1 + 0x34) & 1) == 0)
                    rax_9 = sub_14289ff60(arg1)
                
                if ((*(rbp_1 + 0x34) & 1) != 0 || rax_9 != 0)
                    *(arg1 + 0xac) = 0
                    *(arg1 + 0xb8) = rsi_1
                    rax_10 = (*(arg1 + 0x38))(1, arg1)
                    goto label_14289eb52
        else if (rax_7 s>= 0)
            if (sub_1428a02a0(arg1, rsi_1) != 0)
                *(arg1 + 0xac) = 0
                
                if (rsi_1 == 0)
                    rsi_1 = sub_142898ea0(*(arg1 + 0x98), 0)
                
                *(arg1 + 0xb8) = rsi_1
                *(arg1 + 0xb0) = 0x41
                rax_10 = (*(arg1 + 0x38))(0, arg1)
                goto label_14289eb52
        else
            *(arg1 + 0xac) = 0
            rdi = -1
            *(arg1 + 0xb8) = rsi_1
            *(arg1 + 0xb0) = 0x11
        
    label_14289eb58:
        
        if (*(arg1 + 0xb0) == 0)
            *(arg1 + 0xb0) = 1
    return zx.q(rdi)

sub_1428a5670(0xb, 0x7f, 0x41, "crypto\x509\x509_vfy.c", 0x118)
*(arg1 + 0xb0) = 0x11
return 0xffffffff
