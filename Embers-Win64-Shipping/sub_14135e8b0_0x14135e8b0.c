// 函数: sub_14135e8b0
// 地址: 0x14135e8b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t r8 = arg1[1]
uint64_t r11_2 = zx.q(r8 s/ 0x2800)
char var_28[0x1c]
sub_141345d00(&var_28, r8 - ((r11_2 * 5).d << 0xb))
int32_t r11_3 = r11_2.d & 0x80000001

if (r11_3 s< 0)
    r11_3 = ((r11_3 - 1) | 0xfffffffe) + 1

sub_14135d700(&var_28, arg2)
sub_1405d3490(arg2 + 0x2a8, u"EYEADAPTATION_EXPOSURE_FIX", zx.q(r11_3 == 1))
sub_1410b3fe0(arg2, u"THREADGROUP_SIZEX", 8)
sub_1410b3fe0(arg2, u"THREADGROUP_SIZEY", 8)
int64_t r8_3
r8_3.b = sub_14131a9e0(*arg1) != 0
return sub_1410b3fe0(arg2, u"USE_VOLUME_LUT", r8_3) __tailcall
