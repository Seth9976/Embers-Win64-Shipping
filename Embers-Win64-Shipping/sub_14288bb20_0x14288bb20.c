// 函数: sub_14288bb20
// 地址: 0x14288bb20
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int32_t var_18
int32_t var_14
int32_t rax = sub_14285f240(arg1, &var_14, &var_18, nullptr)
int32_t var_20
int32_t r9

if (rax == 0)
    if (var_18 s< 0x304)
        return 2
    
    if (sub_142873b60(arg2, 0x2b, 2) != 0 && sub_142873e80(arg2, 2) != 0
            && sub_142873e80(arg2, 1) != 0)
        int32_t rbx = var_18
        int32_t var_20_1
        
        if (rbx s< var_14)
        label_14288bc1f:
            
            if (sub_1428736e0(arg2) != 0 && sub_1428736e0(arg2) != 0)
                return 1
            
            var_20_1 = 0x220
        else
            while (true)
                if (sub_142873b60(arg2, rbx, 2) == 0)
                    var_20_1 = 0x219
                    break
                
                rbx -= 1
                
                if (rbx s< var_14)
                    goto label_14288bc1f
        
        sub_142856580(arg1, 0x50, 0x1e1, 0x44, "ssl\statem\extensions_clnt.c", var_20_1)
        return 0
    
    var_20 = 0x211
    r9 = 0x44
else
    var_20 = 0x201
    r9 = rax

sub_142856580(arg1, 0x50, 0x1e1, r9, "ssl\statem\extensions_clnt.c", var_20)
return 0
