// 函数: sub_140b3cce0
// 地址: 0x140b3cce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* rax = data_143de7a50

if (rax != 0)
    return rax

CRITICAL_SECTION* lpCriticalSection = j_sub_140a82f30(0x88)
CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection

if (lpCriticalSection == 0)
    lpCriticalSection_1 = nullptr
else
    InitializeCriticalSection(lpCriticalSection)
    SetCriticalSectionSpinCount(lpCriticalSection_1, 0xfa0)
    int64_t* rcx_3 = lpCriticalSection_1 + 0x38
    lpCriticalSection_1->__offset(0x28).q = 0
    lpCriticalSection_1->__offset(0x30).q = 0
    rcx_3[2] = 0
    rcx_3[3].d = 0
    *(rcx_3 + 0x1c) = 0x80
    int64_t* rax_1 = rcx_3[2]
    
    if (rax_1 != 0)
        rcx_3 = rax_1
    
    *rcx_3 = 0
    rcx_3[1] = 0
    lpCriticalSection_1->__offset(0x58).d = 0xffffffff
    lpCriticalSection_1->__offset(0x5c).d = 0
    lpCriticalSection_1->__offset(0x68).q = 0
    lpCriticalSection_1->__offset(0x70).d = 0
    lpCriticalSection_1->__offset(0x78).q = 0
    lpCriticalSection_1->__offset(0x80).q = 1
    sub_1405a4f90(&lpCriticalSection_1[3])
    int64_t* rax_2 = lpCriticalSection_1->__offset(0x78).q
    *rax_2 = 0
    rax_2[1] = 0

data_143de7a50 = lpCriticalSection_1
memset(&data_143de7240, 0, 0x800)
return lpCriticalSection_1
