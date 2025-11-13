// 函数: sub_14288c1f0
// 地址: 0x14288c1f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int64_t r10 = arg2[1]
int32_t var_10
int32_t rdx
int32_t r9_8

if (arg3 != 0x2000)
    if (r10 == 0)
        if (*(arg1 + 0x6ec) != 0 && *(arg1 + 0xc8) != 0 && *(*(arg1 + 0x508) + 0x198) == 0)
            *(arg1 + 0x6e8) = 2
            return 1
        
        var_10 = 0x78f
        rdx = 0x2f
    else
        var_10 = 0x782
        rdx = 0x32
    
    r9_8 = 0x6e
else
    if (r10 u>= 4)
        char* r8 = *arg2
        uint32_t r9_7 = ((zx.d(*r8) << 8 | zx.d(r8[1])) << 8 | zx.d(r8[2])) << 8 | zx.d(r8[3])
        *arg2 = &r8[4]
        arg2[1] = r10 - 4
        
        if (r10 == 4)
            *(*(arg1 + 0x508) + 0x19c) = r9_7
            return 1
    
    rdx = 0x32
    var_10 = 0x777
    r9_8 = 0xae

sub_142856580(arg1, rdx, 0x21a, r9_8, "ssl\statem\extensions_clnt.c", var_10)
return 0
