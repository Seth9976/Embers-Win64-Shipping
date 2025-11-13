// 函数: sub_140aa7ce0
// 地址: 0x140aa7ce0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

int64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t rbp = 1
int64_t r13 = sx.q(arg3)
int32_t rdi_4

if (rax_1 == 1)
    rdi_4 = arg5
label_140aa7e04:
    int32_t r8_3 = arg1[1].d - *(arg1 + 0x34)
    
    if (r8_3 u>= 4)
        uint32_t rax_8 = r8_3 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_8 + 8)
        int32_t rcx_7
        
        if (rax_8 == 0xfffffff8)
            rcx_7 = 0x20
        else
            rcx_7 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_8 + 7)
        char r9
        
        if (rax_8 == 0xfffffff9)
            r9 = 0x20
        else
            r9 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_7 << 0x1a s>> 0x1f)).b & (0x20 - r9))
    
    int32_t rax_11
    
    if (r8_3 s> 0)
        rax_11 = arg1[9].d
    
    if (r8_3 s> 0 && (rax_11 == 0 || rax_11 s< rbp))
        arg1[9].d = rbp
        sub_140abf050(arg1)
    else
        void* r9_1 = &arg1[7]
        int32_t rax_14 = (arg1[9].d - 1) & r13.d
        *(arg4 + 0x64) = rax_14
        void* rdx_7 = *(r9_1 + 8)
        int64_t r8_4 = sx.q(rax_14)
        void* rax_15 = r9_1
        
        if (rdx_7 != 0)
            rax_15 = rdx_7
        
        arg4[0xc].d = *(rax_15 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2))
        void* rax_17 = *(r9_1 + 8)
        
        if (rax_17 != 0)
            r9_1 = rax_17
        
        *(r9_1 + (((sx.q(arg1[9].d) - 1) & r8_4) << 2)) = rdi_4
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r13) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_140aa7d82:
        rbx_1 = -1
    else
        int64_t rcx_1 = *arg1
        
        while (true)
            int64_t* rdi_1 = sx.q(rbx_1) * 0x70
            int64_t _MaxCount = sx.q(*(rdi_1 + rcx_1 + 8))
            
            if (_MaxCount.d == arg4[1].d && wcsncmp(*(rdi_1 + rcx_1), *arg4, _MaxCount) == 0)
                break
            
            rcx_1 = *arg1
            rbx_1 = *(rdi_1 + rcx_1 + 0x60)
            
            if (rbx_1 == 0xffffffff)
                goto label_140aa7d82
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_4 = arg5
    else
        void* rdi_3 = sx.q(rbx_1) * 0x70 + *arg1
        
        if (*(rdi_3 + 0x20) != 0)
            void* rax_5 = *(rdi_3 + 0x30)
            void* rcx_3 = rdi_3 + 0x40
            
            if (rax_5 != 0)
                rcx_3 = rax_5
            
            (*(*rcx_3 + 0x10))(rcx_3)
        
        int64_t rcx_4 = *(rdi_3 + 0x10)
        
        if (rcx_4 != 0)
            sub_140a74f90(rcx_4)
        
        memmove(rdi_3, arg4, 0x60)
        sub_140ac00b0(arg1, arg5, 1)
        rdi_4 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        goto label_140aa7e04

*arg2 = rdi_4

if (arg6 != 0)
    *arg6 = r12.b

return arg2
