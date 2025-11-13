// 函数: sub_140d87660
// 地址: 0x140d87660
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (data_1439ae430 == 0)
    return 

HMODULE rax = sub_140b67ab0(u"shcore.dll")

if (rax != 0)
    int64_t rax_1 = sub_140b67a40(rax, u"SetProcessDpiAwareness")
    data_143e203b0 = sub_140b67a40(rax, u"GetDpiForMonitor")
    int64_t rax_3 = sub_140b67a40(rax, u"GetProcessDpiAwareness")
    
    if (rax_1 != 0 && rax_3 != 0 && data_143de5426 == 0 && sub_140a4aa30() == 0)
        int32_t arg_8 = 0
        rax_3(0, &arg_8)
        
        if (arg_8 != 2)
            rax_1(2)
    
    return FreeLibrary(rax) __tailcall

HMODULE hLibModule = sub_140b67ab0(u"user32.dll")

if (hLibModule == 0)
    return 

int64_t rax_6 = sub_140b67a40(hLibModule, u"SetProcessDPIAware")

if (rax_6 != 0 && data_143de5426 == 0 && sub_140a4aa30() == 0)
    rax_6()

FreeLibrary(hLibModule)
