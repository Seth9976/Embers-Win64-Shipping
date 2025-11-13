// 函数: sub_1422eb7e0
// 地址: 0x1422eb7e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1422eaa60()
int32_t var_58
sub_1422e5800(&var_58)
sub_140af3b00(data_143ddb400, u"ScalabilityGroups", u"sg.ResolutionQuality", &var_58, arg1)
int32_t var_54
sub_140af3c10(data_143ddb400, u"ScalabilityGroups", u"sg.ViewDistanceQuality", &var_54, arg1)
int32_t var_50
sub_140af3c10(data_143ddb400, u"ScalabilityGroups", u"sg.AntiAliasingQuality", &var_50, arg1)
int32_t var_4c
sub_140af3c10(data_143ddb400, u"ScalabilityGroups", u"sg.ShadowQuality", &var_4c, arg1)
int32_t var_48
sub_140af3c10(data_143ddb400, u"ScalabilityGroups", u"sg.PostProcessQuality", &var_48, arg1)
int32_t var_44
sub_140af3c10(data_143ddb400, u"ScalabilityGroups", u"sg.TextureQuality", &var_44, arg1)
int32_t var_40
sub_140af3c10(data_143ddb400, u"ScalabilityGroups", u"sg.EffectsQuality", &var_40, arg1)
int32_t var_3c
sub_140af3c10(data_143ddb400, u"ScalabilityGroups", u"sg.FoliageQuality", &var_3c, arg1)
int32_t var_38
sub_140af3c10(data_143ddb400, u"ScalabilityGroups", u"sg.ShadingQuality", &var_38, arg1)
int64_t var_28
int64_t var_18
int64_t* result

if (data_143f56366 != 0)
    int32_t zmm0_1 = var_58
    data_143f55494 = var_54
    data_143f55498 = var_50
    data_143f5549c = var_4c
    data_143f554a0 = var_48
    data_143f554a4 = var_44
    data_143f554a8 = var_40
    int32_t rax_6 = var_3c
    data_143f55490 = zmm0_1
    data_143f554ac = rax_6
    data_143f554b0 = var_38
    int32_t var_34
    data_143f554b4 = var_34
    int32_t var_30
    data_143f554b8 = var_30
    sub_140627690(&data_143f554c0, &var_28)
    result = sub_140627690(&data_143f554d0, &var_18)
else
    result = sub_1422f2980(&var_58, 0)

int64_t rcx_11 = var_18

if (rcx_11 != 0)
    result = sub_140a74f90(rcx_11)

int64_t rcx_12 = var_28

if (rcx_12 == 0)
    return result

return sub_140a74f90(rcx_12)
