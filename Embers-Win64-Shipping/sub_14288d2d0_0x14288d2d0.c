// 函数: sub_14288d2d0
// 地址: 0x14288d2d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int64_t r11 = arg2[1]
uint32_t r10_3

if (r11 u>= 2)
    char* r9_1 = *arg2
    r10_3 = zx.d(*r9_1) << 8 | zx.d(r9_1[1])
    *arg2 = &r9_1[2]
    arg2[1] = r11 - 2

int32_t var_10_1
int32_t rdx
int32_t r9_2

if (r11 u< 2 || r11 != 2)
    rdx = 0x32
    var_10_1 = 0x6df
    r9_2 = 0x9f
else
    if (r10_3 == 0x304)
        if (arg3 == 0x800)
            return 1
        
        *arg1 = 0x304
        return 1
    
    var_10_1 = 0x6ea
    rdx = (r11 + 0x2d).d
    r9_2 = (r11 + 0x72).d

sub_142856580(arg1, rdx, 0x264, r9_2, "ssl\statem\extensions_clnt.c", var_10_1)
return 0
