// 函数: sub_140b15e50
// 地址: 0x140b15e50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_18

if ((arg3 & 0x10000000) == 0)
    sub_140b28970(arg1, &var_18, u"%Y.%m.%d-%H.%M.%S")
else
    sub_140a2e390(&var_18, u"FDateTime(0x%016X)", *arg1)

int32_t var_10
int32_t r8_3

if (var_10 == 0)
    r8_3 = 0
else
    r8_3 = var_10 - 1

sub_140a20ba0(arg2, var_18, r8_3)
int64_t rcx_2 = var_18

if (rcx_2 != 0)
    sub_140a74f90(rcx_2)

int64_t result
result.b = 1
return result
