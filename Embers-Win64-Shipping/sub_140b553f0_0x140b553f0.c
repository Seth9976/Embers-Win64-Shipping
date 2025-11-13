// 函数: sub_140b553f0
// 地址: 0x140b553f0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

if (arg2 == 0 || *(arg2 + 0x48) s<= 0)
    void* rbx_1 = *(arg1 + 0x80)
    
    if (rbx_1 != 0)
        int64_t rcx_3 = *(rbx_1 + 0x40)
        
        if (rcx_3 != 0)
            sub_140a74f90(rcx_3)
        
        j_sub_140a74f90(rbx_1)
    
    *(arg1 + 0x80) = 0
else
    void* const rbx = *(arg1 + 0x80)
    
    if (rbx == 0)
        void* rax_1 = j_sub_140a82f30(zx.q((rbx + 0x58).d))
        rbx = rax_1
        
        if (rax_1 == 0)
            rbx = nullptr
        else
            *(rax_1 + 0x40) = 0
            *(rax_1 + 0x48) = 0
            *(rax_1 + 0x4c) = 8
        
        *(arg1 + 0x80) = rbx
    
    if (rbx != arg2)
        int32_t r8 = *(rbx + 0x4c)
        void* r12_1 = *(arg2 + 0x40)
        int64_t r14_1 = sx.q(*(arg2 + 0x48))
        *(rbx + 0x48) = r14_1.d
        
        if (r14_1.d != 0 || r8 != 0)
            sub_140b52900(rbx, r14_1.d, r8)
            void* rax_2 = *(rbx + 0x40)
            void* rdx_1 = arg2
            void* const rcx_2 = rbx
            
            if (r12_1 != 0)
                rdx_1 = r12_1
            
            if (rax_2 != 0)
                rcx_2 = rax_2
            
            memcpy(rcx_2, rdx_1, (r14_1 << 3).d)
        else
            *(rbx + 0x4c) = 8
    
    *(rbx + 0x50) = *(arg2 + 0x50)

if (arg3 != 0)
    *(arg1 + 0x78) = arg3
    return 

void* rcx_5 = *(arg1 + 0x80)

if (rcx_5 != 0)
    int64_t rdx_3 = sx.q(*(rcx_5 + 0x48))
    
    if (rdx_3.d s> 0)
        void* rax_3 = *(rcx_5 + 0x40)
        
        if (rax_3 != 0)
            rcx_5 = rax_3
        
        *(arg1 + 0x78) = *(rcx_5 + (rdx_3 << 3) - 8)
        return 

*(arg1 + 0x78) = 0
