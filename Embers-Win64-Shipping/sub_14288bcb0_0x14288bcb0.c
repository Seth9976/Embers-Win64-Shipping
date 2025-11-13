// 函数: sub_14288bcb0
// 地址: 0x14288bcb0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t* rax = sub_14288f970(arg1)

if (rax == 0)
    return zx.q((rax + 2).d)

if (sub_142873b60(arg2, 0xe, 2) != 0 && sub_142873e80(arg2, 2) != 0 && sub_142873e80(arg2, 2) != 0)
    int32_t rax_5 = sub_142898c70(rax)
    int32_t rbx = 0
    int32_t var_10_1
    
    if (rax_5 s<= 0)
    label_14288bd7d:
        
        if (sub_1428736e0(arg2) != 0 && sub_142873b60(arg2, 0, 1) != 0 && sub_1428736e0(arg2) != 0)
            return 1
        
        var_10_1 = 0x1bd
    else
        while (true)
            void* rax_6 = sub_142898ea0(rax, rbx)
            
            if (rax_6 != 0 && sub_142873b60(arg2, *(rax_6 + 8), 2) != 0)
                rbx += 1
                
                if (rbx s>= rax_5)
                    goto label_14288bd7d
                
                continue
            
            var_10_1 = 0x1b4
            break
    
    sub_142856580(arg1, 0x50, 0x1e2, 0x44, "ssl\statem\extensions_clnt.c", var_10_1)
    return 0

sub_142856580(arg1, 0x50, 0x1e2, 0x44, "ssl\statem\extensions_clnt.c", 0x1a9)
return 0
