// 函数: sub_140a0f830
// 地址: 0x140a0f830
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t* rbx = arg1[1]

if (rbx == 0)
    goto label_140a0f876

int32_t rax = 0
bool z_1

if (0 == rbx[1].d)
    rbx[1].d = 0
    z_1 = true
else
    rax = rbx[1].d
    z_1 = false

if (z_1)
label_140a0f873:
    rbx = nullptr
label_140a0f876:
    
    if (arg2 != 0)
        (*(*arg2 + 0x80))(arg2, 1)
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
            goto label_140a0f873
    
    if (rbx == 0)
        goto label_140a0f876
    
    CRITICAL_SECTION* lpCriticalSection = *arg1
    
    if (lpCriticalSection == 0)
        goto label_140a0f876
    
    if (arg2 != 0)
        EnterCriticalSection(lpCriticalSection)
        
        if ((*(arg2[1] + 0x10))(&arg2[1]) == 0)
            int64_t* rax_9 = j_sub_140a82f30(0x10)
            
            if (rax_9 != 0)
                *rax_9 = 0
                rax_9[1] = arg2
                void** rdx_2 = lpCriticalSection->__offset(0x40).q
                lpCriticalSection->__offset(0x40).q = rax_9
                *rdx_2 = rax_9
            
            LeaveCriticalSection(lpCriticalSection)
        else
            (*(arg2[1] + 8))(&arg2[1])
            int64_t rbp_1 = sx.q(lpCriticalSection->__offset(0x30).d)
            int32_t rax_7 = (rbp_1 + 1).d
            lpCriticalSection->__offset(0x30).d = rax_7
            
            if (rax_7 s> lpCriticalSection->__offset(0x34).d)
                sub_1405a4d70(&lpCriticalSection[1])
            
            *(lpCriticalSection->__offset(0x28).q + (rbp_1 << 3)) = arg2
            LeaveCriticalSection(lpCriticalSection)

if (rbx == 0)
    return 

rbx[1].d -= 1

if (rbx[1].d != 1)
    return 

(**rbx)(rbx)
int32_t rdi_1 = *(rbx + 0xc)
*(rbx + 0xc) -= 1

if (rdi_1 == 1)
    jump(*(*rbx + 8))
