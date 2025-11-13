// 函数: sub_142931cc0
// 地址: 0x142931cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

__chkstk(0x30)
HMODULE hLibModule = nullptr
struct HINSTANCE__** rsi = nullptr
PSTR lpLibFileName = sub_1428f3850(arg1, nullptr)

if (lpLibFileName != 0)
    HMODULE hLibModule_1 = LoadLibraryA(lpLibFileName)
    hLibModule = hLibModule_1
    
    if (hLibModule_1 != 0)
        struct HINSTANCE__** rax = sub_1428a6730(8)
        rsi = rax
        int32_t var_18_1
        int32_t r8_1
        
        if (rax != 0)
            *rax = hLibModule
            int32_t rax_1 = sub_142898d50(arg1[1], rax)
            
            if (rax_1 != 0)
                arg1[7] = lpLibFileName
                return 1
            
            var_18_1 = 0x76
            r8_1 = rax_1 + 0x69
        else
            var_18_1 = 0x71
            r8_1 = (rax + 0x41).d
        
        sub_1428a5670(0x25, 0x78, r8_1, "crypto\dso\dso_win32.c", var_18_1)
    else
        sub_1428a5670((hLibModule_1 + 0x25).d, (&hLibModule_1[0x1e]).d, (hLibModule_1 + 0x67).d, 
            "crypto\dso\dso_win32.c", 0x6b)
        sub_1428a4880((&hLibModule->unused + 3).d)
else
    sub_1428a5670(0x25, 0x78, 0x6f, "crypto\dso\dso_win32.c", 0x66)

sub_1428a6780(lpLibFileName)
sub_1428a6780(rsi)

if (hLibModule != 0)
    FreeLibrary(hLibModule)

return 0
