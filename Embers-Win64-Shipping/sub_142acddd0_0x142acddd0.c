// 函数: sub_142acddd0
// 地址: 0x142acddd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r10 = arg9

if (*r10 s> 0)
    return 0

if (arg2 u> 1 || arg4 u> 0xb || arg5 s< 1 || arg5 s> arg8 || arg6 - 1 u> 6 || arg7 u> 0x5265bff
        || arg8 - 0x1c u> 3)
    *r10 = 1
    return 0

int32_t rcx_1 = neg.d(arg3)

if (arg2 != 0)
    rcx_1 = arg3

int64_t* rdi_1 = *(arg1 + 0x80)

if (rdi_1 == 0 || rcx_1 s< *(arg1 + 0x90))
    int32_t var_18
    sub_142acd600(arg1, 
        sub_142acc900(rcx_1, arg4, arg5) * 86400000.0 f+ _mm_cvtepi32_pd(zx.q(arg7)), 1, 3, 1, 
        &var_18, &arg9)
    return zx.q(var_18 + arg9.d)

int32_t* var_28_1 = r10
int32_t var_30_1 = arg8
int64_t var_38
var_38.d = arg7
int64_t var_40
var_40.b = arg6
int32_t var_48_1 = arg5
return (*(*rdi_1 + 0x20))(rdi_1, zx.q(arg2), zx.q(rcx_1))
