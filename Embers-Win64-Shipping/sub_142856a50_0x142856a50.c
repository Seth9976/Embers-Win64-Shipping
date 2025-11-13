// 函数: sub_142856a50
// 地址: 0x142856a50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rbp = -1
int64_t* rdi = nullptr

if (arg1[0x12] != 1)
    sub_1428a49e0()
    SetLastError(NO_ERROR)
    int64_t rsi_1 = *(arg1 + 0x568)
    
    if (rsi_1 == 0)
        rsi_1 = *(*(arg1 + 0x598) + 0x108)
    
    arg1[0x1b] += 1
    int32_t rax_3
    
    if ((arg1[0x19] == 0 || (arg1[0x17] == 0 && arg1[0x12] == 0)) && (**(arg1 + 0xa8) & 0x800) == 0)
        rax_3 = sub_14284e8b0(arg1)
    
    if ((arg1[0x19] != 0 && (arg1[0x17] != 0 || arg1[0x12] != 0)) || (**(arg1 + 0xa8) & 0x800) != 0
            || rax_3 != 0)
        int32_t rax_16 = arg1[0x12]
        int32_t var_28
        int32_t r8_1
        
        if (rax_16 != 0)
            if (rax_16 == 4)
                goto label_142856afb
            
        label_142856cc3:
            
            while (true)
                if (rax_16 != 2)
                    if (rax_16 != 3)
                        if (arg1[0x19] == 0 || rax_16 != 1)
                            arg1[0x19] = 1
                            arg1[0x12] = 1
                            sub_1428a5670(0x14, 0x161, 0x100, "ssl\statem\statem.c", 0x1c4)
                            
                            if (arg1[0x1f] != 1)
                                sub_1428732d0(arg1, 2, 0x50)
                        
                        var_28 = 0x1c5
                        r8_1 = 0x42
                        break
                    
                    int32_t rax_18
                    rax_18, arg3 = sub_142856e10(arg1, arg3)
                    
                    if (rax_18 != 1)
                        if (rax_18 != 2)
                            goto label_142856d14_1
                        
                        arg1[0x12] = 4
                    else
                        arg1[0x12] = 2
                        arg1[0x15] = 0
                else
                    int32_t rax_17
                    rax_17, arg3 = sub_142856680(arg1)
                    
                    if (rax_17 != 1)
                        goto label_142856d14_1
                    
                    *(arg1 + 0x48) = 3
                
                rax_16 = arg1[0x12]
                
                if (rax_16 == 4)
                    goto label_142856d0f
            
            goto label_142856c30
        
        *(arg1 + 0x5c) = 0
    label_142856afb:
        arg1[0xe] = arg2
        
        if (rsi_1 != 0)
            rsi_1(arg1, 0x10, 1)
        
        int32_t r9_1 = *arg1
        
        if ((*(*(*(arg1 + 8) + 0xc0) + 0x60) & 8) != 0)
            int32_t rax_6 = r9_1 & 0xff00
            
            if (rax_6 == 0xfe00 || (arg2 == 0 && rax_6 == 0x100))
                goto label_142856b9b
            
            var_28 = 0x165
            goto label_142856b4e
        
        if ((r9_1 & 0xffffff00) == 0x300)
        label_142856b9b:
            
            if (sub_1428546e0(arg1, 9, 0, r9_1, 0) == 0)
                var_28 = 0x172
                goto label_142856b4e
            
            if (*(arg1 + 0x88) == 0)
                int64_t* rax_9 = sub_1428a7510()
                rdi = rax_9
                
                if (rax_9 == 0)
                    var_28 = 0x179
                    goto label_142856b4e
                
                if (sub_1428a7260(rdi, 0x4000) == 0)
                    var_28 = 0x17e
                    goto label_142856b4e
                
                *(arg1 + 0x88) = rdi
            
            if (sub_14285d870(arg1) != 0)
                void* rax_12 = *(arg1 + 0xa8)
                *(arg1 + 0x98) = 0
                *(rax_12 + 0xf0) = 0
                
                if (sub_142851e80(arg1) == 0)
                    var_28 = 0x19a
                    goto label_142856c0b
                
                if (arg1[0x17] != 0)
                    if (arg1[0x1d4] == 0)
                        goto label_142856cad
                    
                    goto label_142856c7d
                
                if (arg1[0x12] == 0 || arg1[0x1d4] != 0)
                label_142856c7d:
                    rdi = nullptr
                    
                    if (sub_142861320(arg1) != 0)
                        void* rax_15 = *(arg1 + 0xa8)
                        
                        if (*(rax_15 + 0x198) == 0 || *(rax_15 + 0x220) == 0)
                            arg1[0x1a] = 1
                        
                        goto label_142856cad
                else
                label_142856cad:
                    *(arg1 + 0x48) = 3
                    rax_16 = arg1[0x12]
                    
                    if (rax_16 != 4)
                        goto label_142856cc3
                    
                label_142856d0f:
                    rbp = 1
                label_142856d14:
                    rdi = nullptr
            else
                var_28 = 0x187
            label_142856c0b:
                arg1[0x12] = 1
                r8_1 = 0x44
                arg1[0x19] = 1
            label_142856c30:
                sub_1428a5670(0x14, 0x161, r8_1, "ssl\statem\statem.c", var_28)
            label_142856d14_1:
                rdi = nullptr
        else
            var_28 = 0x16b
        label_142856b4e:
            arg1[0x19] = 1
            arg1[0x12] = 1
            sub_1428a5670(0x14, 0x161, 0x44, "ssl\statem\statem.c", var_28)
        
        arg1[0x1b] -= 1
        sub_1428a71f0(rdi)
        
        if (rsi_1 != 0)
            int64_t rdx = 0x2002
            
            if (arg2 == 0)
                rdx = 0x1002
            
            rsi_1(arg1, rdx, zx.q(rbp))

return zx.q(rbp)
