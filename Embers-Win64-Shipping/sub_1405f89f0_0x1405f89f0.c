// 函数: sub_1405f89f0
// 地址: 0x1405f89f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (*arg2 == 0x4bf8b802866fa297 && arg2[1] == -0x36ac6095c4a13663)
    jump(**(arg1 - 8))

if (*arg2 != 0x4ce25c7defef5175 || arg2[1] != 0x5465ca8bff34bdbb)
    return 0xc00d36ba

if (*arg3 == 0x40f82db6eb533d5d && arg3[1] == 0x74f01924649a997)
    int64_t* rcx_1 = *(arg1 + 0x60)
    
    if (rcx_1 != 0)
        *arg4 = rcx_1
        (*(*rcx_1 + 8))()
        return 0

return 0x80004002
