// 函数: sub_14290eb80
// 地址: 0x14290eb80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t* rax = sub_1427ec4a0(arg1)
int32_t var_18

if (sub_1428973a0(rax, 0xffffffff, 0x1006, 0, &var_18) s> 0)
    if (var_18 != 6)
        return 2
    
    int32_t* rax_2 = sub_14290fc60(rax)
    
    if (rax_2 != 0)
        if (arg5 != 0)
            int32_t* rax_3 = sub_1428f2b10(rax_2)
            
            if (rax_3 == 0)
                sub_1428f2c80(rax_2)
                return 0
            
            sub_1428dafb0(arg5, sub_1428a9570(0x390), 0x10, rax_3)
        
        sub_1428dafb0(arg4, sub_1428a9570(0x390), 0x10, rax_2)
        return 3

return 0
