// 函数: sub_1428c1490
// 地址: 0x1428c1490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
int64_t* rax = *(arg1 + 0x28)

if (rax == 0)
    rax = sub_142890740()
    *(arg1 + 0x28) = rax
    
    if (rax == 0)
        sub_1428a5670((&rax[2]).d, 0x103, (rax + 0x41).d, "crypto\ec\ec_key.c", 0x244)
        return 0

int64_t* rax_2 = sub_14288fa60(arg2, arg3, rax)
*(arg1 + 0x28) = rax_2

if (rax_2 != 0)
    return 1

sub_1428a5670((&rax_2[2]).d, 0x103, (rax_2 + 3).d, "crypto\ec\ec_key.c", 0x249)
return 0
