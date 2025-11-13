// 函数: sub_1425fe930
// 地址: 0x1425fe930
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *(arg1 + 0x98)

if (rcx != 0)
    void* rbx_1 = *(*(arg1 + 0x80) + 0x7b0)
    (*(*rcx + 0x90))(rcx)
    *(rbx_1 + 0x1a8) -= 1
    *(arg1 + 0x98) = 0

void* result = *(arg1 + 0x90)

if (result != 0)
    CRITICAL_SECTION* lpCriticalSection_2 = *(result + 0x98)
    
    if (lpCriticalSection_2 != 0)
        EnterCriticalSection(lpCriticalSection_2)
        void* rbx_2 = lpCriticalSection_2->__offset(0x28).q
        int64_t* rcx_2 = *(rbx_2 + 0x48)
        
        if (rcx_2 == 0)
            bool z_1
            
            if (0 == *(rbx_2 + 0x38))
                *(rbx_2 + 0x38) = 0
                z_1 = true
            else
                *(rbx_2 + 0x38)
                z_1 = false
            
            if (not(z_1))
                sub_1425fe760(rbx_2)
            
            goto label_1425fe9e9
        
        if ((*(*rcx_2 + 0x18))(rcx_2, rbx_2) == 0)
        label_1425fe9e9:
            
            if (*(rbx_2 + 0x48) != 0)
                int64_t* rcx_6 = *(rbx_2 + 0x40)
                (*(*rcx_6 + 0x20))(rcx_6, 0xffffffff, 0)
                *(rbx_2 + 0x48) = 0
        else
            sub_1425fe760(rbx_2)
            int64_t* rcx_4 = *(rbx_2 + 0x40)
            
            if (rcx_4 != 0)
                (*(*rcx_4 + 0x10))(rcx_4)
            
            *(rbx_2 + 0x48) = 0
        
        LeaveCriticalSection(lpCriticalSection_2)
        CRITICAL_SECTION* lpCriticalSection = *(*(arg1 + 0x90) + 0x98)
        
        if (lpCriticalSection != 0)
            int64_t* rcx_8 = lpCriticalSection->__offset(0x28).q
            
            if (rcx_8 != 0)
                (*(*rcx_8 + 0x10))(rcx_8, 1)
            
            DeleteCriticalSection(lpCriticalSection)
            j_sub_140a74f90(lpCriticalSection)
        
        result = *(arg1 + 0x90)
        *(result + 0x98) = 0

CRITICAL_SECTION* lpCriticalSection_3 = *(arg1 + 0xa8)

if (lpCriticalSection_3 != 0)
    EnterCriticalSection(lpCriticalSection_3)
    void* rbx_3 = lpCriticalSection_3->__offset(0x28).q
    int64_t* rcx_12 = *(rbx_3 + 0x48)
    
    if (rcx_12 == 0)
        bool z_2
        
        if (0 == *(rbx_3 + 0x38))
            *(rbx_3 + 0x38) = 0
            z_2 = true
        else
            *(rbx_3 + 0x38)
            z_2 = false
        
        if (not(z_2))
            sub_1425fe760(rbx_3)
        
        goto label_1425feab9
    
    if ((*(*rcx_12 + 0x18))(rcx_12, rbx_3) == 0)
    label_1425feab9:
        
        if (*(rbx_3 + 0x48) != 0)
            int64_t* rcx_16 = *(rbx_3 + 0x40)
            (*(*rcx_16 + 0x20))(rcx_16, 0xffffffff, 0)
            *(rbx_3 + 0x48) = 0
    else
        sub_1425fe760(rbx_3)
        int64_t* rcx_14 = *(rbx_3 + 0x40)
        
        if (rcx_14 != 0)
            (*(*rcx_14 + 0x10))(rcx_14)
        
        *(rbx_3 + 0x48) = 0
    
    result = LeaveCriticalSection(lpCriticalSection_3)
    CRITICAL_SECTION* lpCriticalSection_1 = *(arg1 + 0xa8)
    
    if (lpCriticalSection_1 != 0)
        int64_t* rcx_18 = lpCriticalSection_1->__offset(0x28).q
        
        if (rcx_18 != 0)
            (*(*rcx_18 + 0x10))(rcx_18, 1)
        
        DeleteCriticalSection(lpCriticalSection_1)
        result = j_sub_140a74f90(lpCriticalSection_1)
    
    *(arg1 + 0xa8) = 0

return result
