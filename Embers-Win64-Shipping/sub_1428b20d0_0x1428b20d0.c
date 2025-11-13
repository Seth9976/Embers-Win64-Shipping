// 函数: sub_1428b20d0
// 地址: 0x1428b20d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x110)
void var_118
int64_t rax_1 = __security_cookie ^ &var_118

if (arg4 != 0)
    sub_1428fecc0(arg2, sub_142890ec0(arg1))
else if ((sub_142890eb0(sub_140687ad0(arg1)) & 0xf0007) == 4)
    sub_1428fecc0(arg2, sub_142890ec0(arg1))
else if ((sub_142890eb0(sub_140687ad0(arg1)) & 0xf0007) == 3)
    sub_1428fecc0(arg2, sub_142890ec0(arg1))
else
    uint32_t var_f8[0x38]
    sub_1428fecc0(arg2, &var_f8)
    sub_1428feb70(&var_f8, sub_142890ec0(arg1))
    sub_1428b8960(&var_f8, 0xd8)

__security_check_cookie(rax_1 ^ &var_118)
return 1
