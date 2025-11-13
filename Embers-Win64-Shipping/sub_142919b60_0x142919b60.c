// 函数: sub_142919b60
// 地址: 0x142919b60
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rsi = 0x64

if (arg3[2].d == 0 && sub_142890300(arg3) == 0)
    int32_t rax_2 = sub_142890560(arg3)
    
    if (rax_2 == 1)
        sub_142890900(arg2, 0)
        return 1
    
    int32_t rax_3 = sub_142890240(arg3, rax_2 - 2)
    int32_t rax_4
    
    if (rax_3 == 0)
        rax_4 = sub_142890240(arg3, rax_2 - 3)
    
    int32_t var_28_1
    
    if (rax_3 != 0 || rax_4 != 0)
        while (true)
            if (sub_142919910(arg1, arg2, rax_2, 0xffffffff, 0) == 0)
                return 0
            
            int32_t temp0_1 = rsi
            rsi -= 1
            
            if (temp0_1 == 1)
                break
            
            if (sub_14288fc80(arg2, arg3) s< 0)
                return 1
        
        var_28_1 = 0xa6
    else
        while (true)
            if (sub_142919910(arg1, arg2, rax_2 + 1, 0xffffffff, 0) == 0)
                return 0
            
            if (sub_14288fc80(arg2, arg3) s>= 0)
                if (sub_1428d9010(arg2, arg2, arg3) == 0)
                    return 0
                
                if (sub_14288fc80(arg2, arg3) s>= 0 && sub_1428d9010(arg2, arg2, arg3) == 0)
                    return 0
            
            int32_t temp1_1 = rsi
            rsi -= 1
            
            if (temp1_1 == 1)
                break
            
            if (sub_14288fc80(arg2, arg3) s< 0)
                return 1
        
        var_28_1 = 0x99
    
    sub_1428a5670(3, 0x8a, 0x71, "crypto\bn\bn_rand.c", var_28_1)
    return 0

sub_1428a5670(3, 0x8a, 0x73, "crypto\bn\bn_rand.c", 0x77)
return 0
