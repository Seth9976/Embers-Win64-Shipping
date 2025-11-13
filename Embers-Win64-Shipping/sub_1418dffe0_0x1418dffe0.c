// 函数: sub_1418dffe0
// 地址: 0x1418dffe0
// 来自: E:\Embers\Embers\Binaries\Win64\Embers-Win64-Shipping.exe

uint64_t r12
r12.b = 0
int32_t rax_1 = arg1[1].d - *(arg1 + 0x34)
int32_t* r10 = arg4
int32_t rbp = 1
int64_t r11 = sx.q(arg3)
int32_t rdi_3

if (rax_1 == 1)
    rdi_3 = arg5
label_1418e0137:
    int32_t rdx_9 = arg1[1].d - *(arg1 + 0x34)
    
    if (rdx_9 u>= 4)
        uint32_t rax_7 = rdx_9 u>> 1
        uint64_t rflags_1
        int32_t temp0_2
        temp0_2, rflags_1 = _bit_scan_reverse(rax_7 + 8)
        int32_t rcx_9
        
        if (rax_7 == 0xfffffff8)
            rcx_9 = 0x20
        else
            rcx_9 = 0x1f - temp0_2
        
        uint64_t rflags_2
        char temp0_3
        temp0_3, rflags_2 = _bit_scan_reverse(rax_7 + 7)
        char r8_2
        
        if (rax_7 == 0xfffffff9)
            r8_2 = 0x20
        else
            r8_2 = 0x1f - temp0_3
        
        rbp = 1 << ((not.d(rcx_9 << 0x1a s>> 0x1f)).b & (0x20 - r8_2))
    
    int32_t rax_10
    
    if (rdx_9 s> 0)
        rax_10 = arg1[9].d
    
    if (rdx_9 s> 0 && (rax_10 == 0 || rax_10 s< rbp))
        arg1[9].d = rbp
        sub_140837b00(arg1)
    else
        void* r9_2 = &arg1[7]
        int32_t rax_13 = (arg1[9].d - 1) & r11.d
        r10[9] = rax_13
        void* rdx_10 = *(r9_2 + 8)
        int64_t r8_3 = sx.q(rax_13)
        void* rax_14 = r9_2
        
        if (rdx_10 != 0)
            rax_14 = rdx_10
        
        r10[8] = *(rax_14 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2))
        void* rax_16 = *(r9_2 + 8)
        
        if (rax_16 != 0)
            r9_2 = rax_16
        
        *(r9_2 + (((sx.q(arg1[9].d) - 1) & r8_3) << 2)) = rdi_3
else
    int32_t rbx_1
    
    if (rax_1 != 0)
        void* r8 = &arg1[7]
        void* rcx = arg1[8]
        
        if (rcx != 0)
            r8 = rcx
        
        rbx_1 = *(r8 + (((sx.q(arg1[9].d) - 1) & r11) << 2))
    
    if (rax_1 == 0 || rbx_1 == 0xffffffff)
    label_1418e00a1:
        rbx_1 = -1
    else
        int64_t r15_1 = *arg1
        r12 = zx.q(*arg4)
        
        while (true)
            int64_t rcx_1 = sx.q(rbx_1) * 5
            void* rdi_1 = r15_1 + (rcx_1 << 3)
            
            if (*(r15_1 + (rcx_1 << 3)) == r12.d)
                int64_t* rcx_2 = *(rdi_1 + 8)
                int64_t* rdx_3 = *(r10 + 8)
                int64_t count = sx.q(rcx_2[1].d)
                
                if (count.d == rdx_3[1].d)
                    if (memcmp(*rcx_2, *rdx_3, count) == 0)
                        break
                    
                    r10 = arg4
            
            rbx_1 = *(rdi_1 + 0x20)
            
            if (rbx_1 == 0xffffffff)
                goto label_1418e00a1
    
    r12.b = rbx_1 != 0xffffffff
    
    if (rbx_1 == 0xffffffff)
        rdi_3 = arg5
    else
        int64_t rcx_4 = sx.q(rbx_1) * 5
        int64_t rax_5 = *arg1
        int64_t* rdi_2 = *(rax_5 + (rcx_4 << 3) + 0x10)
        
        if (rdi_2 != 0)
            int64_t rcx_5 = *rdi_2
            
            if (rcx_5 != 0)
                sub_140a74f90(rcx_5)
            
            j_sub_140a74f90(rdi_2)
        
        memmove(rax_5 + (rcx_4 << 3), arg4, 0x20)
        sub_1405c3590(arg1, arg5, 1)
        rdi_3 = rbx_1
    
    if (rbx_1 == 0xffffffff)
        r10 = arg4
        r11 = zx.q(arg3)
        goto label_1418e0137

*arg2 = rdi_3

if (arg6 != 0)
    *arg6 = r12.b

return arg2
