// 函数: sub_142ab67d0
// 地址: 0x142ab67d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

struct icu_64::UObject::icu_64::MeasureUnit::VTable** arg_8 = arg1
int64_t var_18 = -2
struct icu_64::MeasureUnit::icu_64::CurrencyUnit::VTable** result = arg1
sub_142ab6060(arg1)
*result = &icu_64::CurrencyUnit::`vftable'{for `icu_64::MeasureUnit'}
int16_t* rdx

if (*arg3 s> 0 || arg2 == 0 || *arg2 == 0)
    rdx = &data_143654898
else if (arg2[1] == 0 || arg2[2] == 0)
    *arg3 = 1
    rdx = &data_143654898
else if (sub_142a8d900(arg2, 3) != 0)
    rdx = arg2
else
    *arg3 = 0x1a
    rdx = &data_143654898

result[3].d = *rdx
*(result + 0x1c) = rdx[2]
*(result + 0x1e) = 0
void arg_18
sub_142a8d6e0(&result[3], &arg_18, 4)
sub_142ab63c0(result, &arg_18)
return result
