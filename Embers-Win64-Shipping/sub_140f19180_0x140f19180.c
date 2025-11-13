// 函数: sub_140f19180
// 地址: 0x140f19180
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

EnterCriticalSection(arg1 + 0x488)
int64_t* rsi = nullptr
char arg_8 = 0
char result

if (*(arg1 + 0x3a1) == 0)
    result = 0
else
    if (*(arg1 + 0x3b0) != 0)
        int64_t* rcx_1 = *(arg1 + 0x3a8)
        
        if (rcx_1 != 0 && (*(*rcx_1 + 0x28))(rcx_1) != 0)
            int64_t* rcx_2
            
            if (*(arg1 + 0x3b0) == 0)
                rcx_2 = nullptr
            else
                rcx_2 = *(arg1 + 0x3a8)
            
            *(arg1 + 0x3a0) = (*(*rcx_2 + 0x48))(rcx_2)
    
    result = *(arg1 + 0x3a0)

*(arg1 + 0x3b8) = result
arg_8 = 0

if (*(arg1 + 0x3c1) == 0)
    result = 0
else
    if (*(arg1 + 0x3d0) != 0)
        int64_t* rcx_3 = *(arg1 + 0x3c8)
        
        if (rcx_3 != 0 && (*(*rcx_3 + 0x28))(rcx_3) != 0)
            int64_t* rcx_4
            
            if (*(arg1 + 0x3d0) == 0)
                rcx_4 = nullptr
            else
                rcx_4 = *(arg1 + 0x3c8)
            
            *(arg1 + 0x3c0) = (*(*rcx_4 + 0x48))(rcx_4)
    
    result = *(arg1 + 0x3c0)

*(arg1 + 0x3d8) = result
arg_8 = 0

if (*(arg1 + 0x3e1) == 0)
    result = 0
else
    if (*(arg1 + 0x3f0) != 0)
        int64_t* rcx_5 = *(arg1 + 0x3e8)
        
        if (rcx_5 != 0 && (*(*rcx_5 + 0x28))(rcx_5) != 0)
            if (*(arg1 + 0x3f0) != 0)
                rsi = *(arg1 + 0x3e8)
            
            *(arg1 + 0x3e0) = (*(*rsi + 0x48))(rsi)
    
    result = *(arg1 + 0x3e0)

*(arg1 + 0x3f8) = result

if (arg1 == -0x488)
    return result

return LeaveCriticalSection(arg1 + 0x488)
