// 函数: sub_142896470
// 地址: 0x142896470
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rax = *arg1
int32_t rcx = *arg2

if (rax == 0)
    if (sub_142896cb0(arg1, rcx) != 0)
        goto label_1428964a3
else if (rax == rcx)
label_1428964a3:
    void* rax_2 = *(arg2 + 0x10)
    
    if (rax_2 == 0)
    label_1428964ed:
        void* rax_4 = *(arg1 + 0x10)
        
        if (rax_4 == 0)
        label_142896537:
            
            if (*arg1 == *arg2)
                void* rax_8 = *(arg1 + 0x10)
                
                if (rax_8 != 0)
                    int64_t r8_3 = *(rax_8 + 0x90)
                    
                    if (r8_3 != 0)
                        int32_t result = r8_3(arg1, arg2)
                        
                        if (result == 1)
                            return result
            
            sub_1428a5670(6, 0x67, 0x99, "crypto\evp\p_lib.c", 0x5d)
        else
            int64_t rdx_2 = *(rax_4 + 0x80)
            
            if (rdx_2 == 0)
                goto label_142896537
            
            if (rdx_2(arg1) == 0)
                goto label_142896537
            
            void* rax_6 = *(arg2 + 0x10)
            
            if (rax_6 != 0)
                int64_t r8_2 = *(rax_6 + 0x88)
                
                if (r8_2 != 0)
                    jump(r8_2)
    else
        int64_t rdx_1 = *(rax_2 + 0x80)
        
        if (rdx_1 == 0)
            goto label_1428964ed
        
        if (rdx_1(arg2) == 0)
            goto label_1428964ed
        
        sub_1428a5670(6, 0x67, 0x67, "crypto\evp\p_lib.c", 0x56)
else
    sub_1428a5670(6, 0x67, 0x65, "crypto\evp\p_lib.c", 0x51)

return 0
