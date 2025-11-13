// 函数: sub_1427c8e40
// 地址: 0x1427c8e40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = sx.q(arg3.d)
int64_t r8

if (rax.d u> 6)
label_1427c8f27:
    r8 = 0
label_1427c8f34:
    int64_t var_10_2 = r8
    *arg2 = 1.o
    return arg2

int32_t rcx_4

switch (rax)
    case 0
        goto label_1427c8f27
    case 1
        rcx_4 = arg3:4.d
        
        if (rcx_4 u> 0x40)
            goto label_1427c8f27
    case 2
        r8.b = (*(arg4 + 8) | *(arg5 + 8)) != 0
        goto label_1427c8f34
    case 3
        r8.b = *(arg4 + 8) != *(arg5 + 8)
        goto label_1427c8f34
    case 4
        *arg2 = *arg5
        return arg2
    case 5
        *arg2 = *arg4
        return arg2
    case 6
        rcx_4 = 0x20

int64_t r8_1 = *(arg4 + 8)
int32_t var_18 = 1
int64_t r10 = *(arg5 + 8)

if (r10 u<= r8_1)
    int64_t var_10_1 = r8_1 - r10
    *arg2 = var_18.o
    return arg2

int64_t var_10 = (1 << rcx_4.b | r8_1) - r10
*arg2 = var_18.o
return arg2
