// 函数: sub_14288b980
// 地址: 0x14288b980
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t rbx = 0
void* var_10 = nullptr
int64_t var_18 = 0

if (sub_14288d550(arg1) == 0)
    return 2

sub_142865410(arg1, &var_10, &var_18)

if (sub_142873b60(arg2, 0xa, 2) != 0 && sub_142873e80(arg2, 2) != 0 && sub_142873e80(arg2, 2) != 0)
    int32_t var_20_1
    
    if (var_18 u<= 0)
    label_14288ba70:
        
        if (sub_1428736e0(arg2) != 0 && sub_1428736e0(arg2) != 0)
            return 1
        
        var_20_1 = 0xd1
    else
        while (true)
            uint16_t rsi_1 = *(var_10 + (rbx << 1))
            
            if (sub_142866c60(arg1, rsi_1, 0x20004) != 0
                    && sub_142873b60(arg2, zx.d(rsi_1), 2) == 0)
                var_20_1 = 0xc9
                break
            
            rbx += 1
            
            if (rbx u>= var_18)
                goto label_14288ba70
    
    sub_142856580(arg1, 0x50, 0x1e0, 0x44, "ssl\statem\extensions_clnt.c", var_20_1)
    return 0

sub_142856580(arg1, 0x50, 0x1e0, 0x44, "ssl\statem\extensions_clnt.c", 0xbe)
return 0
