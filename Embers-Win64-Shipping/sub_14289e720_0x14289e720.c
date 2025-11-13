// 函数: sub_14289e720
// 地址: 0x14289e720
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rax_1

if (arg1 != 0)
    rax_1 = sub_1428968c0(arg1)

if (arg1 == 0 || rax_1 != 0)
    int32_t rbx_1 = 0
    int32_t var_18_1
    int32_t r8_1
    
    if (sub_142898c70(arg2) s<= 0)
        var_18_1 = 0x76c
        r8_1 = 0x6b
    label_14289e816:
        sub_1428a5670(0xb, 0x6e, r8_1, "crypto\x509\x509_vfy.c", var_18_1)
        return 0
    
    while (true)
        int32_t* rax_4 = sub_1428a38c0(sub_142898ea0(arg2, rbx_1))
        
        if (rax_4 == 0)
            var_18_1 = 0x764
            r8_1 = 0x6c
            goto label_14289e816
        
        if (sub_1428968c0(rax_4) != 0)
            rbx_1 += 1
            
            if (rbx_1 s< sub_142898c70(arg2))
                continue
        
        int32_t rbx_2 = rbx_1 - 1
        
        if (rbx_1 - 1 s>= 0)
            int32_t temp1_1
            
            do
                sub_142896470(sub_1428a38c0(sub_142898ea0(arg2, rbx_2)), rax_4)
                temp1_1 = rbx_2
                rbx_2 -= 1
            while (temp1_1 - 1 s>= 0)
        
        if (arg1 != 0)
            sub_142896470(arg1, rax_4)
        
        break

return 1
