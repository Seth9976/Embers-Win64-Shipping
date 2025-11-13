// 函数: sub_1418cd5d0
// 地址: 0x1418cd5d0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 != 0)
    AcquireSRWLockShared(arg1)
    void* const rcx_3
    
    if (arg1->__offset(0x100).d == arg1->__offset(0x12c).d)
    label_1418cd660:
        rcx_3 = nullptr
    else
        void* r9_1 = &arg1[0x26]
        void* r8_1 = *(r9_1 + 8)
        
        if (r8_1 != 0)
            r9_1 = r8_1
        
        int32_t rax_6 = *(r9_1 +
            ((sx.q((arg2 u>> 0x20).d * 0x17 + arg2.d) & (sx.q(arg1->__offset(0x140).d) - 1)) << 2))
        
        if (rax_6 == 0xffffffff)
        label_1418cd660_1:
            rcx_3 = nullptr
        else
            struct _RTL_SRWLOCK r8_2 = arg1
            
            while (true)
                int64_t rdx_2 = sx.q(rax_6) * 3
                rcx_3 = r8_2 + (rdx_2 << 3)
                
                if (*(r8_2 + (rdx_2 << 3)) == arg2)
                    break
                
                rax_6 = *(rcx_3 + 0x10)
                
                if (rax_6 == 0xffffffff)
                    goto label_1418cd660_2
            
            if (rax_6 == 0xffffffff)
            label_1418cd660_2:
                rcx_3 = nullptr
    
    void* rax_7 = rcx_3 + 8
    
    if (rcx_3 == 0)
        rax_7 = nullptr
    
    if (rax_7 != 0)
        int64_t rcx_4 = *rax_7
        int64_t result = rcx_4 - 0x30
        
        if (rcx_4 == 0)
            result = 0
        
        ReleaseSRWLockShared(arg1)
        return result
    
    ReleaseSRWLockShared(arg1)

return 0
