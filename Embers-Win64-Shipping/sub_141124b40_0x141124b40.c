// 函数: sub_141124b40
// 地址: 0x141124b40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx_1

if (data_143f0f1c7 != 0)
    rbx_1 = 0x2000

if (data_143f0f1c7 == 0 || *(data_143ed2e18 + 4) == 0)
    rbx_1 = 0

int32_t rbx_3 = rbx_1 | data_143ed3434 | 1
int64_t result = sub_1407b4d10(arg1 + 0x18, 4, *(arg1 + 0x10) * *(arg1 + 0x14) * 9, 0x1c, rbx_3, 
    ScreenGridConeVisibility", 0)

if (*(arg1 + 0x38) == 0)
    return result

sub_1407b4d10(arg1 + 0x40, 4, *(arg1 + 0x10) * *(arg1 + 0x14) * 0x5a, 0xd, 1, 0, 0)
sub_1407b4d10(arg1 + 0x60, 0x10, *(arg1 + 0x10) * *(arg1 + 0x14) * 0xa, 1, 1, 0, 0)
sub_1407b4d10(arg1 + 0x80, 8, *(arg1 + 0x10) * *(arg1 + 0x14), 0xa, rbx_3, u"SurfelIrradiance", 0)
return sub_1407b4d10(arg1 + 0xa0, 8, *(arg1 + 0x10) * *(arg1 + 0x14), 0xa, rbx_3, 
    HeightfieldIrradiance", 0)
