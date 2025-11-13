// 函数: sub_1429dacc0
// 地址: 0x1429dacc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t* r14 = *arg2

if (r14 == 0)
    return 8

int64_t arg_8 = arg3
void* rsi_1 = *(arg1 + 0x1a8) + 0x12c0
int64_t arg_18 = arg4
int32_t rbx_1 = sbb.d(arg3.d, arg3.d, sub_1429de790(rsi_1, 3) != 0) & 4
int32_t rdi_2 = (sbb.d(arg4.d, arg4.d, sub_1429de790(rsi_1, 2) != 0) & 2) | rbx_1
int32_t rcx_3
rcx_3.b = sub_1429de790(rsi_1, 1) != 0
*r14 = rcx_3 | rdi_2
return 0
