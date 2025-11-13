// 函数: sub_142874e60
// 地址: 0x142874e60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rcx = *(arg1 + 8)

if ((*(*(rcx + 0xc0) + 0x60) & 8) == 0)
    int32_t rax_1 = *rcx
    
    if (rax_1 s>= 0x304 && rax_1 != 0x10000 && not(test_bit(arg2, 0xb)))
        int32_t var_30
        int32_t rdx
        
        if (*(arg1 + 0x38) != 0)
            int32_t* rax_4 = *(arg1 + 0xa8)
            
            if (*(rax_4 + 0x408) == 0)
                if (*(arg1 + 0x4d8) != 0 || arg3 == 0
                    || (*(arg1 + 0xc8) != 0 && (*(arg1 + 0x6e0) & 2) == 0))
                label_142875010:
                    
                    if (*(arg1 + 0xc8) == 0 || (*(arg1 + 0x6e0) & 1) == 0)
                        var_30 = 0x569
                        rdx = 0x6d
                        
                        if (arg3 != 0)
                            rdx = 0x28
                        
                        goto label_142874f0e
                    
                    if ((**(arg1 + 0xa8) & 0x800) == 0 || *(arg1 + 0x700) != 0)
                        goto label_142875096
                    
                    if (*(arg1 + 0x4d8) != 0)
                        sub_142856580(arg1, 0x50, 0x1f7, 0x44, "ssl\statem\extensions.c", 0x576)
                        return 0
                    
                    *(arg1 + 0x4d8) = 1
                else
                    void* rax_5 = *(arg1 + 0x508)
                    int64_t r14_1 = *(rax_5 + 0x178)
                    int64_t r15_1 = *(rax_5 + 0x170)
                    int64_t arg_8
                    void* arg_20
                    sub_142865410(arg1, &arg_20, &arg_8)
                    int64_t rdi_1 = 0
                    
                    if (arg_8 u<= 0)
                        goto label_142875010
                    
                    int16_t rsi_1
                    
                    while (true)
                        int64_t var_38
                        var_38.d = 1
                        rsi_1 = *(arg_20 + (rdi_1 << 1))
                        
                        if (sub_14285dd50(arg1, rsi_1, r14_1, r15_1, 1) != 0)
                            break
                        
                        rdi_1 += 1
                        
                        if (rdi_1 u>= arg_8)
                            goto label_142875010
                    
                    if (rdi_1 u>= arg_8)
                        goto label_142875010
                    
                    *(*(arg1 + 0xa8) + 0x406) = rsi_1
                    *(arg1 + 0x4d8) = 1
            else if ((*rax_4 & 0x800) == 0 || *(arg1 + 0x700) != 0)
            label_142875096:
                
                if (*(arg1 + 0x4d8) == 1)
                    *(arg1 + 0x4d8) = 2
            else
                if (*(arg1 + 0x4d8) != 0)
                    sub_142856580(arg1, 0x50, 0x1f7, 0x44, "ssl\statem\extensions.c", 0x53c)
                    return 0
                
                *(arg1 + 0x4d8) = 1
        else if (arg3 == 0)
            if (*(arg1 + 0xc8) == arg3 || (*(arg1 + 0x6e0) & 1) == 0)
                var_30 = 0x50b
                rdx = 0x6d
            label_142874f0e:
                sub_142856580(arg1, rdx, 0x1f7, 0x65, "ssl\statem\extensions.c", var_30)
                return 0
            
            if (sub_1428624b0(arg1, nullptr, 0) == 0)
                sub_142856580(arg1, arg3 + 0x50, 0x1f7, arg3 + 0x44, "ssl\statem\extensions.c", 
                    0x58c)
                return 0

return 1
