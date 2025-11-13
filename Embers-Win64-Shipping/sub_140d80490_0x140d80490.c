// 函数: sub_140d80490
// 地址: 0x140d80490
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

BOOL result = UiaClientsAreListening()

if (result != 0)
    int64_t var_18 = *arg2
    void* rax_1 = arg2[1]
    void* var_10_1 = rax_1
    
    if (rax_1 != 0)
        *(rax_1 + 8) += 1
    
    void* rax_2
    int512_t zmm1_1
    rax_2, zmm1_1 = sub_140d7d8b0(arg1, &var_18)
    uint32_t rcx_1 = zx.d(arg3)
    
    if (arg3 == 0)
        int64_t* rcx_10 = *arg2
        
        if ((*(*rcx_10 + 0x88))(rcx_10) != 0)
            void* pProvider
            
            if (rax_2 == 0)
                pProvider = nullptr
            else
                pProvider = rax_2 + 0x28
            
            UiaRaiseAutomationEvent(pProvider, UIA_AutomationFocusChangedEventId)
        
        sub_140d79520(rax_2, 0x7538, arg4, arg5, zmm1_1)
    else if (rcx_1 == 1)
        int64_t* rcx_5 = *(rax_2 + 0x10)
        int64_t* rax_5 = (*(*rcx_5 + 0xa0))(rcx_5)
        char rax_6
        
        if (rax_5 != 0)
            int64_t rdx_1 = *rax_5
            rax_6 = (*(rdx_1 + 8))(rax_5, rdx_1)
        
        if (rax_5 == 0 || rax_6 == 0)
            int64_t* rcx_7 = *(rax_2 + 0x10)
            int64_t* rax_8 = (*(*rcx_7 + 0xa0))(rcx_7)
            
            if (rax_8 != 0)
                int64_t rdx_3 = *rax_8
                
                if ((*(rdx_3 + 8))(rax_8, rdx_3) == 0)
                    UiaRaiseAutomationEvent(rax_2 + 0x28, UIA_Invoke_InvokedEventId)
        else
            sub_140d79520(rax_2, 0x7586, arg4, arg5, zmm1_1)
    else if (rcx_1 == 4)
        HMODULE hModule
        
        if (data_1439ae4f8 != 0)
            data_1439ae4f8 = 0
            hModule = GetModuleHandleW(u"Uiautomationcore.dll")
        
        int64_t rax_3
        
        if (data_1439ae4f8 == 0 || hModule == 0)
            rax_3 = data_143e20708
        else
            rax_3 = GetProcAddress(hModule, "UiaDisconnectProvider")
            data_143e20708 = rax_3
        
        if (rax_3 != 0)
            if (rax_2 == 0)
                rax_3(0)
            else
                rax_3(rax_2 + 0x28)
    
    result = (*(*(rax_2 + 0x28) + 0x10))(rax_2 + 0x28)

int64_t* rbx_2 = arg2[1]

if (rbx_2 != 0)
    rbx_2[1].d -= 1
    
    if (rbx_2[1].d == 1)
        result = (**rbx_2)(rbx_2)
        int32_t temp1_1 = *(rbx_2 + 0xc)
        *(rbx_2 + 0xc) -= 1
        
        if (temp1_1 == 1)
            result = (*(*rbx_2 + 8))(rbx_2, 1)

int64_t rcx_15 = *(arg4 + 8)

if (rcx_15 != 0)
    result = sub_140a74f90(rcx_15)

int64_t rcx_16 = *(arg5 + 8)

if (rcx_16 == 0)
    return result

return sub_140a74f90(rcx_16)
