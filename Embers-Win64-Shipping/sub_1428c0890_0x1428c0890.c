// 函数: sub_1428c0890
// 地址: 0x1428c0890
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x38)
int64_t* rax_1

if (arg1 != 0)
    rax_1 = *(arg1 + 0x18)

int32_t var_18
int32_t r8

if (arg1 == 0 || rax_1 == 0 || *(arg1 + 0x20) == 0)
    var_18 = 0x102
    r8 = 0x43
else
    int64_t rdx_1 = *(*rax_1 + 0x158)
    
    if (rdx_1 != 0)
        jump(rdx_1)
    
    var_18 = 0x107
    r8 = (rdx_1 + 0x42).d

sub_1428a5670(0x10, 0xb1, r8, "crypto\ec\ec_key.c", var_18)
return 0
