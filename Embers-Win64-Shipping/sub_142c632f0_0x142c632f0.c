// 函数: sub_142c632f0
// 地址: 0x142c632f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t arg_10 = arg2
int64_t r9
int64_t arg_20 = r9
int32_t r8 = 0x30

if (arg1 != 0)
    int32_t rcx_1 = arg2 & 0xf00000
    
    if (rcx_1 u> 0x400000)
        if (rcx_1 == 0x500000)
            if (arg3 != 0 && arg2 == 0x50002c)
                *arg3 = sub_142c65520(arg1, nullptr)
                r8 = 0
        else if (rcx_1 == 0x600000)
            int64_t* rcx_10 = arg3
            
            if (rcx_10 != 0)
                return sub_142c63aa0(arg1, arg2, rcx_10)
    else if (rcx_1 == 0x400000)
        if (arg3 != 0)
            return sub_142c63b60(arg1, arg2, arg3)
    else if (rcx_1 == 0x100000)
        int64_t* rcx_6 = arg3
        
        if (rcx_6 != 0)
            return sub_142c63500(arg1, arg2, rcx_6)
    else if (rcx_1 == 0x200000)
        if (arg3 != 0)
            return sub_142c63830(arg1, arg2, arg3)
    else if (rcx_1 == 0x300000 && arg3 != 0)
        return sub_142c63620(arg1, arg2, arg3)

return zx.q(r8)
