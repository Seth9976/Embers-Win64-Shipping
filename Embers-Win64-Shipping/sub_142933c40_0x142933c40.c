// 函数: sub_142933c40
// 地址: 0x142933c40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 == 0 || arg2 == 0)
    sub_1428a5670(0x26, 0xab, 0x43, "crypto\engine\eng_ctrl.c", 0xed)
    return 0

int32_t rax_1

if (*(arg1 + 0x70) != 0)
    rax_1 = sub_142933ad0(arg1, 0xd, 0, arg2, 0)

if (*(arg1 + 0x70) == 0 || rax_1 s<= 0)
    if (arg4 != 0)
        sub_1428a49e0()
        return 1
    
    sub_1428a5670(0x26, 0xab, 0x89, "crypto\engine\eng_ctrl.c", 0xff)
else
    int32_t rax_2 = sub_142933ad0(arg1, 0x12, rax_1, nullptr, 0)
    
    if (rax_2 s< 0)
        sub_1428a5670(0x26, 0xaa, 0x8a, "crypto\engine\eng_ctrl.c", 0xb7)
        sub_1428a5670(0x26, 0xab, 0x86, "crypto\engine\eng_ctrl.c", 0x104)
    else if ((rax_2.b & 7) != 0)
        int32_t rax_3 = sub_142933ad0(arg1, 0x12, rax_1, nullptr, 0)
        int32_t var_28_1
        
        if (rax_3 s< 0)
            var_28_1 = 0x10f
        label_142933dc3:
            sub_1428a5670(0x26, 0xab, 0x6e, "crypto\engine\eng_ctrl.c", var_28_1)
        else
            int32_t r8_3
            
            if ((rax_3.b & 4) == 0)
                if (arg3 == 0)
                    sub_1428a5670((&arg3[0x26]).d, 0xab, 0x87, "crypto\engine\eng_ctrl.c", 0x128)
                else if ((rax_3.b & 2) == 0)
                    if ((rax_3.b & 1) == 0)
                        var_28_1 = 0x13a
                        goto label_142933dc3
                    
                    char* _EndPtr
                    int32_t rax_6 = strtol(arg3, &_EndPtr, 0xa)
                    char* _EndPtr_1 = _EndPtr
                    
                    if (arg3 != _EndPtr_1 && *_EndPtr_1 == 0)
                        r8_3 = rax_6
                        goto label_142933e12
                    
                    sub_1428a5670(0x26, 0xab, 0x85, "crypto\engine\eng_ctrl.c", 0x140)
                else if (sub_142933ad0(arg1, rax_1, 0, arg3, 0) s> 0)
                    return 1
            else if (arg3 == 0)
                r8_3 = 0
            label_142933e12:
                
                if (sub_142933ad0(arg1, rax_1, r8_3, nullptr, 0) s> 0)
                    return 1
            else
                sub_1428a5670(0x26, 0xab, 0x88, "crypto\engine\eng_ctrl.c", 0x118)
    else
        sub_1428a5670(0x26, 0xab, 0x86, "crypto\engine\eng_ctrl.c", 0x104)

return 0
