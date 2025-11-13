// 函数: sub_142c09500
// 地址: 0x142c09500
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbx = 0
int64_t var_20 = *(arg1 + 0x58)
int64_t var_28 = *(arg1 + 0x50)
int32_t var_30 = arg4
char const* const var_38 = "num_features=%d shaper_func=%p, shaper_name=%s"
int64_t var_40 = 0
int64_t var_48 = 0

if (*(arg3 + 0x60) == 0)
    return 1

if (*arg1 == 0 || *(arg1 + 0x50) != sub_142c08cf0)
    return 0

if (sub_142c08d40(arg2 + 0x60) != 0)
    var_48.d = arg4
    sub_142c08cf0(arg1, arg2, arg3.d)
    rbx = 1

return zx.q(rbx)
