// 函数: sub_1405ffc40
// 地址: 0x1405ffc40
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_28 = -2
void* arg_8 = arg1 + 0x18
EnterCriticalSection(arg1 + 0x18)
void* rsi = *(arg1 + 0x50)

if (rsi != 0)
    void* arg_10 = rsi + 0x20
    EnterCriticalSection(rsi + 0x20)
    int64_t* rcx_2 = *(rsi + 0x48)
    
    if (rcx_2 != 0)
        (*(*rcx_2 + 0x48))(rcx_2)
        int64_t* rcx_3 = *(rsi + 0x48)
        
        if (rcx_3 != 0)
            (*(*rcx_3 + 0x10))(rcx_3)
            *(rsi + 0x48) = 0
    
    int64_t* rcx_4 = *(rsi + 0x50)
    
    if (rcx_4 != 0)
        (*(*rcx_4 + 0x10))(rcx_4)
        *(rsi + 0x50) = 0
    
    HANDLE hObject = *(rsi + 0x90)
    
    if (hObject != 0)
        CloseHandle(hObject)
        *(rsi + 0x90) = 0
    
    if (rsi != -0x20)
        LeaveCriticalSection(rsi + 0x20)
    
    int64_t* rcx_6 = *(arg1 + 0x50)
    
    if (rcx_6 != 0)
        (*(*rcx_6 + 0x10))(rcx_6)
        *(arg1 + 0x50) = 0

int64_t* rcx_7 = *(arg1 + 0x48)

if (rcx_7 != 0)
    (*(*rcx_7 + 0x60))(rcx_7, arg1 - 0x10)
    int64_t* rcx_8 = *(arg1 + 0x48)
    
    if (rcx_8 != 0)
        (*(*rcx_8 + 0x10))(rcx_8)
        *(arg1 + 0x48) = 0

if (arg1 != -0x18)
    LeaveCriticalSection(arg1 + 0x18)

return 0xc00d3e85
