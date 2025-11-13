// 函数: sub_142600cc0
// 地址: 0x142600cc0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t rdi = sx.q(arg2)
int64_t* r14 = **(arg1 + 0x10)
int32_t rbx_1 = *(*(arg1 + 0x18) + 0xc) << 0xe
int64_t rax_2
int64_t r9
rax_2, r9 = sub_1425ff2b0(arg1, rdi.d, rbx_1)
int64_t* r15 = (rdi + 5) * 0x2c
*(r15 + arg1) = rax_2
void* r12 = rdi * 0x2c + arg1
*(r12 + 0xd8) = rbx_1
char rcx_2

if (r14 != 0)
    rcx_2 = *(r14 + 0x16d)

if (r14 == 0 || (rcx_2 & 1) == 0)
    if (arg3 == 0)
        int64_t* rcx_6 = *(arg1 + 0x90)
        r9.b = *(*(arg1 + 0x10) + 0xf8) != 0
        return (*(*rcx_6 + 0x20))(rcx_6, rax_2, 0x2000, r9)
    
    CRITICAL_SECTION* lpCriticalSection_1 = j_sub_140a82f30(0x30)
    
    if (lpCriticalSection_1 == 0)
    label_142600ee3:
        CRITICAL_SECTION* rbx_2 = nullptr
        *(arg1 + 0xa8) = rbx_2
        sub_142601840(rbx_2)
    else
        int64_t* rcx_7 = *(arg1 + 0x10)
        int64_t r15_1 = *(r15 + arg1)
        int64_t r12_1 = *(arg1 + 0x90)
        int32_t rdi_3 = rcx_7[0x1f].d
        int32_t r14_1 = *(*rcx_7 + 0x270)
        InitializeCriticalSection(lpCriticalSection_1)
        SetCriticalSectionSpinCount(lpCriticalSection_1, 0xfa0)
        void*** rax_8 = j_sub_140a82f30(0x50)
        
        if (rax_8 == 0)
            lpCriticalSection_1->__offset(0x28).q = 0
        else
            *rax_8 = &data_14344d660
            rax_8[1] = r12_1
            int32_t rcx_11
            rcx_11.b = arg3 == 2
            rax_8[3] = r15_1
            rax_8[4].d = r14_1
            *(rax_8 + 0x2c) = 1
            int32_t rax_10 = rax_8[6].d & 0xfffffffe
            rax_8[6].d = (((rcx_11 | rax_10) & 0xfffffffd)
                | (sbb.d(rax_10, rax_10, rdi_3 != 0) & 2)) & 0xfffffffb
            rax_8[7].d = 0
            rax_8[8] = 0
            rax_8[9] = 0
            lpCriticalSection_1->__offset(0x28).q = rax_8
        
        *(arg1 + 0xa8) = lpCriticalSection_1
        sub_142601840(lpCriticalSection_1)
else
    int32_t rdi_2 = *(*(arg1 + 0x18) + 0xc) << 0xd
    
    if (arg3 == 0 || (rcx_2 & 8) == 0)
        *(r12 + 0xd8) = (*(*r14 + 0x318))(r14, rax_2, zx.q(rdi_2))
    else
        CRITICAL_SECTION* lpCriticalSection = j_sub_140a82f30(0x30)
        
        if (lpCriticalSection == 0)
            goto label_142600ee3
        
        int64_t rbp_1 = *(r15 + arg1)
        InitializeCriticalSection(lpCriticalSection)
        SetCriticalSectionSpinCount(lpCriticalSection, 0xfa0)
        void*** rax_4 = j_sub_140a82f30(0x50)
        
        if (rax_4 == 0)
            lpCriticalSection->__offset(0x28).q = 0
        else
            *rax_4 = &data_14344d660
            rax_4[2] = r14
            rax_4[3] = rbp_1
            rax_4[4].d = 0
            *(rax_4 + 0x24) = rdi_2
            rax_4[5].d = 0
            *(rax_4 + 0x2c) = 2
            rax_4[7].d = 0
            rax_4[8] = 0
            rax_4[9] = 0
            lpCriticalSection->__offset(0x28).q = rax_4
        
        *(arg1 + 0xa8) = lpCriticalSection
        sub_142601840(lpCriticalSection)

int32_t result
result.b = 0
return result
