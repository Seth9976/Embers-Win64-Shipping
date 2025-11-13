// 函数: sub_140af2fd0
// 地址: 0x140af2fd0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t var_18 = 0
int32_t var_10 = 0
char* rbx

if (sub_140af5b90(arg1, arg2, arg3, &var_18, arg5) == 0)
    rbx.b = 0
else
    int16_t* const rcx = &data_142d40450
    
    if (var_10 != 0)
        rcx = var_18
    
    *arg4 = sub_140b16cc0(rcx)
    rbx.b = 1

if (var_18 != 0)
    sub_140a74f90(var_18)

return zx.q(rbx.b)
