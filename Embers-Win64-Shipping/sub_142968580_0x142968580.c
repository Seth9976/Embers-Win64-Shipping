// 函数: sub_142968580
// 地址: 0x142968580
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (sub_142898c70(arg3) s> 0)
    int32_t rsi_1 = arg5
    
    if (arg2 != 0)
        int64_t var_38_1 = arg2
        sub_1428b6f70(arg1, "%*s%s:\n", zx.q(rsi_1))
        rsi_1 += 4
    
    int32_t rdi_1 = 0
    
    if (sub_142898c70(arg3) s> 0)
        int32_t rax_10
        
        do
            int64_t* rax_2 = sub_142898ea0(arg3, rdi_1)
            int32_t rax_3
            
            if (rsi_1 != 0)
                rax_3 = sub_1428b6f70(arg1, "%*s", zx.q(rsi_1))
            
            if (rsi_1 != 0 && rax_3 s<= 0)
                return 0
            
            sub_1428cdc60(arg1, sub_142891580(rax_2))
            char* const r8_2 = &data_1437020ab
            
            if (sub_1428e74c0(rax_2) != 0)
                r8_2 = "critical"
            
            if (sub_1428b6f70(arg1, ": %s\n", r8_2) s<= 0)
                return 0
            
            if (sub_142968230(arg1, rax_2, arg4, rsi_1 + 4) == 0)
                sub_1428b6f70(arg1, "%*s", zx.q(rsi_1 + 4))
                sub_14292ba90(arg1, sub_1428e74e0(rax_2))
            
            if (sub_14289aa40(arg1, &data_14370209c, 1) s<= 0)
                return 0
            
            rdi_1 += 1
            rax_10 = sub_142898c70(arg3)
        while (rdi_1 s< rax_10)

return 1
