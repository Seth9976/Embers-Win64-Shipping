// 函数: sub_1428a0640
// 地址: 0x1428a0640
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (*(arg1 + 0xd8) == 0)
    int32_t rax_1
    
    if (*(arg1 + 0xf0) != 0)
        rax_1 = sub_142898d50(*(arg1 + 0x98), 0)
    
    int32_t var_18_1
    
    if (*(arg1 + 0xf0) != 0 && rax_1 == 0)
        var_18_1 = 0x647
    label_1428a069c:
        sub_1428a5670(0xb, 0x91, 0x41, "crypto\x509\x509_vfy.c", var_18_1)
        *(arg1 + 0xb0) = 0x11
        return 0
    
    void* r9_1 = *(arg1 + 0x20)
    int32_t rax_4 =
        sub_1428e61c0(arg1 + 0xa0, arg1 + 0xa8, *(arg1 + 0x98), *(r9_1 + 0x28), *(r9_1 + 0x14))
    
    if (*(arg1 + 0xf0) != 0)
        sub_142898c80(*(arg1 + 0x98))
    
    if (rax_4 == 0)
        var_18_1 = 0x651
        goto label_1428a069c
    
    if (rax_4 != 0xffffffff)
        if (rax_4 == 0xfffffffe)
            *(arg1 + 0xb8) = 0
            *(arg1 + 0xb0) = 0x2b
            jump(*(arg1 + 0x38))
        
        if (rax_4 != 1)
            sub_1428a5670(0xb, 0x91, 0x44, "crypto\x509\x509_vfy.c", 0x66b)
            return 0
        
        if ((*(*(arg1 + 0x20) + 0x14) & 0x800) != 0)
            *(arg1 + 0xb8) = 0
            
            if ((*(arg1 + 0x38))(2, arg1) == 0)
                return 0
    else
        int32_t rdi_2 = 1
        
        if (sub_142898c70(*(arg1 + 0x98)) s> 1)
            while (true)
                void* rax_6 = sub_142898ea0(*(arg1 + 0x98), rdi_2)
                
                if ((*(rax_6 + 0xd0) & 0x800) != 0)
                    *(arg1 + 0xac) = rdi_2
                    *(arg1 + 0xb8) = rax_6
                    *(arg1 + 0xb0) = 0x2a
                    
                    if ((*(arg1 + 0x38))(0, arg1) == 0)
                        break
                
                rdi_2 += 1
                
                if (rdi_2 s>= sub_142898c70(*(arg1 + 0x98)))
                    return 1
            
            return 0

return 1
