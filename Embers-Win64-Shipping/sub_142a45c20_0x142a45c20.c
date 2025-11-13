// 函数: sub_142a45c20
// 地址: 0x142a45c20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg1 != arg2)
    sub_142a46dc0(arg1)
    int64_t rax_1 = *(arg2 + 0x28)
    void* rcx = arg2 + 0x30
    
    if (rax_1 == rcx)
        char* rdx_1 = arg1 + 0x30 - rcx
        char i
        
        do
            i = *rcx
            *(rdx_1 + rcx) = i
            rcx += 1
        while (i != 0)
        goto label_142a45c82
    
    if (rax_1 != 0)
        int64_t rax_2 = sub_142a86250(rax_1)
        *(arg1 + 0x28) = rax_2
        
        if (rax_2 != 0)
            goto label_142a45c82
    else
        *(arg1 + 0x28) = rax_1
    label_142a45c82:
        int64_t rcx_2 = *(arg2 + 0xd0)
        
        if (rcx_2 != *(arg2 + 0x28))
            if (rcx_2 == 0)
                goto label_142a45cb2
            
            int64_t rax_4 = sub_142a86250(rcx_2)
            *(arg1 + 0xd0) = rax_4
            
            if (rax_4 != 0)
                goto label_142a45cb2
        else
            *(arg1 + 0xd0) = *(arg1 + 0x28)
        label_142a45cb2:
            void* rcx_3 = arg2 + 8
            void* rdx_3 = arg1 + 8 - rcx_3
            char i_1
            
            do
                i_1 = *rcx_3
                *(rdx_3 + rcx_3) = i_1
                rcx_3 += 1
            while (i_1 != 0)
            void* rcx_4 = arg2 + 0x14
            void* rdx_5 = arg1 + 0x14 - rcx_4
            char i_2
            
            do
                i_2 = *rcx_4
                *(rdx_5 + rcx_4) = i_2
                rcx_4 += 1
            while (i_2 != 0)
            void* rcx_5 = arg2 + 0x1a
            char* rdx_7 = arg1 + 0x1a - rcx_5
            char i_3
            
            do
                i_3 = *rcx_5
                *(rdx_7 + rcx_5) = i_3
                rcx_5 += 1
            while (i_3 != 0)
            *(arg1 + 0x20) = *(arg2 + 0x20)
            *(arg1 + 0xd8) = *(arg2 + 0xd8)

return arg1
