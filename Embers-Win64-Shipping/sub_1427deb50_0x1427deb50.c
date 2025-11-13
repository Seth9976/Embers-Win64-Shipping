// 函数: sub_1427deb50
// 地址: 0x1427deb50
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char var_98[0x80]
memset(&var_98, 0, 0x80)
physx::shdfnd::snprintf(&var_98, 0x80, arg2)

if (var_98[0] != 0)
    int64_t r8_1 = -1
    
    do
        r8_1 += 1
    while (var_98[r8_1] != 0)
    
    (**arg1)(arg1, &var_98, r8_1)

return arg1
