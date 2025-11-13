// 函数: sub_140ca9000
// 地址: 0x140ca9000
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rcx = *arg1

if (arg1[3].d != 0)
    int64_t* rcx_2 = *rcx
    int64_t r8
    r8.b = 1
    (*(*rcx_2 + 0x20))(rcx_2, 0x7fffffff, r8)
    CRITICAL_SECTION* lpCriticalSection = *arg1 + 8
    EnterCriticalSection(lpCriticalSection)
    
    while (arg1[2].b == 0)
        if (lpCriticalSection != 0)
            LeaveCriticalSection(lpCriticalSection)
        
        int64_t r8_2
        r8_2.b = 1
        int64_t* rcx_5 = **arg1
        (*(*rcx_5 + 0x20))(rcx_5, 0x7fffffff, r8_2)
        lpCriticalSection = *arg1 + 8
        EnterCriticalSection(lpCriticalSection)
    
    int64_t* rcx_7 = **arg1
    int64_t rax_6 = (*(*rcx_7 + 0x18))(rcx_7)
    
    if (lpCriticalSection != 0)
        rax_6 = LeaveCriticalSection(lpCriticalSection)
    
    arg1[3].d = 0
    return rax_6

arg1[2].b = 0
arg1[1] = 0
int64_t rax = 0
bool z

if (0 == rcx[6])
    rcx[6] = &arg1[1]
    z = true
else
    rax = rcx[6]
    z = false

int64_t rdx = rax
int64_t r9 = rax

if (not(z))
    do
        arg1[1] = rdx
        rax = rdx
        void* rcx_1 = *arg1
        
        if (rax == *(rcx_1 + 0x30))
            *(rcx_1 + 0x30) = &arg1[1]
        else
            rax = *(rcx_1 + 0x30)
        
        bool cond:0_1 = rax == r9
        rdx = rax
        r9 = rdx
        rax.b = cond:0_1
    while (rax.b == 0)

arg1[3].d += 1
return rax
