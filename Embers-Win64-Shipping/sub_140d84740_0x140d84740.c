// 函数: sub_140d84740
// 地址: 0x140d84740
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

*arg3 = 0
int64_t* r9 = arg1

if ((*arg2 != 0 || arg2[1] != 0x46000000000000c0)
        && (*arg2 != 0x11d80f2871c6e74e || arg2[1] != 0x5c43845b06002aa8))
    arg1 = nullptr
    
    if (*arg2 == 0x4652a93eb246cb75 && arg2[1] == 0x577efd0cfeb38cbf)
        arg1 = &r9[1]
        
        if (r9 == 0)
            arg1 = nullptr
        
        *arg3 = arg1
else
    *arg3 = r9

if (arg1 != 0)
    (*(*r9 + 8))(r9)
    arg1 = *arg3

if (arg1 != 0)
    return 0

return 0x80004002
