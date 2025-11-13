// 函数: sub_1425714e0
// 地址: 0x1425714e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t var_18
int32_t var_18_1 = var_18 & 0xfffffffc
int64_t var_28 = 0
int64_t var_20 = 0

if (*(arg2 + 0x20) == 0)
    int64_t* r8_1 = *(arg2 + 0x80)
    *(arg2 + 0x80) = r8_1[4]
    sub_140d30490(arg2, &var_28, r8_1)
else
    sub_140d30460(arg2, *(arg2 + 0x18), &var_28)

int64_t rax_2 = *(arg2 + 0x20)
int64_t rbx
rbx.b = rax_2 != 0
*(arg2 + 0x20) = rbx + rax_2
char result = sub_142277840(arg1, &var_28)

if (result != 0)
    return sub_142277740(arg1, &var_28)

sub_140be4120(u"ServerUpdateLevelVisibility_Validate")
return result
