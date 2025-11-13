// 函数: sub_1425ff670
// 地址: 0x1425ff670
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

CRITICAL_SECTION* rcx = *(arg1 + 0xa8)
int64_t r15

if (arg2 != 0 || rcx == 0)
    r15.b = 1
else
    r15.b = 0

char rax

if (rcx != 0)
    rax = sub_142600270(rcx)
    
    if (rax != 0 || arg2 != 0)
        uint64_t r14
        r14.b = 0
        
        if (rax == 0)
            CRITICAL_SECTION* lpCriticalSection_2 = *(arg1 + 0xa8)
            EnterCriticalSection(lpCriticalSection_2)
            void* rbx_1 = lpCriticalSection_2->__offset(0x28).q
            int64_t* rcx_2 = *(rbx_1 + 0x48)
            
            if (rcx_2 == 0)
                bool z_1
                
                if (0 == *(rbx_1 + 0x38))
                    *(rbx_1 + 0x38) = 0
                    z_1 = true
                else
                    *(rbx_1 + 0x38)
                    z_1 = false
                
                if (not(z_1))
                    sub_1425fe760(rbx_1)
                
                goto label_1425ff723
            
            if ((*(*rcx_2 + 0x18))(rcx_2, rbx_1) == 0)
            label_1425ff723:
                
                if (*(rbx_1 + 0x48) != 0)
                    int64_t* rcx_6 = *(rbx_1 + 0x40)
                    (*(*rcx_6 + 0x20))(rcx_6, 0xffffffff, 0)
                    *(rbx_1 + 0x48) = 0
            else
                sub_1425fe760(rbx_1)
                int64_t* rcx_4 = *(rbx_1 + 0x40)
                
                if (rcx_4 != 0)
                    (*(*rcx_4 + 0x10))(rcx_4)
                
                *(rbx_1 + 0x48) = 0
            
            LeaveCriticalSection(lpCriticalSection_2)
        
        CRITICAL_SECTION* lpCriticalSection_3 = *(arg1 + 0xa8)
        EnterCriticalSection(lpCriticalSection_3)
        void* rbx_2 = lpCriticalSection_3->__offset(0x28).q
        LeaveCriticalSection(lpCriticalSection_3)
        uint32_t rcx_10 = zx.d(*(rbx_2 + 0x2c))
        
        if (rcx_10 == 1)
            CRITICAL_SECTION* lpCriticalSection_4 = *(arg1 + 0xa8)
            EnterCriticalSection(lpCriticalSection_4)
            void* rbx_3 = lpCriticalSection_4->__offset(0x28).q
            LeaveCriticalSection(lpCriticalSection_4)
            r14.b = (*(rbx_3 + 0x30) u>> 2).b & 1
        else if (rcx_10 == 2)
            CRITICAL_SECTION* lpCriticalSection = *(arg1 + 0xa8)
            EnterCriticalSection(lpCriticalSection)
            void* rdi_1 = lpCriticalSection->__offset(0x28).q
            LeaveCriticalSection(lpCriticalSection)
            *(sx.q(*(arg1 + 0x194)) * 0x2c + arg1 + 0xd8) = *(rdi_1 + 0x28)
        
        CRITICAL_SECTION* lpCriticalSection_1 = *(arg1 + 0xa8)
        
        if (lpCriticalSection_1 != 0)
            int64_t* rcx_17 = lpCriticalSection_1->__offset(0x28).q
            
            if (rcx_17 != 0)
                (*(*rcx_17 + 0x10))(rcx_17, 1)
            
            DeleteCriticalSection(lpCriticalSection_1)
            j_sub_140a74f90(lpCriticalSection_1)
        
        *(arg1 + 0xa8) = 0
        sub_1425ff8a0(arg1, zx.q(r14.b))

if (r15.b == 0)
    return 

*(arg1 + 0x194) += 1
int32_t rax_9 = *(arg1 + 0x194)

if (rax_9 s> 2)
    rax_9 = 0

*(arg1 + 0x194) = rax_9
bool z_2

if (0 == *(arg1 + 0x1a0))
    *(arg1 + 0x1a0) = 0
    z_2 = true
else
    *(arg1 + 0x1a0)
    z_2 = false

char r8

if (z_2)
    r8 = 1
else
    *(arg1 + 0x1a0)
    *(arg1 + 0x1a0) = 0
    r8 = 2

rax = sub_142600cc0(arg1, *(arg1 + 0x194), r8)

if (*(arg1 + 0xa8) == 0)
    return sub_1425ff8a0(arg1, zx.q(rax)) __tailcall
