// 函数: sub_1425fe840
// 地址: 0x1425fe840
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection_1 = *(arg1 + 0x98)

if (lpCriticalSection_1 == 0)
    return 

EnterCriticalSection(lpCriticalSection_1)
void* rbx_1 = lpCriticalSection_1->__offset(0x28).q
int64_t* rcx_1 = *(rbx_1 + 0x48)

if (rcx_1 == 0)
    bool z_1
    
    if (0 == *(rbx_1 + 0x38))
        *(rbx_1 + 0x38) = 0
        z_1 = true
    else
        *(rbx_1 + 0x38)
        z_1 = false
    
    if (not(z_1))
        sub_1425fe760(rbx_1)
    
    goto label_1425fe8b9

if ((*(*rcx_1 + 0x18))(rcx_1, rbx_1) == 0)
label_1425fe8b9:
    
    if (*(rbx_1 + 0x48) != 0)
        int64_t* rcx_5 = *(rbx_1 + 0x40)
        (*(*rcx_5 + 0x20))(rcx_5, 0xffffffff, 0)
        *(rbx_1 + 0x48) = 0
else
    sub_1425fe760(rbx_1)
    int64_t* rcx_3 = *(rbx_1 + 0x40)
    
    if (rcx_3 != 0)
        (*(*rcx_3 + 0x10))(rcx_3)
    
    *(rbx_1 + 0x48) = 0

LeaveCriticalSection(lpCriticalSection_1)
CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x98)

if (lpCriticalSection != 0)
    int64_t* rcx_7 = lpCriticalSection->__offset(0x28).q
    
    if (rcx_7 != 0)
        (*(*rcx_7 + 0x10))(rcx_7, 1)
    
    DeleteCriticalSection(lpCriticalSection)
    j_sub_140a74f90(lpCriticalSection)

*(arg1 + 0x98) = 0
