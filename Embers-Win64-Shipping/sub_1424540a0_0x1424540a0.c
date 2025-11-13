// 函数: sub_1424540a0
// 地址: 0x1424540a0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rax = *(arg2 + 0x20)
int64_t r9
r9.b = rax != 0
*(arg2 + 0x20) = r9 + rax
void* rcx = *(arg1 + 0x130)
float* rcx_1
int64_t var_18

if (rcx == 0)
    rcx_1 = &var_18
    int32_t rax_2 = data_14399f680
    var_18 = data_14399f678
    int32_t var_10_1 = rax_2
else
    rcx_1 = sub_141f3d680(rcx, &var_18)
int32_t result = rcx_1[2]
*arg3 = *rcx_1
arg3[1].d = result
return result
