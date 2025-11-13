// 函数: sub_141271d70
// 地址: 0x141271d70
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

sub_1410b3fe0(arg2, u"MAX_NUM_LIGHTMAP_COEF", 2)
sub_141272920(arg1, arg2)
int32_t rdi_1 = 1
void* rbx_3 = sx.q(arg1[6]) * 9 + sub_14106f420(sub_14106f030(), *arg1)
int64_t r8

if (*(rbx_3 + 0x29) == 0 || *(rbx_3 + 0x2a) == 0)
    r8 = 0
else
    r8 = 1

sub_1405d3490(arg2 + 0x2a8, u"MOBILE_QL_FORCE_FULLY_ROUGH", r8)
int64_t r8_1

if (*(rbx_3 + 0x29) == 0 || *(rbx_3 + 0x2b) == 0)
    r8_1 = 0
else
    r8_1 = 1

sub_1405d3490(arg2 + 0x2a8, u"MOBILE_QL_FORCE_NONMETAL", r8_1)
int64_t r8_2

if (*(rbx_3 + 0x29) == 0 || *(rbx_3 + 0x2c) == 0)
    r8_2 = 0
else
    r8_2 = 1

sub_1405d3490(arg2 + 0x2a8, u"QL_FORCEDISABLE_LM_DIRECTIONALITY", r8_2)
int64_t r8_3

if (*(rbx_3 + 0x29) == 0 || *(rbx_3 + 0x2d) == 0)
    r8_3 = 0
else
    r8_3 = 1

sub_1405d3490(arg2 + 0x2a8, u"MOBILE_QL_FORCE_LQ_REFLECTIONS", r8_3)
int64_t r8_4

if (*(rbx_3 + 0x29) == 0 || *(rbx_3 + 0x2e) == 0)
    r8_4 = 0
else
    r8_4 = 1

sub_1405d3490(arg2 + 0x2a8, u"MOBILE_QL_FORCE_DISABLE_PREINTEGRATEDGF", r8_4)
sub_1405d3490(arg2 + 0x2a8, u"MOBILE_CSM_QUALITY", zx.q(*(rbx_3 + 0x30)))

if (*(rbx_3 + 0x29) == 0 || *(rbx_3 + 0x2f) == 0)
    rdi_1 = 0

return sub_1405d3490(arg2 + 0x2a8, u"MOBILE_QL_DISABLE_MATERIAL_NORMAL", zx.q(rdi_1)) __tailcall
