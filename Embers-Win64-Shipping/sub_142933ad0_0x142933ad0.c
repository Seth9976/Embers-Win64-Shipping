// 函数: sub_142933ad0
// 地址: 0x142933ad0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)

if (arg1 == 0)
    sub_1428a5670(0x26, 0x8e, 0x43, "crypto\engine\eng_ctrl.c", 0x81)
    return 0

sub_1428a5c40(data_144020538)
int32_t rbx_1 = *(arg1 + 0x9c)
sub_1428a5d00(data_144020538)
int64_t r10_1 = *(arg1 + 0x70)
int64_t result
result.b = r10_1 != 0

if (rbx_1 s<= 0)
    sub_1428a5670(0x26, 0x8e, 0x82, "crypto\engine\eng_ctrl.c", 0x89)
    return 0

if (arg2 == 0xa)
    return result

int32_t var_18

if (arg2 - 0xb u<= 7)
    if (r10_1 == 0)
        sub_1428a5670(0x26, 0x8e, 0x78, "crypto\engine\eng_ctrl.c", 0x9e)
        return 0xffffffff
    
    if ((*(arg1 + 0x98) & 2) == 0)
        var_18.q = arg5
        return sub_142933eb0(arg1, arg2, arg3, arg4)
else if (r10_1 == 0)
    sub_1428a5670(0x26, 0x8e, (r10_1 + 0x78).d, "crypto\engine\eng_ctrl.c", 0xab)
    return 0

var_18.q = arg5
return r10_1(arg1, zx.q(arg2), zx.q(arg3), arg4, var_18)
