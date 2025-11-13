// 函数: sub_142a445d0
// 地址: 0x142a445d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

wchar32 const* const r8

if (arg2 != 1)
    double zmm1 = 1000.0
    int64_t rax_2
    int64_t rdx
    rdx:rax_2 = sx.o(arg1)
    int64_t zmm0 = float.d((rax_2 ^ rdx) - rdx)
    char var_28[0x20]
    
    if (zmm1 f<= zmm0)
        double zmm2 = 1000000.0
        double zmm3 = float.d(arg1)
        char* r8_1
        
        if (zmm2 f<= zmm0)
            zmm1 = 1000000000.0
            
            if (zmm1 f<= zmm0)
                r8_1 = "%.1f g%s"
                zmm3 = zmm3 / zmm1
            else
                zmm3 = zmm3 / zmm2
                r8_1 = "%.1f m%s"
        else
            r8_1 = "%.1f k%s"
            zmm3 = zmm3 / zmm1
        
        wchar32 const* const var_38_2 = &(*U""\tv 0")[3]
        _fwprintf_l(&var_28, 0x20, r8_1, zmm3)
    else
        wchar32 const* const var_38_1 = &(*U""\tv 0")[3]
        _fwprintf_l(&var_28, 0x20, "%d %s ", zx.q(arg1.d))
    
    r8 = &var_28
else
    r8 = &(*U""\tv 0")[3]

return sub_142a43410(arg3, "%11s", r8)
