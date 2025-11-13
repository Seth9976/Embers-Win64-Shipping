// 函数: sub_142c481b0
// 地址: 0x142c481b0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rbp = sx.q(arg1)
int64_t rsi

if (arg2 == 0)
    rsi = 0
else
    if (arg2 != 1)
        return 0xfffffffd
    
    rsi = 1

if (*((rbp << 3) + 0x144019ca8) == 0)
    wchar16 const* const rcx = u"nvpowerapi.dll"
    
    if (rbp.d == 0)
        rcx = u"nvapi64.dll"
    
    HMODULE hLibModule = sub_142c4c060(rcx, 0x800)
    
    if (hLibModule == 0)
        return zx.q((hLibModule - 2).d)
    
    int32_t rax_3 = sub_142c482a0(hLibModule, rbp.d, arg2)
    
    if (rax_3 != 0)
        FreeLibrary(hLibModule)
        return zx.q(rax_3)
    
    int64_t rax_4 = rsi * 3
    *((rbp << 3) + 0x144019ca8) = hLibModule
    (&data_144019c68)[rax_4] = 1
    (&data_144019c60)[rax_4] = 1
    (&data_144019ce0)[rbp] = 1

return 0
