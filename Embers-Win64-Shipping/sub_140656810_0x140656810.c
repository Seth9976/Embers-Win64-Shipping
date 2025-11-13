// 函数: sub_140656810
// 地址: 0x140656810
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_38, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_38)

int64_t rax_2 = *(arg2 + 0x20)
int64_t var_28 = var_38
int64_t rcx_1
rcx_1.b = rax_2 != 0
*(arg2 + 0x20) = rcx_1 + rax_2
int32_t var_30
int32_t var_20 = var_30
float var_18[0x4]
float* rax_4 = sub_14063d480(&var_18, &var_28)
*arg3 = *rax_4
int32_t result = rax_4[2]
arg3[1].d = result
return result
