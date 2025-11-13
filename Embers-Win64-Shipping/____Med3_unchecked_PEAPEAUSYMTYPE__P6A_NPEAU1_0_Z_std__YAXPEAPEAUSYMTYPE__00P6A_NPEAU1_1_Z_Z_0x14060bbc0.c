// 函数: ??$_Med3_unchecked@PEAPEAUSYMTYPE@@P6A_NPEAU1@0@Z@std@@YAXPEAPEAUSYMTYPE@@00P6A_NPEAU1@1@Z@Z
// 地址: 0x14060bbc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg4(*arg2, *arg1) != 0)
    int64_t r10_1 = *arg2
    *arg2 = *arg1
    *arg1 = r10_1

int64_t result = arg4(*arg3, *arg2)

if (result.b != 0)
    int64_t rcx_2 = *arg3
    *arg3 = *arg2
    *arg2 = rcx_2
    result = arg4(arg5, *arg1)
    
    if (result.b != 0)
        result = *arg1
        int64_t rcx_3 = *arg2
        *arg2 = result
        *arg1 = rcx_3

return result
