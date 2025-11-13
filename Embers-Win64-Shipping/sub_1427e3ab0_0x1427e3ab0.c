// 函数: sub_1427e3ab0
// 地址: 0x1427e3ab0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_88[0x80]
memset(&var_88, 0, 0x80)
physx::shdfnd::snprintf(&var_88, 0x80, "%u")

if (var_88[0] != 0)
    int64_t r8_1 = -1
    
    do
        r8_1 += 1
    while (var_88[r8_1] != 0)
    
    (**arg1)(arg1, &var_88, r8_1)

return arg1
