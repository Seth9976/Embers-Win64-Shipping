// 函数: sub_1428c0c50
// 地址: 0x1428c0c50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int32_t var_18
int32_t r8

if (arg1 == 0 || arg1[3] == 0)
    var_18 = 0xb8
    r8 = 0x43
else
    int64_t rdx_1 = *(*arg1 + 0x40)
    
    if (rdx_1 != 0)
        jump(rdx_1)
    
    var_18 = 0xbd
    r8 = 0x98

sub_1428a5670(0x10, 0xb3, r8, "crypto\ec\ec_key.c", var_18)
return 0
