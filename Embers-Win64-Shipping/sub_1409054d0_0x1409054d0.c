// 函数: sub_1409054d0
// 地址: 0x1409054d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

void* r15 = *(arg1 + 0x68)

if (r15 != 0)
    void** rax_8
    int64_t* rdx
    CRITICAL_SECTION* lpCriticalSection
    
    if (arg2 == 2)
        lpCriticalSection = r15 + 0x18
        EnterCriticalSection(lpCriticalSection)
        rdx = r15 + 0x148
    label_1409056cd:
        sub_140902190(r15, rdx, arg3)
        
        if (lpCriticalSection != 0)
            LeaveCriticalSection(lpCriticalSection)
        
        rax_8.b = 1
        return rax_8
    
    if (arg2 == 1)
        EnterCriticalSection(r15 + 0x18)
        int64_t r12_1 = 0
        int32_t rbp_1 = 0
        int64_t var_48 = 0
        int32_t r13_1 = 0
        int64_t var_40_1 = 0
        
        if (*(r15 + 0x168) == 0)
            sub_140902a50(r15 + 0x40, &var_48)
        else
            void* r14_1 = *(r15 + 0x100)
            EnterCriticalSection(r14_1 + 0x120)
            int64_t rbx_1 = *(r15 + 0x128)
            *(r14_1 + 0x54)
            void* const rcx_6
            
            if (*(r14_1 + 0x28) == *(r14_1 + 0x54))
            label_1409055e0:
                rcx_6 = nullptr
            else
                int32_t rax_4 = sub_140b5ead0(rbx_1.d) + rbx_1:4.d
                void* r8 = r14_1 + 0x58
                void* rcx_4 = *(r8 + 8)
                
                if (rcx_4 != 0)
                    r8 = rcx_4
                
                int32_t rax_6 = *(r8 + (((sx.q(*(r14_1 + 0x68)) - 1) & sx.q(rax_4)) << 2))
                
                if (rax_6 == 0xffffffff)
                label_1409055e0_1:
                    rcx_6 = nullptr
                else
                    int64_t r8_1 = *(r14_1 + 0x20)
                    
                    while (true)
                        int64_t rdx_4 = sx.q(rax_6) * 3
                        rcx_6 = r8_1 + (rdx_4 << 3)
                        
                        if (*(r8_1 + (rdx_4 << 3)) == rbx_1)
                            break
                        
                        rax_6 = *(rcx_6 + 0x10)
                        
                        if (rax_6 == 0xffffffff)
                            goto label_1409055e0_2
                    
                    if (rax_6 == 0xffffffff)
                    label_1409055e0_2:
                        rcx_6 = nullptr
            
            void* rbx_2 = rcx_6 + 8
            
            if (rcx_6 == 0)
                rbx_2 = nullptr
            
            if (rbx_2 != 0)
                for (int32_t* i = *rbx_2; i != 0; i = *(i + 0x20))
                    int64_t r14_2 = sx.q(rbp_1)
                    rbp_1 = (r14_2 + 1).d
                    var_40_1.d = rbp_1
                    
                    if (rbp_1 s> r13_1)
                        sub_1405a4cf0(&var_48)
                        r13_1 = var_40_1:4.d
                        rbp_1 = var_40_1.d
                        r12_1 = var_48
                    
                    *(r12_1 + (r14_2 << 2)) = *i
            
            if (r14_1 != -0x120)
                LeaveCriticalSection(r14_1 + 0x120)
        
        sub_140902190(r15, &var_48, arg3)
        int64_t rcx_11 = var_48
        
        if (rcx_11 != 0)
            sub_140a74f90(rcx_11)
        
        if (r15 == -0x18)
            rax_8.b = 1
            return rax_8
        
        LeaveCriticalSection(r15 + 0x18)
        int64_t rax_9
        rax_9.b = 1
        return rax_9
    
    if (arg2 == 3)
        lpCriticalSection = r15 + 0x18
        EnterCriticalSection(lpCriticalSection)
        rdx = r15 + 0x138
        goto label_1409056cd

int64_t rax
rax.b = 0
return rax
