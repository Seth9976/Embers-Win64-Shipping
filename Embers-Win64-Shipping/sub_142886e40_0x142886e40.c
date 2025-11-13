// 函数: sub_142886e40
// 地址: 0x142886e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x40)
int64_t r14 = 1

if (*(*(arg1 + 0xa8) + 0x406) == 0)
    return 2

int64_t var_28
int64_t arg_8
sub_142865410(arg1, &var_28, &arg_8)
int64_t rax_1 = arg_8
int32_t var_30_1

if (rax_1 != 0)
    int64_t rbx_1 = 0
    
    if (rax_1 != 0)
        do
            uint16_t rbp_1 = *(var_28 + (rbx_1 << 1))
            
            if (sub_142866c60(arg1, rbp_1, 0x20004) != 0)
                if (r14 != 0)
                    if (*(*(arg1 + 0xa8) + 0x406) == rbp_1)
                        return 2
                    
                    if (sub_142873b60(arg2, 0xa, 2) == 0)
                        var_30_1 = 0x5a0
                        goto label_142886eb9
                    
                    if (sub_142873e80(arg2, 2) == 0)
                        var_30_1 = 0x5a0
                        goto label_142886eb9
                    
                    if (sub_142873e80(arg2, 2) == 0)
                        var_30_1 = 0x5a0
                        goto label_142886eb9
                    
                    r14 = 0
                
                if (sub_142873b60(arg2, zx.d(rbp_1), 2) == 0)
                    var_30_1 = 0x5a9
                    goto label_142886eb9
            
            rbx_1 += 1
        while (rbx_1 u< arg_8)
    
    if (sub_1428736e0(arg2) != 0 && sub_1428736e0(arg2) != 0)
        return 1
    
    var_30_1 = 0x5b2
else
    var_30_1 = 0x588

label_142886eb9:
sub_142856580(arg1, 0x50, 0x220, 0x44, "ssl\statem\extensions_srvr.c", var_30_1)
return 0
