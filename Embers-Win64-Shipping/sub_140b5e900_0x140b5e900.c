// 函数: sub_140b5e900
// 地址: 0x140b5e900
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

HMODULE* lphModule_2 = arg2
uint32_t lpcbNeeded[0x4]

while (true)
    HANDLE hProcess = *arg1
    int32_t cb = arg2[0x81].d << 3
    lpcbNeeded[0] = 0
    
    if (hProcess == 0)
        hProcess = GetCurrentProcess()
    
    struct HINSTANCE__* lphModule_1 = lphModule_2[0x80]
    HMODULE* lphModule = lphModule_2
    
    if (lphModule_1 != 0)
        lphModule = lphModule_1
    
    BOOL result = K32EnumProcessModulesEx(hProcess, lphModule, cb, &lpcbNeeded, 3)
    
    if (result == 0)
        return result
    
    uint32_t rax_1 = lpcbNeeded[0]
    
    if (rax_1 u<= cb)
        break
    
    int64_t rbx_2 = sx.q(arg2[0x81].d)
    uint32_t rax_2 = rax_1 u>> 3
    
    if (rax_2 s> rbx_2.d)
        arg2[0x81].d = rax_2
        
        if (rax_2 s> *(lphModule_2 + 0x40c))
            sub_140b633c0(lphModule_2, rbx_2.d)
        
        struct HINSTANCE__* lphModule_5 = lphModule_2[0x80]
        HMODULE* lphModule_4 = lphModule_2
        
        if (lphModule_5 != 0)
            lphModule_4 = lphModule_5
        
        memset(&lphModule_4[rbx_2], 0, sx.q(rax_2 - rbx_2.d) << 3)
    else if (rax_2 s< rbx_2.d && rax_2 != rbx_2.d)
        arg2[0x81].d = rax_2
        sub_140b634e0(lphModule_2)

struct HINSTANCE__* lphModule_3 = lphModule_2[0x80]
lpcbNeeded[0]
lpcbNeeded[0]

if (lphModule_3 != 0)
    lphModule_2 = lphModule_3

return sub_140b57650(lphModule_2, arg2[0x81].d)
