// 函数: sub_140a6df80
// 地址: 0x140a6df80
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int32_t rbp = arg4
int32_t rsi = arg3
int64_t r12
r12.b = 1
CRITICAL_SECTION* lpCriticalSection = j_sub_140a82f30(0x28)
CRITICAL_SECTION* lpCriticalSection_2 = lpCriticalSection
CRITICAL_SECTION* lpCriticalSection_1 = lpCriticalSection

if (lpCriticalSection == 0)
    lpCriticalSection_1 = nullptr
    lpCriticalSection_2 = nullptr
else
    InitializeCriticalSection(lpCriticalSection)
    SetCriticalSectionSpinCount(lpCriticalSection_1, 0xfa0)

arg1[7] = lpCriticalSection_1
EnterCriticalSection(lpCriticalSection_1)
arg1[4].d = 0

if (*(arg1 + 0x24) != arg2)
    sub_140a89870(&arg1[3], arg2)

int32_t rax = data_143db7abc

if (rax u> rsi)
    rsi = rax

int32_t r15 = 0
int32_t arg_18 = rsi

if (arg2 != 0)
    while (r12.b == 1)
        void*** rax_1 = j_sub_140a82f30(0x30)
        int64_t* rdi_1 = rax_1
        
        if (rax_1 == 0)
            rdi_1 = nullptr
        else
            __builtin_memset(&rax_1[2], 0, 0x20)
            *rax_1 = &data_142e62000
            rax_1[1] = 0
            rax_1[2].b = 0
            rax_1[2].b
            __builtin_memset(&rdi_1[3], 0, 0x18)
        
        if ((*(*rdi_1 + 0x30))(rdi_1, arg1, zx.q(rsi), zx.q(rbp)) != 1)
            r12.b = 0
            (*(*rdi_1 + 0x28))(rdi_1, 1)
        else
            int64_t rsi_1 = sx.q(arg1[4].d)
            int32_t rax_5 = (rsi_1 + 1).d
            arg1[4].d = rax_5
            
            if (rax_5 s> *(arg1 + 0x24))
                sub_140a88850(&arg1[3])
            
            *(arg1[3] + (rsi_1 << 3)) = rdi_1
            int64_t rbp_1 = sx.q(arg1[6].d)
            int32_t rax_7 = (rbp_1 + 1).d
            arg1[6].d = rax_7
            
            if (rax_7 s> *(arg1 + 0x34))
                sub_140a88850(&arg1[5])
            
            rsi = arg_18
            *(arg1[5] + (rbp_1 << 3)) = rdi_1
            rbp = arg4
        
        r15 += 1
        
        if (r15 u>= arg2)
            break
    
    lpCriticalSection_1 = lpCriticalSection_2
    
    if (r12.b == 0)
        int64_t rdx_4 = *arg1
        (*(rdx_4 + 8))(arg1, rdx_4)

if (lpCriticalSection_1 != 0)
    LeaveCriticalSection(lpCriticalSection_1)

return zx.q(r12.b)
