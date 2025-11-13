// 函数: sub_1428f37d0
// 地址: 0x1428f37d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int32_t var_18_1
int32_t r8_1

if (arg1 == 0 || arg2 == 0)
    var_18_1 = 0xb2
    r8_1 = 0x43
else
    int64_t r8 = *(*arg1 + 0x18)
    
    if (r8 != 0)
        int64_t result = r8()
        
        if (result != 0)
            return result
        
        var_18_1 = 0xba
        r8_1 = (result + 0x6a).d
    else
        var_18_1 = 0xb6
        r8_1 = 0x6c

sub_1428a5670(0x25, 0x6c, r8_1, "crypto\dso\dso_lib.c", var_18_1)
return 0
