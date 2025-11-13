// 函数: sub_140ae7200
// 地址: 0x140ae7200
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg1 = &data_142e6e248
int64_t var_18 = 0
int64_t var_10 = 0
sub_140af04f0(arg1, 1, &var_18)
arg1[0xa].d = 0
int64_t rcx = arg1[9]

if (rcx != 0)
    sub_140a74f90(rcx)

int64_t result = sub_140aeee70(&arg1[1], 0)
int64_t rcx_2 = arg1[5]

if (rcx_2 != 0)
    result = sub_140a74f90(rcx_2)

int64_t rcx_3 = arg1[1]

if (rcx_3 == 0)
    return result

return sub_140a74f90(rcx_3)
