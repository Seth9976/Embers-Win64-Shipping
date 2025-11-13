// 函数: sub_140a6f250
// 地址: 0x140a6f250
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0x38)

if (lpCriticalSection == 0)
    return 

EnterCriticalSection(lpCriticalSection)
*(arg1 + 0x40) = 1
int32_t i = 0

if (*(arg1 + 0x10) s> 0)
    int64_t* rdi_1 = nullptr
    
    do
        int64_t* rcx_1 = *(rdi_1 + *(arg1 + 8))
        (*(*rcx_1 + 8))(rcx_1)
        i += 1
        rdi_1 = &rdi_1[1]
    while (i s< *(arg1 + 0x10))

*(arg1 + 0x10) = 0

if (*(arg1 + 0x14) != 0)
    sub_140a89870(arg1 + 8, 0)

if (lpCriticalSection != 0)
    LeaveCriticalSection(lpCriticalSection)

CRITICAL_SECTION* lpCriticalSection_1 = *(arg1 + 0x38)
EnterCriticalSection(lpCriticalSection_1)

while (*(arg1 + 0x30) != *(arg1 + 0x20))
    if (lpCriticalSection_1 != 0)
        LeaveCriticalSection(lpCriticalSection_1)
    
    sub_140b73230(zx.o(0))
    lpCriticalSection_1 = *(arg1 + 0x38)
    EnterCriticalSection(lpCriticalSection_1)

if (lpCriticalSection_1 != 0)
    LeaveCriticalSection(lpCriticalSection_1)

CRITICAL_SECTION* lpCriticalSection_2 = *(arg1 + 0x38)
EnterCriticalSection(lpCriticalSection_2)
int32_t i_1 = 0

if (*(arg1 + 0x30) s> 0)
    int64_t* r14_1 = nullptr
    
    do
        void* rdi_2 = *(r14_1 + *(arg1 + 0x28))
        char temp0_1 = *(rdi_2 + 0x10)
        *(rdi_2 + 0x10) = 1
        int64_t rax_6
        rax_6.b = temp0_1
        int64_t* rcx_9 = *(rdi_2 + 8)
        (*(*rcx_9 + 0x10))(rcx_9)
        int64_t* rcx_10 = *(rdi_2 + 0x28)
        (*(*rcx_10 + 0x18))(rcx_10)
        sub_140a4fc50(*(rdi_2 + 8))
        int64_t* rcx_12 = *(rdi_2 + 0x28)
        *(rdi_2 + 8) = 0
        
        if (rcx_12 != 0)
            (*(*rcx_12 + 0x20))(rcx_12, 1)
        
        int64_t* rcx_13 = *(r14_1 + *(arg1 + 0x28))
        
        if (rcx_13 != 0)
            (*(*rcx_13 + 0x28))(rcx_13, 1)
        
        i_1 += 1
        r14_1 = &r14_1[1]
    while (i_1 s< *(arg1 + 0x30))

*(arg1 + 0x20) = 0

if (*(arg1 + 0x24) != 0)
    sub_140a89870(arg1 + 0x18, 0)

*(arg1 + 0x30) = 0

if (*(arg1 + 0x34) != 0)
    sub_140a89870(arg1 + 0x28, 0)

if (lpCriticalSection_2 != 0)
    LeaveCriticalSection(lpCriticalSection_2)

CRITICAL_SECTION* lpCriticalSection_3 = *(arg1 + 0x38)

if (lpCriticalSection_3 != 0)
    DeleteCriticalSection(lpCriticalSection_3)
    j_sub_140a74f90(lpCriticalSection_3)

*(arg1 + 0x38) = 0
