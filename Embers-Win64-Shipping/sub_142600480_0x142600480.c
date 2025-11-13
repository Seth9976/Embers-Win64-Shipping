// 函数: sub_142600480
// 地址: 0x142600480
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0)
    return 

bool z_1

if (0 == *(arg2 + 0x70))
    *(arg2 + 0x70) = 0
    z_1 = true
else
    *(arg2 + 0x70)
    z_1 = false

int64_t* rcx

if (not(z_1))
    rcx = *(arg2 + 0x98)

if (z_1 || rcx == 0)
    CRITICAL_SECTION* rcx_3 = *(arg2 + 0xa8)
    
    if (rcx_3 != 0 && sub_142600270(rcx_3).b == 0)
        CRITICAL_SECTION* lpCriticalSection = *(arg2 + 0xa8)
        EnterCriticalSection(lpCriticalSection)
        void* rbx_2 = lpCriticalSection->__offset(0x28).q
        int64_t* rcx_5 = *(rbx_2 + 0x48)
        
        if (rcx_5 != 0 && (*(*rcx_5 + 0x18))(rcx_5, rbx_2) != 0)
            *(rbx_2 + 0x38) -= 1
            int64_t* rcx_6 = *(rbx_2 + 0x40)
            
            if (rcx_6 != 0)
                (*(*rcx_6 + 0x10))(rcx_6)
            
            *(rbx_2 + 0x48) = 0
        
        void* rbx_3 = lpCriticalSection->__offset(0x28).q
        
        if (*(rbx_3 + 0x48) != 0)
            int64_t* rcx_7 = *(rbx_3 + 0x40)
            (*(*rcx_7 + 0x20))(rcx_7, 0xffffffff, 0)
            *(rbx_3 + 0x48) = 0
        
        LeaveCriticalSection(lpCriticalSection)
else
    void var_28
    (*(*rcx + 0xc8))(rcx, &var_28)
    int32_t rcx_1 = *(*(arg2 + 0x90) + 0x30)
    
    if (rcx_1 == 3 || rcx_1 == 6)
        rcx_1.b = 1
    else
        rcx_1.b = 0
    
    int32_t var_20
    
    if (var_20 == 0)
        bool z_2
        
        if (0 == *(arg2 + 0x1a8))
            *(arg2 + 0x1a8) = 0
            z_2 = true
        else
            *(arg2 + 0x1a8)
            z_2 = false
        
        if (z_2 && rcx_1.b != 0)
            goto label_142600513
        
        *(arg2 + 0x19c)
        *(arg2 + 0x19c) = 1
        return 
    
    if (rcx_1.b != 0)
    label_142600513:
        bool z_3
        
        if (0 == *(arg2 + 0x1a8))
            *(arg2 + 0x1a8) = 0
            z_3 = true
        else
            *(arg2 + 0x1a8)
            z_3 = false
        
        if (z_3)
            bool c_1 = var_20 u< 2
            
            if (var_20 == 2 || c_1)
                sub_1425ff670(arg2, c_1)
