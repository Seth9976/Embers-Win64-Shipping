// 函数: sub_142c892e0
// 地址: 0x142c892e0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

char* _Str = arg1
HMODULE rbp = nullptr
HMODULE hModule = GetModuleHandleA("kernel32")

if (hModule == 0)
    return hModule

int64_t rax = GetProcAddress(hModule, "LoadLibraryExA")

if (strpbrk(_Str, "\/") != 0)
    PSTR lpLibFileName = _Str
    
    if (rax == 0)
        return LoadLibraryA(lpLibFileName)
    
    return rax(lpLibFileName, 0, 8)

if (rax != 0 && GetProcAddress(hModule, "AddDllDirectory") != 0)
    return rax(_Str, 0, 0x800)

uint32_t uSize = GetSystemDirectoryA(nullptr, 0)

if (uSize != 0)
    void* rsi_1 = -ffffffffffffffff
    int64_t rdx_1 = -1
    
    do
        rdx_1 += 1
    while (_Str[rdx_1] != 0)
    
    uint8_t* rax_6 = data_143ccb898(zx.q(uSize + 1) + rdx_1, rdx_1)
    
    if (rax_6 != 0 && GetSystemDirectoryA(rax_6, uSize) != 0)
        int16_t* rax_8 = -ffffffffffffffff
        bool cond:0_1
        
        do
            cond:0_1 = *(rax_6 + rax_8 + 1) != 0
            rax_8 += 1
        while (cond:0_1)
        *(rax_8 + rax_6) = 0x5c
        bool cond:1_1
        
        do
            cond:1_1 = *(rax_6 + rsi_1 + 1) != 0
            rsi_1 += 1
        while (cond:1_1)
        char* rcx_8 = rsi_1 + rax_6 - _Str
        char i
        
        do
            i = *_Str
            *(rcx_8 + _Str) = i
            _Str = &_Str[1]
        while (i != 0)
        HMODULE rax_9
        
        if (rax == 0)
            rax_9 = LoadLibraryA(rax_6)
        else
            rax_9 = rax(rax_6, 0, 8)
        
        rbp = rax_9
    
    data_143ccb8a0(rax_6)

return rbp
