// 函数: sub_14292e670
// 地址: 0x14292e670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int32_t rax = sub_1428a96d0(*(arg1 + 0x18))
int32_t var_18
int32_t r8

if (arg2 == 1)
    if (rax == 0x16)
        *(arg1 + 0x10) = arg3
        
        if (arg3 != 0 && sub_1428a96d0(*(*(*(arg1 + 0x20) + 0x28) + 0x18)) == 0x15)
            sub_1428c3460(*(*(*(arg1 + 0x20) + 0x28) + 0x20))
            *(*(*(arg1 + 0x20) + 0x28) + 0x20) = 0
        
        return zx.q(arg3)
    
    var_18 = 0x25
    r8 = 0x68
else if (arg2 == 2)
    if (rax == 0x16)
        void* rax_1 = *(arg1 + 0x20)
        
        if (rax_1 != 0 && *(*(rax_1 + 0x28) + 0x20) != 0)
            *(arg1 + 0x10) = 0
            return 0
        
        *(arg1 + 0x10) = 1
        return 1
    
    var_18 = 0x33
    r8 = 0x68
else
    var_18 = 0x39
    r8 = 0x6e

sub_1428a5670(0x21, 0x68, r8, "crypto\pkcs7\pk7_lib.c", var_18)
return 0
