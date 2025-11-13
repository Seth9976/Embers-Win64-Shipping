// 函数: sub_140b69690
// 地址: 0x140b69690
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

TEB* gsbase

if (data_143e1864c s> *(0x14 + *(gsbase->ThreadLocalStoragePointer + (zx.q(data_14401b1a0) << 3))))
    _Init_thread_header(&data_143e1864c)
    
    if (data_143e1864c == 0xffffffff)
        HMODULE hModule = GetModuleHandleW(u"ntdll.dll")
        
        if (hModule == 0)
            hModule.b = 0
        else
            hModule = GetProcAddress(hModule, "RtlAreLongPathsEnabled")
            
            if (hModule == 0)
                hModule.b = 0
            else if (hModule().b == 0)
                hModule.b = 0
            else
                hModule.b = 1
        
        data_143e1864a = hModule.b
        _Init_thread_footer(&data_143e1864c)

if (data_143e1864a != 0)
    return 0x7fff

return 0x104
