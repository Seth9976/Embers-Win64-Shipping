// 函数: sub_1405ed440
// 地址: 0x1405ed440
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t var_38 = -2
CRITICAL_SECTION* lpCriticalSection = nullptr
CRITICAL_SECTION* lpCriticalSection_1 = nullptr
int64_t* rbx = arg1[1]
int64_t* var_28 = rbx

if (rbx != 0)
    int32_t rax = 0
    bool z_1
    
    if (0 == rbx[1].d)
        rbx[1].d = 0
        z_1 = true
    else
        rax = rbx[1].d
        z_1 = false
    
    if (z_1)
    label_1405ed495:
        rbx = nullptr
        var_28 = nullptr
        lpCriticalSection = nullptr
    else
        while (true)
            bool z_2
            
            if (rax == rbx[1].d)
                rbx[1].d = rax + 1
                z_2 = true
            else
                rbx[1].d
                z_2 = false
            
            if (z_2)
                rbx = var_28
                lpCriticalSection = nullptr
                
                if (rbx != 0)
                    lpCriticalSection = *arg1
                    lpCriticalSection_1 = lpCriticalSection
                
                break
            
            rax = 0
            bool z_3
            
            if (0 == rbx[1].d)
                rbx[1].d = 0
                z_3 = true
            else
                rax = rbx[1].d
                z_3 = false
            
            if (z_3)
                goto label_1405ed495

if (lpCriticalSection == 0)
    if (arg2 != 0)
        (*(*arg2 + 0x40))(arg2, 1)
else if (arg2 != 0)
    CRITICAL_SECTION* lpCriticalSection_2 = lpCriticalSection
    EnterCriticalSection(lpCriticalSection)
    
    if ((*(arg2[1] + 0x10))(&arg2[1]) == 0)
        int64_t* rax_5 = j_sub_140a82f30(0x10)
        int64_t* arg_8 = rax_5
        
        if (rax_5 != 0)
            *rax_5 = 0
            rax_5[1] = arg2
            void** rcx_6 = lpCriticalSection->__offset(0x40).q
            lpCriticalSection->__offset(0x40).q = rax_5
            *rcx_6 = rax_5
            rbx = var_28
            lpCriticalSection = lpCriticalSection_1
    else
        (*(arg2[1] + 8))(&arg2[1])
        int64_t rbp_1 = sx.q(lpCriticalSection->__offset(0x30).d)
        int32_t rax_4 = (rbp_1 + 1).d
        lpCriticalSection->__offset(0x30).d = rax_4
        
        if (rax_4 s> lpCriticalSection->__offset(0x34).d)
            sub_1405a4d70(&lpCriticalSection[1])
        
        *(lpCriticalSection->__offset(0x28).q + (rbp_1 << 3)) = arg2
    
    LeaveCriticalSection(lpCriticalSection)

if (rbx == 0)
    return 

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**var_28)(var_28)
int32_t rdi = *(var_28 + 0xc)
*(var_28 + 0xc) -= 1

if (rdi == 1)
    (*(*var_28 + 8))(var_28, zx.q(rdi))
